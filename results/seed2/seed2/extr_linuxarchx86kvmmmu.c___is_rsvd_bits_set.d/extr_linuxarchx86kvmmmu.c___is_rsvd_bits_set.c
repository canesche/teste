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
typedef  int u64 ;
struct rsvd_bits_validate {int** rsvd_bits_mask; unsigned long long bad_mt_xwr; } ;

/* Variables and functions */

__attribute__((used)) static bool
__is_rsvd_bits_set(struct rsvd_bits_validate *rsvd_check, u64 pte, int level)
{
	int bit7 = (pte >> 7) & 1, low6 = pte & 0x3f;

	return (pte & rsvd_check->rsvd_bits_mask[bit7][level-1]) |
		((rsvd_check->bad_mt_xwr & (1ull << low6)) != 0);
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
          int pte = 100;
          int level = 100;
          int _len_rsvd_check0 = 1;
          struct rsvd_bits_validate * rsvd_check = (struct rsvd_bits_validate *) malloc(_len_rsvd_check0*sizeof(struct rsvd_bits_validate));
          for(int _i0 = 0; _i0 < _len_rsvd_check0; _i0++) {
              int _len_rsvd_check__i0__rsvd_bits_mask0 = 1;
          rsvd_check[_i0].rsvd_bits_mask = (int **) malloc(_len_rsvd_check__i0__rsvd_bits_mask0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rsvd_check__i0__rsvd_bits_mask0; _j0++) {
            int _len_rsvd_check__i0__rsvd_bits_mask1 = 1;
            rsvd_check[_i0].rsvd_bits_mask[_j0] = (int *) malloc(_len_rsvd_check__i0__rsvd_bits_mask1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rsvd_check__i0__rsvd_bits_mask1; _j1++) {
              rsvd_check[_i0].rsvd_bits_mask[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        rsvd_check[_i0].bad_mt_xwr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __is_rsvd_bits_set(rsvd_check,pte,level);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rsvd_check0; _aux++) {
          free(*(rsvd_check[_aux].rsvd_bits_mask));
        free(rsvd_check[_aux].rsvd_bits_mask);
          }
          free(rsvd_check);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pte = 255;
          int level = 255;
          int _len_rsvd_check0 = 65025;
          struct rsvd_bits_validate * rsvd_check = (struct rsvd_bits_validate *) malloc(_len_rsvd_check0*sizeof(struct rsvd_bits_validate));
          for(int _i0 = 0; _i0 < _len_rsvd_check0; _i0++) {
              int _len_rsvd_check__i0__rsvd_bits_mask0 = 1;
          rsvd_check[_i0].rsvd_bits_mask = (int **) malloc(_len_rsvd_check__i0__rsvd_bits_mask0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rsvd_check__i0__rsvd_bits_mask0; _j0++) {
            int _len_rsvd_check__i0__rsvd_bits_mask1 = 1;
            rsvd_check[_i0].rsvd_bits_mask[_j0] = (int *) malloc(_len_rsvd_check__i0__rsvd_bits_mask1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rsvd_check__i0__rsvd_bits_mask1; _j1++) {
              rsvd_check[_i0].rsvd_bits_mask[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        rsvd_check[_i0].bad_mt_xwr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __is_rsvd_bits_set(rsvd_check,pte,level);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rsvd_check0; _aux++) {
          free(*(rsvd_check[_aux].rsvd_bits_mask));
        free(rsvd_check[_aux].rsvd_bits_mask);
          }
          free(rsvd_check);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pte = 10;
          int level = 10;
          int _len_rsvd_check0 = 100;
          struct rsvd_bits_validate * rsvd_check = (struct rsvd_bits_validate *) malloc(_len_rsvd_check0*sizeof(struct rsvd_bits_validate));
          for(int _i0 = 0; _i0 < _len_rsvd_check0; _i0++) {
              int _len_rsvd_check__i0__rsvd_bits_mask0 = 1;
          rsvd_check[_i0].rsvd_bits_mask = (int **) malloc(_len_rsvd_check__i0__rsvd_bits_mask0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rsvd_check__i0__rsvd_bits_mask0; _j0++) {
            int _len_rsvd_check__i0__rsvd_bits_mask1 = 1;
            rsvd_check[_i0].rsvd_bits_mask[_j0] = (int *) malloc(_len_rsvd_check__i0__rsvd_bits_mask1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rsvd_check__i0__rsvd_bits_mask1; _j1++) {
              rsvd_check[_i0].rsvd_bits_mask[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        rsvd_check[_i0].bad_mt_xwr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __is_rsvd_bits_set(rsvd_check,pte,level);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rsvd_check0; _aux++) {
          free(*(rsvd_check[_aux].rsvd_bits_mask));
        free(rsvd_check[_aux].rsvd_bits_mask);
          }
          free(rsvd_check);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
