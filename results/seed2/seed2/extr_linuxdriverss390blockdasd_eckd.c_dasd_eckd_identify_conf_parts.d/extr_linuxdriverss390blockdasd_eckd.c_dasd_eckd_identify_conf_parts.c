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
struct vd_sneq {int dummy; } ;
struct TYPE_2__ {int identifier; } ;
struct dasd_sneq {int format; int res1; TYPE_1__ flags; } ;
struct dasd_ned {int dummy; } ;
struct dasd_gneq {int dummy; } ;
struct dasd_eckd_private {int conf_len; struct dasd_gneq* gneq; struct vd_sneq* vdsneq; struct dasd_sneq* sneq; struct dasd_ned* ned; scalar_t__ conf_data; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int dasd_eckd_identify_conf_parts(struct dasd_eckd_private *private)
{

	struct dasd_sneq *sneq;
	int i, count;

	private->ned = NULL;
	private->sneq = NULL;
	private->vdsneq = NULL;
	private->gneq = NULL;
	count = private->conf_len / sizeof(struct dasd_sneq);
	sneq = (struct dasd_sneq *)private->conf_data;
	for (i = 0; i < count; ++i) {
		if (sneq->flags.identifier == 1 && sneq->format == 1)
			private->sneq = sneq;
		else if (sneq->flags.identifier == 1 && sneq->format == 4)
			private->vdsneq = (struct vd_sneq *)sneq;
		else if (sneq->flags.identifier == 2)
			private->gneq = (struct dasd_gneq *)sneq;
		else if (sneq->flags.identifier == 3 && sneq->res1 == 1)
			private->ned = (struct dasd_ned *)sneq;
		sneq++;
	}
	if (!private->ned || !private->gneq) {
		private->ned = NULL;
		private->sneq = NULL;
		private->vdsneq = NULL;
		private->gneq = NULL;
		return -EINVAL;
	}
	return 0;

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
          int _len_private0 = 1;
          struct dasd_eckd_private * private = (struct dasd_eckd_private *) malloc(_len_private0*sizeof(struct dasd_eckd_private));
          for(int _i0 = 0; _i0 < _len_private0; _i0++) {
            private[_i0].conf_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_private__i0__gneq0 = 1;
          private[_i0].gneq = (struct dasd_gneq *) malloc(_len_private__i0__gneq0*sizeof(struct dasd_gneq));
          for(int _j0 = 0; _j0 < _len_private__i0__gneq0; _j0++) {
            private[_i0].gneq->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_private__i0__vdsneq0 = 1;
          private[_i0].vdsneq = (struct vd_sneq *) malloc(_len_private__i0__vdsneq0*sizeof(struct vd_sneq));
          for(int _j0 = 0; _j0 < _len_private__i0__vdsneq0; _j0++) {
            private[_i0].vdsneq->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_private__i0__sneq0 = 1;
          private[_i0].sneq = (struct dasd_sneq *) malloc(_len_private__i0__sneq0*sizeof(struct dasd_sneq));
          for(int _j0 = 0; _j0 < _len_private__i0__sneq0; _j0++) {
            private[_i0].sneq->format = ((-2 * (next_i()%2)) + 1) * next_i();
        private[_i0].sneq->res1 = ((-2 * (next_i()%2)) + 1) * next_i();
        private[_i0].sneq->flags.identifier = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_private__i0__ned0 = 1;
          private[_i0].ned = (struct dasd_ned *) malloc(_len_private__i0__ned0*sizeof(struct dasd_ned));
          for(int _j0 = 0; _j0 < _len_private__i0__ned0; _j0++) {
            private[_i0].ned->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        private[_i0].conf_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dasd_eckd_identify_conf_parts(private);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_private0; _aux++) {
          free(private[_aux].gneq);
          }
          for(int _aux = 0; _aux < _len_private0; _aux++) {
          free(private[_aux].vdsneq);
          }
          for(int _aux = 0; _aux < _len_private0; _aux++) {
          free(private[_aux].sneq);
          }
          for(int _aux = 0; _aux < _len_private0; _aux++) {
          free(private[_aux].ned);
          }
          free(private);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_private0 = 65025;
          struct dasd_eckd_private * private = (struct dasd_eckd_private *) malloc(_len_private0*sizeof(struct dasd_eckd_private));
          for(int _i0 = 0; _i0 < _len_private0; _i0++) {
            private[_i0].conf_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_private__i0__gneq0 = 1;
          private[_i0].gneq = (struct dasd_gneq *) malloc(_len_private__i0__gneq0*sizeof(struct dasd_gneq));
          for(int _j0 = 0; _j0 < _len_private__i0__gneq0; _j0++) {
            private[_i0].gneq->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_private__i0__vdsneq0 = 1;
          private[_i0].vdsneq = (struct vd_sneq *) malloc(_len_private__i0__vdsneq0*sizeof(struct vd_sneq));
          for(int _j0 = 0; _j0 < _len_private__i0__vdsneq0; _j0++) {
            private[_i0].vdsneq->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_private__i0__sneq0 = 1;
          private[_i0].sneq = (struct dasd_sneq *) malloc(_len_private__i0__sneq0*sizeof(struct dasd_sneq));
          for(int _j0 = 0; _j0 < _len_private__i0__sneq0; _j0++) {
            private[_i0].sneq->format = ((-2 * (next_i()%2)) + 1) * next_i();
        private[_i0].sneq->res1 = ((-2 * (next_i()%2)) + 1) * next_i();
        private[_i0].sneq->flags.identifier = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_private__i0__ned0 = 1;
          private[_i0].ned = (struct dasd_ned *) malloc(_len_private__i0__ned0*sizeof(struct dasd_ned));
          for(int _j0 = 0; _j0 < _len_private__i0__ned0; _j0++) {
            private[_i0].ned->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        private[_i0].conf_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dasd_eckd_identify_conf_parts(private);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_private0; _aux++) {
          free(private[_aux].gneq);
          }
          for(int _aux = 0; _aux < _len_private0; _aux++) {
          free(private[_aux].vdsneq);
          }
          for(int _aux = 0; _aux < _len_private0; _aux++) {
          free(private[_aux].sneq);
          }
          for(int _aux = 0; _aux < _len_private0; _aux++) {
          free(private[_aux].ned);
          }
          free(private);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_private0 = 100;
          struct dasd_eckd_private * private = (struct dasd_eckd_private *) malloc(_len_private0*sizeof(struct dasd_eckd_private));
          for(int _i0 = 0; _i0 < _len_private0; _i0++) {
            private[_i0].conf_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_private__i0__gneq0 = 1;
          private[_i0].gneq = (struct dasd_gneq *) malloc(_len_private__i0__gneq0*sizeof(struct dasd_gneq));
          for(int _j0 = 0; _j0 < _len_private__i0__gneq0; _j0++) {
            private[_i0].gneq->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_private__i0__vdsneq0 = 1;
          private[_i0].vdsneq = (struct vd_sneq *) malloc(_len_private__i0__vdsneq0*sizeof(struct vd_sneq));
          for(int _j0 = 0; _j0 < _len_private__i0__vdsneq0; _j0++) {
            private[_i0].vdsneq->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_private__i0__sneq0 = 1;
          private[_i0].sneq = (struct dasd_sneq *) malloc(_len_private__i0__sneq0*sizeof(struct dasd_sneq));
          for(int _j0 = 0; _j0 < _len_private__i0__sneq0; _j0++) {
            private[_i0].sneq->format = ((-2 * (next_i()%2)) + 1) * next_i();
        private[_i0].sneq->res1 = ((-2 * (next_i()%2)) + 1) * next_i();
        private[_i0].sneq->flags.identifier = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_private__i0__ned0 = 1;
          private[_i0].ned = (struct dasd_ned *) malloc(_len_private__i0__ned0*sizeof(struct dasd_ned));
          for(int _j0 = 0; _j0 < _len_private__i0__ned0; _j0++) {
            private[_i0].ned->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        private[_i0].conf_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dasd_eckd_identify_conf_parts(private);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_private0; _aux++) {
          free(private[_aux].gneq);
          }
          for(int _aux = 0; _aux < _len_private0; _aux++) {
          free(private[_aux].vdsneq);
          }
          for(int _aux = 0; _aux < _len_private0; _aux++) {
          free(private[_aux].sneq);
          }
          for(int _aux = 0; _aux < _len_private0; _aux++) {
          free(private[_aux].ned);
          }
          free(private);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
