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
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u_char ;
struct sockaddr_in {int /*<<< orphan*/  sin_addr; } ;
struct TYPE_9__ {int len; int valid; int /*<<< orphan*/ * data; int /*<<< orphan*/  not_found; int /*<<< orphan*/  no_cacheable; } ;
typedef  TYPE_3__ ngx_stream_variable_value_t ;
struct TYPE_10__ {TYPE_2__* connection; } ;
typedef  TYPE_4__ ngx_stream_session_t ;
typedef  int /*<<< orphan*/  ngx_int_t ;
typedef  int /*<<< orphan*/  in_addr_t ;
struct TYPE_8__ {TYPE_1__* sockaddr; } ;
struct TYPE_7__ {int sa_family; } ;

/* Variables and functions */
 int /*<<< orphan*/  NGX_OK ; 

__attribute__((used)) static ngx_int_t
ngx_stream_variable_binary_remote_addr(ngx_stream_session_t *s,
     ngx_stream_variable_value_t *v, uintptr_t data)
{
    struct sockaddr_in   *sin;
#if (NGX_HAVE_INET6)
    struct sockaddr_in6  *sin6;
#endif

    switch (s->connection->sockaddr->sa_family) {

#if (NGX_HAVE_INET6)
    case AF_INET6:
        sin6 = (struct sockaddr_in6 *) s->connection->sockaddr;

        v->len = sizeof(struct in6_addr);
        v->valid = 1;
        v->no_cacheable = 0;
        v->not_found = 0;
        v->data = sin6->sin6_addr.s6_addr;

        break;
#endif

#if (NGX_HAVE_UNIX_DOMAIN)
    case AF_UNIX:

        v->len = s->connection->addr_text.len;
        v->valid = 1;
        v->no_cacheable = 0;
        v->not_found = 0;
        v->data = s->connection->addr_text.data;

        break;
#endif

    default: /* AF_INET */
        sin = (struct sockaddr_in *) s->connection->sockaddr;

        v->len = sizeof(in_addr_t);
        v->valid = 1;
        v->no_cacheable = 0;
        v->not_found = 0;
        v->data = (u_char *) &sin->sin_addr;

        break;
    }

    return NGX_OK;
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
          unsigned long data = 100;
          int _len_s0 = 1;
          struct TYPE_10__ * s = (struct TYPE_10__ *) malloc(_len_s0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__connection0 = 1;
          s[_i0].connection = (struct TYPE_8__ *) malloc(_len_s__i0__connection0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_s__i0__connection0; _j0++) {
              int _len_s__i0__connection_sockaddr0 = 1;
          s[_i0].connection->sockaddr = (struct TYPE_7__ *) malloc(_len_s__i0__connection_sockaddr0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__connection_sockaddr0; _j0++) {
            s[_i0].connection->sockaddr->sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_v0 = 1;
          struct TYPE_9__ * v = (struct TYPE_9__ *) malloc(_len_v0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_v__i0__data0 = 1;
          v[_i0].data = (int *) malloc(_len_v__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_v__i0__data0; _j0++) {
            v[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        v[_i0].not_found = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].no_cacheable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_stream_variable_binary_remote_addr(s,v,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].connection);
          }
          free(s);
          for(int _aux = 0; _aux < _len_v0; _aux++) {
          free(v[_aux].data);
          }
          free(v);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long data = 255;
          int _len_s0 = 65025;
          struct TYPE_10__ * s = (struct TYPE_10__ *) malloc(_len_s0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__connection0 = 1;
          s[_i0].connection = (struct TYPE_8__ *) malloc(_len_s__i0__connection0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_s__i0__connection0; _j0++) {
              int _len_s__i0__connection_sockaddr0 = 1;
          s[_i0].connection->sockaddr = (struct TYPE_7__ *) malloc(_len_s__i0__connection_sockaddr0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__connection_sockaddr0; _j0++) {
            s[_i0].connection->sockaddr->sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_v0 = 65025;
          struct TYPE_9__ * v = (struct TYPE_9__ *) malloc(_len_v0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_v__i0__data0 = 1;
          v[_i0].data = (int *) malloc(_len_v__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_v__i0__data0; _j0++) {
            v[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        v[_i0].not_found = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].no_cacheable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_stream_variable_binary_remote_addr(s,v,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].connection);
          }
          free(s);
          for(int _aux = 0; _aux < _len_v0; _aux++) {
          free(v[_aux].data);
          }
          free(v);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long data = 10;
          int _len_s0 = 100;
          struct TYPE_10__ * s = (struct TYPE_10__ *) malloc(_len_s0*sizeof(struct TYPE_10__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__connection0 = 1;
          s[_i0].connection = (struct TYPE_8__ *) malloc(_len_s__i0__connection0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_s__i0__connection0; _j0++) {
              int _len_s__i0__connection_sockaddr0 = 1;
          s[_i0].connection->sockaddr = (struct TYPE_7__ *) malloc(_len_s__i0__connection_sockaddr0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_s__i0__connection_sockaddr0; _j0++) {
            s[_i0].connection->sockaddr->sa_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_v0 = 100;
          struct TYPE_9__ * v = (struct TYPE_9__ *) malloc(_len_v0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_v__i0__data0 = 1;
          v[_i0].data = (int *) malloc(_len_v__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_v__i0__data0; _j0++) {
            v[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        v[_i0].not_found = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].no_cacheable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_stream_variable_binary_remote_addr(s,v,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].connection);
          }
          free(s);
          for(int _aux = 0; _aux < _len_v0; _aux++) {
          free(v[_aux].data);
          }
          free(v);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
