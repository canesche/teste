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
struct usb_hcd {scalar_t__ speed; } ;

/* Variables and functions */
 scalar_t__ HCD_USB3 ; 

__attribute__((used)) static inline unsigned int hcd_index(struct usb_hcd *hcd)
{
	if (hcd->speed >= HCD_USB3)
		return 0;
	else
		return 1;
}