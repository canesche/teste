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
typedef  int u8 ;
typedef  int s8 ;

/* Variables and functions */

__attribute__((used)) static u8 odm_query_rx_pwr_percentage(s8 ant_power)
{
	if ((ant_power <= -100) || (ant_power >= 20))
		return 0;
	else if (ant_power >= 0)
		return 100;
	else
		return 100 + ant_power;
}