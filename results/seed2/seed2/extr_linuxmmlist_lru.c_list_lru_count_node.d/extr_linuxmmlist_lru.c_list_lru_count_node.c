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
       3            linked\n\
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
struct list_lru_node {unsigned long nr_items; } ;
struct list_lru {struct list_lru_node* node; } ;

/* Variables and functions */

unsigned long list_lru_count_node(struct list_lru *lru, int nid)
{
	struct list_lru_node *nlru;

	nlru = &lru->node[nid];
	return nlru->nr_items;
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
          int nid = 100;
          int _len_lru0 = 1;
          struct list_lru * lru = (struct list_lru *) malloc(_len_lru0*sizeof(struct list_lru));
          for(int _i0 = 0; _i0 < _len_lru0; _i0++) {
              int _len_lru__i0__node0 = 1;
          lru[_i0].node = (struct list_lru_node *) malloc(_len_lru__i0__node0*sizeof(struct list_lru_node));
          for(int _j0 = 0; _j0 < _len_lru__i0__node0; _j0++) {
            lru[_i0].node->nr_items = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = list_lru_count_node(lru,nid);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_lru0; _aux++) {
          free(lru[_aux].node);
          }
          free(lru);
        
        break;
    }
    // big-arr
    case 1:
    {
          int nid = 255;
          int _len_lru0 = 65025;
          struct list_lru * lru = (struct list_lru *) malloc(_len_lru0*sizeof(struct list_lru));
          for(int _i0 = 0; _i0 < _len_lru0; _i0++) {
              int _len_lru__i0__node0 = 1;
          lru[_i0].node = (struct list_lru_node *) malloc(_len_lru__i0__node0*sizeof(struct list_lru_node));
          for(int _j0 = 0; _j0 < _len_lru__i0__node0; _j0++) {
            lru[_i0].node->nr_items = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = list_lru_count_node(lru,nid);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_lru0; _aux++) {
          free(lru[_aux].node);
          }
          free(lru);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int nid = 10;
          int _len_lru0 = 100;
          struct list_lru * lru = (struct list_lru *) malloc(_len_lru0*sizeof(struct list_lru));
          for(int _i0 = 0; _i0 < _len_lru0; _i0++) {
              int _len_lru__i0__node0 = 1;
          lru[_i0].node = (struct list_lru_node *) malloc(_len_lru__i0__node0*sizeof(struct list_lru_node));
          for(int _j0 = 0; _j0 < _len_lru__i0__node0; _j0++) {
            lru[_i0].node->nr_items = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = list_lru_count_node(lru,nid);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_lru0; _aux++) {
          free(lru[_aux].node);
          }
          free(lru);
        
        break;
    }
    // linked
    case 3:
    {
          int nid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lru0 = 1;
          struct list_lru * lru = (struct list_lru *) malloc(_len_lru0*sizeof(struct list_lru));
          for(int _i0 = 0; _i0 < _len_lru0; _i0++) {
              int _len_lru__i0__node0 = 1;
          lru[_i0].node = (struct list_lru_node *) malloc(_len_lru__i0__node0*sizeof(struct list_lru_node));
          for(int _j0 = 0; _j0 < _len_lru__i0__node0; _j0++) {
            lru[_i0].node->nr_items = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = list_lru_count_node(lru,nid);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_lru0; _aux++) {
          free(lru[_aux].node);
          }
          free(lru);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
