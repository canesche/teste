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
struct drm_device {int dummy; } ;

/* Variables and functions */

int tegra_drm_fb_prepare(struct drm_device *drm)
{
#ifdef CONFIG_DRM_FBDEV_EMULATION
	struct tegra_drm *tegra = drm->dev_private;

	tegra->fbdev = tegra_fbdev_create(drm);
	if (IS_ERR(tegra->fbdev))
		return PTR_ERR(tegra->fbdev);
#endif

	return 0;
}