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
struct TYPE_3__ {scalar_t__ cache; scalar_t__ status; } ;
typedef  TYPE_1__ mbfl_convert_filter ;

/* Variables and functions */

void mbfl_filt_conv_common_ctor(mbfl_convert_filter *filter)
{
	filter->status = 0;
	filter->cache = 0;
}