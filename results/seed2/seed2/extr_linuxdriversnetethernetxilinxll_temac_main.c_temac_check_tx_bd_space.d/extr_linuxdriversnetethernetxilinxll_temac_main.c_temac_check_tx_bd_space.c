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
struct temac_local {int tx_bd_tail; struct cdmac_bd* tx_bd_v; } ;
struct cdmac_bd {scalar_t__ app0; } ;

/* Variables and functions */
 int NETDEV_TX_BUSY ; 
 int TX_BD_NUM ; 

__attribute__((used)) static inline int temac_check_tx_bd_space(struct temac_local *lp, int num_frag)
{
	struct cdmac_bd *cur_p;
	int tail;

	tail = lp->tx_bd_tail;
	cur_p = &lp->tx_bd_v[tail];

	do {
		if (cur_p->app0)
			return NETDEV_TX_BUSY;

		tail++;
		if (tail >= TX_BD_NUM)
			tail = 0;

		cur_p = &lp->tx_bd_v[tail];
		num_frag--;
	} while (num_frag >= 0);

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
          struct temac_local * lp = (struct temac_local *) malloc(_len_lp0*sizeof(struct temac_local));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].tx_bd_tail = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lp__i0__tx_bd_v0 = 1;
          lp[_i0].tx_bd_v = (struct cdmac_bd *) malloc(_len_lp__i0__tx_bd_v0*sizeof(struct cdmac_bd));
          for(int _j0 = 0; _j0 < _len_lp__i0__tx_bd_v0; _j0++) {
            lp[_i0].tx_bd_v->app0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = temac_check_tx_bd_space(lp,num_frag);
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
          struct temac_local * lp = (struct temac_local *) malloc(_len_lp0*sizeof(struct temac_local));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].tx_bd_tail = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lp__i0__tx_bd_v0 = 1;
          lp[_i0].tx_bd_v = (struct cdmac_bd *) malloc(_len_lp__i0__tx_bd_v0*sizeof(struct cdmac_bd));
          for(int _j0 = 0; _j0 < _len_lp__i0__tx_bd_v0; _j0++) {
            lp[_i0].tx_bd_v->app0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = temac_check_tx_bd_space(lp,num_frag);
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
          struct temac_local * lp = (struct temac_local *) malloc(_len_lp0*sizeof(struct temac_local));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].tx_bd_tail = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lp__i0__tx_bd_v0 = 1;
          lp[_i0].tx_bd_v = (struct cdmac_bd *) malloc(_len_lp__i0__tx_bd_v0*sizeof(struct cdmac_bd));
          for(int _j0 = 0; _j0 < _len_lp__i0__tx_bd_v0; _j0++) {
            lp[_i0].tx_bd_v->app0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = temac_check_tx_bd_space(lp,num_frag);
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
