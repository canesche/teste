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
struct roundingData {scalar_t__ mode; int /*<<< orphan*/  exception; } ;
typedef  scalar_t__ int8 ;
typedef  int int32 ;
typedef  int flag ;
typedef  int bits64 ;

/* Variables and functions */
 int /*<<< orphan*/  float_flag_inexact ; 
 int /*<<< orphan*/  float_flag_invalid ; 
 scalar_t__ float_round_down ; 
 scalar_t__ float_round_nearest_even ; 
 scalar_t__ float_round_to_zero ; 
 scalar_t__ float_round_up ; 

__attribute__((used)) static int32 roundAndPackInt32( struct roundingData *roundData, flag zSign, bits64 absZ )
{
    int8 roundingMode;
    flag roundNearestEven;
    int8 roundIncrement, roundBits;
    int32 z;

    roundingMode = roundData->mode;
    roundNearestEven = ( roundingMode == float_round_nearest_even );
    roundIncrement = 0x40;
    if ( ! roundNearestEven ) {
        if ( roundingMode == float_round_to_zero ) {
            roundIncrement = 0;
        }
        else {
            roundIncrement = 0x7F;
            if ( zSign ) {
                if ( roundingMode == float_round_up ) roundIncrement = 0;
            }
            else {
                if ( roundingMode == float_round_down ) roundIncrement = 0;
            }
        }
    }
    roundBits = absZ & 0x7F;
    absZ = ( absZ + roundIncrement )>>7;
    absZ &= ~ ( ( ( roundBits ^ 0x40 ) == 0 ) & roundNearestEven );
    z = absZ;
    if ( zSign ) z = - z;
    if ( ( absZ>>32 ) || ( z && ( ( z < 0 ) ^ zSign ) ) ) {
        roundData->exception |= float_flag_invalid;
        return zSign ? 0x80000000 : 0x7FFFFFFF;
    }
    if ( roundBits ) roundData->exception |= float_flag_inexact;
    return z;

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
          int zSign = 100;
          int absZ = 100;
          int _len_roundData0 = 1;
          struct roundingData * roundData = (struct roundingData *) malloc(_len_roundData0*sizeof(struct roundingData));
          for(int _i0 = 0; _i0 < _len_roundData0; _i0++) {
            roundData[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        roundData[_i0].exception = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = roundAndPackInt32(roundData,zSign,absZ);
          printf("%d\n", benchRet); 
          free(roundData);
        
        break;
    }
    // big-arr
    case 1:
    {
          int zSign = 255;
          int absZ = 255;
          int _len_roundData0 = 65025;
          struct roundingData * roundData = (struct roundingData *) malloc(_len_roundData0*sizeof(struct roundingData));
          for(int _i0 = 0; _i0 < _len_roundData0; _i0++) {
            roundData[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        roundData[_i0].exception = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = roundAndPackInt32(roundData,zSign,absZ);
          printf("%d\n", benchRet); 
          free(roundData);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int zSign = 10;
          int absZ = 10;
          int _len_roundData0 = 100;
          struct roundingData * roundData = (struct roundingData *) malloc(_len_roundData0*sizeof(struct roundingData));
          for(int _i0 = 0; _i0 < _len_roundData0; _i0++) {
            roundData[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        roundData[_i0].exception = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = roundAndPackInt32(roundData,zSign,absZ);
          printf("%d\n", benchRet); 
          free(roundData);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
