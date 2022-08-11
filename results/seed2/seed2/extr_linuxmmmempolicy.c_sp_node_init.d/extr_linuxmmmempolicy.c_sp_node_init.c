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
struct sp_node {unsigned long start; unsigned long end; struct mempolicy* policy; } ;
struct mempolicy {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void sp_node_init(struct sp_node *node, unsigned long start,
			unsigned long end, struct mempolicy *pol)
{
	node->start = start;
	node->end = end;
	node->policy = pol;
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
          unsigned long start = 100;
          unsigned long end = 100;
          int _len_node0 = 1;
          struct sp_node * node = (struct sp_node *) malloc(_len_node0*sizeof(struct sp_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        node[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_node__i0__policy0 = 1;
          node[_i0].policy = (struct mempolicy *) malloc(_len_node__i0__policy0*sizeof(struct mempolicy));
          for(int _j0 = 0; _j0 < _len_node__i0__policy0; _j0++) {
            node[_i0].policy->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pol0 = 1;
          struct mempolicy * pol = (struct mempolicy *) malloc(_len_pol0*sizeof(struct mempolicy));
          for(int _i0 = 0; _i0 < _len_pol0; _i0++) {
            pol[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sp_node_init(node,start,end,pol);
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(node[_aux].policy);
          }
          free(node);
          free(pol);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long start = 255;
          unsigned long end = 255;
          int _len_node0 = 65025;
          struct sp_node * node = (struct sp_node *) malloc(_len_node0*sizeof(struct sp_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        node[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_node__i0__policy0 = 1;
          node[_i0].policy = (struct mempolicy *) malloc(_len_node__i0__policy0*sizeof(struct mempolicy));
          for(int _j0 = 0; _j0 < _len_node__i0__policy0; _j0++) {
            node[_i0].policy->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pol0 = 65025;
          struct mempolicy * pol = (struct mempolicy *) malloc(_len_pol0*sizeof(struct mempolicy));
          for(int _i0 = 0; _i0 < _len_pol0; _i0++) {
            pol[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sp_node_init(node,start,end,pol);
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(node[_aux].policy);
          }
          free(node);
          free(pol);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long start = 10;
          unsigned long end = 10;
          int _len_node0 = 100;
          struct sp_node * node = (struct sp_node *) malloc(_len_node0*sizeof(struct sp_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        node[_i0].end = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_node__i0__policy0 = 1;
          node[_i0].policy = (struct mempolicy *) malloc(_len_node__i0__policy0*sizeof(struct mempolicy));
          for(int _j0 = 0; _j0 < _len_node__i0__policy0; _j0++) {
            node[_i0].policy->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pol0 = 100;
          struct mempolicy * pol = (struct mempolicy *) malloc(_len_pol0*sizeof(struct mempolicy));
          for(int _i0 = 0; _i0 < _len_pol0; _i0++) {
            pol[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sp_node_init(node,start,end,pol);
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(node[_aux].policy);
          }
          free(node);
          free(pol);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
