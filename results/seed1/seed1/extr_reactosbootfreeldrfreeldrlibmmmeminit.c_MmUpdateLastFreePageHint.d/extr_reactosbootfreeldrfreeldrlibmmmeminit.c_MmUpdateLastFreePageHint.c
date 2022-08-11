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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  VOID ;
struct TYPE_2__ {scalar_t__ PageAllocated; } ;
typedef  int /*<<< orphan*/  PVOID ;
typedef  TYPE_1__* PPAGE_LOOKUP_TABLE_ITEM ;
typedef  size_t PFN_NUMBER ;

/* Variables and functions */
 scalar_t__ LastFreePageHint ; 
 scalar_t__ LoaderFree ; 
 scalar_t__ MmLowestPhysicalPage ; 

VOID MmUpdateLastFreePageHint(PVOID PageLookupTable, PFN_NUMBER TotalPageCount)
{
    PPAGE_LOOKUP_TABLE_ITEM        RealPageLookupTable = (PPAGE_LOOKUP_TABLE_ITEM)PageLookupTable;
    PFN_NUMBER                            Index;

    for (Index=TotalPageCount-1; Index>0; Index--)
    {
        if (RealPageLookupTable[Index].PageAllocated == LoaderFree)
        {
            LastFreePageHint = Index + 1 + MmLowestPhysicalPage;
            break;
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
          int PageLookupTable = 100;
          unsigned long TotalPageCount = 100;
          int benchRet = MmUpdateLastFreePageHint(PageLookupTable,TotalPageCount);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int PageLookupTable = 255;
          unsigned long TotalPageCount = 255;
          int benchRet = MmUpdateLastFreePageHint(PageLookupTable,TotalPageCount);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int PageLookupTable = 10;
          unsigned long TotalPageCount = 10;
          int benchRet = MmUpdateLastFreePageHint(PageLookupTable,TotalPageCount);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
