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
typedef  int u64 ;
struct TYPE_2__ {int route_lo; scalar_t__ route_hi; } ;
struct tb_switch {TYPE_1__ config; } ;

/* Variables and functions */

__attribute__((used)) static inline u64 tb_route(struct tb_switch *sw)
{
	return ((u64) sw->config.route_hi) << 32 | sw->config.route_lo;
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
          int _len_sw0 = 1;
          struct tb_switch * sw = (struct tb_switch *) malloc(_len_sw0*sizeof(struct tb_switch));
          for(int _i0 = 0; _i0 < _len_sw0; _i0++) {
            sw[_i0].config.route_lo = ((-2 * (next_i()%2)) + 1) * next_i();
        sw[_i0].config.route_hi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tb_route(sw);
          printf("%d\n", benchRet); 
          free(sw);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sw0 = 65025;
          struct tb_switch * sw = (struct tb_switch *) malloc(_len_sw0*sizeof(struct tb_switch));
          for(int _i0 = 0; _i0 < _len_sw0; _i0++) {
            sw[_i0].config.route_lo = ((-2 * (next_i()%2)) + 1) * next_i();
        sw[_i0].config.route_hi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tb_route(sw);
          printf("%d\n", benchRet); 
          free(sw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sw0 = 100;
          struct tb_switch * sw = (struct tb_switch *) malloc(_len_sw0*sizeof(struct tb_switch));
          for(int _i0 = 0; _i0 < _len_sw0; _i0++) {
            sw[_i0].config.route_lo = ((-2 * (next_i()%2)) + 1) * next_i();
        sw[_i0].config.route_hi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tb_route(sw);
          printf("%d\n", benchRet); 
          free(sw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
