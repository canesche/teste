#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int uint32_t ;
struct TYPE_5__ {TYPE_1__* core_if; } ;
typedef  TYPE_2__ dwc_otg_hcd_t ;
struct TYPE_4__ {scalar_t__ op_state; } ;

/* Variables and functions */
 scalar_t__ B_HOST ; 

uint32_t dwc_otg_hcd_is_b_host(dwc_otg_hcd_t * hcd)
{
	uint32_t is_b_host;
	if (hcd->core_if->op_state == B_HOST) {
		is_b_host = 1;
	} else {
		is_b_host = 0;
	}

	return is_b_host;
}