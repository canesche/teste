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
struct TYPE_3__ {int flag; } ;
typedef  TYPE_1__ mbfl_identify_filter ;

/* Variables and functions */

int mbfl_filt_ident_false(int c, mbfl_identify_filter *filter)
{
	filter->flag = 1;	/* bad */
	return c;
}