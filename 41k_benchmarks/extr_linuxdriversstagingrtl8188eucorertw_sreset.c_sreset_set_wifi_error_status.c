#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u32 ;
struct adapter {TYPE_2__* HalData; } ;
struct TYPE_3__ {int /*<<< orphan*/  Wifi_Error_Status; } ;
struct TYPE_4__ {TYPE_1__ srestpriv; } ;

/* Variables and functions */

void sreset_set_wifi_error_status(struct adapter *padapter, u32 status)
{
	padapter->HalData->srestpriv.Wifi_Error_Status = status;
}