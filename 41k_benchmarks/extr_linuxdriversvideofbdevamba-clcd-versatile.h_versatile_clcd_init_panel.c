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
struct device_node {int dummy; } ;
struct clcd_fb {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline int versatile_clcd_init_panel(struct clcd_fb *fb,
					    struct device_node *panel)
{
	return 0;
}