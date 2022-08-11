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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ count; int /*<<< orphan*/ * rightmost; int /*<<< orphan*/ * leftmost; int /*<<< orphan*/ * root; } ;
typedef  TYPE_1__ index_tree ;

/* Variables and functions */

__attribute__((used)) static void
index_tree_init(index_tree *tree)
{
	tree->root = NULL;
	tree->leftmost = NULL;
	tree->rightmost = NULL;
	tree->count = 0;
	return;
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
          int _len_tree0 = 1;
          struct TYPE_3__ * tree = (struct TYPE_3__ *) malloc(_len_tree0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tree0; _i0++) {
            tree[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tree__i0__rightmost0 = 1;
          tree[_i0].rightmost = (int *) malloc(_len_tree__i0__rightmost0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tree__i0__rightmost0; _j0++) {
            tree[_i0].rightmost[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tree__i0__leftmost0 = 1;
          tree[_i0].leftmost = (int *) malloc(_len_tree__i0__leftmost0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tree__i0__leftmost0; _j0++) {
            tree[_i0].leftmost[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tree__i0__root0 = 1;
          tree[_i0].root = (int *) malloc(_len_tree__i0__root0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tree__i0__root0; _j0++) {
            tree[_i0].root[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          index_tree_init(tree);
          for(int _aux = 0; _aux < _len_tree0; _aux++) {
          free(tree[_aux].rightmost);
          }
          for(int _aux = 0; _aux < _len_tree0; _aux++) {
          free(tree[_aux].leftmost);
          }
          for(int _aux = 0; _aux < _len_tree0; _aux++) {
          free(tree[_aux].root);
          }
          free(tree);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tree0 = 65025;
          struct TYPE_3__ * tree = (struct TYPE_3__ *) malloc(_len_tree0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tree0; _i0++) {
            tree[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tree__i0__rightmost0 = 1;
          tree[_i0].rightmost = (int *) malloc(_len_tree__i0__rightmost0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tree__i0__rightmost0; _j0++) {
            tree[_i0].rightmost[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tree__i0__leftmost0 = 1;
          tree[_i0].leftmost = (int *) malloc(_len_tree__i0__leftmost0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tree__i0__leftmost0; _j0++) {
            tree[_i0].leftmost[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tree__i0__root0 = 1;
          tree[_i0].root = (int *) malloc(_len_tree__i0__root0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tree__i0__root0; _j0++) {
            tree[_i0].root[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          index_tree_init(tree);
          for(int _aux = 0; _aux < _len_tree0; _aux++) {
          free(tree[_aux].rightmost);
          }
          for(int _aux = 0; _aux < _len_tree0; _aux++) {
          free(tree[_aux].leftmost);
          }
          for(int _aux = 0; _aux < _len_tree0; _aux++) {
          free(tree[_aux].root);
          }
          free(tree);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tree0 = 100;
          struct TYPE_3__ * tree = (struct TYPE_3__ *) malloc(_len_tree0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tree0; _i0++) {
            tree[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tree__i0__rightmost0 = 1;
          tree[_i0].rightmost = (int *) malloc(_len_tree__i0__rightmost0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tree__i0__rightmost0; _j0++) {
            tree[_i0].rightmost[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tree__i0__leftmost0 = 1;
          tree[_i0].leftmost = (int *) malloc(_len_tree__i0__leftmost0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tree__i0__leftmost0; _j0++) {
            tree[_i0].leftmost[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tree__i0__root0 = 1;
          tree[_i0].root = (int *) malloc(_len_tree__i0__root0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tree__i0__root0; _j0++) {
            tree[_i0].root[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          index_tree_init(tree);
          for(int _aux = 0; _aux < _len_tree0; _aux++) {
          free(tree[_aux].rightmost);
          }
          for(int _aux = 0; _aux < _len_tree0; _aux++) {
          free(tree[_aux].leftmost);
          }
          for(int _aux = 0; _aux < _len_tree0; _aux++) {
          free(tree[_aux].root);
          }
          free(tree);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
