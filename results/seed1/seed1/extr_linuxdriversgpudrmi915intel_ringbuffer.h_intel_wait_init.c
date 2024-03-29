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
struct intel_wait {int /*<<< orphan*/ * request; int /*<<< orphan*/  tsk; } ;

/* Variables and functions */
 int /*<<< orphan*/  current ; 

__attribute__((used)) static inline void intel_wait_init(struct intel_wait *wait)
{
	wait->tsk = current;
	wait->request = NULL;
}