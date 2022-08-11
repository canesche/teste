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
typedef  int ULONGLONG ;
typedef  scalar_t__ ULONG ;

/* Variables and functions */

__attribute__((used)) static ULONGLONG
UnsignedMult128(ULONGLONG Multiplicand,
                ULONGLONG Multiplier,
                ULONGLONG *HighProduct)
{
    ULONG MultiplicandLow, MultiplicandHigh, MultiplierLow, MultiplierHigh;
    ULONG IntermediateLow, IntermediateHigh;
    ULONGLONG LowProduct, Intermediate, Intermediate1, Intermediate2;

    MultiplicandLow = (ULONG)(Multiplicand & 0xFFFFFFFFULL);
    MultiplicandHigh = (ULONG)(Multiplicand >> 32);
    MultiplierLow = (ULONG)(Multiplier & 0xFFFFFFFFULL);
    MultiplierHigh = (ULONG)(Multiplier >> 32);

    LowProduct = (ULONGLONG)MultiplicandLow * (ULONGLONG)MultiplierLow;
    Intermediate1 = (ULONGLONG)MultiplicandLow * (ULONGLONG)MultiplierHigh;
    Intermediate2 = (ULONGLONG)MultiplicandHigh * (ULONGLONG)MultiplierLow;
    *HighProduct = (ULONGLONG)MultiplicandHigh * (ULONGLONG)MultiplierHigh;

    Intermediate = Intermediate1 + Intermediate2;
    if (Intermediate < Intermediate1) *HighProduct += 1ULL << 32;

    IntermediateLow = (ULONG)(Intermediate & 0xFFFFFFFFULL);
    IntermediateHigh = (ULONG)(Intermediate >> 32);

    LowProduct += (ULONGLONG)IntermediateLow << 32;
    if ((ULONG)(LowProduct >> 32) < IntermediateLow) (*HighProduct)++;

    *HighProduct += IntermediateHigh;
    return LowProduct;
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
          int Multiplicand = 100;
          int Multiplier = 100;
          int _len_HighProduct0 = 1;
          int * HighProduct = (int *) malloc(_len_HighProduct0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_HighProduct0; _i0++) {
            HighProduct[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = UnsignedMult128(Multiplicand,Multiplier,HighProduct);
          printf("%d\n", benchRet); 
          free(HighProduct);
        
        break;
    }
    // big-arr
    case 1:
    {
          int Multiplicand = 255;
          int Multiplier = 255;
          int _len_HighProduct0 = 65025;
          int * HighProduct = (int *) malloc(_len_HighProduct0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_HighProduct0; _i0++) {
            HighProduct[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = UnsignedMult128(Multiplicand,Multiplier,HighProduct);
          printf("%d\n", benchRet); 
          free(HighProduct);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int Multiplicand = 10;
          int Multiplier = 10;
          int _len_HighProduct0 = 100;
          int * HighProduct = (int *) malloc(_len_HighProduct0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_HighProduct0; _i0++) {
            HighProduct[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = UnsignedMult128(Multiplicand,Multiplier,HighProduct);
          printf("%d\n", benchRet); 
          free(HighProduct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
