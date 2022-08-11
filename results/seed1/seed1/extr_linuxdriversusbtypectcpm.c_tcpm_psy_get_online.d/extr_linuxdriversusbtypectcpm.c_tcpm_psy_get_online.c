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
union power_supply_propval {int /*<<< orphan*/  intval; } ;
struct TYPE_2__ {scalar_t__ active; } ;
struct tcpm_port {TYPE_1__ pps_data; scalar_t__ vbus_charge; } ;

/* Variables and functions */
 int /*<<< orphan*/  TCPM_PSY_FIXED_ONLINE ; 
 int /*<<< orphan*/  TCPM_PSY_OFFLINE ; 
 int /*<<< orphan*/  TCPM_PSY_PROG_ONLINE ; 

__attribute__((used)) static int tcpm_psy_get_online(struct tcpm_port *port,
			       union power_supply_propval *val)
{
	if (port->vbus_charge) {
		if (port->pps_data.active)
			val->intval = TCPM_PSY_PROG_ONLINE;
		else
			val->intval = TCPM_PSY_FIXED_ONLINE;
	} else {
		val->intval = TCPM_PSY_OFFLINE;
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
          int _len_port0 = 1;
          struct tcpm_port * port = (struct tcpm_port *) malloc(_len_port0*sizeof(struct tcpm_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].pps_data.active = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].vbus_charge = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 1;
          union power_supply_propval * val = (union power_supply_propval *) malloc(_len_val0*sizeof(union power_supply_propval));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = 0;
          }
          int benchRet = tcpm_psy_get_online(port,val);
          printf("%d\n", benchRet); 
          free(port);
          free(val);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_port0 = 65025;
          struct tcpm_port * port = (struct tcpm_port *) malloc(_len_port0*sizeof(struct tcpm_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].pps_data.active = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].vbus_charge = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 65025;
          union power_supply_propval * val = (union power_supply_propval *) malloc(_len_val0*sizeof(union power_supply_propval));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = 0;
          }
          int benchRet = tcpm_psy_get_online(port,val);
          printf("%d\n", benchRet); 
          free(port);
          free(val);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_port0 = 100;
          struct tcpm_port * port = (struct tcpm_port *) malloc(_len_port0*sizeof(struct tcpm_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].pps_data.active = ((-2 * (next_i()%2)) + 1) * next_i();
        port[_i0].vbus_charge = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 100;
          union power_supply_propval * val = (union power_supply_propval *) malloc(_len_val0*sizeof(union power_supply_propval));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = 0;
          }
          int benchRet = tcpm_psy_get_online(port,val);
          printf("%d\n", benchRet); 
          free(port);
          free(val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
