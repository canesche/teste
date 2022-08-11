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
typedef  scalar_t__ u16 ;
struct b43_sdio_quirk {unsigned int quirks; scalar_t__ vendor; scalar_t__ device; } ;

/* Variables and functions */
 struct b43_sdio_quirk* b43_sdio_quirks ; 

__attribute__((used)) static unsigned int b43_sdio_get_quirks(u16 vendor, u16 device)
{
	const struct b43_sdio_quirk *q;

	for (q = b43_sdio_quirks; q->quirks; q++) {
		if (vendor == q->vendor && device == q->device)
			return q->quirks;
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
          long vendor = 100;
          long device = 100;
          unsigned int benchRet = b43_sdio_get_quirks(vendor,device);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long vendor = 255;
          long device = 255;
          unsigned int benchRet = b43_sdio_get_quirks(vendor,device);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long vendor = 10;
          long device = 10;
          unsigned int benchRet = b43_sdio_get_quirks(vendor,device);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
