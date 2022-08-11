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
typedef  void* u8 ;
typedef  scalar_t__ u32 ;
struct dig_thres {int dig_enable_flag; void* rx_gain_range_max; void* rx_gain_range_min; void* backoff_val; scalar_t__ rssi_low_thresh; scalar_t__ rssi_high_thresh; } ;
struct phy_dm_struct {struct dig_thres dm_dig_table; } ;

/* Variables and functions */
 scalar_t__ DIG_TYPE_BACKOFF ; 
 scalar_t__ DIG_TYPE_DISABLE ; 
 scalar_t__ DIG_TYPE_ENABLE ; 
 scalar_t__ DIG_TYPE_RX_GAIN_MAX ; 
 scalar_t__ DIG_TYPE_RX_GAIN_MIN ; 
 scalar_t__ DIG_TYPE_THRESH_HIGH ; 
 scalar_t__ DIG_TYPE_THRESH_LOW ; 

void odm_change_dynamic_init_gain_thresh(void *dm_void, u32 dm_type,
					 u32 dm_value)
{
	struct phy_dm_struct *dm = (struct phy_dm_struct *)dm_void;
	struct dig_thres *dig_tab = &dm->dm_dig_table;

	if (dm_type == DIG_TYPE_THRESH_HIGH) {
		dig_tab->rssi_high_thresh = dm_value;
	} else if (dm_type == DIG_TYPE_THRESH_LOW) {
		dig_tab->rssi_low_thresh = dm_value;
	} else if (dm_type == DIG_TYPE_ENABLE) {
		dig_tab->dig_enable_flag = true;
	} else if (dm_type == DIG_TYPE_DISABLE) {
		dig_tab->dig_enable_flag = false;
	} else if (dm_type == DIG_TYPE_BACKOFF) {
		if (dm_value > 30)
			dm_value = 30;
		dig_tab->backoff_val = (u8)dm_value;
	} else if (dm_type == DIG_TYPE_RX_GAIN_MIN) {
		if (dm_value == 0)
			dm_value = 0x1;
		dig_tab->rx_gain_range_min = (u8)dm_value;
	} else if (dm_type == DIG_TYPE_RX_GAIN_MAX) {
		if (dm_value > 0x50)
			dm_value = 0x50;
		dig_tab->rx_gain_range_max = (u8)dm_value;
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
          long dm_type = 100;
          long dm_value = 100;
          void * dm_void;
          odm_change_dynamic_init_gain_thresh(dm_void,dm_type,dm_value);
        
        break;
    }
    // big-arr
    case 1:
    {
          long dm_type = 255;
          long dm_value = 255;
          void * dm_void;
          odm_change_dynamic_init_gain_thresh(dm_void,dm_type,dm_value);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long dm_type = 10;
          long dm_value = 10;
          void * dm_void;
          odm_change_dynamic_init_gain_thresh(dm_void,dm_type,dm_value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
