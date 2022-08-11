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

/* Type definitions */
struct hw_factory {int* number_of_pins; int /*<<< orphan*/ * funcs; } ;

/* Variables and functions */
 size_t GPIO_ID_DDC_CLOCK ; 
 size_t GPIO_ID_DDC_DATA ; 
 size_t GPIO_ID_GENERIC ; 
 size_t GPIO_ID_GPIO_PAD ; 
 size_t GPIO_ID_GSL ; 
 size_t GPIO_ID_HPD ; 
 size_t GPIO_ID_SYNC ; 
 size_t GPIO_ID_VIP_PAD ; 
 int /*<<< orphan*/  funcs ; 

void dal_hw_factory_dce110_init(struct hw_factory *factory)
{
	/*TODO check ASIC CAPs*/
	factory->number_of_pins[GPIO_ID_DDC_DATA] = 8;
	factory->number_of_pins[GPIO_ID_DDC_CLOCK] = 8;
	factory->number_of_pins[GPIO_ID_GENERIC] = 7;
	factory->number_of_pins[GPIO_ID_HPD] = 6;
	factory->number_of_pins[GPIO_ID_GPIO_PAD] = 31;
	factory->number_of_pins[GPIO_ID_VIP_PAD] = 0;
	factory->number_of_pins[GPIO_ID_SYNC] = 2;
	factory->number_of_pins[GPIO_ID_GSL] = 4;

	factory->funcs = &funcs;
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
          int _len_factory0 = 1;
          struct hw_factory * factory = (struct hw_factory *) malloc(_len_factory0*sizeof(struct hw_factory));
          for(int _i0 = 0; _i0 < _len_factory0; _i0++) {
              int _len_factory__i0__number_of_pins0 = 1;
          factory[_i0].number_of_pins = (int *) malloc(_len_factory__i0__number_of_pins0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_factory__i0__number_of_pins0; _j0++) {
            factory[_i0].number_of_pins[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_factory__i0__funcs0 = 1;
          factory[_i0].funcs = (int *) malloc(_len_factory__i0__funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_factory__i0__funcs0; _j0++) {
            factory[_i0].funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dal_hw_factory_dce110_init(factory);
          for(int _aux = 0; _aux < _len_factory0; _aux++) {
          free(factory[_aux].number_of_pins);
          }
          for(int _aux = 0; _aux < _len_factory0; _aux++) {
          free(factory[_aux].funcs);
          }
          free(factory);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_factory0 = 65025;
          struct hw_factory * factory = (struct hw_factory *) malloc(_len_factory0*sizeof(struct hw_factory));
          for(int _i0 = 0; _i0 < _len_factory0; _i0++) {
              int _len_factory__i0__number_of_pins0 = 1;
          factory[_i0].number_of_pins = (int *) malloc(_len_factory__i0__number_of_pins0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_factory__i0__number_of_pins0; _j0++) {
            factory[_i0].number_of_pins[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_factory__i0__funcs0 = 1;
          factory[_i0].funcs = (int *) malloc(_len_factory__i0__funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_factory__i0__funcs0; _j0++) {
            factory[_i0].funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dal_hw_factory_dce110_init(factory);
          for(int _aux = 0; _aux < _len_factory0; _aux++) {
          free(factory[_aux].number_of_pins);
          }
          for(int _aux = 0; _aux < _len_factory0; _aux++) {
          free(factory[_aux].funcs);
          }
          free(factory);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_factory0 = 100;
          struct hw_factory * factory = (struct hw_factory *) malloc(_len_factory0*sizeof(struct hw_factory));
          for(int _i0 = 0; _i0 < _len_factory0; _i0++) {
              int _len_factory__i0__number_of_pins0 = 1;
          factory[_i0].number_of_pins = (int *) malloc(_len_factory__i0__number_of_pins0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_factory__i0__number_of_pins0; _j0++) {
            factory[_i0].number_of_pins[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_factory__i0__funcs0 = 1;
          factory[_i0].funcs = (int *) malloc(_len_factory__i0__funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_factory__i0__funcs0; _j0++) {
            factory[_i0].funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dal_hw_factory_dce110_init(factory);
          for(int _aux = 0; _aux < _len_factory0; _aux++) {
          free(factory[_aux].number_of_pins);
          }
          for(int _aux = 0; _aux < _len_factory0; _aux++) {
          free(factory[_aux].funcs);
          }
          free(factory);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
