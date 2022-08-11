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
typedef  int u64 ;
typedef  unsigned long comp2_t ;

/* Variables and functions */
 int EXPSIZE2 ; 
 int MANTSIZE2 ; 
 int MAXEXP2 ; 
 int MAXFRACT2 ; 

__attribute__((used)) static comp2_t encode_comp2_t(u64 value)
{
	int exp, rnd;

	exp = (value > (MAXFRACT2>>1));
	rnd = 0;
	while (value > MAXFRACT2) {
		rnd = value & 1;
		value >>= 1;
		exp++;
	}

	/*
	 * If we need to round up, do it (and handle overflow correctly).
	 */
	if (rnd && (++value > MAXFRACT2)) {
		value >>= 1;
		exp++;
	}

	if (exp > MAXEXP2) {
		/* Overflow. Return largest representable number instead. */
		return (1ul << (MANTSIZE2+EXPSIZE2-1)) - 1;
	} else {
		return (value & (MAXFRACT2>>1)) | (exp << (MANTSIZE2-1));
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
          int value = 100;
          unsigned long benchRet = encode_comp2_t(value);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int value = 255;
          unsigned long benchRet = encode_comp2_t(value);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int value = 10;
          unsigned long benchRet = encode_comp2_t(value);
          printf("%lu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
