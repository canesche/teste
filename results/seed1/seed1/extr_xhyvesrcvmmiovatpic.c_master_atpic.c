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
struct vatpic {struct atpic* atpic; } ;
struct atpic {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static __inline bool
master_atpic(struct vatpic *vatpic, struct atpic *atpic)
{

	if (atpic == &vatpic->atpic[0])
		return (true);
	else
		return (false);
}