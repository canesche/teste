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
struct TYPE_3__ {size_t u16len; } ;
typedef  TYPE_1__ uiAttributedString ;

/* Variables and functions */

size_t uiprivAttributedStringUTF16Len(const uiAttributedString *s)
{
	return s->u16len;
}