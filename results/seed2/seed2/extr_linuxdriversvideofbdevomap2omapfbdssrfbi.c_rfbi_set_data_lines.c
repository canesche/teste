#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct omap_dss_device {int dummy; } ;
struct TYPE_2__ {int data_lines; } ;

/* Variables and functions */
 TYPE_1__ rfbi ; 

__attribute__((used)) static void rfbi_set_data_lines(struct omap_dss_device *dssdev, int data_lines)
{
	rfbi.data_lines = data_lines;
}