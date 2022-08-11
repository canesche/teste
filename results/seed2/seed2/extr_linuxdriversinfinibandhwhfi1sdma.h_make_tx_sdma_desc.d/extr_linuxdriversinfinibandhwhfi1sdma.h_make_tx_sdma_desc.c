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
struct sdma_txreq {size_t num_desc; struct sdma_desc* descp; } ;
struct sdma_desc {int* qw; } ;
typedef  scalar_t__ dma_addr_t ;

/* Variables and functions */
 int SDMA_DESC0_BYTE_COUNT_MASK ; 
 int SDMA_DESC0_BYTE_COUNT_SHIFT ; 
 int SDMA_DESC0_PHY_ADDR_MASK ; 
 int SDMA_DESC0_PHY_ADDR_SHIFT ; 
 int SDMA_DESC1_GENERATION_MASK ; 
 int SDMA_DESC1_GENERATION_SHIFT ; 

__attribute__((used)) static inline void make_tx_sdma_desc(
	struct sdma_txreq *tx,
	int type,
	dma_addr_t addr,
	size_t len)
{
	struct sdma_desc *desc = &tx->descp[tx->num_desc];

	if (!tx->num_desc) {
		/* qw[0] zero; qw[1] first, ahg mode already in from init */
		desc->qw[1] |= ((u64)type & SDMA_DESC1_GENERATION_MASK)
				<< SDMA_DESC1_GENERATION_SHIFT;
	} else {
		desc->qw[0] = 0;
		desc->qw[1] = ((u64)type & SDMA_DESC1_GENERATION_MASK)
				<< SDMA_DESC1_GENERATION_SHIFT;
	}
	desc->qw[0] |= (((u64)addr & SDMA_DESC0_PHY_ADDR_MASK)
				<< SDMA_DESC0_PHY_ADDR_SHIFT) |
			(((u64)len & SDMA_DESC0_BYTE_COUNT_MASK)
				<< SDMA_DESC0_BYTE_COUNT_SHIFT);
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
          int type = 100;
          long addr = 100;
          unsigned long len = 100;
          int _len_tx0 = 1;
          struct sdma_txreq * tx = (struct sdma_txreq *) malloc(_len_tx0*sizeof(struct sdma_txreq));
          for(int _i0 = 0; _i0 < _len_tx0; _i0++) {
            tx[_i0].num_desc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tx__i0__descp0 = 1;
          tx[_i0].descp = (struct sdma_desc *) malloc(_len_tx__i0__descp0*sizeof(struct sdma_desc));
          for(int _j0 = 0; _j0 < _len_tx__i0__descp0; _j0++) {
              int _len_tx__i0__descp_qw0 = 1;
          tx[_i0].descp->qw = (int *) malloc(_len_tx__i0__descp_qw0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tx__i0__descp_qw0; _j0++) {
            tx[_i0].descp->qw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          make_tx_sdma_desc(tx,type,addr,len);
          for(int _aux = 0; _aux < _len_tx0; _aux++) {
          free(tx[_aux].descp);
          }
          free(tx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          long addr = 255;
          unsigned long len = 255;
          int _len_tx0 = 65025;
          struct sdma_txreq * tx = (struct sdma_txreq *) malloc(_len_tx0*sizeof(struct sdma_txreq));
          for(int _i0 = 0; _i0 < _len_tx0; _i0++) {
            tx[_i0].num_desc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tx__i0__descp0 = 1;
          tx[_i0].descp = (struct sdma_desc *) malloc(_len_tx__i0__descp0*sizeof(struct sdma_desc));
          for(int _j0 = 0; _j0 < _len_tx__i0__descp0; _j0++) {
              int _len_tx__i0__descp_qw0 = 1;
          tx[_i0].descp->qw = (int *) malloc(_len_tx__i0__descp_qw0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tx__i0__descp_qw0; _j0++) {
            tx[_i0].descp->qw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          make_tx_sdma_desc(tx,type,addr,len);
          for(int _aux = 0; _aux < _len_tx0; _aux++) {
          free(tx[_aux].descp);
          }
          free(tx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          long addr = 10;
          unsigned long len = 10;
          int _len_tx0 = 100;
          struct sdma_txreq * tx = (struct sdma_txreq *) malloc(_len_tx0*sizeof(struct sdma_txreq));
          for(int _i0 = 0; _i0 < _len_tx0; _i0++) {
            tx[_i0].num_desc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tx__i0__descp0 = 1;
          tx[_i0].descp = (struct sdma_desc *) malloc(_len_tx__i0__descp0*sizeof(struct sdma_desc));
          for(int _j0 = 0; _j0 < _len_tx__i0__descp0; _j0++) {
              int _len_tx__i0__descp_qw0 = 1;
          tx[_i0].descp->qw = (int *) malloc(_len_tx__i0__descp_qw0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tx__i0__descp_qw0; _j0++) {
            tx[_i0].descp->qw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          make_tx_sdma_desc(tx,type,addr,len);
          for(int _aux = 0; _aux < _len_tx0; _aux++) {
          free(tx[_aux].descp);
          }
          free(tx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
