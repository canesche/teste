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
struct TYPE_2__ {int dsize_log2; int ring_size; scalar_t__ cur; } ;
struct fec_enet_priv_tx_q {TYPE_1__ bd; scalar_t__ dirty_tx; } ;

/* Variables and functions */

__attribute__((used)) static int fec_enet_get_free_txdesc_num(struct fec_enet_priv_tx_q *txq)
{
	int entries;

	entries = (((const char *)txq->dirty_tx -
			(const char *)txq->bd.cur) >> txq->bd.dsize_log2) - 1;

	return entries >= 0 ? entries : entries + txq->bd.ring_size;
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
          int _len_txq0 = 1;
          struct fec_enet_priv_tx_q * txq = (struct fec_enet_priv_tx_q *) malloc(_len_txq0*sizeof(struct fec_enet_priv_tx_q));
          for(int _i0 = 0; _i0 < _len_txq0; _i0++) {
            txq[_i0].bd.dsize_log2 = ((-2 * (next_i()%2)) + 1) * next_i();
        txq[_i0].bd.ring_size = ((-2 * (next_i()%2)) + 1) * next_i();
        txq[_i0].bd.cur = ((-2 * (next_i()%2)) + 1) * next_i();
        txq[_i0].dirty_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fec_enet_get_free_txdesc_num(txq);
          printf("%d\n", benchRet); 
          free(txq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_txq0 = 65025;
          struct fec_enet_priv_tx_q * txq = (struct fec_enet_priv_tx_q *) malloc(_len_txq0*sizeof(struct fec_enet_priv_tx_q));
          for(int _i0 = 0; _i0 < _len_txq0; _i0++) {
            txq[_i0].bd.dsize_log2 = ((-2 * (next_i()%2)) + 1) * next_i();
        txq[_i0].bd.ring_size = ((-2 * (next_i()%2)) + 1) * next_i();
        txq[_i0].bd.cur = ((-2 * (next_i()%2)) + 1) * next_i();
        txq[_i0].dirty_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fec_enet_get_free_txdesc_num(txq);
          printf("%d\n", benchRet); 
          free(txq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_txq0 = 100;
          struct fec_enet_priv_tx_q * txq = (struct fec_enet_priv_tx_q *) malloc(_len_txq0*sizeof(struct fec_enet_priv_tx_q));
          for(int _i0 = 0; _i0 < _len_txq0; _i0++) {
            txq[_i0].bd.dsize_log2 = ((-2 * (next_i()%2)) + 1) * next_i();
        txq[_i0].bd.ring_size = ((-2 * (next_i()%2)) + 1) * next_i();
        txq[_i0].bd.cur = ((-2 * (next_i()%2)) + 1) * next_i();
        txq[_i0].dirty_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fec_enet_get_free_txdesc_num(txq);
          printf("%d\n", benchRet); 
          free(txq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
