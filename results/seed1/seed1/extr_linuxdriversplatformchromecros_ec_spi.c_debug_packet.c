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
typedef  int /*<<< orphan*/  u8 ;
struct device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void debug_packet(struct device *dev, const char *name, u8 *ptr,
			 int len)
{
#ifdef DEBUG
	int i;

	dev_dbg(dev, "%s: ", name);
	for (i = 0; i < len; i++)
		pr_cont(" %02x", ptr[i]);

	pr_cont("\n");
#endif
}