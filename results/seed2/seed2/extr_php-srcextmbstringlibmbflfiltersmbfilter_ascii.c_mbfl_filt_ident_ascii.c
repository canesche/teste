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

__attribute__((used)) static int mbfl_filt_ident_ascii(int c, mbfl_identify_filter *filter)
{
	if (c >= 0x20 && c < 0x80) {
		;
	} else if (c == 0x0d || c == 0x0a || c == 0x09 || c == 0) {	/* CR or LF or HTAB or null */
		;
	} else {
		filter->flag = 1;
	}

	return c;
}