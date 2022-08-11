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
struct symbol {int dummy; } ;
struct property {TYPE_2__* expr; } ;
struct TYPE_3__ {struct symbol* sym; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ left; } ;

/* Variables and functions */
 scalar_t__ E_LIST ; 
 scalar_t__ E_SYMBOL ; 

struct symbol *prop_get_symbol(struct property *prop)
{
	if (prop->expr && (prop->expr->type == E_SYMBOL ||
			   prop->expr->type == E_LIST))
		return prop->expr->left.sym;
	return NULL;
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
          int _len_prop0 = 1;
          struct property * prop = (struct property *) malloc(_len_prop0*sizeof(struct property));
          for(int _i0 = 0; _i0 < _len_prop0; _i0++) {
              int _len_prop__i0__expr0 = 1;
          prop[_i0].expr = (struct TYPE_4__ *) malloc(_len_prop__i0__expr0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_prop__i0__expr0; _j0++) {
            prop[_i0].expr->type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_prop__i0__expr_left_sym0 = 1;
          prop[_i0].expr->left.sym = (struct symbol *) malloc(_len_prop__i0__expr_left_sym0*sizeof(struct symbol));
          for(int _j0 = 0; _j0 < _len_prop__i0__expr_left_sym0; _j0++) {
            prop[_i0].expr->left.sym->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct symbol * benchRet = prop_get_symbol(prop);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_prop0; _aux++) {
          free(prop[_aux].expr);
          }
          free(prop);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_prop0 = 65025;
          struct property * prop = (struct property *) malloc(_len_prop0*sizeof(struct property));
          for(int _i0 = 0; _i0 < _len_prop0; _i0++) {
              int _len_prop__i0__expr0 = 1;
          prop[_i0].expr = (struct TYPE_4__ *) malloc(_len_prop__i0__expr0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_prop__i0__expr0; _j0++) {
            prop[_i0].expr->type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_prop__i0__expr_left_sym0 = 1;
          prop[_i0].expr->left.sym = (struct symbol *) malloc(_len_prop__i0__expr_left_sym0*sizeof(struct symbol));
          for(int _j0 = 0; _j0 < _len_prop__i0__expr_left_sym0; _j0++) {
            prop[_i0].expr->left.sym->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct symbol * benchRet = prop_get_symbol(prop);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_prop0; _aux++) {
          free(prop[_aux].expr);
          }
          free(prop);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_prop0 = 100;
          struct property * prop = (struct property *) malloc(_len_prop0*sizeof(struct property));
          for(int _i0 = 0; _i0 < _len_prop0; _i0++) {
              int _len_prop__i0__expr0 = 1;
          prop[_i0].expr = (struct TYPE_4__ *) malloc(_len_prop__i0__expr0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_prop__i0__expr0; _j0++) {
            prop[_i0].expr->type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_prop__i0__expr_left_sym0 = 1;
          prop[_i0].expr->left.sym = (struct symbol *) malloc(_len_prop__i0__expr_left_sym0*sizeof(struct symbol));
          for(int _j0 = 0; _j0 < _len_prop__i0__expr_left_sym0; _j0++) {
            prop[_i0].expr->left.sym->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct symbol * benchRet = prop_get_symbol(prop);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_prop0; _aux++) {
          free(prop[_aux].expr);
          }
          free(prop);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
