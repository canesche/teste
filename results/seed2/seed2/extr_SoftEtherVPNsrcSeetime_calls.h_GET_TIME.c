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
struct timeval {int dummy; } ;
struct time_conv {struct timeval* start; } ;

/* Variables and functions */

__inline void GET_TIME(struct timeval *dst, struct time_conv *data)
{
	return;
	*dst=data->start[0];
}