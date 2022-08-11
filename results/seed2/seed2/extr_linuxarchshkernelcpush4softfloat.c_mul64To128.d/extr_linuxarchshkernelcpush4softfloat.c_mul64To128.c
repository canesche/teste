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
typedef  int bits64 ;
typedef  int bits32 ;

/* Variables and functions */

void mul64To128(bits64 a, bits64 b, bits64 * z0Ptr, bits64 * z1Ptr)
{
	bits32 aHigh, aLow, bHigh, bLow;
	bits64 z0, zMiddleA, zMiddleB, z1;

	aLow = a;
	aHigh = a >> 32;
	bLow = b;
	bHigh = b >> 32;
	z1 = ((bits64) aLow) * bLow;
	zMiddleA = ((bits64) aLow) * bHigh;
	zMiddleB = ((bits64) aHigh) * bLow;
	z0 = ((bits64) aHigh) * bHigh;
	zMiddleA += zMiddleB;
	z0 += (((bits64) (zMiddleA < zMiddleB)) << 32) + (zMiddleA >> 32);
	zMiddleA <<= 32;
	z1 += zMiddleA;
	z0 += (z1 < zMiddleA);
	*z1Ptr = z1;
	*z0Ptr = z0;

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
          int a = 100;
          int b = 100;
          int _len_z0Ptr0 = 1;
          int * z0Ptr = (int *) malloc(_len_z0Ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_z0Ptr0; _i0++) {
            z0Ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_z1Ptr0 = 1;
          int * z1Ptr = (int *) malloc(_len_z1Ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_z1Ptr0; _i0++) {
            z1Ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mul64To128(a,b,z0Ptr,z1Ptr);
          free(z0Ptr);
          free(z1Ptr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int a = 255;
          int b = 255;
          int _len_z0Ptr0 = 65025;
          int * z0Ptr = (int *) malloc(_len_z0Ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_z0Ptr0; _i0++) {
            z0Ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_z1Ptr0 = 65025;
          int * z1Ptr = (int *) malloc(_len_z1Ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_z1Ptr0; _i0++) {
            z1Ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mul64To128(a,b,z0Ptr,z1Ptr);
          free(z0Ptr);
          free(z1Ptr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int a = 10;
          int b = 10;
          int _len_z0Ptr0 = 100;
          int * z0Ptr = (int *) malloc(_len_z0Ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_z0Ptr0; _i0++) {
            z0Ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_z1Ptr0 = 100;
          int * z1Ptr = (int *) malloc(_len_z1Ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_z1Ptr0; _i0++) {
            z1Ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mul64To128(a,b,z0Ptr,z1Ptr);
          free(z0Ptr);
          free(z1Ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
