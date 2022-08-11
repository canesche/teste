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
struct TYPE_2__ {unsigned long ctl_addr; } ;
struct ide_hw {unsigned long* io_ports_array; TYPE_1__ io_ports; } ;

/* Variables and functions */

__attribute__((used)) static void pmac_ide_init_ports(struct ide_hw *hw, unsigned long base)
{
	int i;

	for (i = 0; i < 8; ++i)
		hw->io_ports_array[i] = base + i * 0x10;

	hw->io_ports.ctl_addr = base + 0x160;
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
          unsigned long base = 100;
          int _len_hw0 = 1;
          struct ide_hw * hw = (struct ide_hw *) malloc(_len_hw0*sizeof(struct ide_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__io_ports_array0 = 1;
          hw[_i0].io_ports_array = (unsigned long *) malloc(_len_hw__i0__io_ports_array0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_hw__i0__io_ports_array0; _j0++) {
            hw[_i0].io_ports_array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hw[_i0].io_ports.ctl_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pmac_ide_init_ports(hw,base);
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].io_ports_array);
          }
          free(hw);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long base = 255;
          int _len_hw0 = 65025;
          struct ide_hw * hw = (struct ide_hw *) malloc(_len_hw0*sizeof(struct ide_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__io_ports_array0 = 1;
          hw[_i0].io_ports_array = (unsigned long *) malloc(_len_hw__i0__io_ports_array0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_hw__i0__io_ports_array0; _j0++) {
            hw[_i0].io_ports_array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hw[_i0].io_ports.ctl_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pmac_ide_init_ports(hw,base);
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].io_ports_array);
          }
          free(hw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long base = 10;
          int _len_hw0 = 100;
          struct ide_hw * hw = (struct ide_hw *) malloc(_len_hw0*sizeof(struct ide_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__io_ports_array0 = 1;
          hw[_i0].io_ports_array = (unsigned long *) malloc(_len_hw__i0__io_ports_array0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_hw__i0__io_ports_array0; _j0++) {
            hw[_i0].io_ports_array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hw[_i0].io_ports.ctl_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pmac_ide_init_ports(hw,base);
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].io_ports_array);
          }
          free(hw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
