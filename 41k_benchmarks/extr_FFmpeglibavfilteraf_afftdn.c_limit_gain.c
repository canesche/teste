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

/* Variables and functions */

__attribute__((used)) static double limit_gain(double a, double b)
{
    if (a > 1.0)
        return (b * a - 1.0) / (b + a - 2.0);
    if (a < 1.0)
        return (b * a - 2.0 * a + 1.0) / (b - a);
    return 1.0;
}