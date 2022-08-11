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
typedef  size_t UCHAR ;
struct TYPE_3__ {scalar_t__* MultiByteTable; scalar_t__ UniDefaultChar; } ;
typedef  TYPE_1__* PCPTABLEINFO ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 

BOOL
NLS_IsDefaultCharForMB(PCPTABLEINFO CodePageTable, UCHAR Char)
{
    if (CodePageTable->MultiByteTable[Char] != CodePageTable->UniDefaultChar)
        return FALSE;

    return TRUE;
}