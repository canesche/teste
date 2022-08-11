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
struct tx_ring {size_t tail; scalar_t__ size; scalar_t__* skb; } ;

/* Variables and functions */
 scalar_t__ QCAFRM_MAX_LEN ; 
 scalar_t__ QCASPI_HW_BUF_LEN ; 

__attribute__((used)) static int
qcaspi_tx_ring_has_space(struct tx_ring *txr)
{
	if (txr->skb[txr->tail])
		return 0;

	return (txr->size + QCAFRM_MAX_LEN < QCASPI_HW_BUF_LEN) ? 1 : 0;
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
          int _len_txr0 = 1;
          struct tx_ring * txr = (struct tx_ring *) malloc(_len_txr0*sizeof(struct tx_ring));
          for(int _i0 = 0; _i0 < _len_txr0; _i0++) {
            txr[_i0].tail = ((-2 * (next_i()%2)) + 1) * next_i();
        txr[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_txr__i0__skb0 = 1;
          txr[_i0].skb = (long *) malloc(_len_txr__i0__skb0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_txr__i0__skb0; _j0++) {
            txr[_i0].skb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qcaspi_tx_ring_has_space(txr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_txr0; _aux++) {
          free(txr[_aux].skb);
          }
          free(txr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_txr0 = 65025;
          struct tx_ring * txr = (struct tx_ring *) malloc(_len_txr0*sizeof(struct tx_ring));
          for(int _i0 = 0; _i0 < _len_txr0; _i0++) {
            txr[_i0].tail = ((-2 * (next_i()%2)) + 1) * next_i();
        txr[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_txr__i0__skb0 = 1;
          txr[_i0].skb = (long *) malloc(_len_txr__i0__skb0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_txr__i0__skb0; _j0++) {
            txr[_i0].skb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qcaspi_tx_ring_has_space(txr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_txr0; _aux++) {
          free(txr[_aux].skb);
          }
          free(txr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_txr0 = 100;
          struct tx_ring * txr = (struct tx_ring *) malloc(_len_txr0*sizeof(struct tx_ring));
          for(int _i0 = 0; _i0 < _len_txr0; _i0++) {
            txr[_i0].tail = ((-2 * (next_i()%2)) + 1) * next_i();
        txr[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_txr__i0__skb0 = 1;
          txr[_i0].skb = (long *) malloc(_len_txr__i0__skb0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_txr__i0__skb0; _j0++) {
            txr[_i0].skb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qcaspi_tx_ring_has_space(txr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_txr0; _aux++) {
          free(txr[_aux].skb);
          }
          free(txr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
