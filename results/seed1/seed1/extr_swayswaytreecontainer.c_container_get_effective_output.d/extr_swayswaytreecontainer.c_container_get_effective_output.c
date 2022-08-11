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
struct sway_output {int dummy; } ;
struct sway_container {TYPE_1__* outputs; } ;
struct TYPE_2__ {int length; struct sway_output** items; } ;

/* Variables and functions */

struct sway_output *container_get_effective_output(struct sway_container *con) {
	if (con->outputs->length == 0) {
		return NULL;
	}
	return con->outputs->items[con->outputs->length - 1];
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
          int _len_con0 = 1;
          struct sway_container * con = (struct sway_container *) malloc(_len_con0*sizeof(struct sway_container));
          for(int _i0 = 0; _i0 < _len_con0; _i0++) {
              int _len_con__i0__outputs0 = 1;
          con[_i0].outputs = (struct TYPE_2__ *) malloc(_len_con__i0__outputs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_con__i0__outputs0; _j0++) {
            con[_i0].outputs->length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_con__i0__outputs_items0 = 1;
          con[_i0].outputs->items = (struct sway_output **) malloc(_len_con__i0__outputs_items0*sizeof(struct sway_output *));
          for(int _j0 = 0; _j0 < _len_con__i0__outputs_items0; _j0++) {
            int _len_con__i0__outputs_items1 = 1;
            con[_i0].outputs->items[_j0] = (struct sway_output *) malloc(_len_con__i0__outputs_items1*sizeof(struct sway_output));
            for(int _j1 = 0; _j1 < _len_con__i0__outputs_items1; _j1++) {
              con[_i0].outputs->items[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct sway_output * benchRet = container_get_effective_output(con);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_con0; _aux++) {
          free(con[_aux].outputs);
          }
          free(con);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_con0 = 65025;
          struct sway_container * con = (struct sway_container *) malloc(_len_con0*sizeof(struct sway_container));
          for(int _i0 = 0; _i0 < _len_con0; _i0++) {
              int _len_con__i0__outputs0 = 1;
          con[_i0].outputs = (struct TYPE_2__ *) malloc(_len_con__i0__outputs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_con__i0__outputs0; _j0++) {
            con[_i0].outputs->length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_con__i0__outputs_items0 = 1;
          con[_i0].outputs->items = (struct sway_output **) malloc(_len_con__i0__outputs_items0*sizeof(struct sway_output *));
          for(int _j0 = 0; _j0 < _len_con__i0__outputs_items0; _j0++) {
            int _len_con__i0__outputs_items1 = 1;
            con[_i0].outputs->items[_j0] = (struct sway_output *) malloc(_len_con__i0__outputs_items1*sizeof(struct sway_output));
            for(int _j1 = 0; _j1 < _len_con__i0__outputs_items1; _j1++) {
              con[_i0].outputs->items[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct sway_output * benchRet = container_get_effective_output(con);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_con0; _aux++) {
          free(con[_aux].outputs);
          }
          free(con);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_con0 = 100;
          struct sway_container * con = (struct sway_container *) malloc(_len_con0*sizeof(struct sway_container));
          for(int _i0 = 0; _i0 < _len_con0; _i0++) {
              int _len_con__i0__outputs0 = 1;
          con[_i0].outputs = (struct TYPE_2__ *) malloc(_len_con__i0__outputs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_con__i0__outputs0; _j0++) {
            con[_i0].outputs->length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_con__i0__outputs_items0 = 1;
          con[_i0].outputs->items = (struct sway_output **) malloc(_len_con__i0__outputs_items0*sizeof(struct sway_output *));
          for(int _j0 = 0; _j0 < _len_con__i0__outputs_items0; _j0++) {
            int _len_con__i0__outputs_items1 = 1;
            con[_i0].outputs->items[_j0] = (struct sway_output *) malloc(_len_con__i0__outputs_items1*sizeof(struct sway_output));
            for(int _j1 = 0; _j1 < _len_con__i0__outputs_items1; _j1++) {
              con[_i0].outputs->items[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct sway_output * benchRet = container_get_effective_output(con);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_con0; _aux++) {
          free(con[_aux].outputs);
          }
          free(con);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
