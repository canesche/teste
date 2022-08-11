#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/ * run_queue_t ;
typedef  TYPE_2__* processor_t ;
struct TYPE_5__ {TYPE_1__* processor_set; } ;
struct TYPE_4__ {int /*<<< orphan*/  pset_runq; } ;

/* Variables and functions */

__attribute__((used)) __attribute__((always_inline))
static inline run_queue_t dualq_main_runq(processor_t processor)
{
	return &processor->processor_set->pset_runq;
}