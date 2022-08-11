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
typedef  scalar_t__* fe ;

/* Variables and functions */

__attribute__((used)) static void fe_add(fe h, const fe f, const fe g)
{
    unsigned i;

    for (i = 0; i < 10; i++) {
        h[i] = f[i] + g[i];
    }
}