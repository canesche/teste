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
struct TYPE_3__ {int Length; int* Buffer; } ;
typedef  TYPE_1__* PUNICODE_STRING ;
typedef  int BOOLEAN ;

/* Variables and functions */

BOOLEAN Ext2IsDot(PUNICODE_STRING name)
{
    return (name->Length == 2 && name->Buffer[0] == L'.');
}