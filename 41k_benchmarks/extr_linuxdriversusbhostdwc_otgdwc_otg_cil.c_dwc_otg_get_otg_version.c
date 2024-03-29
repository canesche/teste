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
typedef  int /*<<< orphan*/  uint16_t ;
struct TYPE_3__ {int otg_ver; } ;
typedef  TYPE_1__ dwc_otg_core_if_t ;

/* Variables and functions */

uint16_t dwc_otg_get_otg_version(dwc_otg_core_if_t * core_if)
{
	return ((core_if->otg_ver == 1) ? (uint16_t)0x0200 : (uint16_t)0x0103);
}