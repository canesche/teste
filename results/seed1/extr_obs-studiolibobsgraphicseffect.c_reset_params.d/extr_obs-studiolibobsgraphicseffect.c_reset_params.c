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
struct pass_shaderparam {TYPE_1__* eparam; } ;
struct darray {size_t num; struct pass_shaderparam* array; } ;
struct TYPE_2__ {int changed; } ;

/* Variables and functions */

__attribute__((used)) static inline void reset_params(struct darray *shaderparams)
{
	struct pass_shaderparam *params = shaderparams->array;
	size_t i;

	for (i = 0; i < shaderparams->num; i++)
		params[i].eparam->changed = false;
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
          int _len_shaderparams0 = 1;
          struct darray * shaderparams = (struct darray *) malloc(_len_shaderparams0*sizeof(struct darray));
          for(int _i0 = 0; _i0 < _len_shaderparams0; _i0++) {
            shaderparams[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_shaderparams__i0__array0 = 1;
          shaderparams[_i0].array = (struct pass_shaderparam *) malloc(_len_shaderparams__i0__array0*sizeof(struct pass_shaderparam));
          for(int _j0 = 0; _j0 < _len_shaderparams__i0__array0; _j0++) {
              int _len_shaderparams__i0__array_eparam0 = 1;
          shaderparams[_i0].array->eparam = (struct TYPE_2__ *) malloc(_len_shaderparams__i0__array_eparam0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_shaderparams__i0__array_eparam0; _j0++) {
            shaderparams[_i0].array->eparam->changed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          reset_params(shaderparams);
          for(int _aux = 0; _aux < _len_shaderparams0; _aux++) {
          free(shaderparams[_aux].array);
          }
          free(shaderparams);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_shaderparams0 = 65025;
          struct darray * shaderparams = (struct darray *) malloc(_len_shaderparams0*sizeof(struct darray));
          for(int _i0 = 0; _i0 < _len_shaderparams0; _i0++) {
            shaderparams[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_shaderparams__i0__array0 = 1;
          shaderparams[_i0].array = (struct pass_shaderparam *) malloc(_len_shaderparams__i0__array0*sizeof(struct pass_shaderparam));
          for(int _j0 = 0; _j0 < _len_shaderparams__i0__array0; _j0++) {
              int _len_shaderparams__i0__array_eparam0 = 1;
          shaderparams[_i0].array->eparam = (struct TYPE_2__ *) malloc(_len_shaderparams__i0__array_eparam0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_shaderparams__i0__array_eparam0; _j0++) {
            shaderparams[_i0].array->eparam->changed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          reset_params(shaderparams);
          for(int _aux = 0; _aux < _len_shaderparams0; _aux++) {
          free(shaderparams[_aux].array);
          }
          free(shaderparams);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_shaderparams0 = 100;
          struct darray * shaderparams = (struct darray *) malloc(_len_shaderparams0*sizeof(struct darray));
          for(int _i0 = 0; _i0 < _len_shaderparams0; _i0++) {
            shaderparams[_i0].num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_shaderparams__i0__array0 = 1;
          shaderparams[_i0].array = (struct pass_shaderparam *) malloc(_len_shaderparams__i0__array0*sizeof(struct pass_shaderparam));
          for(int _j0 = 0; _j0 < _len_shaderparams__i0__array0; _j0++) {
              int _len_shaderparams__i0__array_eparam0 = 1;
          shaderparams[_i0].array->eparam = (struct TYPE_2__ *) malloc(_len_shaderparams__i0__array_eparam0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_shaderparams__i0__array_eparam0; _j0++) {
            shaderparams[_i0].array->eparam->changed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          reset_params(shaderparams);
          for(int _aux = 0; _aux < _len_shaderparams0; _aux++) {
          free(shaderparams[_aux].array);
          }
          free(shaderparams);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
