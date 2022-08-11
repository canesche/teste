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
struct axienet_local {int tx_bd_tail; struct axidma_bd* tx_bd_v; } ;
struct axidma_bd {int status; } ;

/* Variables and functions */
 int NETDEV_TX_BUSY ; 
 int TX_BD_NUM ; 
 int XAXIDMA_BD_STS_ALL_MASK ; 

__attribute__((used)) static inline int axienet_check_tx_bd_space(struct axienet_local *lp,
					    int num_frag)
{
	struct axidma_bd *cur_p;
	cur_p = &lp->tx_bd_v[(lp->tx_bd_tail + num_frag) % TX_BD_NUM];
	if (cur_p->status & XAXIDMA_BD_STS_ALL_MASK)
		return NETDEV_TX_BUSY;
	return 0;
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
          int num_frag = 100;
          int _len_lp0 = 1;
          struct axienet_local * lp = (struct axienet_local *) malloc(_len_lp0*sizeof(struct axienet_local));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].tx_bd_tail = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lp__i0__tx_bd_v0 = 1;
          lp[_i0].tx_bd_v = (struct axidma_bd *) malloc(_len_lp__i0__tx_bd_v0*sizeof(struct axidma_bd));
          for(int _j0 = 0; _j0 < _len_lp__i0__tx_bd_v0; _j0++) {
            lp[_i0].tx_bd_v->status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = axienet_check_tx_bd_space(lp,num_frag);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_lp0; _aux++) {
          free(lp[_aux].tx_bd_v);
          }
          free(lp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int num_frag = 255;
          int _len_lp0 = 65025;
          struct axienet_local * lp = (struct axienet_local *) malloc(_len_lp0*sizeof(struct axienet_local));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].tx_bd_tail = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lp__i0__tx_bd_v0 = 1;
          lp[_i0].tx_bd_v = (struct axidma_bd *) malloc(_len_lp__i0__tx_bd_v0*sizeof(struct axidma_bd));
          for(int _j0 = 0; _j0 < _len_lp__i0__tx_bd_v0; _j0++) {
            lp[_i0].tx_bd_v->status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = axienet_check_tx_bd_space(lp,num_frag);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_lp0; _aux++) {
          free(lp[_aux].tx_bd_v);
          }
          free(lp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int num_frag = 10;
          int _len_lp0 = 100;
          struct axienet_local * lp = (struct axienet_local *) malloc(_len_lp0*sizeof(struct axienet_local));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].tx_bd_tail = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lp__i0__tx_bd_v0 = 1;
          lp[_i0].tx_bd_v = (struct axidma_bd *) malloc(_len_lp__i0__tx_bd_v0*sizeof(struct axidma_bd));
          for(int _j0 = 0; _j0 < _len_lp__i0__tx_bd_v0; _j0++) {
            lp[_i0].tx_bd_v->status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = axienet_check_tx_bd_space(lp,num_frag);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_lp0; _aux++) {
          free(lp[_aux].tx_bd_v);
          }
          free(lp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
