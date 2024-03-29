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
typedef  int /*<<< orphan*/  u32 ;
typedef  int /*<<< orphan*/  _adapter ;
struct TYPE_2__ {int /*<<< orphan*/  on_oper_ch_time; } ;

/* Variables and functions */
 TYPE_1__* adapter_to_dvobj (int /*<<< orphan*/ *) ; 

inline u32 rtw_get_on_oper_ch_time(_adapter *adapter)
{
	return adapter_to_dvobj(adapter)->on_oper_ch_time;
}