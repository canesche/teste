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
struct TYPE_3__ {int /*<<< orphan*/  snpsid; } ;
typedef  TYPE_1__ dwc_otg_core_if_t ;

/* Variables and functions */

uint32_t dwc_otg_get_gsnpsid(dwc_otg_core_if_t * core_if)
{
	return core_if->snpsid;
}