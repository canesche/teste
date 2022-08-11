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
typedef  int u8 ;
typedef  int u32 ;
struct mlx4_eqe {int dummy; } ;
struct mlx4_eq {int nent; TYPE_1__* page_list; } ;
struct TYPE_2__ {struct mlx4_eqe* buf; } ;

/* Variables and functions */
 unsigned long MLX4_EQ_ENTRY_SIZE ; 
 unsigned long PAGE_SIZE ; 

__attribute__((used)) static struct mlx4_eqe *get_eqe(struct mlx4_eq *eq, u32 entry, u8 eqe_factor,
				u8 eqe_size)
{
	/* (entry & (eq->nent - 1)) gives us a cyclic array */
	unsigned long offset = (entry & (eq->nent - 1)) * eqe_size;
	/* CX3 is capable of extending the EQE from 32 to 64 bytes with
	 * strides of 64B,128B and 256B.
	 * When 64B EQE is used, the first (in the lower addresses)
	 * 32 bytes in the 64 byte EQE are reserved and the next 32 bytes
	 * contain the legacy EQE information.
	 * In all other cases, the first 32B contains the legacy EQE info.
	 */
	return eq->page_list[offset / PAGE_SIZE].buf + (offset + (eqe_factor ? MLX4_EQ_ENTRY_SIZE : 0)) % PAGE_SIZE;
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
          int entry = 100;
          int eqe_factor = 100;
          int eqe_size = 100;
          int _len_eq0 = 1;
          struct mlx4_eq * eq = (struct mlx4_eq *) malloc(_len_eq0*sizeof(struct mlx4_eq));
          for(int _i0 = 0; _i0 < _len_eq0; _i0++) {
            eq[_i0].nent = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_eq__i0__page_list0 = 1;
          eq[_i0].page_list = (struct TYPE_2__ *) malloc(_len_eq__i0__page_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_eq__i0__page_list0; _j0++) {
              int _len_eq__i0__page_list_buf0 = 1;
          eq[_i0].page_list->buf = (struct mlx4_eqe *) malloc(_len_eq__i0__page_list_buf0*sizeof(struct mlx4_eqe));
          for(int _j0 = 0; _j0 < _len_eq__i0__page_list_buf0; _j0++) {
            eq[_i0].page_list->buf->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct mlx4_eqe * benchRet = get_eqe(eq,entry,eqe_factor,eqe_size);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_eq0; _aux++) {
          free(eq[_aux].page_list);
          }
          free(eq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int entry = 255;
          int eqe_factor = 255;
          int eqe_size = 255;
          int _len_eq0 = 65025;
          struct mlx4_eq * eq = (struct mlx4_eq *) malloc(_len_eq0*sizeof(struct mlx4_eq));
          for(int _i0 = 0; _i0 < _len_eq0; _i0++) {
            eq[_i0].nent = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_eq__i0__page_list0 = 1;
          eq[_i0].page_list = (struct TYPE_2__ *) malloc(_len_eq__i0__page_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_eq__i0__page_list0; _j0++) {
              int _len_eq__i0__page_list_buf0 = 1;
          eq[_i0].page_list->buf = (struct mlx4_eqe *) malloc(_len_eq__i0__page_list_buf0*sizeof(struct mlx4_eqe));
          for(int _j0 = 0; _j0 < _len_eq__i0__page_list_buf0; _j0++) {
            eq[_i0].page_list->buf->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct mlx4_eqe * benchRet = get_eqe(eq,entry,eqe_factor,eqe_size);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_eq0; _aux++) {
          free(eq[_aux].page_list);
          }
          free(eq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int entry = 10;
          int eqe_factor = 10;
          int eqe_size = 10;
          int _len_eq0 = 100;
          struct mlx4_eq * eq = (struct mlx4_eq *) malloc(_len_eq0*sizeof(struct mlx4_eq));
          for(int _i0 = 0; _i0 < _len_eq0; _i0++) {
            eq[_i0].nent = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_eq__i0__page_list0 = 1;
          eq[_i0].page_list = (struct TYPE_2__ *) malloc(_len_eq__i0__page_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_eq__i0__page_list0; _j0++) {
              int _len_eq__i0__page_list_buf0 = 1;
          eq[_i0].page_list->buf = (struct mlx4_eqe *) malloc(_len_eq__i0__page_list_buf0*sizeof(struct mlx4_eqe));
          for(int _j0 = 0; _j0 < _len_eq__i0__page_list_buf0; _j0++) {
            eq[_i0].page_list->buf->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct mlx4_eqe * benchRet = get_eqe(eq,entry,eqe_factor,eqe_size);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_eq0; _aux++) {
          free(eq[_aux].page_list);
          }
          free(eq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
