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
typedef  int /*<<< orphan*/  TASK_SIGSET_T ;

/* Variables and functions */

__attribute__((used)) static void tasks_lock_block_signals(TASK_SIGSET_T *old_sigset) { (void)old_sigset; }