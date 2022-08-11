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
struct ftmac100_txdes {int dummy; } ;
struct ftmac100 {size_t tx_clean_pointer; TYPE_1__* descs; } ;
struct TYPE_2__ {struct ftmac100_txdes* txdes; } ;

/* Variables and functions */

__attribute__((used)) static struct ftmac100_txdes *ftmac100_current_clean_txdes(struct ftmac100 *priv)
{
	return &priv->descs->txdes[priv->tx_clean_pointer];
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
          int _len_priv0 = 1;
          struct ftmac100 * priv = (struct ftmac100 *) malloc(_len_priv0*sizeof(struct ftmac100));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].tx_clean_pointer = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__descs0 = 1;
          priv[_i0].descs = (struct TYPE_2__ *) malloc(_len_priv__i0__descs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__descs0; _j0++) {
              int _len_priv__i0__descs_txdes0 = 1;
          priv[_i0].descs->txdes = (struct ftmac100_txdes *) malloc(_len_priv__i0__descs_txdes0*sizeof(struct ftmac100_txdes));
          for(int _j0 = 0; _j0 < _len_priv__i0__descs_txdes0; _j0++) {
            priv[_i0].descs->txdes->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct ftmac100_txdes * benchRet = ftmac100_current_clean_txdes(priv);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].descs);
          }
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct ftmac100 * priv = (struct ftmac100 *) malloc(_len_priv0*sizeof(struct ftmac100));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].tx_clean_pointer = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__descs0 = 1;
          priv[_i0].descs = (struct TYPE_2__ *) malloc(_len_priv__i0__descs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__descs0; _j0++) {
              int _len_priv__i0__descs_txdes0 = 1;
          priv[_i0].descs->txdes = (struct ftmac100_txdes *) malloc(_len_priv__i0__descs_txdes0*sizeof(struct ftmac100_txdes));
          for(int _j0 = 0; _j0 < _len_priv__i0__descs_txdes0; _j0++) {
            priv[_i0].descs->txdes->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct ftmac100_txdes * benchRet = ftmac100_current_clean_txdes(priv);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].descs);
          }
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct ftmac100 * priv = (struct ftmac100 *) malloc(_len_priv0*sizeof(struct ftmac100));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].tx_clean_pointer = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__descs0 = 1;
          priv[_i0].descs = (struct TYPE_2__ *) malloc(_len_priv__i0__descs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__descs0; _j0++) {
              int _len_priv__i0__descs_txdes0 = 1;
          priv[_i0].descs->txdes = (struct ftmac100_txdes *) malloc(_len_priv__i0__descs_txdes0*sizeof(struct ftmac100_txdes));
          for(int _j0 = 0; _j0 < _len_priv__i0__descs_txdes0; _j0++) {
            priv[_i0].descs->txdes->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct ftmac100_txdes * benchRet = ftmac100_current_clean_txdes(priv);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].descs);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
