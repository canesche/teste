// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint32_t ;
struct pollfd {size_t slot; int fd; short events; int flags; int socktype; int port_acl; void (* del_callback ) (struct pollfd*) ;int (* rcv_callback ) (struct pollfd*,short*) ;int (* snd_callback ) (struct pollfd*,short*) ;int /*<<< orphan*/ * data; scalar_t__ send_count; scalar_t__ recv_count; scalar_t__ last_sent_t; scalar_t__ last_received_t; int /*<<< orphan*/  connected_t; int /*<<< orphan*/ * client_port; int /*<<< orphan*/ * client_ip; struct pollfd* next; TYPE_1__* p; scalar_t__ revents; } ;
typedef  size_t ssize_t ;
typedef  int WEB_CLIENT_ACL ;
struct TYPE_3__ {size_t slots; size_t used; size_t min; size_t max; void (* del_callback ) (struct pollfd*) ;int (* rcv_callback ) (struct pollfd*,short*) ;int (* snd_callback ) (struct pollfd*,short*) ;struct pollfd* first_free; struct pollfd* fds; struct pollfd* inf; } ;
typedef  TYPE_1__ POLLJOB ;
typedef  struct pollfd POLLINFO ;

/* Variables and functions */
 int /*<<< orphan*/  D_POLLFD ; 
 short POLLIN ; 
 int POLLINFO_FLAG_CLIENT_SOCKET ; 
 int POLLINFO_FLAG_SERVER_SOCKET ; 
 size_t POLL_FDS_INCREASE_STEP ; 
 int /*<<< orphan*/  debug (int /*<<< orphan*/ ,char*,size_t,...) ; 
 int /*<<< orphan*/  netdata_thread_disable_cancelability () ; 
 int /*<<< orphan*/  netdata_thread_enable_cancelability () ; 
 int /*<<< orphan*/  now_boottime_sec () ; 
 void* reallocz (struct pollfd*,int) ; 
 void* strdupz (char const*) ; 
 scalar_t__ unlikely (int) ; 

