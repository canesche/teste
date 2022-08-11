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

/* Variables and functions */

void can_set_gmlan(int bus) {
  #ifdef PANDA
  if (bus == -1 || bus != can_num_lookup[3]) {
    // GMLAN OFF
    switch (can_num_lookup[3]) {
      case 1:
        puts("disable GMLAN on CAN2\n");
        set_can_mode(1, 0);
        bus_lookup[1] = 1;
        can_num_lookup[1] = 1;
        can_num_lookup[3] = -1;
        can_init(1);
        break;
      case 2:
        puts("disable GMLAN on CAN3\n");
        set_can_mode(2, 0);
        bus_lookup[2] = 2;
        can_num_lookup[2] = 2;
        can_num_lookup[3] = -1;
        can_init(2);
        break;
    }
  }

  if (bus == 1) {
    puts("GMLAN on CAN2\n");
    // GMLAN on CAN2
    set_can_mode(1, 1);
    bus_lookup[1] = 3;
    can_num_lookup[1] = -1;
    can_num_lookup[3] = 1;
    can_init(1);
  } else if (bus == 2 && revision == PANDA_REV_C) {
    puts("GMLAN on CAN3\n");
    // GMLAN on CAN3
    set_can_mode(2, 1);
    bus_lookup[2] = 3;
    can_num_lookup[2] = -1;
    can_num_lookup[3] = 2;
    can_init(2);
  }
  #endif
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
          int bus = 100;
          can_set_gmlan(bus);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bus = 255;
          can_set_gmlan(bus);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bus = 10;
          can_set_gmlan(bus);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
