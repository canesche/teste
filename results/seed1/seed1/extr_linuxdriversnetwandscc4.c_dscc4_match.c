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
struct thingie {int define; } ;

/* Variables and functions */

__attribute__((used)) static int dscc4_match(const struct thingie *p, int value)
{
	int i;

	for (i = 0; p[i].define != -1; i++) {
		if (value == p[i].define)
			break;
	}
	if (p[i].define == -1)
		return -1;
	else
		return i;
}