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
struct TYPE_2__ {scalar_t__ Id; } ;
typedef  TYPE_1__ VI_STRING ;

/* Variables and functions */

int ViCompareString(void *p1, void *p2)
{
	VI_STRING *s1, *s2;
	if (p1 == NULL || p2 == NULL)
	{
		return 0;
	}

	s1 = *(VI_STRING **)p1;
	s2 = *(VI_STRING **)p2;

	if (s1 == NULL || s2 == NULL)
	{
		return 0;
	}

	if (s1->Id > s2->Id)
	{
		return 1;
	}
	else if (s1->Id < s2->Id)
	{
		return -1;
	}
	return 0;
}