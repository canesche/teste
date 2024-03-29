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
struct iwl_mvm {TYPE_2__* trans; } ;
struct TYPE_4__ {TYPE_1__* cfg; } ;
struct TYPE_3__ {scalar_t__ device_family; } ;

/* Variables and functions */
 scalar_t__ IWL_DEVICE_FAMILY_22000 ; 

__attribute__((used)) static inline bool iwl_mvm_cdb_scan_api(struct iwl_mvm *mvm)
{
	/*
	 * TODO: should this be the same as iwl_mvm_is_cdb_supported()?
	 * but then there's a little bit of code in scan that won't make
	 * any sense...
	 */
	return mvm->trans->cfg->device_family >= IWL_DEVICE_FAMILY_22000;
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
          int _len_mvm0 = 1;
          struct iwl_mvm * mvm = (struct iwl_mvm *) malloc(_len_mvm0*sizeof(struct iwl_mvm));
          for(int _i0 = 0; _i0 < _len_mvm0; _i0++) {
              int _len_mvm__i0__trans0 = 1;
          mvm[_i0].trans = (struct TYPE_4__ *) malloc(_len_mvm__i0__trans0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mvm__i0__trans0; _j0++) {
              int _len_mvm__i0__trans_cfg0 = 1;
          mvm[_i0].trans->cfg = (struct TYPE_3__ *) malloc(_len_mvm__i0__trans_cfg0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_mvm__i0__trans_cfg0; _j0++) {
            mvm[_i0].trans->cfg->device_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = iwl_mvm_cdb_scan_api(mvm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mvm0; _aux++) {
          free(mvm[_aux].trans);
          }
          free(mvm);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mvm0 = 65025;
          struct iwl_mvm * mvm = (struct iwl_mvm *) malloc(_len_mvm0*sizeof(struct iwl_mvm));
          for(int _i0 = 0; _i0 < _len_mvm0; _i0++) {
              int _len_mvm__i0__trans0 = 1;
          mvm[_i0].trans = (struct TYPE_4__ *) malloc(_len_mvm__i0__trans0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mvm__i0__trans0; _j0++) {
              int _len_mvm__i0__trans_cfg0 = 1;
          mvm[_i0].trans->cfg = (struct TYPE_3__ *) malloc(_len_mvm__i0__trans_cfg0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_mvm__i0__trans_cfg0; _j0++) {
            mvm[_i0].trans->cfg->device_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = iwl_mvm_cdb_scan_api(mvm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mvm0; _aux++) {
          free(mvm[_aux].trans);
          }
          free(mvm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mvm0 = 100;
          struct iwl_mvm * mvm = (struct iwl_mvm *) malloc(_len_mvm0*sizeof(struct iwl_mvm));
          for(int _i0 = 0; _i0 < _len_mvm0; _i0++) {
              int _len_mvm__i0__trans0 = 1;
          mvm[_i0].trans = (struct TYPE_4__ *) malloc(_len_mvm__i0__trans0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mvm__i0__trans0; _j0++) {
              int _len_mvm__i0__trans_cfg0 = 1;
          mvm[_i0].trans->cfg = (struct TYPE_3__ *) malloc(_len_mvm__i0__trans_cfg0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_mvm__i0__trans_cfg0; _j0++) {
            mvm[_i0].trans->cfg->device_family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = iwl_mvm_cdb_scan_api(mvm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mvm0; _aux++) {
          free(mvm[_aux].trans);
          }
          free(mvm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
