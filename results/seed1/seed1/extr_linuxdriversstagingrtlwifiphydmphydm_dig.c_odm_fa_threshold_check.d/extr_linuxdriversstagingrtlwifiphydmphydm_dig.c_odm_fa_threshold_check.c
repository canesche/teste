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
typedef  int u32 ;
struct phy_dm_struct {scalar_t__ is_linked; } ;

/* Variables and functions */
 int DM_DIG_FA_TH0 ; 
 int DM_DIG_FA_TH1 ; 
 int DM_DIG_FA_TH2 ; 

__attribute__((used)) static void odm_fa_threshold_check(void *dm_void, bool is_dfs_band,
				   bool is_performance, u32 rx_tp, u32 tx_tp,
				   u32 *dm_FA_thres)
{
	struct phy_dm_struct *dm = (struct phy_dm_struct *)dm_void;

	if (dm->is_linked && (is_performance || is_dfs_band)) {
		/*For NIC*/
		dm_FA_thres[0] = DM_DIG_FA_TH0;
		dm_FA_thres[1] = DM_DIG_FA_TH1;
		dm_FA_thres[2] = DM_DIG_FA_TH2;
	} else {
		if (is_dfs_band) {
			/* For DFS band and no link */
			dm_FA_thres[0] = 250;
			dm_FA_thres[1] = 1000;
			dm_FA_thres[2] = 2000;
		} else {
			dm_FA_thres[0] = 2000;
			dm_FA_thres[1] = 4000;
			dm_FA_thres[2] = 5000;
		}
	}
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
          int is_dfs_band = 100;
          int is_performance = 100;
          int rx_tp = 100;
          int tx_tp = 100;
          void * dm_void;
          int _len_dm_FA_thres0 = 1;
          int * dm_FA_thres = (int *) malloc(_len_dm_FA_thres0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dm_FA_thres0; _i0++) {
            dm_FA_thres[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          odm_fa_threshold_check(dm_void,is_dfs_band,is_performance,rx_tp,tx_tp,dm_FA_thres);
          free(dm_FA_thres);
        
        break;
    }
    // big-arr
    case 1:
    {
          int is_dfs_band = 255;
          int is_performance = 255;
          int rx_tp = 255;
          int tx_tp = 255;
          void * dm_void;
          int _len_dm_FA_thres0 = 65025;
          int * dm_FA_thres = (int *) malloc(_len_dm_FA_thres0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dm_FA_thres0; _i0++) {
            dm_FA_thres[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          odm_fa_threshold_check(dm_void,is_dfs_band,is_performance,rx_tp,tx_tp,dm_FA_thres);
          free(dm_FA_thres);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int is_dfs_band = 10;
          int is_performance = 10;
          int rx_tp = 10;
          int tx_tp = 10;
          void * dm_void;
          int _len_dm_FA_thres0 = 100;
          int * dm_FA_thres = (int *) malloc(_len_dm_FA_thres0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dm_FA_thres0; _i0++) {
            dm_FA_thres[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          odm_fa_threshold_check(dm_void,is_dfs_band,is_performance,rx_tp,tx_tp,dm_FA_thres);
          free(dm_FA_thres);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
