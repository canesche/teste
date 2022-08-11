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
union power_supply_propval {int intval; } ;
struct TYPE_2__ {int flags; } ;
struct bq27xxx_device_info {int opts; TYPE_1__ cache; } ;

/* Variables and functions */
 int BQ27000_FLAG_EDV1 ; 
 int BQ27000_FLAG_EDVF ; 
 int BQ27000_FLAG_FC ; 
 int BQ27XXX_FLAG_FC ; 
 int BQ27XXX_FLAG_SOC1 ; 
 int BQ27XXX_FLAG_SOCF ; 
 int BQ27XXX_O_ZERO ; 
 int POWER_SUPPLY_CAPACITY_LEVEL_CRITICAL ; 
 int POWER_SUPPLY_CAPACITY_LEVEL_FULL ; 
 int POWER_SUPPLY_CAPACITY_LEVEL_LOW ; 
 int POWER_SUPPLY_CAPACITY_LEVEL_NORMAL ; 

__attribute__((used)) static int bq27xxx_battery_capacity_level(struct bq27xxx_device_info *di,
					  union power_supply_propval *val)
{
	int level;

	if (di->opts & BQ27XXX_O_ZERO) {
		if (di->cache.flags & BQ27000_FLAG_FC)
			level = POWER_SUPPLY_CAPACITY_LEVEL_FULL;
		else if (di->cache.flags & BQ27000_FLAG_EDV1)
			level = POWER_SUPPLY_CAPACITY_LEVEL_LOW;
		else if (di->cache.flags & BQ27000_FLAG_EDVF)
			level = POWER_SUPPLY_CAPACITY_LEVEL_CRITICAL;
		else
			level = POWER_SUPPLY_CAPACITY_LEVEL_NORMAL;
	} else {
		if (di->cache.flags & BQ27XXX_FLAG_FC)
			level = POWER_SUPPLY_CAPACITY_LEVEL_FULL;
		else if (di->cache.flags & BQ27XXX_FLAG_SOC1)
			level = POWER_SUPPLY_CAPACITY_LEVEL_LOW;
		else if (di->cache.flags & BQ27XXX_FLAG_SOCF)
			level = POWER_SUPPLY_CAPACITY_LEVEL_CRITICAL;
		else
			level = POWER_SUPPLY_CAPACITY_LEVEL_NORMAL;
	}

	val->intval = level;

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
          int _len_di0 = 1;
          struct bq27xxx_device_info * di = (struct bq27xxx_device_info *) malloc(_len_di0*sizeof(struct bq27xxx_device_info));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
            di[_i0].opts = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].cache.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 1;
          union power_supply_propval * val = (union power_supply_propval *) malloc(_len_val0*sizeof(union power_supply_propval));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = 0;
          }
          int benchRet = bq27xxx_battery_capacity_level(di,val);
          printf("%d\n", benchRet); 
          free(di);
          free(val);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_di0 = 65025;
          struct bq27xxx_device_info * di = (struct bq27xxx_device_info *) malloc(_len_di0*sizeof(struct bq27xxx_device_info));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
            di[_i0].opts = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].cache.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 65025;
          union power_supply_propval * val = (union power_supply_propval *) malloc(_len_val0*sizeof(union power_supply_propval));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = 0;
          }
          int benchRet = bq27xxx_battery_capacity_level(di,val);
          printf("%d\n", benchRet); 
          free(di);
          free(val);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_di0 = 100;
          struct bq27xxx_device_info * di = (struct bq27xxx_device_info *) malloc(_len_di0*sizeof(struct bq27xxx_device_info));
          for(int _i0 = 0; _i0 < _len_di0; _i0++) {
            di[_i0].opts = ((-2 * (next_i()%2)) + 1) * next_i();
        di[_i0].cache.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 100;
          union power_supply_propval * val = (union power_supply_propval *) malloc(_len_val0*sizeof(union power_supply_propval));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = 0;
          }
          int benchRet = bq27xxx_battery_capacity_level(di,val);
          printf("%d\n", benchRet); 
          free(di);
          free(val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
