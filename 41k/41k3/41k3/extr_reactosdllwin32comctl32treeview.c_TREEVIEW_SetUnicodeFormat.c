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
struct TYPE_3__ {int /*<<< orphan*/  bNtfUnicode; } ;
typedef  TYPE_1__ TREEVIEW_INFO ;
typedef  int /*<<< orphan*/  LRESULT ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */

__attribute__((used)) static LRESULT
TREEVIEW_SetUnicodeFormat(TREEVIEW_INFO *infoPtr, BOOL fUnicode)
{
    BOOL rc = infoPtr->bNtfUnicode;
    infoPtr->bNtfUnicode = fUnicode;
    return rc;
}