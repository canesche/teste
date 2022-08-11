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
union power_supply_propval {int /*<<< orphan*/  strval; } ;
struct gb_power_supply {int /*<<< orphan*/  serial_number; int /*<<< orphan*/  manufacturer; int /*<<< orphan*/  model_name; } ;
typedef  enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;

/* Variables and functions */
#define  POWER_SUPPLY_PROP_MANUFACTURER 130 
#define  POWER_SUPPLY_PROP_MODEL_NAME 129 
#define  POWER_SUPPLY_PROP_SERIAL_NUMBER 128 

__attribute__((used)) static int __gb_power_supply_property_strval_get(struct gb_power_supply *gbpsy,
						enum power_supply_property psp,
						union power_supply_propval *val)
{
	switch (psp) {
	case POWER_SUPPLY_PROP_MODEL_NAME:
		val->strval = gbpsy->model_name;
		break;
	case POWER_SUPPLY_PROP_MANUFACTURER:
		val->strval = gbpsy->manufacturer;
		break;
	case POWER_SUPPLY_PROP_SERIAL_NUMBER:
		val->strval = gbpsy->serial_number;
		break;
	default:
		break;
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
          enum power_supply_property psp = 0;
          int _len_gbpsy0 = 1;
          struct gb_power_supply * gbpsy = (struct gb_power_supply *) malloc(_len_gbpsy0*sizeof(struct gb_power_supply));
          for(int _i0 = 0; _i0 < _len_gbpsy0; _i0++) {
            gbpsy[_i0].serial_number = ((-2 * (next_i()%2)) + 1) * next_i();
        gbpsy[_i0].manufacturer = ((-2 * (next_i()%2)) + 1) * next_i();
        gbpsy[_i0].model_name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 1;
          union power_supply_propval * val = (union power_supply_propval *) malloc(_len_val0*sizeof(union power_supply_propval));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = 0;
          }
          int benchRet = __gb_power_supply_property_strval_get(gbpsy,psp,val);
          printf("%d\n", benchRet); 
          free(gbpsy);
          free(val);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum power_supply_property psp = 0;
          int _len_gbpsy0 = 65025;
          struct gb_power_supply * gbpsy = (struct gb_power_supply *) malloc(_len_gbpsy0*sizeof(struct gb_power_supply));
          for(int _i0 = 0; _i0 < _len_gbpsy0; _i0++) {
            gbpsy[_i0].serial_number = ((-2 * (next_i()%2)) + 1) * next_i();
        gbpsy[_i0].manufacturer = ((-2 * (next_i()%2)) + 1) * next_i();
        gbpsy[_i0].model_name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 65025;
          union power_supply_propval * val = (union power_supply_propval *) malloc(_len_val0*sizeof(union power_supply_propval));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = 0;
          }
          int benchRet = __gb_power_supply_property_strval_get(gbpsy,psp,val);
          printf("%d\n", benchRet); 
          free(gbpsy);
          free(val);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum power_supply_property psp = 0;
          int _len_gbpsy0 = 100;
          struct gb_power_supply * gbpsy = (struct gb_power_supply *) malloc(_len_gbpsy0*sizeof(struct gb_power_supply));
          for(int _i0 = 0; _i0 < _len_gbpsy0; _i0++) {
            gbpsy[_i0].serial_number = ((-2 * (next_i()%2)) + 1) * next_i();
        gbpsy[_i0].manufacturer = ((-2 * (next_i()%2)) + 1) * next_i();
        gbpsy[_i0].model_name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 100;
          union power_supply_propval * val = (union power_supply_propval *) malloc(_len_val0*sizeof(union power_supply_propval));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = 0;
          }
          int benchRet = __gb_power_supply_property_strval_get(gbpsy,psp,val);
          printf("%d\n", benchRet); 
          free(gbpsy);
          free(val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