inline POLLINFO *poll_add_fd(POLLJOB *p
                             , int fd
                             , int socktype
                             , WEB_CLIENT_ACL port_acl
                             , uint32_t flags
                             , const char *client_ip
                             , const char *client_port
                             , void *(*add_callback)(POLLINFO * /*pi*/, short int * /*events*/, void * /*data*/)
                             , void  (*del_callback)(POLLINFO * /*pi*/)
                             , int   (*rcv_callback)(POLLINFO * /*pi*/, short int * /*events*/)
                             , int   (*snd_callback)(POLLINFO * /*pi*/, short int * /*events*/)
                             , void *data
) {
    debug(D_POLLFD, "POLLFD: ADD: request to add fd %d, slots = %zu, used = %zu, min = %zu, max = %zu, next free = %zd", fd, p->slots, p->used, p->min, p->max, p->first_free?(ssize_t)p->first_free->slot:(ssize_t)-1);

    if(unlikely(fd < 0)) return NULL;

    //if(p->limit && p->used >= p->limit) {
    //    info("Max sockets limit reached (%zu sockets), dropping connection", p->used);
    //    close(fd);
    //    return NULL;
    //}

    if(unlikely(!p->first_free)) {
        size_t new_slots = p->slots + POLL_FDS_INCREASE_STEP;
        debug(D_POLLFD, "POLLFD: ADD: increasing size (current = %zu, new = %zu, used = %zu, min = %zu, max = %zu)", p->slots, new_slots, p->used, p->min, p->max);

        p->fds = reallocz(p->fds, sizeof(struct pollfd) * new_slots);
        p->inf = reallocz(p->inf, sizeof(POLLINFO) * new_slots);

        // reset all the newly added slots
        ssize_t i;
        for(i = new_slots - 1; i >= (ssize_t)p->slots ; i--) {
            debug(D_POLLFD, "POLLFD: ADD: resetting new slot %zd", i);
            p->fds[i].fd = -1;
            p->fds[i].events = 0;
            p->fds[i].revents = 0;

            p->inf[i].p = p;
            p->inf[i].slot = (size_t)i;
            p->inf[i].flags = 0;
            p->inf[i].socktype = -1;
            p->inf[i].port_acl = -1;

            p->inf[i].client_ip = NULL;
            p->inf[i].client_port = NULL;
            p->inf[i].del_callback = p->del_callback;
            p->inf[i].rcv_callback = p->rcv_callback;
            p->inf[i].snd_callback = p->snd_callback;
            p->inf[i].data = NULL;

            // link them so that the first free will be earlier in the array
            // (we loop decrementing i)
            p->inf[i].next = p->first_free;
            p->first_free = &p->inf[i];
        }

        p->slots = new_slots;
    }

    POLLINFO *pi = p->first_free;
    p->first_free = p->first_free->next;

    debug(D_POLLFD, "POLLFD: ADD: selected slot %zu, next free is %zd", pi->slot, p->first_free?(ssize_t)p->first_free->slot:(ssize_t)-1);

    struct pollfd *pf = &p->fds[pi->slot];
    pf->fd = fd;
    pf->events = POLLIN;
    pf->revents = 0;

    pi->fd = fd;
    pi->p = p;
    pi->socktype = socktype;
    pi->port_acl = port_acl;
    pi->flags = flags;
    pi->next = NULL;
    pi->client_ip = strdupz(client_ip);
    pi->client_port = strdupz(client_port);

    pi->del_callback = del_callback;
    pi->rcv_callback = rcv_callback;
    pi->snd_callback = snd_callback;

    pi->connected_t = now_boottime_sec();
    pi->last_received_t = 0;
    pi->last_sent_t = 0;
    pi->last_sent_t = 0;
    pi->recv_count = 0;
    pi->send_count = 0;

    netdata_thread_disable_cancelability();
    p->used++;
    if(unlikely(pi->slot > p->max))
        p->max = pi->slot;

    if(pi->flags & POLLINFO_FLAG_CLIENT_SOCKET) {
        pi->data = add_callback(pi, &pf->events, data);
    }

    if(pi->flags & POLLINFO_FLAG_SERVER_SOCKET) {
        p->min = pi->slot;
    }
    netdata_thread_enable_cancelability();

    debug(D_POLLFD, "POLLFD: ADD: completed, slots = %zu, used = %zu, min = %zu, max = %zu, next free = %zd", p->slots, p->used, p->min, p->max, p->first_free?(ssize_t)p->first_free->slot:(ssize_t)-1);

    return pi;
}


// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int int = ((-2 * (next_i()%2)) + 1) * next_i();
          long unsigned = 100;
          int _len_char0 = 1;
          * char = (*) malloc(_len_char0*sizeof());
          for(int _i0 = 0; _i0 < _len_char0; _i0++) {
            char[_i0] = 0;
          }
          int benchRet = debug(int,char,unsigned);
          printf("%d\n", benchRet); 
          free(char);
        
        break;
    }
    // big-arr
    case 1:
    {
          int int = ((-2 * (next_i()%2)) + 1) * next_i();
          long unsigned = 255;
          int _len_char0 = 65025;
          * char = (*) malloc(_len_char0*sizeof());
          for(int _i0 = 0; _i0 < _len_char0; _i0++) {
            char[_i0] = 0;
          }
          int benchRet = debug(int,char,unsigned);
          printf("%d\n", benchRet); 
          free(char);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int int = ((-2 * (next_i()%2)) + 1) * next_i();
          long unsigned = 10;
          int _len_char0 = 100;
          * char = (*) malloc(_len_char0*sizeof());
          for(int _i0 = 0; _i0 < _len_char0; _i0++) {
            char[_i0] = 0;
          }
          int benchRet = debug(int,char,unsigned);
          printf("%d\n", benchRet); 
          free(char);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
