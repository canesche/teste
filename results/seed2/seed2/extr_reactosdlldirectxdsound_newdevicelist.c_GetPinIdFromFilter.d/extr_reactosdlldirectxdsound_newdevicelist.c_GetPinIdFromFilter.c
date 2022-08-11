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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  size_t ULONG ;
struct TYPE_3__ {size_t PinCount; scalar_t__* Pin; } ;
typedef  TYPE_1__* LPFILTERINFO ;
typedef  scalar_t__ BOOL ;

/* Variables and functions */
 scalar_t__ PIN_TYPE_PLAYBACK ; 
 scalar_t__ PIN_TYPE_RECORDING ; 
 size_t ULONG_MAX ; 

ULONG
GetPinIdFromFilter(
    LPFILTERINFO Filter,
    BOOL bCapture,
    ULONG Offset)
{
    ULONG Index;

    for(Index = Offset; Index < Filter->PinCount; Index++)
    {
        if (Filter->Pin[Index] == PIN_TYPE_PLAYBACK && !bCapture)
            return Index;

        if (Filter->Pin[Index] == PIN_TYPE_RECORDING && bCapture)
            return Index;
    }
    return ULONG_MAX;
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
          long bCapture = 100;
          unsigned long Offset = 100;
          int _len_Filter0 = 1;
          struct TYPE_3__ * Filter = (struct TYPE_3__ *) malloc(_len_Filter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_Filter0; _i0++) {
            Filter[_i0].PinCount = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_Filter__i0__Pin0 = 1;
          Filter[_i0].Pin = (long *) malloc(_len_Filter__i0__Pin0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_Filter__i0__Pin0; _j0++) {
            Filter[_i0].Pin[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = GetPinIdFromFilter(Filter,bCapture,Offset);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_Filter0; _aux++) {
          free(Filter[_aux].Pin);
          }
          free(Filter);
        
        break;
    }
    // big-arr
    case 1:
    {
          long bCapture = 255;
          unsigned long Offset = 255;
          int _len_Filter0 = 65025;
          struct TYPE_3__ * Filter = (struct TYPE_3__ *) malloc(_len_Filter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_Filter0; _i0++) {
            Filter[_i0].PinCount = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_Filter__i0__Pin0 = 1;
          Filter[_i0].Pin = (long *) malloc(_len_Filter__i0__Pin0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_Filter__i0__Pin0; _j0++) {
            Filter[_i0].Pin[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = GetPinIdFromFilter(Filter,bCapture,Offset);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_Filter0; _aux++) {
          free(Filter[_aux].Pin);
          }
          free(Filter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long bCapture = 10;
          unsigned long Offset = 10;
          int _len_Filter0 = 100;
          struct TYPE_3__ * Filter = (struct TYPE_3__ *) malloc(_len_Filter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_Filter0; _i0++) {
            Filter[_i0].PinCount = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_Filter__i0__Pin0 = 1;
          Filter[_i0].Pin = (long *) malloc(_len_Filter__i0__Pin0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_Filter__i0__Pin0; _j0++) {
            Filter[_i0].Pin[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = GetPinIdFromFilter(Filter,bCapture,Offset);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_Filter0; _aux++) {
          free(Filter[_aux].Pin);
          }
          free(Filter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
