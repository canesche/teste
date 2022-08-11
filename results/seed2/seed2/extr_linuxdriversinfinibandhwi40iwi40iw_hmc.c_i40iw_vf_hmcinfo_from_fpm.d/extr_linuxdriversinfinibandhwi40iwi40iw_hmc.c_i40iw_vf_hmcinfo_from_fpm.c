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
typedef  scalar_t__ u8 ;
typedef  size_t u16 ;
struct i40iw_sc_dev {TYPE_1__** vf_dev; } ;
struct i40iw_hmc_info {int dummy; } ;
struct TYPE_2__ {struct i40iw_hmc_info hmc_info; scalar_t__ pmf_index; } ;

/* Variables and functions */
 size_t I40IW_MAX_PE_ENABLED_VF_COUNT ; 

struct i40iw_hmc_info *i40iw_vf_hmcinfo_from_fpm(struct i40iw_sc_dev *dev,
						 u8 hmc_fn_id)
{
	struct i40iw_hmc_info *hmc_info = NULL;
	u16 idx;

	for (idx = 0; idx < I40IW_MAX_PE_ENABLED_VF_COUNT; idx++) {
		if (dev->vf_dev[idx] &&
		    ((u8)dev->vf_dev[idx]->pmf_index == hmc_fn_id)) {
			hmc_info = &dev->vf_dev[idx]->hmc_info;
			break;
		}
	}
	return hmc_info;
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
          long hmc_fn_id = 100;
          int _len_dev0 = 1;
          struct i40iw_sc_dev * dev = (struct i40iw_sc_dev *) malloc(_len_dev0*sizeof(struct i40iw_sc_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__vf_dev0 = 1;
          dev[_i0].vf_dev = (struct TYPE_2__ **) malloc(_len_dev__i0__vf_dev0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_dev__i0__vf_dev0; _j0++) {
            int _len_dev__i0__vf_dev1 = 1;
            dev[_i0].vf_dev[_j0] = (struct TYPE_2__ *) malloc(_len_dev__i0__vf_dev1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_dev__i0__vf_dev1; _j1++) {
              dev[_i0].vf_dev[_j0]->hmc_info.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].vf_dev[_j0]->pmf_index = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct i40iw_hmc_info * benchRet = i40iw_vf_hmcinfo_from_fpm(dev,hmc_fn_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(*(dev[_aux].vf_dev));
        free(dev[_aux].vf_dev);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          long hmc_fn_id = 255;
          int _len_dev0 = 65025;
          struct i40iw_sc_dev * dev = (struct i40iw_sc_dev *) malloc(_len_dev0*sizeof(struct i40iw_sc_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__vf_dev0 = 1;
          dev[_i0].vf_dev = (struct TYPE_2__ **) malloc(_len_dev__i0__vf_dev0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_dev__i0__vf_dev0; _j0++) {
            int _len_dev__i0__vf_dev1 = 1;
            dev[_i0].vf_dev[_j0] = (struct TYPE_2__ *) malloc(_len_dev__i0__vf_dev1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_dev__i0__vf_dev1; _j1++) {
              dev[_i0].vf_dev[_j0]->hmc_info.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].vf_dev[_j0]->pmf_index = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct i40iw_hmc_info * benchRet = i40iw_vf_hmcinfo_from_fpm(dev,hmc_fn_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(*(dev[_aux].vf_dev));
        free(dev[_aux].vf_dev);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long hmc_fn_id = 10;
          int _len_dev0 = 100;
          struct i40iw_sc_dev * dev = (struct i40iw_sc_dev *) malloc(_len_dev0*sizeof(struct i40iw_sc_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__vf_dev0 = 1;
          dev[_i0].vf_dev = (struct TYPE_2__ **) malloc(_len_dev__i0__vf_dev0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_dev__i0__vf_dev0; _j0++) {
            int _len_dev__i0__vf_dev1 = 1;
            dev[_i0].vf_dev[_j0] = (struct TYPE_2__ *) malloc(_len_dev__i0__vf_dev1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_dev__i0__vf_dev1; _j1++) {
              dev[_i0].vf_dev[_j0]->hmc_info.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].vf_dev[_j0]->pmf_index = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct i40iw_hmc_info * benchRet = i40iw_vf_hmcinfo_from_fpm(dev,hmc_fn_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(*(dev[_aux].vf_dev));
        free(dev[_aux].vf_dev);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
