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
struct cas {scalar_t__* tx_tiny_dvma; TYPE_1__** tx_tiny_use; } ;
typedef  scalar_t__ dma_addr_t ;
struct TYPE_2__ {int used; int /*<<< orphan*/  nbufs; } ;

/* Variables and functions */
 int const TX_TINY_BUF_LEN ; 

__attribute__((used)) static inline dma_addr_t tx_tiny_map(struct cas *cp, const int ring,
				     const int entry, const int tentry)
{
	cp->tx_tiny_use[ring][tentry].nbufs++;
	cp->tx_tiny_use[ring][entry].used = 1;
	return cp->tx_tiny_dvma[ring] + TX_TINY_BUF_LEN*entry;
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
          const int ring = 100;
          const int entry = 100;
          const int tentry = 100;
          int _len_cp0 = 1;
          struct cas * cp = (struct cas *) malloc(_len_cp0*sizeof(struct cas));
          for(int _i0 = 0; _i0 < _len_cp0; _i0++) {
              int _len_cp__i0__tx_tiny_dvma0 = 1;
          cp[_i0].tx_tiny_dvma = (long *) malloc(_len_cp__i0__tx_tiny_dvma0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_cp__i0__tx_tiny_dvma0; _j0++) {
            cp[_i0].tx_tiny_dvma[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cp__i0__tx_tiny_use0 = 1;
          cp[_i0].tx_tiny_use = (struct TYPE_2__ **) malloc(_len_cp__i0__tx_tiny_use0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_cp__i0__tx_tiny_use0; _j0++) {
            int _len_cp__i0__tx_tiny_use1 = 1;
            cp[_i0].tx_tiny_use[_j0] = (struct TYPE_2__ *) malloc(_len_cp__i0__tx_tiny_use1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_cp__i0__tx_tiny_use1; _j1++) {
              cp[_i0].tx_tiny_use[_j0]->used = ((-2 * (next_i()%2)) + 1) * next_i();
        cp[_i0].tx_tiny_use[_j0]->nbufs = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          long benchRet = tx_tiny_map(cp,ring,entry,tentry);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_cp0; _aux++) {
          free(cp[_aux].tx_tiny_dvma);
          }
          for(int _aux = 0; _aux < _len_cp0; _aux++) {
          free(*(cp[_aux].tx_tiny_use));
        free(cp[_aux].tx_tiny_use);
          }
          free(cp);
        
        break;
    }
    // big-arr
    case 1:
    {
          const int ring = 255;
          const int entry = 255;
          const int tentry = 255;
          int _len_cp0 = 65025;
          struct cas * cp = (struct cas *) malloc(_len_cp0*sizeof(struct cas));
          for(int _i0 = 0; _i0 < _len_cp0; _i0++) {
              int _len_cp__i0__tx_tiny_dvma0 = 1;
          cp[_i0].tx_tiny_dvma = (long *) malloc(_len_cp__i0__tx_tiny_dvma0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_cp__i0__tx_tiny_dvma0; _j0++) {
            cp[_i0].tx_tiny_dvma[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cp__i0__tx_tiny_use0 = 1;
          cp[_i0].tx_tiny_use = (struct TYPE_2__ **) malloc(_len_cp__i0__tx_tiny_use0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_cp__i0__tx_tiny_use0; _j0++) {
            int _len_cp__i0__tx_tiny_use1 = 1;
            cp[_i0].tx_tiny_use[_j0] = (struct TYPE_2__ *) malloc(_len_cp__i0__tx_tiny_use1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_cp__i0__tx_tiny_use1; _j1++) {
              cp[_i0].tx_tiny_use[_j0]->used = ((-2 * (next_i()%2)) + 1) * next_i();
        cp[_i0].tx_tiny_use[_j0]->nbufs = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          long benchRet = tx_tiny_map(cp,ring,entry,tentry);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_cp0; _aux++) {
          free(cp[_aux].tx_tiny_dvma);
          }
          for(int _aux = 0; _aux < _len_cp0; _aux++) {
          free(*(cp[_aux].tx_tiny_use));
        free(cp[_aux].tx_tiny_use);
          }
          free(cp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int ring = 10;
          const int entry = 10;
          const int tentry = 10;
          int _len_cp0 = 100;
          struct cas * cp = (struct cas *) malloc(_len_cp0*sizeof(struct cas));
          for(int _i0 = 0; _i0 < _len_cp0; _i0++) {
              int _len_cp__i0__tx_tiny_dvma0 = 1;
          cp[_i0].tx_tiny_dvma = (long *) malloc(_len_cp__i0__tx_tiny_dvma0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_cp__i0__tx_tiny_dvma0; _j0++) {
            cp[_i0].tx_tiny_dvma[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cp__i0__tx_tiny_use0 = 1;
          cp[_i0].tx_tiny_use = (struct TYPE_2__ **) malloc(_len_cp__i0__tx_tiny_use0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_cp__i0__tx_tiny_use0; _j0++) {
            int _len_cp__i0__tx_tiny_use1 = 1;
            cp[_i0].tx_tiny_use[_j0] = (struct TYPE_2__ *) malloc(_len_cp__i0__tx_tiny_use1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_cp__i0__tx_tiny_use1; _j1++) {
              cp[_i0].tx_tiny_use[_j0]->used = ((-2 * (next_i()%2)) + 1) * next_i();
        cp[_i0].tx_tiny_use[_j0]->nbufs = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          long benchRet = tx_tiny_map(cp,ring,entry,tentry);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_cp0; _aux++) {
          free(cp[_aux].tx_tiny_dvma);
          }
          for(int _aux = 0; _aux < _len_cp0; _aux++) {
          free(*(cp[_aux].tx_tiny_use));
        free(cp[_aux].tx_tiny_use);
          }
          free(cp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
