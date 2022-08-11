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
struct TYPE_2__ {unsigned long rate; } ;

/* Variables and functions */
 TYPE_1__* cpu_clk_generic ; 

void clkdev_add_static(unsigned long cpu, unsigned long fpi,
			unsigned long io, unsigned long ppe)
{
	cpu_clk_generic[0].rate = cpu;
	cpu_clk_generic[1].rate = fpi;
	cpu_clk_generic[2].rate = io;
	cpu_clk_generic[3].rate = ppe;
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
          unsigned long cpu = 100;
          unsigned long fpi = 100;
          unsigned long io = 100;
          unsigned long ppe = 100;
          clkdev_add_static(cpu,fpi,io,ppe);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long cpu = 255;
          unsigned long fpi = 255;
          unsigned long io = 255;
          unsigned long ppe = 255;
          clkdev_add_static(cpu,fpi,io,ppe);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long cpu = 10;
          unsigned long fpi = 10;
          unsigned long io = 10;
          unsigned long ppe = 10;
          clkdev_add_static(cpu,fpi,io,ppe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
