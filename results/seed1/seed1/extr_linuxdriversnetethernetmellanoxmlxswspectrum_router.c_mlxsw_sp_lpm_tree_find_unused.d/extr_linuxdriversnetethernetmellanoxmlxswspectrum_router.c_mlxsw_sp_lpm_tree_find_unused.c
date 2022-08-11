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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct mlxsw_sp_lpm_tree {scalar_t__ ref_count; } ;
struct mlxsw_sp {TYPE_2__* router; } ;
struct TYPE_3__ {int tree_count; struct mlxsw_sp_lpm_tree* trees; } ;
struct TYPE_4__ {TYPE_1__ lpm; } ;

/* Variables and functions */

__attribute__((used)) static struct mlxsw_sp_lpm_tree *
mlxsw_sp_lpm_tree_find_unused(struct mlxsw_sp *mlxsw_sp)
{
	static struct mlxsw_sp_lpm_tree *lpm_tree;
	int i;

	for (i = 0; i < mlxsw_sp->router->lpm.tree_count; i++) {
		lpm_tree = &mlxsw_sp->router->lpm.trees[i];
		if (lpm_tree->ref_count == 0)
			return lpm_tree;
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
          int _len_mlxsw_sp0 = 1;
          struct mlxsw_sp * mlxsw_sp = (struct mlxsw_sp *) malloc(_len_mlxsw_sp0*sizeof(struct mlxsw_sp));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp0; _i0++) {
              int _len_mlxsw_sp__i0__router0 = 1;
          mlxsw_sp[_i0].router = (struct TYPE_4__ *) malloc(_len_mlxsw_sp__i0__router0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp__i0__router0; _j0++) {
            mlxsw_sp[_i0].router->lpm.tree_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_sp__i0__router_lpm_trees0 = 1;
          mlxsw_sp[_i0].router->lpm.trees = (struct mlxsw_sp_lpm_tree *) malloc(_len_mlxsw_sp__i0__router_lpm_trees0*sizeof(struct mlxsw_sp_lpm_tree));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp__i0__router_lpm_trees0; _j0++) {
            mlxsw_sp[_i0].router->lpm.trees->ref_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct mlxsw_sp_lpm_tree * benchRet = mlxsw_sp_lpm_tree_find_unused(mlxsw_sp);
          printf("%ld\n", (*benchRet).ref_count);
          for(int _aux = 0; _aux < _len_mlxsw_sp0; _aux++) {
          free(mlxsw_sp[_aux].router);
          }
          free(mlxsw_sp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mlxsw_sp0 = 65025;
          struct mlxsw_sp * mlxsw_sp = (struct mlxsw_sp *) malloc(_len_mlxsw_sp0*sizeof(struct mlxsw_sp));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp0; _i0++) {
              int _len_mlxsw_sp__i0__router0 = 1;
          mlxsw_sp[_i0].router = (struct TYPE_4__ *) malloc(_len_mlxsw_sp__i0__router0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp__i0__router0; _j0++) {
            mlxsw_sp[_i0].router->lpm.tree_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_sp__i0__router_lpm_trees0 = 1;
          mlxsw_sp[_i0].router->lpm.trees = (struct mlxsw_sp_lpm_tree *) malloc(_len_mlxsw_sp__i0__router_lpm_trees0*sizeof(struct mlxsw_sp_lpm_tree));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp__i0__router_lpm_trees0; _j0++) {
            mlxsw_sp[_i0].router->lpm.trees->ref_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct mlxsw_sp_lpm_tree * benchRet = mlxsw_sp_lpm_tree_find_unused(mlxsw_sp);
          printf("%ld\n", (*benchRet).ref_count);
          for(int _aux = 0; _aux < _len_mlxsw_sp0; _aux++) {
          free(mlxsw_sp[_aux].router);
          }
          free(mlxsw_sp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mlxsw_sp0 = 100;
          struct mlxsw_sp * mlxsw_sp = (struct mlxsw_sp *) malloc(_len_mlxsw_sp0*sizeof(struct mlxsw_sp));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp0; _i0++) {
              int _len_mlxsw_sp__i0__router0 = 1;
          mlxsw_sp[_i0].router = (struct TYPE_4__ *) malloc(_len_mlxsw_sp__i0__router0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp__i0__router0; _j0++) {
            mlxsw_sp[_i0].router->lpm.tree_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_sp__i0__router_lpm_trees0 = 1;
          mlxsw_sp[_i0].router->lpm.trees = (struct mlxsw_sp_lpm_tree *) malloc(_len_mlxsw_sp__i0__router_lpm_trees0*sizeof(struct mlxsw_sp_lpm_tree));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp__i0__router_lpm_trees0; _j0++) {
            mlxsw_sp[_i0].router->lpm.trees->ref_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct mlxsw_sp_lpm_tree * benchRet = mlxsw_sp_lpm_tree_find_unused(mlxsw_sp);
          printf("%ld\n", (*benchRet).ref_count);
          for(int _aux = 0; _aux < _len_mlxsw_sp0; _aux++) {
          free(mlxsw_sp[_aux].router);
          }
          free(mlxsw_sp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
