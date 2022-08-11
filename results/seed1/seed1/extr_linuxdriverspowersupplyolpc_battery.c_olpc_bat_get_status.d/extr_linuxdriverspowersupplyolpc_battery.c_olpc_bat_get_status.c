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
union power_supply_propval {void* intval; } ;
typedef  int uint8_t ;
struct TYPE_2__ {int ecver; } ;

/* Variables and functions */
 int BAT_STAT_AC ; 
 int BAT_STAT_CHARGING ; 
 int BAT_STAT_DISCHARGING ; 
 int BAT_STAT_FULL ; 
 int BAT_STAT_TRICKLE ; 
 void* POWER_SUPPLY_STATUS_CHARGING ; 
 void* POWER_SUPPLY_STATUS_DISCHARGING ; 
 void* POWER_SUPPLY_STATUS_FULL ; 
 void* POWER_SUPPLY_STATUS_NOT_CHARGING ; 
 TYPE_1__ olpc_platform_info ; 

__attribute__((used)) static int olpc_bat_get_status(union power_supply_propval *val, uint8_t ec_byte)
{
	if (olpc_platform_info.ecver > 0x44) {
		if (ec_byte & (BAT_STAT_CHARGING | BAT_STAT_TRICKLE))
			val->intval = POWER_SUPPLY_STATUS_CHARGING;
		else if (ec_byte & BAT_STAT_DISCHARGING)
			val->intval = POWER_SUPPLY_STATUS_DISCHARGING;
		else if (ec_byte & BAT_STAT_FULL)
			val->intval = POWER_SUPPLY_STATUS_FULL;
		else /* er,... */
			val->intval = POWER_SUPPLY_STATUS_NOT_CHARGING;
	} else {
		/* Older EC didn't report charge/discharge bits */
		if (!(ec_byte & BAT_STAT_AC)) /* No AC means discharging */
			val->intval = POWER_SUPPLY_STATUS_DISCHARGING;
		else if (ec_byte & BAT_STAT_FULL)
			val->intval = POWER_SUPPLY_STATUS_FULL;
		else /* Not _necessarily_ true but EC doesn't tell all yet */
			val->intval = POWER_SUPPLY_STATUS_CHARGING;
	}

	return 0;
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
          int ec_byte = 100;
          int _len_val0 = 1;
          union power_supply_propval * val = (union power_supply_propval *) malloc(_len_val0*sizeof(union power_supply_propval));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = 0;
          }
          int benchRet = olpc_bat_get_status(val,ec_byte);
          printf("%d\n", benchRet); 
          free(val);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ec_byte = 255;
          int _len_val0 = 65025;
          union power_supply_propval * val = (union power_supply_propval *) malloc(_len_val0*sizeof(union power_supply_propval));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = 0;
          }
          int benchRet = olpc_bat_get_status(val,ec_byte);
          printf("%d\n", benchRet); 
          free(val);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ec_byte = 10;
          int _len_val0 = 100;
          union power_supply_propval * val = (union power_supply_propval *) malloc(_len_val0*sizeof(union power_supply_propval));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = 0;
          }
          int benchRet = olpc_bat_get_status(val,ec_byte);
          printf("%d\n", benchRet); 
          free(val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
