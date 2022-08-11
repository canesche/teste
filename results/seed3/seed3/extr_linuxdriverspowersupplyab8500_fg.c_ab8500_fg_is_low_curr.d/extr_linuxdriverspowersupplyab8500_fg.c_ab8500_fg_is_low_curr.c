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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct ab8500_fg {TYPE_2__* bm; } ;
struct TYPE_4__ {TYPE_1__* fg_params; } ;
struct TYPE_3__ {int high_curr_threshold; } ;

/* Variables and functions */

__attribute__((used)) static int ab8500_fg_is_low_curr(struct ab8500_fg *di, int curr)
{
	/*
	 * We want to know if we're in low current mode
	 */
	if (curr > -di->bm->fg_params->high_curr_threshold)
		return true;
	else
		return false;
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
          int curr = 100;
          int _len_di0 = 1;
          struct ab8500_fg * di = (struct ab8500_fg *) malloc(_len_di0*sizeof(struct ab8500_fg));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
              int _len_di__i0__bm0 = 1;
          di[_i0].bm = (struct TYPE_4__ *) malloc(_len_di__i0__bm0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_di__i0__bm0; _j0++) {
              int _len_di__i0__bm_fg_params0 = 1;
          di[_i0].bm->fg_params = (struct TYPE_3__ *) malloc(_len_di__i0__bm_fg_params0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_di__i0__bm_fg_params0; _j0++) {
            di[_i0].bm->fg_params->high_curr_threshold = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ab8500_fg_is_low_curr(di,curr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_di0; _aux++) {
          free(di[_aux].bm);
          }
          free(di);
        
        break;
    }
    // big-arr
    case 1:
    {
          int curr = 255;
          int _len_di0 = 65025;
          struct ab8500_fg * di = (struct ab8500_fg *) malloc(_len_di0*sizeof(struct ab8500_fg));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
              int _len_di__i0__bm0 = 1;
          di[_i0].bm = (struct TYPE_4__ *) malloc(_len_di__i0__bm0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_di__i0__bm0; _j0++) {
              int _len_di__i0__bm_fg_params0 = 1;
          di[_i0].bm->fg_params = (struct TYPE_3__ *) malloc(_len_di__i0__bm_fg_params0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_di__i0__bm_fg_params0; _j0++) {
            di[_i0].bm->fg_params->high_curr_threshold = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ab8500_fg_is_low_curr(di,curr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_di0; _aux++) {
          free(di[_aux].bm);
          }
          free(di);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int curr = 10;
          int _len_di0 = 100;
          struct ab8500_fg * di = (struct ab8500_fg *) malloc(_len_di0*sizeof(struct ab8500_fg));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
              int _len_di__i0__bm0 = 1;
          di[_i0].bm = (struct TYPE_4__ *) malloc(_len_di__i0__bm0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_di__i0__bm0; _j0++) {
              int _len_di__i0__bm_fg_params0 = 1;
          di[_i0].bm->fg_params = (struct TYPE_3__ *) malloc(_len_di__i0__bm_fg_params0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_di__i0__bm_fg_params0; _j0++) {
            di[_i0].bm->fg_params->high_curr_threshold = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ab8500_fg_is_low_curr(di,curr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_di0; _aux++) {
          free(di[_aux].bm);
          }
          free(di);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
