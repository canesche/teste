#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int flags; } ;
typedef  TYPE_1__ boot_args ;
typedef  int /*<<< orphan*/  boolean_t ;
struct TYPE_4__ {scalar_t__ bootArgs; } ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 TYPE_2__ PE_state ; 
 int /*<<< orphan*/  TRUE ; 
 int kBootArgsFlagRebootOnPanic ; 

boolean_t
PE_reboot_on_panic(void)
{
	boot_args *args = (boot_args *)PE_state.bootArgs;

	if (args->flags & kBootArgsFlagRebootOnPanic)
		return TRUE;
	else
		return FALSE;
}