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
typedef  int ULONG ;
struct TYPE_3__ {int* pvScan0; int lDelta; } ;
typedef  TYPE_1__ SURFOBJ ;
typedef  int* PBYTE ;
typedef  int LONG ;
typedef  int BYTE ;

/* Variables and functions */
 int* notmask ; 

VOID
DIB_4BPP_VLine(SURFOBJ *SurfObj, LONG x, LONG y1, LONG y2, ULONG c)
{
  PBYTE  addr = SurfObj->pvScan0;
  int  lDelta = SurfObj->lDelta;

  addr += (x>>1) + y1 * lDelta;
  while(y1++ < y2)
  {
    *addr = (*addr & notmask[x&1]) | (BYTE)(c << ((1-(x&1))<<2));
    addr += lDelta;
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
          int x = 100;
          int y1 = 100;
          int y2 = 100;
          int c = 100;
          int _len_SurfObj0 = 1;
          struct TYPE_3__ * SurfObj = (struct TYPE_3__ *) malloc(_len_SurfObj0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_SurfObj0; _i0++) {
              int _len_SurfObj__i0__pvScan00 = 1;
          SurfObj[_i0].pvScan0 = (int *) malloc(_len_SurfObj__i0__pvScan00*sizeof(int));
          for(int _j0 = 0; _j0 < _len_SurfObj__i0__pvScan00; _j0++) {
            SurfObj[_i0].pvScan0[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        SurfObj[_i0].lDelta = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = DIB_4BPP_VLine(SurfObj,x,y1,y2,c);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_SurfObj0; _aux++) {
          free(SurfObj[_aux].pvScan0);
          }
          free(SurfObj);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          int y1 = 255;
          int y2 = 255;
          int c = 255;
          int _len_SurfObj0 = 65025;
          struct TYPE_3__ * SurfObj = (struct TYPE_3__ *) malloc(_len_SurfObj0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_SurfObj0; _i0++) {
              int _len_SurfObj__i0__pvScan00 = 1;
          SurfObj[_i0].pvScan0 = (int *) malloc(_len_SurfObj__i0__pvScan00*sizeof(int));
          for(int _j0 = 0; _j0 < _len_SurfObj__i0__pvScan00; _j0++) {
            SurfObj[_i0].pvScan0[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        SurfObj[_i0].lDelta = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = DIB_4BPP_VLine(SurfObj,x,y1,y2,c);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_SurfObj0; _aux++) {
          free(SurfObj[_aux].pvScan0);
          }
          free(SurfObj);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          int y1 = 10;
          int y2 = 10;
          int c = 10;
          int _len_SurfObj0 = 100;
          struct TYPE_3__ * SurfObj = (struct TYPE_3__ *) malloc(_len_SurfObj0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_SurfObj0; _i0++) {
              int _len_SurfObj__i0__pvScan00 = 1;
          SurfObj[_i0].pvScan0 = (int *) malloc(_len_SurfObj__i0__pvScan00*sizeof(int));
          for(int _j0 = 0; _j0 < _len_SurfObj__i0__pvScan00; _j0++) {
            SurfObj[_i0].pvScan0[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        SurfObj[_i0].lDelta = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = DIB_4BPP_VLine(SurfObj,x,y1,y2,c);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_SurfObj0; _aux++) {
          free(SurfObj[_aux].pvScan0);
          }
          free(SurfObj);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
