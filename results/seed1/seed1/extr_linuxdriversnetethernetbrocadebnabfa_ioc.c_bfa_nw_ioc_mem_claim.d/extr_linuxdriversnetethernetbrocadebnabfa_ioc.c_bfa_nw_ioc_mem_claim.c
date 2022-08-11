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
typedef  int /*<<< orphan*/  u8 ;
typedef  int /*<<< orphan*/  u64 ;
struct bfi_ioc_attr {int dummy; } ;
struct TYPE_2__ {int /*<<< orphan*/  pa; int /*<<< orphan*/ * kva; } ;
struct bfa_ioc {struct bfi_ioc_attr* attr; TYPE_1__ attr_dma; } ;

/* Variables and functions */

void
bfa_nw_ioc_mem_claim(struct bfa_ioc *ioc,  u8 *dm_kva, u64 dm_pa)
{
	/**
	 * dma memory for firmware attribute
	 */
	ioc->attr_dma.kva = dm_kva;
	ioc->attr_dma.pa = dm_pa;
	ioc->attr = (struct bfi_ioc_attr *) dm_kva;
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
          int dm_pa = 100;
          int _len_ioc0 = 1;
          struct bfa_ioc * ioc = (struct bfa_ioc *) malloc(_len_ioc0*sizeof(struct bfa_ioc));
          for(int _i0 = 0; _i0 < _len_ioc0; _i0++) {
              int _len_ioc__i0__attr0 = 1;
          ioc[_i0].attr = (struct bfi_ioc_attr *) malloc(_len_ioc__i0__attr0*sizeof(struct bfi_ioc_attr));
          for(int _j0 = 0; _j0 < _len_ioc__i0__attr0; _j0++) {
            ioc[_i0].attr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ioc[_i0].attr_dma.pa = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ioc__i0__attr_dma_kva0 = 1;
          ioc[_i0].attr_dma.kva = (int *) malloc(_len_ioc__i0__attr_dma_kva0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ioc__i0__attr_dma_kva0; _j0++) {
            ioc[_i0].attr_dma.kva[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dm_kva0 = 1;
          int * dm_kva = (int *) malloc(_len_dm_kva0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dm_kva0; _i0++) {
            dm_kva[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bfa_nw_ioc_mem_claim(ioc,dm_kva,dm_pa);
          for(int _aux = 0; _aux < _len_ioc0; _aux++) {
          free(ioc[_aux].attr);
          }
          free(ioc);
          free(dm_kva);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dm_pa = 255;
          int _len_ioc0 = 65025;
          struct bfa_ioc * ioc = (struct bfa_ioc *) malloc(_len_ioc0*sizeof(struct bfa_ioc));
          for(int _i0 = 0; _i0 < _len_ioc0; _i0++) {
              int _len_ioc__i0__attr0 = 1;
          ioc[_i0].attr = (struct bfi_ioc_attr *) malloc(_len_ioc__i0__attr0*sizeof(struct bfi_ioc_attr));
          for(int _j0 = 0; _j0 < _len_ioc__i0__attr0; _j0++) {
            ioc[_i0].attr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ioc[_i0].attr_dma.pa = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ioc__i0__attr_dma_kva0 = 1;
          ioc[_i0].attr_dma.kva = (int *) malloc(_len_ioc__i0__attr_dma_kva0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ioc__i0__attr_dma_kva0; _j0++) {
            ioc[_i0].attr_dma.kva[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dm_kva0 = 65025;
          int * dm_kva = (int *) malloc(_len_dm_kva0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dm_kva0; _i0++) {
            dm_kva[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bfa_nw_ioc_mem_claim(ioc,dm_kva,dm_pa);
          for(int _aux = 0; _aux < _len_ioc0; _aux++) {
          free(ioc[_aux].attr);
          }
          free(ioc);
          free(dm_kva);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dm_pa = 10;
          int _len_ioc0 = 100;
          struct bfa_ioc * ioc = (struct bfa_ioc *) malloc(_len_ioc0*sizeof(struct bfa_ioc));
          for(int _i0 = 0; _i0 < _len_ioc0; _i0++) {
              int _len_ioc__i0__attr0 = 1;
          ioc[_i0].attr = (struct bfi_ioc_attr *) malloc(_len_ioc__i0__attr0*sizeof(struct bfi_ioc_attr));
          for(int _j0 = 0; _j0 < _len_ioc__i0__attr0; _j0++) {
            ioc[_i0].attr->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ioc[_i0].attr_dma.pa = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ioc__i0__attr_dma_kva0 = 1;
          ioc[_i0].attr_dma.kva = (int *) malloc(_len_ioc__i0__attr_dma_kva0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ioc__i0__attr_dma_kva0; _j0++) {
            ioc[_i0].attr_dma.kva[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dm_kva0 = 100;
          int * dm_kva = (int *) malloc(_len_dm_kva0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dm_kva0; _i0++) {
            dm_kva[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bfa_nw_ioc_mem_claim(ioc,dm_kva,dm_pa);
          for(int _aux = 0; _aux < _len_ioc0; _aux++) {
          free(ioc[_aux].attr);
          }
          free(ioc);
          free(dm_kva);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
