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
struct thread {TYPE_1__* ts; } ;
struct TYPE_2__ {size_t cnt; } ;

/* Variables and functions */

size_t thread_stack__depth(struct thread *thread)
{
	if (!thread->ts)
		return 0;
	return thread->ts->cnt;
}