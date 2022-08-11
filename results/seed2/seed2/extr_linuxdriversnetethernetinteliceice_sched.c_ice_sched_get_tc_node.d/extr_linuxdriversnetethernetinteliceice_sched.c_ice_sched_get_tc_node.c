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
typedef  size_t u8 ;
struct ice_sched_node {size_t tc_num; } ;
struct ice_port_info {TYPE_1__* root; } ;
struct TYPE_2__ {size_t num_children; struct ice_sched_node** children; } ;

/* Variables and functions */

struct ice_sched_node *ice_sched_get_tc_node(struct ice_port_info *pi, u8 tc)
{
	u8 i;

	if (!pi)
		return NULL;
	for (i = 0; i < pi->root->num_children; i++)
		if (pi->root->children[i]->tc_num == tc)
			return pi->root->children[i];
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
          unsigned long tc = 100;
          int _len_pi0 = 1;
          struct ice_port_info * pi = (struct ice_port_info *) malloc(_len_pi0*sizeof(struct ice_port_info));
          for(int _i0 = 0; _i0 < _len_pi0; _i0++) {
              int _len_pi__i0__root0 = 1;
          pi[_i0].root = (struct TYPE_2__ *) malloc(_len_pi__i0__root0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pi__i0__root0; _j0++) {
            pi[_i0].root->num_children = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pi__i0__root_children0 = 1;
          pi[_i0].root->children = (struct ice_sched_node **) malloc(_len_pi__i0__root_children0*sizeof(struct ice_sched_node *));
          for(int _j0 = 0; _j0 < _len_pi__i0__root_children0; _j0++) {
            int _len_pi__i0__root_children1 = 1;
            pi[_i0].root->children[_j0] = (struct ice_sched_node *) malloc(_len_pi__i0__root_children1*sizeof(struct ice_sched_node));
            for(int _j1 = 0; _j1 < _len_pi__i0__root_children1; _j1++) {
              pi[_i0].root->children[_j0]->tc_num = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct ice_sched_node * benchRet = ice_sched_get_tc_node(pi,tc);
          printf("%lu\n", (*benchRet).tc_num);
          for(int _aux = 0; _aux < _len_pi0; _aux++) {
          free(pi[_aux].root);
          }
          free(pi);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long tc = 255;
          int _len_pi0 = 65025;
          struct ice_port_info * pi = (struct ice_port_info *) malloc(_len_pi0*sizeof(struct ice_port_info));
          for(int _i0 = 0; _i0 < _len_pi0; _i0++) {
              int _len_pi__i0__root0 = 1;
          pi[_i0].root = (struct TYPE_2__ *) malloc(_len_pi__i0__root0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pi__i0__root0; _j0++) {
            pi[_i0].root->num_children = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pi__i0__root_children0 = 1;
          pi[_i0].root->children = (struct ice_sched_node **) malloc(_len_pi__i0__root_children0*sizeof(struct ice_sched_node *));
          for(int _j0 = 0; _j0 < _len_pi__i0__root_children0; _j0++) {
            int _len_pi__i0__root_children1 = 1;
            pi[_i0].root->children[_j0] = (struct ice_sched_node *) malloc(_len_pi__i0__root_children1*sizeof(struct ice_sched_node));
            for(int _j1 = 0; _j1 < _len_pi__i0__root_children1; _j1++) {
              pi[_i0].root->children[_j0]->tc_num = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct ice_sched_node * benchRet = ice_sched_get_tc_node(pi,tc);
          printf("%lu\n", (*benchRet).tc_num);
          for(int _aux = 0; _aux < _len_pi0; _aux++) {
          free(pi[_aux].root);
          }
          free(pi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long tc = 10;
          int _len_pi0 = 100;
          struct ice_port_info * pi = (struct ice_port_info *) malloc(_len_pi0*sizeof(struct ice_port_info));
          for(int _i0 = 0; _i0 < _len_pi0; _i0++) {
              int _len_pi__i0__root0 = 1;
          pi[_i0].root = (struct TYPE_2__ *) malloc(_len_pi__i0__root0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pi__i0__root0; _j0++) {
            pi[_i0].root->num_children = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pi__i0__root_children0 = 1;
          pi[_i0].root->children = (struct ice_sched_node **) malloc(_len_pi__i0__root_children0*sizeof(struct ice_sched_node *));
          for(int _j0 = 0; _j0 < _len_pi__i0__root_children0; _j0++) {
            int _len_pi__i0__root_children1 = 1;
            pi[_i0].root->children[_j0] = (struct ice_sched_node *) malloc(_len_pi__i0__root_children1*sizeof(struct ice_sched_node));
            for(int _j1 = 0; _j1 < _len_pi__i0__root_children1; _j1++) {
              pi[_i0].root->children[_j0]->tc_num = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct ice_sched_node * benchRet = ice_sched_get_tc_node(pi,tc);
          printf("%lu\n", (*benchRet).tc_num);
          for(int _aux = 0; _aux < _len_pi0; _aux++) {
          free(pi[_aux].root);
          }
          free(pi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
