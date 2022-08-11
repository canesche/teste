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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u32 ;
struct TYPE_4__ {int /*<<< orphan*/ * pkts; } ;
struct iwl_mvm_tcm_mac {TYPE_2__ tx; } ;
struct iwl_mvm_sta {int mac_id_n_color; } ;
struct TYPE_3__ {struct iwl_mvm_tcm_mac* data; } ;
struct iwl_mvm {TYPE_1__ tcm; } ;

/* Variables and functions */
 int FW_CTXT_ID_MSK ; 
 size_t* tid_to_mac80211_ac ; 

__attribute__((used)) static void iwl_mvm_tx_pkt_queued(struct iwl_mvm *mvm,
				  struct iwl_mvm_sta *mvmsta, int tid)
{
	u32 ac = tid_to_mac80211_ac[tid];
	int mac = mvmsta->mac_id_n_color & FW_CTXT_ID_MSK;
	struct iwl_mvm_tcm_mac *mdata = &mvm->tcm.data[mac];

	mdata->tx.pkts[ac]++;
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
          int _len_mvm0 = 1;
          struct iwl_mvm * mvm = (struct iwl_mvm *) malloc(_len_mvm0*sizeof(struct iwl_mvm));
          for(int _i0 = 0; _i0 < _len_mvm0; _i0++) {
              int _len_mvm__i0__tcm_data0 = 1;
          mvm[_i0].tcm.data = (struct iwl_mvm_tcm_mac *) malloc(_len_mvm__i0__tcm_data0*sizeof(struct iwl_mvm_tcm_mac));
          for(int _j0 = 0; _j0 < _len_mvm__i0__tcm_data0; _j0++) {
              int _len_mvm__i0__tcm_data_tx_pkts0 = 1;
          mvm[_i0].tcm.data->tx.pkts = (int *) malloc(_len_mvm__i0__tcm_data_tx_pkts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mvm__i0__tcm_data_tx_pkts0; _j0++) {
            mvm[_i0].tcm.data->tx.pkts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_mvmsta0 = 1;
          struct iwl_mvm_sta * mvmsta = (struct iwl_mvm_sta *) malloc(_len_mvmsta0*sizeof(struct iwl_mvm_sta));
          for(int _i0 = 0; _i0 < _len_mvmsta0; _i0++) {
            mvmsta[_i0].mac_id_n_color = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iwl_mvm_tx_pkt_queued(mvm,mvmsta,tid);
          free(mvm);
          free(mvmsta);
        
        break;
    }
    // big-arr
    case 1:
    {
          int tid = 255;
          int _len_mvm0 = 65025;
          struct iwl_mvm * mvm = (struct iwl_mvm *) malloc(_len_mvm0*sizeof(struct iwl_mvm));
          for(int _i0 = 0; _i0 < _len_mvm0; _i0++) {
              int _len_mvm__i0__tcm_data0 = 1;
          mvm[_i0].tcm.data = (struct iwl_mvm_tcm_mac *) malloc(_len_mvm__i0__tcm_data0*sizeof(struct iwl_mvm_tcm_mac));
          for(int _j0 = 0; _j0 < _len_mvm__i0__tcm_data0; _j0++) {
              int _len_mvm__i0__tcm_data_tx_pkts0 = 1;
          mvm[_i0].tcm.data->tx.pkts = (int *) malloc(_len_mvm__i0__tcm_data_tx_pkts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mvm__i0__tcm_data_tx_pkts0; _j0++) {
            mvm[_i0].tcm.data->tx.pkts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_mvmsta0 = 65025;
          struct iwl_mvm_sta * mvmsta = (struct iwl_mvm_sta *) malloc(_len_mvmsta0*sizeof(struct iwl_mvm_sta));
          for(int _i0 = 0; _i0 < _len_mvmsta0; _i0++) {
            mvmsta[_i0].mac_id_n_color = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iwl_mvm_tx_pkt_queued(mvm,mvmsta,tid);
          free(mvm);
          free(mvmsta);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tid = 10;
          int _len_mvm0 = 100;
          struct iwl_mvm * mvm = (struct iwl_mvm *) malloc(_len_mvm0*sizeof(struct iwl_mvm));
          for(int _i0 = 0; _i0 < _len_mvm0; _i0++) {
              int _len_mvm__i0__tcm_data0 = 1;
          mvm[_i0].tcm.data = (struct iwl_mvm_tcm_mac *) malloc(_len_mvm__i0__tcm_data0*sizeof(struct iwl_mvm_tcm_mac));
          for(int _j0 = 0; _j0 < _len_mvm__i0__tcm_data0; _j0++) {
              int _len_mvm__i0__tcm_data_tx_pkts0 = 1;
          mvm[_i0].tcm.data->tx.pkts = (int *) malloc(_len_mvm__i0__tcm_data_tx_pkts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mvm__i0__tcm_data_tx_pkts0; _j0++) {
            mvm[_i0].tcm.data->tx.pkts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_mvmsta0 = 100;
          struct iwl_mvm_sta * mvmsta = (struct iwl_mvm_sta *) malloc(_len_mvmsta0*sizeof(struct iwl_mvm_sta));
          for(int _i0 = 0; _i0 < _len_mvmsta0; _i0++) {
            mvmsta[_i0].mac_id_n_color = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iwl_mvm_tx_pkt_queued(mvm,mvmsta,tid);
          free(mvm);
          free(mvmsta);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
