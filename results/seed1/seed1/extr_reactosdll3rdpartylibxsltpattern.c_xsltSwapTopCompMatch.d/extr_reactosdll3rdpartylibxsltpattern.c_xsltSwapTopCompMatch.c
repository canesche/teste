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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  xsltOp ;
typedef  TYPE_2__* xsltCompMatchPtr ;
typedef  int /*<<< orphan*/  xmlXPathCompExprPtr ;
typedef  int /*<<< orphan*/  xmlChar ;
struct TYPE_5__ {int nbStep; TYPE_1__* steps; } ;
struct TYPE_4__ {int previousExtra; int indexExtra; int lenExtra; int /*<<< orphan*/  comp; int /*<<< orphan*/  op; int /*<<< orphan*/ * value3; int /*<<< orphan*/ * value2; int /*<<< orphan*/ * value; } ;

/* Variables and functions */

__attribute__((used)) static void
xsltSwapTopCompMatch(xsltCompMatchPtr comp) {
    int i;
    int j = comp->nbStep - 1;

    if (j > 0) {
	register xmlChar *tmp;
	register xsltOp op;
	register xmlXPathCompExprPtr expr;
	register int t;
	i = j - 1;
	tmp = comp->steps[i].value;
	comp->steps[i].value = comp->steps[j].value;
	comp->steps[j].value = tmp;
	tmp = comp->steps[i].value2;
	comp->steps[i].value2 = comp->steps[j].value2;
	comp->steps[j].value2 = tmp;
	tmp = comp->steps[i].value3;
	comp->steps[i].value3 = comp->steps[j].value3;
	comp->steps[j].value3 = tmp;
	op = comp->steps[i].op;
	comp->steps[i].op = comp->steps[j].op;
	comp->steps[j].op = op;
	expr = comp->steps[i].comp;
	comp->steps[i].comp = comp->steps[j].comp;
	comp->steps[j].comp = expr;
	t = comp->steps[i].previousExtra;
	comp->steps[i].previousExtra = comp->steps[j].previousExtra;
	comp->steps[j].previousExtra = t;
	t = comp->steps[i].indexExtra;
	comp->steps[i].indexExtra = comp->steps[j].indexExtra;
	comp->steps[j].indexExtra = t;
	t = comp->steps[i].lenExtra;
	comp->steps[i].lenExtra = comp->steps[j].lenExtra;
	comp->steps[j].lenExtra = t;
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
          int _len_comp0 = 1;
          struct TYPE_5__ * comp = (struct TYPE_5__ *) malloc(_len_comp0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_comp0; _i0++) {
            comp[_i0].nbStep = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_comp__i0__steps0 = 1;
          comp[_i0].steps = (struct TYPE_4__ *) malloc(_len_comp__i0__steps0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_comp__i0__steps0; _j0++) {
            comp[_i0].steps->previousExtra = ((-2 * (next_i()%2)) + 1) * next_i();
        comp[_i0].steps->indexExtra = ((-2 * (next_i()%2)) + 1) * next_i();
        comp[_i0].steps->lenExtra = ((-2 * (next_i()%2)) + 1) * next_i();
        comp[_i0].steps->comp = ((-2 * (next_i()%2)) + 1) * next_i();
        comp[_i0].steps->op = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_comp__i0__steps_value30 = 1;
          comp[_i0].steps->value3 = (int *) malloc(_len_comp__i0__steps_value30*sizeof(int));
          for(int _j0 = 0; _j0 < _len_comp__i0__steps_value30; _j0++) {
            comp[_i0].steps->value3[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_comp__i0__steps_value20 = 1;
          comp[_i0].steps->value2 = (int *) malloc(_len_comp__i0__steps_value20*sizeof(int));
          for(int _j0 = 0; _j0 < _len_comp__i0__steps_value20; _j0++) {
            comp[_i0].steps->value2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_comp__i0__steps_value0 = 1;
          comp[_i0].steps->value = (int *) malloc(_len_comp__i0__steps_value0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_comp__i0__steps_value0; _j0++) {
            comp[_i0].steps->value[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          xsltSwapTopCompMatch(comp);
          for(int _aux = 0; _aux < _len_comp0; _aux++) {
          free(comp[_aux].steps);
          }
          free(comp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_comp0 = 65025;
          struct TYPE_5__ * comp = (struct TYPE_5__ *) malloc(_len_comp0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_comp0; _i0++) {
            comp[_i0].nbStep = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_comp__i0__steps0 = 1;
          comp[_i0].steps = (struct TYPE_4__ *) malloc(_len_comp__i0__steps0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_comp__i0__steps0; _j0++) {
            comp[_i0].steps->previousExtra = ((-2 * (next_i()%2)) + 1) * next_i();
        comp[_i0].steps->indexExtra = ((-2 * (next_i()%2)) + 1) * next_i();
        comp[_i0].steps->lenExtra = ((-2 * (next_i()%2)) + 1) * next_i();
        comp[_i0].steps->comp = ((-2 * (next_i()%2)) + 1) * next_i();
        comp[_i0].steps->op = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_comp__i0__steps_value30 = 1;
          comp[_i0].steps->value3 = (int *) malloc(_len_comp__i0__steps_value30*sizeof(int));
          for(int _j0 = 0; _j0 < _len_comp__i0__steps_value30; _j0++) {
            comp[_i0].steps->value3[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_comp__i0__steps_value20 = 1;
          comp[_i0].steps->value2 = (int *) malloc(_len_comp__i0__steps_value20*sizeof(int));
          for(int _j0 = 0; _j0 < _len_comp__i0__steps_value20; _j0++) {
            comp[_i0].steps->value2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_comp__i0__steps_value0 = 1;
          comp[_i0].steps->value = (int *) malloc(_len_comp__i0__steps_value0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_comp__i0__steps_value0; _j0++) {
            comp[_i0].steps->value[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          xsltSwapTopCompMatch(comp);
          for(int _aux = 0; _aux < _len_comp0; _aux++) {
          free(comp[_aux].steps);
          }
          free(comp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_comp0 = 100;
          struct TYPE_5__ * comp = (struct TYPE_5__ *) malloc(_len_comp0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_comp0; _i0++) {
            comp[_i0].nbStep = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_comp__i0__steps0 = 1;
          comp[_i0].steps = (struct TYPE_4__ *) malloc(_len_comp__i0__steps0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_comp__i0__steps0; _j0++) {
            comp[_i0].steps->previousExtra = ((-2 * (next_i()%2)) + 1) * next_i();
        comp[_i0].steps->indexExtra = ((-2 * (next_i()%2)) + 1) * next_i();
        comp[_i0].steps->lenExtra = ((-2 * (next_i()%2)) + 1) * next_i();
        comp[_i0].steps->comp = ((-2 * (next_i()%2)) + 1) * next_i();
        comp[_i0].steps->op = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_comp__i0__steps_value30 = 1;
          comp[_i0].steps->value3 = (int *) malloc(_len_comp__i0__steps_value30*sizeof(int));
          for(int _j0 = 0; _j0 < _len_comp__i0__steps_value30; _j0++) {
            comp[_i0].steps->value3[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_comp__i0__steps_value20 = 1;
          comp[_i0].steps->value2 = (int *) malloc(_len_comp__i0__steps_value20*sizeof(int));
          for(int _j0 = 0; _j0 < _len_comp__i0__steps_value20; _j0++) {
            comp[_i0].steps->value2[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_comp__i0__steps_value0 = 1;
          comp[_i0].steps->value = (int *) malloc(_len_comp__i0__steps_value0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_comp__i0__steps_value0; _j0++) {
            comp[_i0].steps->value[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          xsltSwapTopCompMatch(comp);
          for(int _aux = 0; _aux < _len_comp0; _aux++) {
          free(comp[_aux].steps);
          }
          free(comp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
