#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  gs_effect_t ;
struct TYPE_3__ {int /*<<< orphan*/ * default_rect_effect; } ;
struct TYPE_4__ {TYPE_1__ video; } ;

/* Variables and functions */
 TYPE_2__* obs ; 

gs_effect_t *obs_get_default_rect_effect(void)
{
	if (!obs) return NULL;
	return obs->video.default_rect_effect;
}