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
typedef  int /*<<< orphan*/  dword ;
typedef  int /*<<< orphan*/  ADAPTER ;

/* Variables and functions */
 scalar_t__ MP_SHARED_RAM_OFFSET ; 

__attribute__((used)) static dword pri_ram_offset(ADAPTER *a) {
	return ((dword)MP_SHARED_RAM_OFFSET);
}