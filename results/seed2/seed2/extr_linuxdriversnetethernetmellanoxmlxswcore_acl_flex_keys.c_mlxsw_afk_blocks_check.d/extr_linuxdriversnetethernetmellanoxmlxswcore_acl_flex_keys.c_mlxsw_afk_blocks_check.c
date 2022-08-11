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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {scalar_t__ bits; } ;
struct TYPE_7__ {TYPE_1__ size; } ;
struct mlxsw_afk_element_inst {scalar_t__ type; TYPE_5__* info; TYPE_2__ item; } ;
struct mlxsw_afk_block {int instances_count; struct mlxsw_afk_element_inst* instances; } ;
struct mlxsw_afk {int blocks_count; struct mlxsw_afk_block* blocks; } ;
struct TYPE_8__ {scalar_t__ bits; } ;
struct TYPE_9__ {TYPE_3__ size; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_4__ item; } ;

/* Variables and functions */

__attribute__((used)) static bool mlxsw_afk_blocks_check(struct mlxsw_afk *mlxsw_afk)
{
	int i;
	int j;

	for (i = 0; i < mlxsw_afk->blocks_count; i++) {
		const struct mlxsw_afk_block *block = &mlxsw_afk->blocks[i];

		for (j = 0; j < block->instances_count; j++) {
			struct mlxsw_afk_element_inst *elinst;

			elinst = &block->instances[j];
			if (elinst->type != elinst->info->type ||
			    elinst->item.size.bits !=
			    elinst->info->item.size.bits)
				return false;
		}
	}
	return true;
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
          int _len_mlxsw_afk0 = 1;
          struct mlxsw_afk * mlxsw_afk = (struct mlxsw_afk *) malloc(_len_mlxsw_afk0*sizeof(struct mlxsw_afk));
          for(int _i0 = 0; _i0 < _len_mlxsw_afk0; _i0++) {
            mlxsw_afk[_i0].blocks_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_afk__i0__blocks0 = 1;
          mlxsw_afk[_i0].blocks = (struct mlxsw_afk_block *) malloc(_len_mlxsw_afk__i0__blocks0*sizeof(struct mlxsw_afk_block));
          for(int _j0 = 0; _j0 < _len_mlxsw_afk__i0__blocks0; _j0++) {
            mlxsw_afk[_i0].blocks->instances_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_afk__i0__blocks_instances0 = 1;
          mlxsw_afk[_i0].blocks->instances = (struct mlxsw_afk_element_inst *) malloc(_len_mlxsw_afk__i0__blocks_instances0*sizeof(struct mlxsw_afk_element_inst));
          for(int _j0 = 0; _j0 < _len_mlxsw_afk__i0__blocks_instances0; _j0++) {
            mlxsw_afk[_i0].blocks->instances->type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_afk__i0__blocks_instances_info0 = 1;
          mlxsw_afk[_i0].blocks->instances->info = (struct TYPE_10__ *) malloc(_len_mlxsw_afk__i0__blocks_instances_info0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_mlxsw_afk__i0__blocks_instances_info0; _j0++) {
            mlxsw_afk[_i0].blocks->instances->info->type = ((-2 * (next_i()%2)) + 1) * next_i();
        mlxsw_afk[_i0].blocks->instances->info->item.size.bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mlxsw_afk[_i0].blocks->instances->item.size.bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = mlxsw_afk_blocks_check(mlxsw_afk);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mlxsw_afk0; _aux++) {
          free(mlxsw_afk[_aux].blocks);
          }
          free(mlxsw_afk);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mlxsw_afk0 = 65025;
          struct mlxsw_afk * mlxsw_afk = (struct mlxsw_afk *) malloc(_len_mlxsw_afk0*sizeof(struct mlxsw_afk));
          for(int _i0 = 0; _i0 < _len_mlxsw_afk0; _i0++) {
            mlxsw_afk[_i0].blocks_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_afk__i0__blocks0 = 1;
          mlxsw_afk[_i0].blocks = (struct mlxsw_afk_block *) malloc(_len_mlxsw_afk__i0__blocks0*sizeof(struct mlxsw_afk_block));
          for(int _j0 = 0; _j0 < _len_mlxsw_afk__i0__blocks0; _j0++) {
            mlxsw_afk[_i0].blocks->instances_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_afk__i0__blocks_instances0 = 1;
          mlxsw_afk[_i0].blocks->instances = (struct mlxsw_afk_element_inst *) malloc(_len_mlxsw_afk__i0__blocks_instances0*sizeof(struct mlxsw_afk_element_inst));
          for(int _j0 = 0; _j0 < _len_mlxsw_afk__i0__blocks_instances0; _j0++) {
            mlxsw_afk[_i0].blocks->instances->type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_afk__i0__blocks_instances_info0 = 1;
          mlxsw_afk[_i0].blocks->instances->info = (struct TYPE_10__ *) malloc(_len_mlxsw_afk__i0__blocks_instances_info0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_mlxsw_afk__i0__blocks_instances_info0; _j0++) {
            mlxsw_afk[_i0].blocks->instances->info->type = ((-2 * (next_i()%2)) + 1) * next_i();
        mlxsw_afk[_i0].blocks->instances->info->item.size.bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mlxsw_afk[_i0].blocks->instances->item.size.bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = mlxsw_afk_blocks_check(mlxsw_afk);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mlxsw_afk0; _aux++) {
          free(mlxsw_afk[_aux].blocks);
          }
          free(mlxsw_afk);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mlxsw_afk0 = 100;
          struct mlxsw_afk * mlxsw_afk = (struct mlxsw_afk *) malloc(_len_mlxsw_afk0*sizeof(struct mlxsw_afk));
          for(int _i0 = 0; _i0 < _len_mlxsw_afk0; _i0++) {
            mlxsw_afk[_i0].blocks_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_afk__i0__blocks0 = 1;
          mlxsw_afk[_i0].blocks = (struct mlxsw_afk_block *) malloc(_len_mlxsw_afk__i0__blocks0*sizeof(struct mlxsw_afk_block));
          for(int _j0 = 0; _j0 < _len_mlxsw_afk__i0__blocks0; _j0++) {
            mlxsw_afk[_i0].blocks->instances_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_afk__i0__blocks_instances0 = 1;
          mlxsw_afk[_i0].blocks->instances = (struct mlxsw_afk_element_inst *) malloc(_len_mlxsw_afk__i0__blocks_instances0*sizeof(struct mlxsw_afk_element_inst));
          for(int _j0 = 0; _j0 < _len_mlxsw_afk__i0__blocks_instances0; _j0++) {
            mlxsw_afk[_i0].blocks->instances->type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_afk__i0__blocks_instances_info0 = 1;
          mlxsw_afk[_i0].blocks->instances->info = (struct TYPE_10__ *) malloc(_len_mlxsw_afk__i0__blocks_instances_info0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_mlxsw_afk__i0__blocks_instances_info0; _j0++) {
            mlxsw_afk[_i0].blocks->instances->info->type = ((-2 * (next_i()%2)) + 1) * next_i();
        mlxsw_afk[_i0].blocks->instances->info->item.size.bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mlxsw_afk[_i0].blocks->instances->item.size.bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = mlxsw_afk_blocks_check(mlxsw_afk);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mlxsw_afk0; _aux++) {
          free(mlxsw_afk[_aux].blocks);
          }
          free(mlxsw_afk);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_mlxsw_afk0 = 1;
          struct mlxsw_afk * mlxsw_afk = (struct mlxsw_afk *) malloc(_len_mlxsw_afk0*sizeof(struct mlxsw_afk));
          for(int _i0 = 0; _i0 < _len_mlxsw_afk0; _i0++) {
            mlxsw_afk[_i0].blocks_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_afk__i0__blocks0 = 1;
          mlxsw_afk[_i0].blocks = (struct mlxsw_afk_block *) malloc(_len_mlxsw_afk__i0__blocks0*sizeof(struct mlxsw_afk_block));
          for(int _j0 = 0; _j0 < _len_mlxsw_afk__i0__blocks0; _j0++) {
            mlxsw_afk[_i0].blocks->instances_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_afk__i0__blocks_instances0 = 1;
          mlxsw_afk[_i0].blocks->instances = (struct mlxsw_afk_element_inst *) malloc(_len_mlxsw_afk__i0__blocks_instances0*sizeof(struct mlxsw_afk_element_inst));
          for(int _j0 = 0; _j0 < _len_mlxsw_afk__i0__blocks_instances0; _j0++) {
            mlxsw_afk[_i0].blocks->instances->type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_afk__i0__blocks_instances_info0 = 1;
          mlxsw_afk[_i0].blocks->instances->info = (struct TYPE_10__ *) malloc(_len_mlxsw_afk__i0__blocks_instances_info0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_mlxsw_afk__i0__blocks_instances_info0; _j0++) {
            mlxsw_afk[_i0].blocks->instances->info->type = ((-2 * (next_i()%2)) + 1) * next_i();
        mlxsw_afk[_i0].blocks->instances->info->item.size.bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        mlxsw_afk[_i0].blocks->instances->item.size.bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = mlxsw_afk_blocks_check(mlxsw_afk);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mlxsw_afk0; _aux++) {
          free(mlxsw_afk[_aux].blocks);
          }
          free(mlxsw_afk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
