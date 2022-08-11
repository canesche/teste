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
struct of_phandle_args {int args_count; int /*<<< orphan*/ * args; TYPE_1__* np; } ;
struct irq_fwspec {int param_count; int /*<<< orphan*/ * param; int /*<<< orphan*/ * fwnode; } ;
struct TYPE_2__ {int /*<<< orphan*/  fwnode; } ;

/* Variables and functions */

__attribute__((used)) static void of_phandle_args_to_fwspec(struct of_phandle_args *irq_data,
				      struct irq_fwspec *fwspec)
{
	int i;

	fwspec->fwnode = irq_data->np ? &irq_data->np->fwnode : NULL;
	fwspec->param_count = irq_data->args_count;

	for (i = 0; i < irq_data->args_count; i++)
		fwspec->param[i] = irq_data->args[i];
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
          int _len_irq_data0 = 1;
          struct of_phandle_args * irq_data = (struct of_phandle_args *) malloc(_len_irq_data0*sizeof(struct of_phandle_args));
          for(int _i0 = 0; _i0 < _len_irq_data0; _i0++) {
            irq_data[_i0].args_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_irq_data__i0__args0 = 1;
          irq_data[_i0].args = (int *) malloc(_len_irq_data__i0__args0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_irq_data__i0__args0; _j0++) {
            irq_data[_i0].args[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_irq_data__i0__np0 = 1;
          irq_data[_i0].np = (struct TYPE_2__ *) malloc(_len_irq_data__i0__np0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_irq_data__i0__np0; _j0++) {
            irq_data[_i0].np->fwnode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fwspec0 = 1;
          struct irq_fwspec * fwspec = (struct irq_fwspec *) malloc(_len_fwspec0*sizeof(struct irq_fwspec));
          for(int _i0 = 0; _i0 < _len_fwspec0; _i0++) {
            fwspec[_i0].param_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fwspec__i0__param0 = 1;
          fwspec[_i0].param = (int *) malloc(_len_fwspec__i0__param0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fwspec__i0__param0; _j0++) {
            fwspec[_i0].param[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fwspec__i0__fwnode0 = 1;
          fwspec[_i0].fwnode = (int *) malloc(_len_fwspec__i0__fwnode0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fwspec__i0__fwnode0; _j0++) {
            fwspec[_i0].fwnode[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          of_phandle_args_to_fwspec(irq_data,fwspec);
          for(int _aux = 0; _aux < _len_irq_data0; _aux++) {
          free(irq_data[_aux].args);
          }
          for(int _aux = 0; _aux < _len_irq_data0; _aux++) {
          free(irq_data[_aux].np);
          }
          free(irq_data);
          for(int _aux = 0; _aux < _len_fwspec0; _aux++) {
          free(fwspec[_aux].param);
          }
          for(int _aux = 0; _aux < _len_fwspec0; _aux++) {
          free(fwspec[_aux].fwnode);
          }
          free(fwspec);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_irq_data0 = 65025;
          struct of_phandle_args * irq_data = (struct of_phandle_args *) malloc(_len_irq_data0*sizeof(struct of_phandle_args));
          for(int _i0 = 0; _i0 < _len_irq_data0; _i0++) {
            irq_data[_i0].args_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_irq_data__i0__args0 = 1;
          irq_data[_i0].args = (int *) malloc(_len_irq_data__i0__args0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_irq_data__i0__args0; _j0++) {
            irq_data[_i0].args[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_irq_data__i0__np0 = 1;
          irq_data[_i0].np = (struct TYPE_2__ *) malloc(_len_irq_data__i0__np0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_irq_data__i0__np0; _j0++) {
            irq_data[_i0].np->fwnode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fwspec0 = 65025;
          struct irq_fwspec * fwspec = (struct irq_fwspec *) malloc(_len_fwspec0*sizeof(struct irq_fwspec));
          for(int _i0 = 0; _i0 < _len_fwspec0; _i0++) {
            fwspec[_i0].param_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fwspec__i0__param0 = 1;
          fwspec[_i0].param = (int *) malloc(_len_fwspec__i0__param0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fwspec__i0__param0; _j0++) {
            fwspec[_i0].param[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fwspec__i0__fwnode0 = 1;
          fwspec[_i0].fwnode = (int *) malloc(_len_fwspec__i0__fwnode0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fwspec__i0__fwnode0; _j0++) {
            fwspec[_i0].fwnode[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          of_phandle_args_to_fwspec(irq_data,fwspec);
          for(int _aux = 0; _aux < _len_irq_data0; _aux++) {
          free(irq_data[_aux].args);
          }
          for(int _aux = 0; _aux < _len_irq_data0; _aux++) {
          free(irq_data[_aux].np);
          }
          free(irq_data);
          for(int _aux = 0; _aux < _len_fwspec0; _aux++) {
          free(fwspec[_aux].param);
          }
          for(int _aux = 0; _aux < _len_fwspec0; _aux++) {
          free(fwspec[_aux].fwnode);
          }
          free(fwspec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_irq_data0 = 100;
          struct of_phandle_args * irq_data = (struct of_phandle_args *) malloc(_len_irq_data0*sizeof(struct of_phandle_args));
          for(int _i0 = 0; _i0 < _len_irq_data0; _i0++) {
            irq_data[_i0].args_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_irq_data__i0__args0 = 1;
          irq_data[_i0].args = (int *) malloc(_len_irq_data__i0__args0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_irq_data__i0__args0; _j0++) {
            irq_data[_i0].args[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_irq_data__i0__np0 = 1;
          irq_data[_i0].np = (struct TYPE_2__ *) malloc(_len_irq_data__i0__np0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_irq_data__i0__np0; _j0++) {
            irq_data[_i0].np->fwnode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fwspec0 = 100;
          struct irq_fwspec * fwspec = (struct irq_fwspec *) malloc(_len_fwspec0*sizeof(struct irq_fwspec));
          for(int _i0 = 0; _i0 < _len_fwspec0; _i0++) {
            fwspec[_i0].param_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fwspec__i0__param0 = 1;
          fwspec[_i0].param = (int *) malloc(_len_fwspec__i0__param0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fwspec__i0__param0; _j0++) {
            fwspec[_i0].param[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fwspec__i0__fwnode0 = 1;
          fwspec[_i0].fwnode = (int *) malloc(_len_fwspec__i0__fwnode0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fwspec__i0__fwnode0; _j0++) {
            fwspec[_i0].fwnode[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          of_phandle_args_to_fwspec(irq_data,fwspec);
          for(int _aux = 0; _aux < _len_irq_data0; _aux++) {
          free(irq_data[_aux].args);
          }
          for(int _aux = 0; _aux < _len_irq_data0; _aux++) {
          free(irq_data[_aux].np);
          }
          free(irq_data);
          for(int _aux = 0; _aux < _len_fwspec0; _aux++) {
          free(fwspec[_aux].param);
          }
          for(int _aux = 0; _aux < _len_fwspec0; _aux++) {
          free(fwspec[_aux].fwnode);
          }
          free(fwspec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
