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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_3__* socket_t ;
typedef  int /*<<< orphan*/ * sock_upcall ;
struct TYPE_6__ {int sb_flags; int /*<<< orphan*/ * sb_upcallarg; int /*<<< orphan*/ * sb_upcall; } ;
struct TYPE_5__ {int sb_flags; int /*<<< orphan*/ * sb_upcallarg; int /*<<< orphan*/ * sb_upcall; } ;
struct TYPE_7__ {TYPE_2__ so_snd; TYPE_1__ so_rcv; } ;

/* Variables and functions */
 int SB_UPCALL ; 
 int SB_UPCALL_LOCK ; 

void
sock_setupcalls_locked(socket_t sock, sock_upcall rcallback, void *rcontext,
    sock_upcall wcallback, void *wcontext, int locked)
{
	if (rcallback != NULL) {
		sock->so_rcv.sb_flags |= SB_UPCALL;
		if (locked)
			sock->so_rcv.sb_flags |= SB_UPCALL_LOCK;
		sock->so_rcv.sb_upcall = rcallback;
		sock->so_rcv.sb_upcallarg = rcontext;
	} else {
		sock->so_rcv.sb_flags &= ~(SB_UPCALL | SB_UPCALL_LOCK);
		sock->so_rcv.sb_upcall = NULL;
		sock->so_rcv.sb_upcallarg = NULL;
	}

	if (wcallback != NULL) {
		sock->so_snd.sb_flags |= SB_UPCALL;
		if (locked)
			sock->so_snd.sb_flags |= SB_UPCALL_LOCK;
		sock->so_snd.sb_upcall = wcallback;
		sock->so_snd.sb_upcallarg = wcontext;
	} else {
		sock->so_snd.sb_flags &= ~(SB_UPCALL | SB_UPCALL_LOCK);
		sock->so_snd.sb_upcall = NULL;
		sock->so_snd.sb_upcallarg = NULL;
	}
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
          int locked = 100;
          int _len_sock0 = 1;
          struct TYPE_7__ * sock = (struct TYPE_7__ *) malloc(_len_sock0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_sock0; _i0++) {
            sock[_i0].so_snd.sb_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sock__i0__so_snd_sb_upcallarg0 = 1;
          sock[_i0].so_snd.sb_upcallarg = (int *) malloc(_len_sock__i0__so_snd_sb_upcallarg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sock__i0__so_snd_sb_upcallarg0; _j0++) {
            sock[_i0].so_snd.sb_upcallarg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sock__i0__so_snd_sb_upcall0 = 1;
          sock[_i0].so_snd.sb_upcall = (int *) malloc(_len_sock__i0__so_snd_sb_upcall0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sock__i0__so_snd_sb_upcall0; _j0++) {
            sock[_i0].so_snd.sb_upcall[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sock[_i0].so_rcv.sb_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sock__i0__so_rcv_sb_upcallarg0 = 1;
          sock[_i0].so_rcv.sb_upcallarg = (int *) malloc(_len_sock__i0__so_rcv_sb_upcallarg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sock__i0__so_rcv_sb_upcallarg0; _j0++) {
            sock[_i0].so_rcv.sb_upcallarg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sock__i0__so_rcv_sb_upcall0 = 1;
          sock[_i0].so_rcv.sb_upcall = (int *) malloc(_len_sock__i0__so_rcv_sb_upcall0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sock__i0__so_rcv_sb_upcall0; _j0++) {
            sock[_i0].so_rcv.sb_upcall[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rcallback0 = 1;
          int * rcallback = (int *) malloc(_len_rcallback0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rcallback0; _i0++) {
            rcallback[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * rcontext;
          int _len_wcallback0 = 1;
          int * wcallback = (int *) malloc(_len_wcallback0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_wcallback0; _i0++) {
            wcallback[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * wcontext;
          sock_setupcalls_locked(sock,rcallback,rcontext,wcallback,wcontext,locked);
          free(sock);
          free(rcallback);
          free(wcallback);
        
        break;
    }
    // big-arr
    case 1:
    {
          int locked = 255;
          int _len_sock0 = 65025;
          struct TYPE_7__ * sock = (struct TYPE_7__ *) malloc(_len_sock0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_sock0; _i0++) {
            sock[_i0].so_snd.sb_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sock__i0__so_snd_sb_upcallarg0 = 1;
          sock[_i0].so_snd.sb_upcallarg = (int *) malloc(_len_sock__i0__so_snd_sb_upcallarg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sock__i0__so_snd_sb_upcallarg0; _j0++) {
            sock[_i0].so_snd.sb_upcallarg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sock__i0__so_snd_sb_upcall0 = 1;
          sock[_i0].so_snd.sb_upcall = (int *) malloc(_len_sock__i0__so_snd_sb_upcall0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sock__i0__so_snd_sb_upcall0; _j0++) {
            sock[_i0].so_snd.sb_upcall[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sock[_i0].so_rcv.sb_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sock__i0__so_rcv_sb_upcallarg0 = 1;
          sock[_i0].so_rcv.sb_upcallarg = (int *) malloc(_len_sock__i0__so_rcv_sb_upcallarg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sock__i0__so_rcv_sb_upcallarg0; _j0++) {
            sock[_i0].so_rcv.sb_upcallarg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sock__i0__so_rcv_sb_upcall0 = 1;
          sock[_i0].so_rcv.sb_upcall = (int *) malloc(_len_sock__i0__so_rcv_sb_upcall0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sock__i0__so_rcv_sb_upcall0; _j0++) {
            sock[_i0].so_rcv.sb_upcall[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rcallback0 = 65025;
          int * rcallback = (int *) malloc(_len_rcallback0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rcallback0; _i0++) {
            rcallback[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * rcontext;
          int _len_wcallback0 = 65025;
          int * wcallback = (int *) malloc(_len_wcallback0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_wcallback0; _i0++) {
            wcallback[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * wcontext;
          sock_setupcalls_locked(sock,rcallback,rcontext,wcallback,wcontext,locked);
          free(sock);
          free(rcallback);
          free(wcallback);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int locked = 10;
          int _len_sock0 = 100;
          struct TYPE_7__ * sock = (struct TYPE_7__ *) malloc(_len_sock0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_sock0; _i0++) {
            sock[_i0].so_snd.sb_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sock__i0__so_snd_sb_upcallarg0 = 1;
          sock[_i0].so_snd.sb_upcallarg = (int *) malloc(_len_sock__i0__so_snd_sb_upcallarg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sock__i0__so_snd_sb_upcallarg0; _j0++) {
            sock[_i0].so_snd.sb_upcallarg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sock__i0__so_snd_sb_upcall0 = 1;
          sock[_i0].so_snd.sb_upcall = (int *) malloc(_len_sock__i0__so_snd_sb_upcall0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sock__i0__so_snd_sb_upcall0; _j0++) {
            sock[_i0].so_snd.sb_upcall[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sock[_i0].so_rcv.sb_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sock__i0__so_rcv_sb_upcallarg0 = 1;
          sock[_i0].so_rcv.sb_upcallarg = (int *) malloc(_len_sock__i0__so_rcv_sb_upcallarg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sock__i0__so_rcv_sb_upcallarg0; _j0++) {
            sock[_i0].so_rcv.sb_upcallarg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sock__i0__so_rcv_sb_upcall0 = 1;
          sock[_i0].so_rcv.sb_upcall = (int *) malloc(_len_sock__i0__so_rcv_sb_upcall0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sock__i0__so_rcv_sb_upcall0; _j0++) {
            sock[_i0].so_rcv.sb_upcall[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rcallback0 = 100;
          int * rcallback = (int *) malloc(_len_rcallback0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rcallback0; _i0++) {
            rcallback[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * rcontext;
          int _len_wcallback0 = 100;
          int * wcallback = (int *) malloc(_len_wcallback0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_wcallback0; _i0++) {
            wcallback[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * wcontext;
          sock_setupcalls_locked(sock,rcallback,rcontext,wcallback,wcontext,locked);
          free(sock);
          free(rcallback);
          free(wcallback);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
