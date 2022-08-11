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
struct mv88e6xxx_chip {int sw_addr; struct mii_bus* bus; int /*<<< orphan*/ * smi_ops; TYPE_1__* info; } ;
struct mii_bus {int dummy; } ;
struct TYPE_2__ {scalar_t__ multi_chip; } ;

/* Variables and functions */
 int EINVAL ; 
 int /*<<< orphan*/  mv88e6xxx_smi_multi_chip_ops ; 
 int /*<<< orphan*/  mv88e6xxx_smi_single_chip_ops ; 

__attribute__((used)) static int mv88e6xxx_smi_init(struct mv88e6xxx_chip *chip,
			      struct mii_bus *bus, int sw_addr)
{
	if (sw_addr == 0)
		chip->smi_ops = &mv88e6xxx_smi_single_chip_ops;
	else if (chip->info->multi_chip)
		chip->smi_ops = &mv88e6xxx_smi_multi_chip_ops;
	else
		return -EINVAL;

	chip->bus = bus;
	chip->sw_addr = sw_addr;

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
          int sw_addr = 100;
          int _len_chip0 = 1;
          struct mv88e6xxx_chip * chip = (struct mv88e6xxx_chip *) malloc(_len_chip0*sizeof(struct mv88e6xxx_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].sw_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__bus0 = 1;
          chip[_i0].bus = (struct mii_bus *) malloc(_len_chip__i0__bus0*sizeof(struct mii_bus));
          for(int _j0 = 0; _j0 < _len_chip__i0__bus0; _j0++) {
            chip[_i0].bus->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chip__i0__smi_ops0 = 1;
          chip[_i0].smi_ops = (int *) malloc(_len_chip__i0__smi_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__smi_ops0; _j0++) {
            chip[_i0].smi_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chip__i0__info0 = 1;
          chip[_i0].info = (struct TYPE_2__ *) malloc(_len_chip__i0__info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chip__i0__info0; _j0++) {
            chip[_i0].info->multi_chip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bus0 = 1;
          struct mii_bus * bus = (struct mii_bus *) malloc(_len_bus0*sizeof(struct mii_bus));
          for(int _i0 = 0; _i0 < _len_bus0; _i0++) {
            bus[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mv88e6xxx_smi_init(chip,bus,sw_addr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].bus);
          }
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].smi_ops);
          }
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].info);
          }
          free(chip);
          free(bus);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sw_addr = 255;
          int _len_chip0 = 65025;
          struct mv88e6xxx_chip * chip = (struct mv88e6xxx_chip *) malloc(_len_chip0*sizeof(struct mv88e6xxx_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].sw_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__bus0 = 1;
          chip[_i0].bus = (struct mii_bus *) malloc(_len_chip__i0__bus0*sizeof(struct mii_bus));
          for(int _j0 = 0; _j0 < _len_chip__i0__bus0; _j0++) {
            chip[_i0].bus->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chip__i0__smi_ops0 = 1;
          chip[_i0].smi_ops = (int *) malloc(_len_chip__i0__smi_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__smi_ops0; _j0++) {
            chip[_i0].smi_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chip__i0__info0 = 1;
          chip[_i0].info = (struct TYPE_2__ *) malloc(_len_chip__i0__info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chip__i0__info0; _j0++) {
            chip[_i0].info->multi_chip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bus0 = 65025;
          struct mii_bus * bus = (struct mii_bus *) malloc(_len_bus0*sizeof(struct mii_bus));
          for(int _i0 = 0; _i0 < _len_bus0; _i0++) {
            bus[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mv88e6xxx_smi_init(chip,bus,sw_addr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].bus);
          }
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].smi_ops);
          }
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].info);
          }
          free(chip);
          free(bus);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sw_addr = 10;
          int _len_chip0 = 100;
          struct mv88e6xxx_chip * chip = (struct mv88e6xxx_chip *) malloc(_len_chip0*sizeof(struct mv88e6xxx_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].sw_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__bus0 = 1;
          chip[_i0].bus = (struct mii_bus *) malloc(_len_chip__i0__bus0*sizeof(struct mii_bus));
          for(int _j0 = 0; _j0 < _len_chip__i0__bus0; _j0++) {
            chip[_i0].bus->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chip__i0__smi_ops0 = 1;
          chip[_i0].smi_ops = (int *) malloc(_len_chip__i0__smi_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__smi_ops0; _j0++) {
            chip[_i0].smi_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chip__i0__info0 = 1;
          chip[_i0].info = (struct TYPE_2__ *) malloc(_len_chip__i0__info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chip__i0__info0; _j0++) {
            chip[_i0].info->multi_chip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_bus0 = 100;
          struct mii_bus * bus = (struct mii_bus *) malloc(_len_bus0*sizeof(struct mii_bus));
          for(int _i0 = 0; _i0 < _len_bus0; _i0++) {
            bus[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mv88e6xxx_smi_init(chip,bus,sw_addr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].bus);
          }
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].smi_ops);
          }
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].info);
          }
          free(chip);
          free(bus);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
