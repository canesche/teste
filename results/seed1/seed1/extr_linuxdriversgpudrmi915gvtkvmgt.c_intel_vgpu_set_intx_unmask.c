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
typedef  int /*<<< orphan*/  uint32_t ;
struct intel_vgpu {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int intel_vgpu_set_intx_unmask(struct intel_vgpu *vgpu,
			unsigned int index, unsigned int start,
			unsigned int count, uint32_t flags, void *data)
{
	return 0;
}