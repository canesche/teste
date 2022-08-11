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
union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct da9150_charger {struct power_supply* supply_online; } ;

/* Variables and functions */

__attribute__((used)) static inline int da9150_charger_supply_online(struct da9150_charger *charger,
					       struct power_supply *psy,
					       union power_supply_propval *val)
{
	val->intval = (psy == charger->supply_online) ? 1 : 0;

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
          int _len_charger0 = 1;
          struct da9150_charger * charger = (struct da9150_charger *) malloc(_len_charger0*sizeof(struct da9150_charger));
          for(int _i0 = 0; _i0 < _len_charger0; _i0++) {
              int _len_charger__i0__supply_online0 = 1;
          charger[_i0].supply_online = (struct power_supply *) malloc(_len_charger__i0__supply_online0*sizeof(struct power_supply));
          for(int _j0 = 0; _j0 < _len_charger__i0__supply_online0; _j0++) {
            charger[_i0].supply_online->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_psy0 = 1;
          struct power_supply * psy = (struct power_supply *) malloc(_len_psy0*sizeof(struct power_supply));
          for(int _i0 = 0; _i0 < _len_psy0; _i0++) {
            psy[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 1;
          union power_supply_propval * val = (union power_supply_propval *) malloc(_len_val0*sizeof(union power_supply_propval));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = 0;
          }
          int benchRet = da9150_charger_supply_online(charger,psy,val);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_charger0; _aux++) {
          free(charger[_aux].supply_online);
          }
          free(charger);
          free(psy);
          free(val);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_charger0 = 65025;
          struct da9150_charger * charger = (struct da9150_charger *) malloc(_len_charger0*sizeof(struct da9150_charger));
          for(int _i0 = 0; _i0 < _len_charger0; _i0++) {
              int _len_charger__i0__supply_online0 = 1;
          charger[_i0].supply_online = (struct power_supply *) malloc(_len_charger__i0__supply_online0*sizeof(struct power_supply));
          for(int _j0 = 0; _j0 < _len_charger__i0__supply_online0; _j0++) {
            charger[_i0].supply_online->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_psy0 = 65025;
          struct power_supply * psy = (struct power_supply *) malloc(_len_psy0*sizeof(struct power_supply));
          for(int _i0 = 0; _i0 < _len_psy0; _i0++) {
            psy[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 65025;
          union power_supply_propval * val = (union power_supply_propval *) malloc(_len_val0*sizeof(union power_supply_propval));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = 0;
          }
          int benchRet = da9150_charger_supply_online(charger,psy,val);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_charger0; _aux++) {
          free(charger[_aux].supply_online);
          }
          free(charger);
          free(psy);
          free(val);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_charger0 = 100;
          struct da9150_charger * charger = (struct da9150_charger *) malloc(_len_charger0*sizeof(struct da9150_charger));
          for(int _i0 = 0; _i0 < _len_charger0; _i0++) {
              int _len_charger__i0__supply_online0 = 1;
          charger[_i0].supply_online = (struct power_supply *) malloc(_len_charger__i0__supply_online0*sizeof(struct power_supply));
          for(int _j0 = 0; _j0 < _len_charger__i0__supply_online0; _j0++) {
            charger[_i0].supply_online->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_psy0 = 100;
          struct power_supply * psy = (struct power_supply *) malloc(_len_psy0*sizeof(struct power_supply));
          for(int _i0 = 0; _i0 < _len_psy0; _i0++) {
            psy[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 100;
          union power_supply_propval * val = (union power_supply_propval *) malloc(_len_val0*sizeof(union power_supply_propval));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = 0;
          }
          int benchRet = da9150_charger_supply_online(charger,psy,val);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_charger0; _aux++) {
          free(charger[_aux].supply_online);
          }
          free(charger);
          free(psy);
          free(val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
