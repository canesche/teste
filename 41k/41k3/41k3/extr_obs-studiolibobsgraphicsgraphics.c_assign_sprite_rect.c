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

__attribute__((used)) static inline void assign_sprite_rect(float *start, float *end, float size,
		bool flip)
{
	if (!flip) {
		*start = 0.0f;
		*end   = size;
	} else {
		*start = size;
		*end   = 0.0f;
	}
}