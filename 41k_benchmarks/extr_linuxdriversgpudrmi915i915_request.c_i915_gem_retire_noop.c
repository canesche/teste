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
struct i915_request {int dummy; } ;
struct i915_gem_active {int dummy; } ;

/* Variables and functions */

void i915_gem_retire_noop(struct i915_gem_active *active,
			  struct i915_request *request)
{
	/* Space left intentionally blank */
}