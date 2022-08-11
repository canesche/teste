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
typedef  scalar_t__ __u64 ;
typedef  unsigned short __u16 ;

/* Variables and functions */

__attribute__((used)) static void misaligned_kernel_word_store(__u64 address, __u64 value)
{
	unsigned short x;
	unsigned char *p, *q;
	p = (unsigned char *) (int) address;
	q = (unsigned char *) &x;

	x = (__u16) value;
	p[0] = q[0];
	p[1] = q[1];
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
          long address = 100;
          long value = 100;
          misaligned_kernel_word_store(address,value);
        
        break;
    }
    // big-arr
    case 1:
    {
          long address = 255;
          long value = 255;
          misaligned_kernel_word_store(address,value);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long address = 10;
          long value = 10;
          misaligned_kernel_word_store(address,value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
