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
union power_supply_propval {int /*<<< orphan*/  intval; } ;
struct da9030_charger {scalar_t__ is_on; scalar_t__ chdet; } ;

/* Variables and functions */
 int /*<<< orphan*/  POWER_SUPPLY_STATUS_CHARGING ; 
 int /*<<< orphan*/  POWER_SUPPLY_STATUS_DISCHARGING ; 
 int /*<<< orphan*/  POWER_SUPPLY_STATUS_NOT_CHARGING ; 

__attribute__((used)) static void da9030_battery_check_status(struct da9030_charger *charger,
				    union power_supply_propval *val)
{
	if (charger->chdet) {
		if (charger->is_on)
			val->intval = POWER_SUPPLY_STATUS_CHARGING;
		else
			val->intval = POWER_SUPPLY_STATUS_NOT_CHARGING;
	} else {
		val->intval = POWER_SUPPLY_STATUS_DISCHARGING;
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
          int _len_charger0 = 1;
          struct da9030_charger * charger = (struct da9030_charger *) malloc(_len_charger0*sizeof(struct da9030_charger));
          for(int _i0 = 0; _i0 < _len_charger0; _i0++) {
            charger[_i0].is_on = ((-2 * (next_i()%2)) + 1) * next_i();
        charger[_i0].chdet = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 1;
          union power_supply_propval * val = (union power_supply_propval *) malloc(_len_val0*sizeof(union power_supply_propval));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = 0;
          }
          da9030_battery_check_status(charger,val);
          free(charger);
          free(val);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_charger0 = 65025;
          struct da9030_charger * charger = (struct da9030_charger *) malloc(_len_charger0*sizeof(struct da9030_charger));
          for(int _i0 = 0; _i0 < _len_charger0; _i0++) {
            charger[_i0].is_on = ((-2 * (next_i()%2)) + 1) * next_i();
        charger[_i0].chdet = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 65025;
          union power_supply_propval * val = (union power_supply_propval *) malloc(_len_val0*sizeof(union power_supply_propval));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = 0;
          }
          da9030_battery_check_status(charger,val);
          free(charger);
          free(val);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_charger0 = 100;
          struct da9030_charger * charger = (struct da9030_charger *) malloc(_len_charger0*sizeof(struct da9030_charger));
          for(int _i0 = 0; _i0 < _len_charger0; _i0++) {
            charger[_i0].is_on = ((-2 * (next_i()%2)) + 1) * next_i();
        charger[_i0].chdet = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 100;
          union power_supply_propval * val = (union power_supply_propval *) malloc(_len_val0*sizeof(union power_supply_propval));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = 0;
          }
          da9030_battery_check_status(charger,val);
          free(charger);
          free(val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
