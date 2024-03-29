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
struct TYPE_4__ {scalar_t__ x; scalar_t__ y; scalar_t__ z; } ;
struct TYPE_3__ {scalar_t__ x; scalar_t__ y; scalar_t__ z; } ;
struct bounds {TYPE_2__ max; TYPE_1__ min; } ;

/* Variables and functions */

__attribute__((used)) static inline bool bounds_inside(const struct bounds *b,
		const struct bounds *test)
{
	return test->min.x >= b->min.x &&
	       test->min.y >= b->min.y &&
	       test->min.z >= b->min.z &&
	       test->max.x <= b->max.x &&
	       test->max.y <= b->max.y &&
	       test->max.z <= b->max.z;
}