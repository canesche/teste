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
typedef  int /*<<< orphan*/  uint32_t ;
struct crop_filter_data {int /*<<< orphan*/  width; } ;

/* Variables and functions */

__attribute__((used)) static uint32_t crop_filter_width(void *data)
{
	struct crop_filter_data *crop = data;
	return (uint32_t)crop->width;
}