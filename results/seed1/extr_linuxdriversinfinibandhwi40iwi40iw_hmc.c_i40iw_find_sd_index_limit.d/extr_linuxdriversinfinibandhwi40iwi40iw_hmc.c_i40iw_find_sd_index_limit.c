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
typedef  size_t u64 ;
typedef  size_t u32 ;
struct i40iw_hmc_info {TYPE_1__* hmc_obj; } ;
struct TYPE_2__ {size_t base; size_t size; } ;

/* Variables and functions */
 size_t I40IW_HMC_DIRECT_BP_SIZE ; 

__attribute__((used)) static inline void i40iw_find_sd_index_limit(struct i40iw_hmc_info *hmc_info,
					     u32 type,
					     u32 idx,
					     u32 cnt,
					     u32 *sd_idx,
					     u32 *sd_limit)
{
	u64 fpm_addr, fpm_limit;

	fpm_addr = hmc_info->hmc_obj[(type)].base +
			hmc_info->hmc_obj[type].size * idx;
	fpm_limit = fpm_addr + hmc_info->hmc_obj[type].size * cnt;
	*sd_idx = (u32)(fpm_addr / I40IW_HMC_DIRECT_BP_SIZE);
	*sd_limit = (u32)((fpm_limit - 1) / I40IW_HMC_DIRECT_BP_SIZE);
	*sd_limit += 1;
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
          unsigned long type = 100;
          unsigned long idx = 100;
          unsigned long cnt = 100;
          int _len_hmc_info0 = 1;
          struct i40iw_hmc_info * hmc_info = (struct i40iw_hmc_info *) malloc(_len_hmc_info0*sizeof(struct i40iw_hmc_info));
          for(int _i0 = 0; _i0 < _len_hmc_info0; _i0++) {
              int _len_hmc_info__i0__hmc_obj0 = 1;
          hmc_info[_i0].hmc_obj = (struct TYPE_2__ *) malloc(_len_hmc_info__i0__hmc_obj0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hmc_info__i0__hmc_obj0; _j0++) {
            hmc_info[_i0].hmc_obj->base = ((-2 * (next_i()%2)) + 1) * next_i();
        hmc_info[_i0].hmc_obj->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sd_idx0 = 1;
          unsigned long * sd_idx = (unsigned long *) malloc(_len_sd_idx0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_sd_idx0; _i0++) {
            sd_idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sd_limit0 = 1;
          unsigned long * sd_limit = (unsigned long *) malloc(_len_sd_limit0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_sd_limit0; _i0++) {
            sd_limit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i40iw_find_sd_index_limit(hmc_info,type,idx,cnt,sd_idx,sd_limit);
          for(int _aux = 0; _aux < _len_hmc_info0; _aux++) {
          free(hmc_info[_aux].hmc_obj);
          }
          free(hmc_info);
          free(sd_idx);
          free(sd_limit);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long type = 255;
          unsigned long idx = 255;
          unsigned long cnt = 255;
          int _len_hmc_info0 = 65025;
          struct i40iw_hmc_info * hmc_info = (struct i40iw_hmc_info *) malloc(_len_hmc_info0*sizeof(struct i40iw_hmc_info));
          for(int _i0 = 0; _i0 < _len_hmc_info0; _i0++) {
              int _len_hmc_info__i0__hmc_obj0 = 1;
          hmc_info[_i0].hmc_obj = (struct TYPE_2__ *) malloc(_len_hmc_info__i0__hmc_obj0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hmc_info__i0__hmc_obj0; _j0++) {
            hmc_info[_i0].hmc_obj->base = ((-2 * (next_i()%2)) + 1) * next_i();
        hmc_info[_i0].hmc_obj->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sd_idx0 = 65025;
          unsigned long * sd_idx = (unsigned long *) malloc(_len_sd_idx0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_sd_idx0; _i0++) {
            sd_idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sd_limit0 = 65025;
          unsigned long * sd_limit = (unsigned long *) malloc(_len_sd_limit0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_sd_limit0; _i0++) {
            sd_limit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i40iw_find_sd_index_limit(hmc_info,type,idx,cnt,sd_idx,sd_limit);
          for(int _aux = 0; _aux < _len_hmc_info0; _aux++) {
          free(hmc_info[_aux].hmc_obj);
          }
          free(hmc_info);
          free(sd_idx);
          free(sd_limit);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long type = 10;
          unsigned long idx = 10;
          unsigned long cnt = 10;
          int _len_hmc_info0 = 100;
          struct i40iw_hmc_info * hmc_info = (struct i40iw_hmc_info *) malloc(_len_hmc_info0*sizeof(struct i40iw_hmc_info));
          for(int _i0 = 0; _i0 < _len_hmc_info0; _i0++) {
              int _len_hmc_info__i0__hmc_obj0 = 1;
          hmc_info[_i0].hmc_obj = (struct TYPE_2__ *) malloc(_len_hmc_info__i0__hmc_obj0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hmc_info__i0__hmc_obj0; _j0++) {
            hmc_info[_i0].hmc_obj->base = ((-2 * (next_i()%2)) + 1) * next_i();
        hmc_info[_i0].hmc_obj->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sd_idx0 = 100;
          unsigned long * sd_idx = (unsigned long *) malloc(_len_sd_idx0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_sd_idx0; _i0++) {
            sd_idx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sd_limit0 = 100;
          unsigned long * sd_limit = (unsigned long *) malloc(_len_sd_limit0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_sd_limit0; _i0++) {
            sd_limit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i40iw_find_sd_index_limit(hmc_info,type,idx,cnt,sd_idx,sd_limit);
          for(int _aux = 0; _aux < _len_hmc_info0; _aux++) {
          free(hmc_info[_aux].hmc_obj);
          }
          free(hmc_info);
          free(sd_idx);
          free(sd_limit);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
