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
struct git_graph {int num_new_columns; struct column* new_columns; } ;
struct commit {int dummy; } ;
struct column {struct commit* commit; } ;

/* Variables and functions */

__attribute__((used)) static struct column *find_new_column_by_commit(struct git_graph *graph,
						struct commit *commit)
{
	int i;
	for (i = 0; i < graph->num_new_columns; i++) {
		if (graph->new_columns[i].commit == commit)
			return &graph->new_columns[i];
	}
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
          int _len_graph0 = 1;
          struct git_graph * graph = (struct git_graph *) malloc(_len_graph0*sizeof(struct git_graph));
          for(int _i0 = 0; _i0 < _len_graph0; _i0++) {
            graph[_i0].num_new_columns = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_graph__i0__new_columns0 = 1;
          graph[_i0].new_columns = (struct column *) malloc(_len_graph__i0__new_columns0*sizeof(struct column));
          for(int _j0 = 0; _j0 < _len_graph__i0__new_columns0; _j0++) {
              int _len_graph__i0__new_columns_commit0 = 1;
          graph[_i0].new_columns->commit = (struct commit *) malloc(_len_graph__i0__new_columns_commit0*sizeof(struct commit));
          for(int _j0 = 0; _j0 < _len_graph__i0__new_columns_commit0; _j0++) {
            graph[_i0].new_columns->commit->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_commit0 = 1;
          struct commit * commit = (struct commit *) malloc(_len_commit0*sizeof(struct commit));
          for(int _i0 = 0; _i0 < _len_commit0; _i0++) {
            commit[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct column * benchRet = find_new_column_by_commit(graph,commit);
          for(int _aux = 0; _aux < _len_graph0; _aux++) {
          free(graph[_aux].new_columns);
          }
          free(graph);
          free(commit);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_graph0 = 65025;
          struct git_graph * graph = (struct git_graph *) malloc(_len_graph0*sizeof(struct git_graph));
          for(int _i0 = 0; _i0 < _len_graph0; _i0++) {
            graph[_i0].num_new_columns = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_graph__i0__new_columns0 = 1;
          graph[_i0].new_columns = (struct column *) malloc(_len_graph__i0__new_columns0*sizeof(struct column));
          for(int _j0 = 0; _j0 < _len_graph__i0__new_columns0; _j0++) {
              int _len_graph__i0__new_columns_commit0 = 1;
          graph[_i0].new_columns->commit = (struct commit *) malloc(_len_graph__i0__new_columns_commit0*sizeof(struct commit));
          for(int _j0 = 0; _j0 < _len_graph__i0__new_columns_commit0; _j0++) {
            graph[_i0].new_columns->commit->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_commit0 = 65025;
          struct commit * commit = (struct commit *) malloc(_len_commit0*sizeof(struct commit));
          for(int _i0 = 0; _i0 < _len_commit0; _i0++) {
            commit[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct column * benchRet = find_new_column_by_commit(graph,commit);
          for(int _aux = 0; _aux < _len_graph0; _aux++) {
          free(graph[_aux].new_columns);
          }
          free(graph);
          free(commit);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_graph0 = 100;
          struct git_graph * graph = (struct git_graph *) malloc(_len_graph0*sizeof(struct git_graph));
          for(int _i0 = 0; _i0 < _len_graph0; _i0++) {
            graph[_i0].num_new_columns = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_graph__i0__new_columns0 = 1;
          graph[_i0].new_columns = (struct column *) malloc(_len_graph__i0__new_columns0*sizeof(struct column));
          for(int _j0 = 0; _j0 < _len_graph__i0__new_columns0; _j0++) {
              int _len_graph__i0__new_columns_commit0 = 1;
          graph[_i0].new_columns->commit = (struct commit *) malloc(_len_graph__i0__new_columns_commit0*sizeof(struct commit));
          for(int _j0 = 0; _j0 < _len_graph__i0__new_columns_commit0; _j0++) {
            graph[_i0].new_columns->commit->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_commit0 = 100;
          struct commit * commit = (struct commit *) malloc(_len_commit0*sizeof(struct commit));
          for(int _i0 = 0; _i0 < _len_commit0; _i0++) {
            commit[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct column * benchRet = find_new_column_by_commit(graph,commit);
          for(int _aux = 0; _aux < _len_graph0; _aux++) {
          free(graph[_aux].new_columns);
          }
          free(graph);
          free(commit);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
