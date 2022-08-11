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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct fcloop_rport {int dummy; } ;
struct fcloop_nport {struct fcloop_rport* rport; TYPE_1__* tport; } ;
struct TYPE_2__ {int /*<<< orphan*/ * remoteport; } ;

/* Variables and functions */

__attribute__((used)) static struct fcloop_rport *
__unlink_remote_port(struct fcloop_nport *nport)
{
	struct fcloop_rport *rport = nport->rport;

	if (rport && nport->tport)
		nport->tport->remoteport = NULL;
	nport->rport = NULL;

	return rport;
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
          int _len_nport0 = 1;
          struct fcloop_nport * nport = (struct fcloop_nport *) malloc(_len_nport0*sizeof(struct fcloop_nport));
          for(int _i0 = 0; _i0 < _len_nport0; _i0++) {
              int _len_nport__i0__rport0 = 1;
          nport[_i0].rport = (struct fcloop_rport *) malloc(_len_nport__i0__rport0*sizeof(struct fcloop_rport));
          for(int _j0 = 0; _j0 < _len_nport__i0__rport0; _j0++) {
            nport[_i0].rport->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nport__i0__tport0 = 1;
          nport[_i0].tport = (struct TYPE_2__ *) malloc(_len_nport__i0__tport0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_nport__i0__tport0; _j0++) {
              int _len_nport__i0__tport_remoteport0 = 1;
          nport[_i0].tport->remoteport = (int *) malloc(_len_nport__i0__tport_remoteport0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_nport__i0__tport_remoteport0; _j0++) {
            nport[_i0].tport->remoteport[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct fcloop_rport * benchRet = __unlink_remote_port(nport);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_nport0; _aux++) {
          free(nport[_aux].rport);
          }
          for(int _aux = 0; _aux < _len_nport0; _aux++) {
          free(nport[_aux].tport);
          }
          free(nport);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_nport0 = 65025;
          struct fcloop_nport * nport = (struct fcloop_nport *) malloc(_len_nport0*sizeof(struct fcloop_nport));
          for(int _i0 = 0; _i0 < _len_nport0; _i0++) {
              int _len_nport__i0__rport0 = 1;
          nport[_i0].rport = (struct fcloop_rport *) malloc(_len_nport__i0__rport0*sizeof(struct fcloop_rport));
          for(int _j0 = 0; _j0 < _len_nport__i0__rport0; _j0++) {
            nport[_i0].rport->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nport__i0__tport0 = 1;
          nport[_i0].tport = (struct TYPE_2__ *) malloc(_len_nport__i0__tport0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_nport__i0__tport0; _j0++) {
              int _len_nport__i0__tport_remoteport0 = 1;
          nport[_i0].tport->remoteport = (int *) malloc(_len_nport__i0__tport_remoteport0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_nport__i0__tport_remoteport0; _j0++) {
            nport[_i0].tport->remoteport[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct fcloop_rport * benchRet = __unlink_remote_port(nport);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_nport0; _aux++) {
          free(nport[_aux].rport);
          }
          for(int _aux = 0; _aux < _len_nport0; _aux++) {
          free(nport[_aux].tport);
          }
          free(nport);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_nport0 = 100;
          struct fcloop_nport * nport = (struct fcloop_nport *) malloc(_len_nport0*sizeof(struct fcloop_nport));
          for(int _i0 = 0; _i0 < _len_nport0; _i0++) {
              int _len_nport__i0__rport0 = 1;
          nport[_i0].rport = (struct fcloop_rport *) malloc(_len_nport__i0__rport0*sizeof(struct fcloop_rport));
          for(int _j0 = 0; _j0 < _len_nport__i0__rport0; _j0++) {
            nport[_i0].rport->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nport__i0__tport0 = 1;
          nport[_i0].tport = (struct TYPE_2__ *) malloc(_len_nport__i0__tport0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_nport__i0__tport0; _j0++) {
              int _len_nport__i0__tport_remoteport0 = 1;
          nport[_i0].tport->remoteport = (int *) malloc(_len_nport__i0__tport_remoteport0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_nport__i0__tport_remoteport0; _j0++) {
            nport[_i0].tport->remoteport[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct fcloop_rport * benchRet = __unlink_remote_port(nport);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_nport0; _aux++) {
          free(nport[_aux].rport);
          }
          for(int _aux = 0; _aux < _len_nport0; _aux++) {
          free(nport[_aux].tport);
          }
          free(nport);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
