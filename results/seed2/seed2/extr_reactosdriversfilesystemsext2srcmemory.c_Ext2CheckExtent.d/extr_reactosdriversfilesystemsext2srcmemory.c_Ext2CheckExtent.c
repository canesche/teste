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
typedef  int /*<<< orphan*/  VOID ;
typedef  int /*<<< orphan*/  PLARGE_MCB ;
typedef  int /*<<< orphan*/  LONGLONG ;
typedef  int /*<<< orphan*/  BOOLEAN ;

/* Variables and functions */

VOID
Ext2CheckExtent(
    PLARGE_MCB  Zone,
    LONGLONG    Vbn,
    LONGLONG    Lbn,
    LONGLONG    Length,
    BOOLEAN     bAdded
)
{
#if EXT2_DEBUG
    LONGLONG    DirtyLbn;
    LONGLONG    DirtyLen;
    LONGLONG    RunStart;
    LONGLONG    RunLength;
    ULONG       Index;
    BOOLEAN     bFound = FALSE;

    bFound = FsRtlLookupLargeMcbEntry(
                 Zone,
                 Vbn,
                 &DirtyLbn,
                 &DirtyLen,
                 &RunStart,
                 &RunLength,
                 &Index );

    if (!bAdded && (!bFound || DirtyLbn == -1)) {
        return;
    }

    if ( !bFound || (DirtyLbn == -1) ||
            (DirtyLbn != Lbn) ||
            (DirtyLen < Length)) {

        DbgBreak();

        for (Index = 0; TRUE; Index++) {

            if (!FsRtlGetNextLargeMcbEntry(
                        Zone,
                        Index,
                        &Vbn,
                        &Lbn,
                        &Length)) {
                break;
            }

            DEBUG(DL_EXT, ("Index = %xh Vbn = %I64xh Lbn = %I64xh Len = %I64xh\n",
                           Index, Vbn, Lbn, Length ));
        }
    }
#endif
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
          int Zone = 100;
          int Vbn = 100;
          int Lbn = 100;
          int Length = 100;
          int bAdded = 100;
          int benchRet = Ext2CheckExtent(Zone,Vbn,Lbn,Length,bAdded);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int Zone = 255;
          int Vbn = 255;
          int Lbn = 255;
          int Length = 255;
          int bAdded = 255;
          int benchRet = Ext2CheckExtent(Zone,Vbn,Lbn,Length,bAdded);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int Zone = 10;
          int Vbn = 10;
          int Lbn = 10;
          int Length = 10;
          int bAdded = 10;
          int benchRet = Ext2CheckExtent(Zone,Vbn,Lbn,Length,bAdded);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
