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
struct TYPE_3__ {long isize; long nsize; scalar_t__ scurr; int /*<<< orphan*/ * sncur; int /*<<< orphan*/  ancur; int /*<<< orphan*/ * tail; int /*<<< orphan*/  head; } ;
typedef  TYPE_1__ chastore_t ;

/* Variables and functions */

int xdl_cha_init(chastore_t *cha, long isize, long icount) {

	cha->head = cha->tail = NULL;
	cha->isize = isize;
	cha->nsize = icount * isize;
	cha->ancur = cha->sncur = NULL;
	cha->scurr = 0;

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
          long isize = 100;
          long icount = 100;
          int _len_cha0 = 1;
          struct TYPE_3__ * cha = (struct TYPE_3__ *) malloc(_len_cha0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cha0; _i0++) {
            cha[_i0].isize = ((-2 * (next_i()%2)) + 1) * next_i();
        cha[_i0].nsize = ((-2 * (next_i()%2)) + 1) * next_i();
        cha[_i0].scurr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cha__i0__sncur0 = 1;
          cha[_i0].sncur = (int *) malloc(_len_cha__i0__sncur0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cha__i0__sncur0; _j0++) {
            cha[_i0].sncur[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cha[_i0].ancur = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cha__i0__tail0 = 1;
          cha[_i0].tail = (int *) malloc(_len_cha__i0__tail0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cha__i0__tail0; _j0++) {
            cha[_i0].tail[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cha[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xdl_cha_init(cha,isize,icount);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cha0; _aux++) {
          free(cha[_aux].sncur);
          }
          for(int _aux = 0; _aux < _len_cha0; _aux++) {
          free(cha[_aux].tail);
          }
          free(cha);
        
        break;
    }
    // big-arr
    case 1:
    {
          long isize = 255;
          long icount = 255;
          int _len_cha0 = 65025;
          struct TYPE_3__ * cha = (struct TYPE_3__ *) malloc(_len_cha0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cha0; _i0++) {
            cha[_i0].isize = ((-2 * (next_i()%2)) + 1) * next_i();
        cha[_i0].nsize = ((-2 * (next_i()%2)) + 1) * next_i();
        cha[_i0].scurr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cha__i0__sncur0 = 1;
          cha[_i0].sncur = (int *) malloc(_len_cha__i0__sncur0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cha__i0__sncur0; _j0++) {
            cha[_i0].sncur[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cha[_i0].ancur = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cha__i0__tail0 = 1;
          cha[_i0].tail = (int *) malloc(_len_cha__i0__tail0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cha__i0__tail0; _j0++) {
            cha[_i0].tail[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cha[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xdl_cha_init(cha,isize,icount);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cha0; _aux++) {
          free(cha[_aux].sncur);
          }
          for(int _aux = 0; _aux < _len_cha0; _aux++) {
          free(cha[_aux].tail);
          }
          free(cha);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long isize = 10;
          long icount = 10;
          int _len_cha0 = 100;
          struct TYPE_3__ * cha = (struct TYPE_3__ *) malloc(_len_cha0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cha0; _i0++) {
            cha[_i0].isize = ((-2 * (next_i()%2)) + 1) * next_i();
        cha[_i0].nsize = ((-2 * (next_i()%2)) + 1) * next_i();
        cha[_i0].scurr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cha__i0__sncur0 = 1;
          cha[_i0].sncur = (int *) malloc(_len_cha__i0__sncur0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cha__i0__sncur0; _j0++) {
            cha[_i0].sncur[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cha[_i0].ancur = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cha__i0__tail0 = 1;
          cha[_i0].tail = (int *) malloc(_len_cha__i0__tail0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cha__i0__tail0; _j0++) {
            cha[_i0].tail[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cha[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xdl_cha_init(cha,isize,icount);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cha0; _aux++) {
          free(cha[_aux].sncur);
          }
          for(int _aux = 0; _aux < _len_cha0; _aux++) {
          free(cha[_aux].tail);
          }
          free(cha);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
