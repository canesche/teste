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
struct wl_data_offer {int dummy; } ;
struct wl_data_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void data_device_handle_selection(void *data, struct wl_data_device *wl_ddev,
                                         struct wl_data_offer *id)
{
}