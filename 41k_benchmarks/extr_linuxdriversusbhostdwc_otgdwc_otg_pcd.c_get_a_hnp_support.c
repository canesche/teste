#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint32_t ;
struct TYPE_3__ {int /*<<< orphan*/  a_hnp_support; } ;
typedef  TYPE_1__ dwc_otg_pcd_t ;

/* Variables and functions */

uint32_t get_a_hnp_support(dwc_otg_pcd_t * pcd)
{
	return pcd->a_hnp_support;
}