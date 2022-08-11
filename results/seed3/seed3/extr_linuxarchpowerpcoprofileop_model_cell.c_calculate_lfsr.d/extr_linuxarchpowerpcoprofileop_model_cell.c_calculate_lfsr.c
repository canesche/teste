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
 int ENTRIES ; 
 int V2_16 ; 
 int V2_19 ; 
 int V2_22 ; 
 int* initial_lfsr ; 

__attribute__((used)) static int calculate_lfsr(int n)
{
	/*
	 * The ranges and steps are in powers of 2 so the calculations
	 * can be done using shifts rather then divide.
	 */
	int index;

	if ((n >> 16) == 0)
		index = 0;
	else if (((n - V2_16) >> 19) == 0)
		index = ((n - V2_16) >> 12) + 1;
	else if (((n - V2_16 - V2_19) >> 22) == 0)
		index = ((n - V2_16 - V2_19) >> 15 ) + 1 + 128;
	else if (((n - V2_16 - V2_19 - V2_22) >> 24) == 0)
		index = ((n - V2_16 - V2_19 - V2_22) >> 18 ) + 1 + 256;
	else
		index = ENTRIES-1;

	/* make sure index is valid */
	if ((index >= ENTRIES) || (index < 0))
		index = ENTRIES-1;

	return initial_lfsr[index];
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
          int n = 100;
          int benchRet = calculate_lfsr(n);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int benchRet = calculate_lfsr(n);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int benchRet = calculate_lfsr(n);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
