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
struct radeon_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void radeon_ttm_debugfs_fini(struct radeon_device *rdev)
{
#if defined(CONFIG_DEBUG_FS)

	debugfs_remove(rdev->mman.vram);
	rdev->mman.vram = NULL;

	debugfs_remove(rdev->mman.gtt);
	rdev->mman.gtt = NULL;
#endif
}