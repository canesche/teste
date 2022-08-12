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
struct axisang {float x; float y; float z; float w; } ;

/* Variables and functions */

__attribute__((used)) static inline void axisang_zero(struct axisang *dst)
{
	dst->x = 0.0f;
	dst->y = 0.0f;
	dst->z = 0.0f;
	dst->w = 0.0f;
}