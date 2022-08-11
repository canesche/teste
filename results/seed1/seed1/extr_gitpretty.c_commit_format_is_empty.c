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
typedef  enum cmit_fmt { ____Placeholder_cmit_fmt } cmit_fmt ;

/* Variables and functions */
 int CMIT_FMT_USERFORMAT ; 
 int /*<<< orphan*/ * user_format ; 

int commit_format_is_empty(enum cmit_fmt fmt)
{
	return fmt == CMIT_FMT_USERFORMAT && !*user_format;
}