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