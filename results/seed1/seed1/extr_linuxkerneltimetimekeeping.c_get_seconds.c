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
struct timekeeper {unsigned long xtime_sec; } ;
struct TYPE_2__ {struct timekeeper timekeeper; } ;

/* Variables and functions */
 TYPE_1__ tk_core ; 

unsigned long get_seconds(void)
{
	struct timekeeper *tk = &tk_core.timekeeper;

	return tk->xtime_sec;
}