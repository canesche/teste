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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {TYPE_3__* columns; } ;
struct TYPE_6__ {TYPE_1__* columns; } ;
struct graph_v2 {int prev_position; TYPE_4__ prev_row; TYPE_2__ row; } ;
struct TYPE_7__ {scalar_t__ id; } ;
struct TYPE_5__ {scalar_t__ id; } ;

/* Variables and functions */

__attribute__((used)) static bool
below_commit(int pos, struct graph_v2 *graph)
{
	if (pos != graph->prev_position)
		return false;

	if (graph->row.columns[pos].id != graph->prev_row.columns[pos].id)
		return false;

	return true;
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
          int pos = 100;
          int _len_graph0 = 1;
          struct graph_v2 * graph = (struct graph_v2 *) malloc(_len_graph0*sizeof(struct graph_v2));
          for(int _i0 = 0; _i0 < _len_graph0; _i0++) {
            graph[_i0].prev_position = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_graph__i0__prev_row_columns0 = 1;
          graph[_i0].prev_row.columns = (struct TYPE_7__ *) malloc(_len_graph__i0__prev_row_columns0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_graph__i0__prev_row_columns0; _j0++) {
            graph[_i0].prev_row.columns->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_graph__i0__row_columns0 = 1;
          graph[_i0].row.columns = (struct TYPE_5__ *) malloc(_len_graph__i0__row_columns0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_graph__i0__row_columns0; _j0++) {
            graph[_i0].row.columns->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = below_commit(pos,graph);
          printf("%d\n", benchRet); 
          free(graph);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pos = 255;
          int _len_graph0 = 65025;
          struct graph_v2 * graph = (struct graph_v2 *) malloc(_len_graph0*sizeof(struct graph_v2));
          for(int _i0 = 0; _i0 < _len_graph0; _i0++) {
            graph[_i0].prev_position = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_graph__i0__prev_row_columns0 = 1;
          graph[_i0].prev_row.columns = (struct TYPE_7__ *) malloc(_len_graph__i0__prev_row_columns0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_graph__i0__prev_row_columns0; _j0++) {
            graph[_i0].prev_row.columns->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_graph__i0__row_columns0 = 1;
          graph[_i0].row.columns = (struct TYPE_5__ *) malloc(_len_graph__i0__row_columns0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_graph__i0__row_columns0; _j0++) {
            graph[_i0].row.columns->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = below_commit(pos,graph);
          printf("%d\n", benchRet); 
          free(graph);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pos = 10;
          int _len_graph0 = 100;
          struct graph_v2 * graph = (struct graph_v2 *) malloc(_len_graph0*sizeof(struct graph_v2));
          for(int _i0 = 0; _i0 < _len_graph0; _i0++) {
            graph[_i0].prev_position = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_graph__i0__prev_row_columns0 = 1;
          graph[_i0].prev_row.columns = (struct TYPE_7__ *) malloc(_len_graph__i0__prev_row_columns0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_graph__i0__prev_row_columns0; _j0++) {
            graph[_i0].prev_row.columns->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_graph__i0__row_columns0 = 1;
          graph[_i0].row.columns = (struct TYPE_5__ *) malloc(_len_graph__i0__row_columns0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_graph__i0__row_columns0; _j0++) {
            graph[_i0].row.columns->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = below_commit(pos,graph);
          printf("%d\n", benchRet); 
          free(graph);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
