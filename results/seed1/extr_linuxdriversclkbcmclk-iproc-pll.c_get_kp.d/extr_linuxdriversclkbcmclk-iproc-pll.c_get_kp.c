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
typedef  enum kp_band { ____Placeholder_kp_band } kp_band ;

/* Variables and functions */
 int EINVAL ; 
 int NUM_FREQ_BANDS ; 
 int** kp_table ; 
 unsigned long** ref_freq_table ; 

__attribute__((used)) static int get_kp(unsigned long ref_freq, enum kp_band kp_index)
{
	int i;

	if (ref_freq < ref_freq_table[0][0])
		return -EINVAL;

	for (i = 0; i < NUM_FREQ_BANDS; i++) {
		if (ref_freq >= ref_freq_table[i][0] &&
		    ref_freq < ref_freq_table[i][1])
			return kp_table[kp_index][i];
	}
	return -EINVAL;
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
          unsigned long ref_freq = 100;
          enum kp_band kp_index = 0;
          int benchRet = get_kp(ref_freq,kp_index);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long ref_freq = 255;
          enum kp_band kp_index = 0;
          int benchRet = get_kp(ref_freq,kp_index);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long ref_freq = 10;
          enum kp_band kp_index = 0;
          int benchRet = get_kp(ref_freq,kp_index);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
