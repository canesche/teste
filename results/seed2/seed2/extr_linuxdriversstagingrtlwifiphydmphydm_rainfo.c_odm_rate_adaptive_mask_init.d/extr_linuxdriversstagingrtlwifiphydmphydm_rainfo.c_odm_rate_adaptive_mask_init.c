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
struct odm_rate_adaptive {scalar_t__ type; int ldpc_thres; int is_use_ldpc; int high_rssi_thresh; int low_rssi_thresh; int /*<<< orphan*/  ratr_state; } ;
struct phy_dm_struct {int is_use_ra_mask; struct odm_rate_adaptive rate_adaptive; } ;

/* Variables and functions */
 int /*<<< orphan*/  DM_RATR_STA_INIT ; 
 scalar_t__ dm_type_by_driver ; 

void odm_rate_adaptive_mask_init(void *dm_void)
{
	struct phy_dm_struct *dm = (struct phy_dm_struct *)dm_void;
	struct odm_rate_adaptive *odm_ra = &dm->rate_adaptive;

	odm_ra->type = dm_type_by_driver;
	if (odm_ra->type == dm_type_by_driver)
		dm->is_use_ra_mask = true;
	else
		dm->is_use_ra_mask = false;

	odm_ra->ratr_state = DM_RATR_STA_INIT;

	odm_ra->ldpc_thres = 35;
	odm_ra->is_use_ldpc = false;

	odm_ra->high_rssi_thresh = 50;
	odm_ra->low_rssi_thresh = 20;
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
          void * dm_void;
          odm_rate_adaptive_mask_init(dm_void);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * dm_void;
          odm_rate_adaptive_mask_init(dm_void);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * dm_void;
          odm_rate_adaptive_mask_init(dm_void);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
