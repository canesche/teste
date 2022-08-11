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
struct cpuinfo_tree {struct cpuinfo_node* nodes; } ;
struct cpuinfo_node {int level; scalar_t__ rover; scalar_t__ child_end; scalar_t__ child_start; size_t parent_index; } ;

/* Variables and functions */
 int const ROVER_INC_PARENT_ON_LOOP ; 

__attribute__((used)) static void increment_rover(struct cpuinfo_tree *t, int node_index,
                            int root_index, const int *rover_inc_table)
{
	struct cpuinfo_node *node = &t->nodes[node_index];
	int top_level, level;

	top_level = t->nodes[root_index].level;
	for (level = node->level; level >= top_level; level--) {
		node->rover++;
		if (node->rover <= node->child_end)
			return;

		node->rover = node->child_start;
		/* If parent's rover does not need to be adjusted, stop here. */
		if ((level == top_level) ||
		    !(rover_inc_table[level] & ROVER_INC_PARENT_ON_LOOP))
			return;

		node = &t->nodes[node->parent_index];
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
          int node_index = 100;
          int root_index = 100;
          int _len_t0 = 1;
          struct cpuinfo_tree * t = (struct cpuinfo_tree *) malloc(_len_t0*sizeof(struct cpuinfo_tree));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              int _len_t__i0__nodes0 = 1;
          t[_i0].nodes = (struct cpuinfo_node *) malloc(_len_t__i0__nodes0*sizeof(struct cpuinfo_node));
          for(int _j0 = 0; _j0 < _len_t__i0__nodes0; _j0++) {
            t[_i0].nodes->level = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].nodes->rover = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].nodes->child_end = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].nodes->child_start = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].nodes->parent_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rover_inc_table0 = 1;
          const int * rover_inc_table = (const int *) malloc(_len_rover_inc_table0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_rover_inc_table0; _i0++) {
            rover_inc_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          increment_rover(t,node_index,root_index,rover_inc_table);
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].nodes);
          }
          free(t);
          free(rover_inc_table);
        
        break;
    }
    // big-arr
    case 1:
    {
          int node_index = 255;
          int root_index = 255;
          int _len_t0 = 65025;
          struct cpuinfo_tree * t = (struct cpuinfo_tree *) malloc(_len_t0*sizeof(struct cpuinfo_tree));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              int _len_t__i0__nodes0 = 1;
          t[_i0].nodes = (struct cpuinfo_node *) malloc(_len_t__i0__nodes0*sizeof(struct cpuinfo_node));
          for(int _j0 = 0; _j0 < _len_t__i0__nodes0; _j0++) {
            t[_i0].nodes->level = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].nodes->rover = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].nodes->child_end = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].nodes->child_start = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].nodes->parent_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rover_inc_table0 = 65025;
          const int * rover_inc_table = (const int *) malloc(_len_rover_inc_table0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_rover_inc_table0; _i0++) {
            rover_inc_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          increment_rover(t,node_index,root_index,rover_inc_table);
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].nodes);
          }
          free(t);
          free(rover_inc_table);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int node_index = 10;
          int root_index = 10;
          int _len_t0 = 100;
          struct cpuinfo_tree * t = (struct cpuinfo_tree *) malloc(_len_t0*sizeof(struct cpuinfo_tree));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
              int _len_t__i0__nodes0 = 1;
          t[_i0].nodes = (struct cpuinfo_node *) malloc(_len_t__i0__nodes0*sizeof(struct cpuinfo_node));
          for(int _j0 = 0; _j0 < _len_t__i0__nodes0; _j0++) {
            t[_i0].nodes->level = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].nodes->rover = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].nodes->child_end = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].nodes->child_start = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].nodes->parent_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rover_inc_table0 = 100;
          const int * rover_inc_table = (const int *) malloc(_len_rover_inc_table0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_rover_inc_table0; _i0++) {
            rover_inc_table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          increment_rover(t,node_index,root_index,rover_inc_table);
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].nodes);
          }
          free(t);
          free(rover_inc_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
