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
typedef  int /*<<< orphan*/  uint64_t ;
struct mv88e6xxx_chip {TYPE_1__* ports; } ;
struct TYPE_2__ {int /*<<< orphan*/  vtu_miss_violation; int /*<<< orphan*/  vtu_member_violation; int /*<<< orphan*/  atu_full_violation; int /*<<< orphan*/  atu_miss_violation; int /*<<< orphan*/  atu_member_violation; } ;

/* Variables and functions */

__attribute__((used)) static void mv88e6xxx_atu_vtu_get_stats(struct mv88e6xxx_chip *chip, int port,
					uint64_t *data)
{
	*data++ = chip->ports[port].atu_member_violation;
	*data++ = chip->ports[port].atu_miss_violation;
	*data++ = chip->ports[port].atu_full_violation;
	*data++ = chip->ports[port].vtu_member_violation;
	*data++ = chip->ports[port].vtu_miss_violation;
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
          int port = 100;
          int _len_chip0 = 1;
          struct mv88e6xxx_chip * chip = (struct mv88e6xxx_chip *) malloc(_len_chip0*sizeof(struct mv88e6xxx_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__ports0 = 1;
          chip[_i0].ports = (struct TYPE_2__ *) malloc(_len_chip__i0__ports0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chip__i0__ports0; _j0++) {
            chip[_i0].ports->vtu_miss_violation = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].ports->vtu_member_violation = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].ports->atu_full_violation = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].ports->atu_miss_violation = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].ports->atu_member_violation = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data0 = 1;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mv88e6xxx_atu_vtu_get_stats(chip,port,data);
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].ports);
          }
          free(chip);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int port = 255;
          int _len_chip0 = 65025;
          struct mv88e6xxx_chip * chip = (struct mv88e6xxx_chip *) malloc(_len_chip0*sizeof(struct mv88e6xxx_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__ports0 = 1;
          chip[_i0].ports = (struct TYPE_2__ *) malloc(_len_chip__i0__ports0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chip__i0__ports0; _j0++) {
            chip[_i0].ports->vtu_miss_violation = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].ports->vtu_member_violation = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].ports->atu_full_violation = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].ports->atu_miss_violation = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].ports->atu_member_violation = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data0 = 65025;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mv88e6xxx_atu_vtu_get_stats(chip,port,data);
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].ports);
          }
          free(chip);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int port = 10;
          int _len_chip0 = 100;
          struct mv88e6xxx_chip * chip = (struct mv88e6xxx_chip *) malloc(_len_chip0*sizeof(struct mv88e6xxx_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              int _len_chip__i0__ports0 = 1;
          chip[_i0].ports = (struct TYPE_2__ *) malloc(_len_chip__i0__ports0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chip__i0__ports0; _j0++) {
            chip[_i0].ports->vtu_miss_violation = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].ports->vtu_member_violation = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].ports->atu_full_violation = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].ports->atu_miss_violation = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].ports->atu_member_violation = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data0 = 100;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mv88e6xxx_atu_vtu_get_stats(chip,port,data);
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].ports);
          }
          free(chip);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
