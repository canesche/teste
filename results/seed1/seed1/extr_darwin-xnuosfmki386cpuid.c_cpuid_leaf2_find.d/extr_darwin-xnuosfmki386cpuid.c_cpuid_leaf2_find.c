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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint8_t ;
struct TYPE_4__ {scalar_t__ value; } ;
typedef  TYPE_1__ cpuid_cache_descriptor_t ;

/* Variables and functions */
 unsigned int INTEL_LEAF2_DESC_NUM ; 
 TYPE_1__* intel_cpuid_leaf2_descriptor_table ; 

__attribute__((used)) static inline cpuid_cache_descriptor_t *
cpuid_leaf2_find(uint8_t value)
{
	unsigned int	i;

	for (i = 0; i < INTEL_LEAF2_DESC_NUM; i++)
		if (intel_cpuid_leaf2_descriptor_table[i].value == value)
			return &intel_cpuid_leaf2_descriptor_table[i];
	return NULL;
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
          long value = 100;
          struct TYPE_4__ * benchRet = cpuid_leaf2_find(value);
          printf("%ld\n", (*benchRet).value);
        
        break;
    }
    // big-arr
    case 1:
    {
          long value = 255;
          struct TYPE_4__ * benchRet = cpuid_leaf2_find(value);
          printf("%ld\n", (*benchRet).value);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long value = 10;
          struct TYPE_4__ * benchRet = cpuid_leaf2_find(value);
          printf("%ld\n", (*benchRet).value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
