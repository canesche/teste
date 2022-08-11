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
typedef  int /*<<< orphan*/  VOID ;
typedef  int ULONG_PTR ;
typedef  int ULONG ;
struct TYPE_3__ {int lDelta; scalar_t__ pvScan0; } ;
typedef  TYPE_1__ SURFOBJ ;
typedef  int* PUSHORT ;
typedef  int* PULONG ;
typedef  int* PBYTE ;
typedef  int LONG ;

/* Variables and functions */

VOID
DIB_24BPP_HLine(SURFOBJ *SurfObj, LONG x1, LONG x2, LONG y, ULONG c)
{
  PBYTE addr = (PBYTE)SurfObj->pvScan0 + y * SurfObj->lDelta + (x1 << 1) + x1;
  ULONG Count = x2 - x1;

  if (Count < 8)
  {
    /* For small fills, don't bother doing anything fancy */
    while (Count--)
    {
      *(PUSHORT)(addr) = c;
      addr += 2;
      *(addr) = c >> 16;
      addr += 1;
    }
  }
  else
  {
    ULONG Fill[3];
    ULONG MultiCount;

    /* Align to 4-byte address */
    while (0 != ((ULONG_PTR) addr & 0x3))
    {
      *(PUSHORT)(addr) = c;
      addr += 2;
      *(addr) = c >> 16;
      addr += 1;
      Count--;
    }
    /* If the color we need to fill with is 0ABC, then the final mem pattern
    * (note little-endianness) would be:
    *
    * |C.B.A|C.B.A|C.B.A|C.B.A|   <- pixel borders
    * |C.B.A.C|B.A.C.B|A.C.B.A|   <- ULONG borders
    *
    * So, taking endianness into account again, we need to fill with these
    * ULONGs: CABC BCAB ABCA */

    c = c & 0xffffff;                /* 0ABC */
    Fill[0] = c | (c << 24);         /* CABC */
    Fill[1] = (c >> 8) | (c << 16);  /* BCAB */
    Fill[2] = (c << 8) | (c >> 16);  /* ABCA */
    MultiCount = Count / 4;
    do
    {
      *(PULONG)addr = Fill[0];
      addr += 4;
      *(PULONG)addr = Fill[1];
      addr += 4;
      *(PULONG)addr = Fill[2];
      addr += 4;
    }
    while (0 != --MultiCount);

    Count = Count & 0x03;
    while (0 != Count--)
    {
      *(PUSHORT)(addr) = c;
      addr += 2;
      *(addr) = c >> 16;
      addr += 1;
    }
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
          int x1 = 100;
          int x2 = 100;
          int y = 100;
          int c = 100;
          int _len_SurfObj0 = 1;
          struct TYPE_3__ * SurfObj = (struct TYPE_3__ *) malloc(_len_SurfObj0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_SurfObj0; _i0++) {
            SurfObj[_i0].lDelta = ((-2 * (next_i()%2)) + 1) * next_i();
        SurfObj[_i0].pvScan0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = DIB_24BPP_HLine(SurfObj,x1,x2,y,c);
          printf("%d\n", benchRet); 
          free(SurfObj);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x1 = 255;
          int x2 = 255;
          int y = 255;
          int c = 255;
          int _len_SurfObj0 = 65025;
          struct TYPE_3__ * SurfObj = (struct TYPE_3__ *) malloc(_len_SurfObj0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_SurfObj0; _i0++) {
            SurfObj[_i0].lDelta = ((-2 * (next_i()%2)) + 1) * next_i();
        SurfObj[_i0].pvScan0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = DIB_24BPP_HLine(SurfObj,x1,x2,y,c);
          printf("%d\n", benchRet); 
          free(SurfObj);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x1 = 10;
          int x2 = 10;
          int y = 10;
          int c = 10;
          int _len_SurfObj0 = 100;
          struct TYPE_3__ * SurfObj = (struct TYPE_3__ *) malloc(_len_SurfObj0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_SurfObj0; _i0++) {
            SurfObj[_i0].lDelta = ((-2 * (next_i()%2)) + 1) * next_i();
        SurfObj[_i0].pvScan0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = DIB_24BPP_HLine(SurfObj,x1,x2,y,c);
          printf("%d\n", benchRet); 
          free(SurfObj);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
