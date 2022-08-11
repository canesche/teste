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
struct TYPE_2__ {int rate; } ;

/* Variables and functions */
 TYPE_1__* skl_clk_src ; 

__attribute__((used)) static void init_skl_xtal_rate(int pci_id)
{
	switch (pci_id) {
	case 0x9d70:
	case 0x9d71:
		skl_clk_src[0].rate = 24000000;
		return;

	default:
		skl_clk_src[0].rate = 19200000;
		return;
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
          int pci_id = 100;
          init_skl_xtal_rate(pci_id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pci_id = 255;
          init_skl_xtal_rate(pci_id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pci_id = 10;
          init_skl_xtal_rate(pci_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
