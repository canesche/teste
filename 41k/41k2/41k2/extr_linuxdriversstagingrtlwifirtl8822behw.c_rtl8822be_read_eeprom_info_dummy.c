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
struct ieee80211_hw {int dummy; } ;

/* Variables and functions */

void rtl8822be_read_eeprom_info_dummy(struct ieee80211_hw *hw)
{
	/*
	 * 8822b use halmac, so
	 * move rtl8822be_read_eeprom_info() to rtl8822be_init_sw_vars()
	 * after halmac_init_adapter().
	 */
}