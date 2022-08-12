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
struct wlr_xwayland_surface {struct sway_view* data; } ;
struct sway_view {int dummy; } ;

/* Variables and functions */

struct sway_view *view_from_wlr_xwayland_surface(
		struct wlr_xwayland_surface *xsurface) {
	return xsurface->data;
}