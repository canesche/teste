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
typedef  int int16_t ;

/* Variables and functions */

__attribute__((used)) static int make_ydt24_entry(int p1, int p2, int16_t *ydt)
{
    int lo, hi;

    lo = ydt[p1];
    hi = ydt[p2];
    return (lo + (hi * (1 << 8)) + (hi * (1 << 16))) * 2;
}