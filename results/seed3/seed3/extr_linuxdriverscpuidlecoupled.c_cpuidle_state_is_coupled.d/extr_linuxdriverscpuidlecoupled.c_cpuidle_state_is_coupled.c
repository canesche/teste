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
struct cpuidle_driver {TYPE_1__* states; } ;
struct TYPE_2__ {int flags; } ;

/* Variables and functions */
 int CPUIDLE_FLAG_COUPLED ; 

bool cpuidle_state_is_coupled(struct cpuidle_driver *drv, int state)
{
	return drv->states[state].flags & CPUIDLE_FLAG_COUPLED;
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
          int state = 100;
          int _len_drv0 = 1;
          struct cpuidle_driver * drv = (struct cpuidle_driver *) malloc(_len_drv0*sizeof(struct cpuidle_driver));
          for(int _i0 = 0; _i0 < _len_drv0; _i0++) {
              int _len_drv__i0__states0 = 1;
          drv[_i0].states = (struct TYPE_2__ *) malloc(_len_drv__i0__states0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_drv__i0__states0; _j0++) {
            drv[_i0].states->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cpuidle_state_is_coupled(drv,state);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_drv0; _aux++) {
          free(drv[_aux].states);
          }
          free(drv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int state = 255;
          int _len_drv0 = 65025;
          struct cpuidle_driver * drv = (struct cpuidle_driver *) malloc(_len_drv0*sizeof(struct cpuidle_driver));
          for(int _i0 = 0; _i0 < _len_drv0; _i0++) {
              int _len_drv__i0__states0 = 1;
          drv[_i0].states = (struct TYPE_2__ *) malloc(_len_drv__i0__states0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_drv__i0__states0; _j0++) {
            drv[_i0].states->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cpuidle_state_is_coupled(drv,state);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_drv0; _aux++) {
          free(drv[_aux].states);
          }
          free(drv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int state = 10;
          int _len_drv0 = 100;
          struct cpuidle_driver * drv = (struct cpuidle_driver *) malloc(_len_drv0*sizeof(struct cpuidle_driver));
          for(int _i0 = 0; _i0 < _len_drv0; _i0++) {
              int _len_drv__i0__states0 = 1;
          drv[_i0].states = (struct TYPE_2__ *) malloc(_len_drv__i0__states0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_drv__i0__states0; _j0++) {
            drv[_i0].states->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cpuidle_state_is_coupled(drv,state);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_drv0; _aux++) {
          free(drv[_aux].states);
          }
          free(drv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
