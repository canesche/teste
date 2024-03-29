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
struct dlm_recover {int nodes_count; struct dlm_config_node* nodes; } ;
struct dlm_config_node {int nodeid; } ;

/* Variables and functions */

__attribute__((used)) static struct dlm_config_node *find_config_node(struct dlm_recover *rv,
						int nodeid)
{
	int i;

	for (i = 0; i < rv->nodes_count; i++) {
		if (rv->nodes[i].nodeid == nodeid)
			return &rv->nodes[i];
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
          int nodeid = 100;
          int _len_rv0 = 1;
          struct dlm_recover * rv = (struct dlm_recover *) malloc(_len_rv0*sizeof(struct dlm_recover));
          for(int _i0 = 0; _i0 < _len_rv0; _i0++) {
            rv[_i0].nodes_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rv__i0__nodes0 = 1;
          rv[_i0].nodes = (struct dlm_config_node *) malloc(_len_rv__i0__nodes0*sizeof(struct dlm_config_node));
          for(int _j0 = 0; _j0 < _len_rv__i0__nodes0; _j0++) {
            rv[_i0].nodes->nodeid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct dlm_config_node * benchRet = find_config_node(rv,nodeid);
          printf("%d\n", (*benchRet).nodeid);
          for(int _aux = 0; _aux < _len_rv0; _aux++) {
          free(rv[_aux].nodes);
          }
          free(rv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int nodeid = 255;
          int _len_rv0 = 65025;
          struct dlm_recover * rv = (struct dlm_recover *) malloc(_len_rv0*sizeof(struct dlm_recover));
          for(int _i0 = 0; _i0 < _len_rv0; _i0++) {
            rv[_i0].nodes_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rv__i0__nodes0 = 1;
          rv[_i0].nodes = (struct dlm_config_node *) malloc(_len_rv__i0__nodes0*sizeof(struct dlm_config_node));
          for(int _j0 = 0; _j0 < _len_rv__i0__nodes0; _j0++) {
            rv[_i0].nodes->nodeid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct dlm_config_node * benchRet = find_config_node(rv,nodeid);
          printf("%d\n", (*benchRet).nodeid);
          for(int _aux = 0; _aux < _len_rv0; _aux++) {
          free(rv[_aux].nodes);
          }
          free(rv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int nodeid = 10;
          int _len_rv0 = 100;
          struct dlm_recover * rv = (struct dlm_recover *) malloc(_len_rv0*sizeof(struct dlm_recover));
          for(int _i0 = 0; _i0 < _len_rv0; _i0++) {
            rv[_i0].nodes_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rv__i0__nodes0 = 1;
          rv[_i0].nodes = (struct dlm_config_node *) malloc(_len_rv__i0__nodes0*sizeof(struct dlm_config_node));
          for(int _j0 = 0; _j0 < _len_rv__i0__nodes0; _j0++) {
            rv[_i0].nodes->nodeid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct dlm_config_node * benchRet = find_config_node(rv,nodeid);
          printf("%d\n", (*benchRet).nodeid);
          for(int _aux = 0; _aux < _len_rv0; _aux++) {
          free(rv[_aux].nodes);
          }
          free(rv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
