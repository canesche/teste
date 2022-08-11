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
struct kmem_cache_node {int dummy; } ;
struct kmem_cache {struct kmem_cache_node** node; } ;

/* Variables and functions */

__attribute__((used)) static inline struct kmem_cache_node *get_node(struct kmem_cache *s, int node)
{
	return s->node[node];
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
          int node = 100;
          int _len_s0 = 1;
          struct kmem_cache * s = (struct kmem_cache *) malloc(_len_s0*sizeof(struct kmem_cache));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__node0 = 1;
          s[_i0].node = (struct kmem_cache_node **) malloc(_len_s__i0__node0*sizeof(struct kmem_cache_node *));
          for(int _j0 = 0; _j0 < _len_s__i0__node0; _j0++) {
            int _len_s__i0__node1 = 1;
            s[_i0].node[_j0] = (struct kmem_cache_node *) malloc(_len_s__i0__node1*sizeof(struct kmem_cache_node));
            for(int _j1 = 0; _j1 < _len_s__i0__node1; _j1++) {
              s[_i0].node[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct kmem_cache_node * benchRet = get_node(s,node);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].node));
        free(s[_aux].node);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int node = 255;
          int _len_s0 = 65025;
          struct kmem_cache * s = (struct kmem_cache *) malloc(_len_s0*sizeof(struct kmem_cache));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__node0 = 1;
          s[_i0].node = (struct kmem_cache_node **) malloc(_len_s__i0__node0*sizeof(struct kmem_cache_node *));
          for(int _j0 = 0; _j0 < _len_s__i0__node0; _j0++) {
            int _len_s__i0__node1 = 1;
            s[_i0].node[_j0] = (struct kmem_cache_node *) malloc(_len_s__i0__node1*sizeof(struct kmem_cache_node));
            for(int _j1 = 0; _j1 < _len_s__i0__node1; _j1++) {
              s[_i0].node[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct kmem_cache_node * benchRet = get_node(s,node);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].node));
        free(s[_aux].node);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int node = 10;
          int _len_s0 = 100;
          struct kmem_cache * s = (struct kmem_cache *) malloc(_len_s0*sizeof(struct kmem_cache));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__node0 = 1;
          s[_i0].node = (struct kmem_cache_node **) malloc(_len_s__i0__node0*sizeof(struct kmem_cache_node *));
          for(int _j0 = 0; _j0 < _len_s__i0__node0; _j0++) {
            int _len_s__i0__node1 = 1;
            s[_i0].node[_j0] = (struct kmem_cache_node *) malloc(_len_s__i0__node1*sizeof(struct kmem_cache_node));
            for(int _j1 = 0; _j1 < _len_s__i0__node1; _j1++) {
              s[_i0].node[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct kmem_cache_node * benchRet = get_node(s,node);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].node));
        free(s[_aux].node);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
