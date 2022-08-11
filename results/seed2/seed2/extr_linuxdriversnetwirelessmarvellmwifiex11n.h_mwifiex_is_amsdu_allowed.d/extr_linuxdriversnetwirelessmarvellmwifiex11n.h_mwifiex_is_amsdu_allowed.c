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
struct mwifiex_private {int* bitmap_rates; scalar_t__ is_data_rate_auto; TYPE_1__* aggr_prio_tbl; } ;
struct TYPE_2__ {scalar_t__ amsdu; } ;

/* Variables and functions */
 scalar_t__ BA_STREAM_NOT_ALLOWED ; 

__attribute__((used)) static inline u8
mwifiex_is_amsdu_allowed(struct mwifiex_private *priv, int tid)
{
	return (((priv->aggr_prio_tbl[tid].amsdu != BA_STREAM_NOT_ALLOWED) &&
		 (priv->is_data_rate_auto || !(priv->bitmap_rates[2] & 0x03)))
		? true : false);
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
          int tid = 100;
          int _len_priv0 = 1;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__bitmap_rates0 = 1;
          priv[_i0].bitmap_rates = (int *) malloc(_len_priv__i0__bitmap_rates0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_priv__i0__bitmap_rates0; _j0++) {
            priv[_i0].bitmap_rates[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].is_data_rate_auto = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__aggr_prio_tbl0 = 1;
          priv[_i0].aggr_prio_tbl = (struct TYPE_2__ *) malloc(_len_priv__i0__aggr_prio_tbl0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__aggr_prio_tbl0; _j0++) {
            priv[_i0].aggr_prio_tbl->amsdu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mwifiex_is_amsdu_allowed(priv,tid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].bitmap_rates);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].aggr_prio_tbl);
          }
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int tid = 255;
          int _len_priv0 = 65025;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__bitmap_rates0 = 1;
          priv[_i0].bitmap_rates = (int *) malloc(_len_priv__i0__bitmap_rates0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_priv__i0__bitmap_rates0; _j0++) {
            priv[_i0].bitmap_rates[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].is_data_rate_auto = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__aggr_prio_tbl0 = 1;
          priv[_i0].aggr_prio_tbl = (struct TYPE_2__ *) malloc(_len_priv__i0__aggr_prio_tbl0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__aggr_prio_tbl0; _j0++) {
            priv[_i0].aggr_prio_tbl->amsdu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mwifiex_is_amsdu_allowed(priv,tid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].bitmap_rates);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].aggr_prio_tbl);
          }
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tid = 10;
          int _len_priv0 = 100;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__bitmap_rates0 = 1;
          priv[_i0].bitmap_rates = (int *) malloc(_len_priv__i0__bitmap_rates0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_priv__i0__bitmap_rates0; _j0++) {
            priv[_i0].bitmap_rates[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].is_data_rate_auto = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__aggr_prio_tbl0 = 1;
          priv[_i0].aggr_prio_tbl = (struct TYPE_2__ *) malloc(_len_priv__i0__aggr_prio_tbl0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__aggr_prio_tbl0; _j0++) {
            priv[_i0].aggr_prio_tbl->amsdu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mwifiex_is_amsdu_allowed(priv,tid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].bitmap_rates);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].aggr_prio_tbl);
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
