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
struct intel_rps_client {int dummy; } ;
struct drm_i915_file_private {struct intel_rps_client rps_client; } ;
struct drm_file {struct drm_i915_file_private* driver_priv; } ;

/* Variables and functions */

__attribute__((used)) static struct intel_rps_client *to_rps_client(struct drm_file *file)
{
	struct drm_i915_file_private *fpriv = file->driver_priv;

	return &fpriv->rps_client;
}