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
typedef  int byte ;

/* Variables and functions */
 int* numBits ; 

byte MuLawEncode(short s) {
	unsigned long adjusted;
	byte sign, exponent, mantissa;

	sign = (s<0)?0:0x80;

	if (s<0) s=-s;
	adjusted = (long)s << (16-sizeof(short)*8);
	adjusted += 128L + 4L;
	if (adjusted > 32767) adjusted = 32767;
	exponent = numBits[(adjusted>>7)&0xff] - 1;
	mantissa = (adjusted>>(exponent+3))&0xf;
	return ~(sign | (exponent<<4) | mantissa);
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
          short s = 100;
          int benchRet = MuLawEncode(s);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          short s = 255;
          int benchRet = MuLawEncode(s);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          short s = 10;
          int benchRet = MuLawEncode(s);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
