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
struct work_struct {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void ftrace_sync(struct work_struct *work)
{
	/*
	 * This function is just a stub to implement a hard force
	 * of synchronize_sched(). This requires synchronizing
	 * tasks even in userspace and idle.
	 *
	 * Yes, function tracing is rude.
	 */
}