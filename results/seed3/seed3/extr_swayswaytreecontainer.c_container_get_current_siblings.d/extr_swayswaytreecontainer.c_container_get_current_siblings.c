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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {TYPE_4__* workspace; TYPE_2__* parent; } ;
struct sway_container {TYPE_5__ current; } ;
typedef  int /*<<< orphan*/  list_t ;
struct TYPE_8__ {int /*<<< orphan*/ * tiling; } ;
struct TYPE_9__ {TYPE_3__ current; } ;
struct TYPE_6__ {int /*<<< orphan*/ * children; } ;
struct TYPE_7__ {TYPE_1__ current; } ;

/* Variables and functions */

list_t *container_get_current_siblings(struct sway_container *container) {
	if (container->current.parent) {
		return container->current.parent->current.children;
	}
	return container->current.workspace->current.tiling;
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
          int _len_container0 = 1;
          struct sway_container * container = (struct sway_container *) malloc(_len_container0*sizeof(struct sway_container));
          for(int _i0 = 0; _i0 < _len_container0; _i0++) {
              int _len_container__i0__current_workspace0 = 1;
          container[_i0].current.workspace = (struct TYPE_9__ *) malloc(_len_container__i0__current_workspace0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_container__i0__current_workspace0; _j0++) {
              int _len_container__i0__current_workspace_current_tiling0 = 1;
          container[_i0].current.workspace->current.tiling = (int *) malloc(_len_container__i0__current_workspace_current_tiling0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_container__i0__current_workspace_current_tiling0; _j0++) {
            container[_i0].current.workspace->current.tiling[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_container__i0__current_parent0 = 1;
          container[_i0].current.parent = (struct TYPE_7__ *) malloc(_len_container__i0__current_parent0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_container__i0__current_parent0; _j0++) {
              int _len_container__i0__current_parent_current_children0 = 1;
          container[_i0].current.parent->current.children = (int *) malloc(_len_container__i0__current_parent_current_children0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_container__i0__current_parent_current_children0; _j0++) {
            container[_i0].current.parent->current.children[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int * benchRet = container_get_current_siblings(container);
          printf("%d\n", (*benchRet)); 
          free(container);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_container0 = 65025;
          struct sway_container * container = (struct sway_container *) malloc(_len_container0*sizeof(struct sway_container));
          for(int _i0 = 0; _i0 < _len_container0; _i0++) {
              int _len_container__i0__current_workspace0 = 1;
          container[_i0].current.workspace = (struct TYPE_9__ *) malloc(_len_container__i0__current_workspace0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_container__i0__current_workspace0; _j0++) {
              int _len_container__i0__current_workspace_current_tiling0 = 1;
          container[_i0].current.workspace->current.tiling = (int *) malloc(_len_container__i0__current_workspace_current_tiling0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_container__i0__current_workspace_current_tiling0; _j0++) {
            container[_i0].current.workspace->current.tiling[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_container__i0__current_parent0 = 1;
          container[_i0].current.parent = (struct TYPE_7__ *) malloc(_len_container__i0__current_parent0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_container__i0__current_parent0; _j0++) {
              int _len_container__i0__current_parent_current_children0 = 1;
          container[_i0].current.parent->current.children = (int *) malloc(_len_container__i0__current_parent_current_children0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_container__i0__current_parent_current_children0; _j0++) {
            container[_i0].current.parent->current.children[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int * benchRet = container_get_current_siblings(container);
          printf("%d\n", (*benchRet)); 
          free(container);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_container0 = 100;
          struct sway_container * container = (struct sway_container *) malloc(_len_container0*sizeof(struct sway_container));
          for(int _i0 = 0; _i0 < _len_container0; _i0++) {
              int _len_container__i0__current_workspace0 = 1;
          container[_i0].current.workspace = (struct TYPE_9__ *) malloc(_len_container__i0__current_workspace0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_container__i0__current_workspace0; _j0++) {
              int _len_container__i0__current_workspace_current_tiling0 = 1;
          container[_i0].current.workspace->current.tiling = (int *) malloc(_len_container__i0__current_workspace_current_tiling0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_container__i0__current_workspace_current_tiling0; _j0++) {
            container[_i0].current.workspace->current.tiling[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_container__i0__current_parent0 = 1;
          container[_i0].current.parent = (struct TYPE_7__ *) malloc(_len_container__i0__current_parent0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_container__i0__current_parent0; _j0++) {
              int _len_container__i0__current_parent_current_children0 = 1;
          container[_i0].current.parent->current.children = (int *) malloc(_len_container__i0__current_parent_current_children0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_container__i0__current_parent_current_children0; _j0++) {
            container[_i0].current.parent->current.children[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int * benchRet = container_get_current_siblings(container);
          printf("%d\n", (*benchRet)); 
          free(container);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
