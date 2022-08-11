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
typedef  size_t u32 ;
struct TYPE_2__ {struct mlx5e_sq_dma* dma_fifo; } ;
struct mlx5e_txqsq {size_t dma_fifo_mask; TYPE_1__ db; } ;
struct mlx5e_sq_dma {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline struct mlx5e_sq_dma *mlx5e_dma_get(struct mlx5e_txqsq *sq, u32 i)
{
	return &sq->db.dma_fifo[i & sq->dma_fifo_mask];
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
          unsigned long i = 100;
          int _len_sq0 = 1;
          struct mlx5e_txqsq * sq = (struct mlx5e_txqsq *) malloc(_len_sq0*sizeof(struct mlx5e_txqsq));
          for(int _i0 = 0; _i0 < _len_sq0; _i0++) {
            sq[_i0].dma_fifo_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sq__i0__db_dma_fifo0 = 1;
          sq[_i0].db.dma_fifo = (struct mlx5e_sq_dma *) malloc(_len_sq__i0__db_dma_fifo0*sizeof(struct mlx5e_sq_dma));
          for(int _j0 = 0; _j0 < _len_sq__i0__db_dma_fifo0; _j0++) {
            sq[_i0].db.dma_fifo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mlx5e_sq_dma * benchRet = mlx5e_dma_get(sq,i);
          printf("%d\n", (*benchRet).dummy);
          free(sq);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long i = 255;
          int _len_sq0 = 65025;
          struct mlx5e_txqsq * sq = (struct mlx5e_txqsq *) malloc(_len_sq0*sizeof(struct mlx5e_txqsq));
          for(int _i0 = 0; _i0 < _len_sq0; _i0++) {
            sq[_i0].dma_fifo_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sq__i0__db_dma_fifo0 = 1;
          sq[_i0].db.dma_fifo = (struct mlx5e_sq_dma *) malloc(_len_sq__i0__db_dma_fifo0*sizeof(struct mlx5e_sq_dma));
          for(int _j0 = 0; _j0 < _len_sq__i0__db_dma_fifo0; _j0++) {
            sq[_i0].db.dma_fifo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mlx5e_sq_dma * benchRet = mlx5e_dma_get(sq,i);
          printf("%d\n", (*benchRet).dummy);
          free(sq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long i = 10;
          int _len_sq0 = 100;
          struct mlx5e_txqsq * sq = (struct mlx5e_txqsq *) malloc(_len_sq0*sizeof(struct mlx5e_txqsq));
          for(int _i0 = 0; _i0 < _len_sq0; _i0++) {
            sq[_i0].dma_fifo_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sq__i0__db_dma_fifo0 = 1;
          sq[_i0].db.dma_fifo = (struct mlx5e_sq_dma *) malloc(_len_sq__i0__db_dma_fifo0*sizeof(struct mlx5e_sq_dma));
          for(int _j0 = 0; _j0 < _len_sq__i0__db_dma_fifo0; _j0++) {
            sq[_i0].db.dma_fifo->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mlx5e_sq_dma * benchRet = mlx5e_dma_get(sq,i);
          printf("%d\n", (*benchRet).dummy);
          free(sq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
