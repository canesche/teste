#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct gs_effect_param {int dummy; } ;
typedef  struct gs_effect_param gs_eparam_t ;
struct TYPE_4__ {size_t num; struct gs_effect_param* array; } ;
struct TYPE_5__ {TYPE_1__ params; } ;
typedef  TYPE_2__ gs_effect_t ;

/* Variables and functions */

gs_eparam_t *gs_effect_get_param_by_idx(const gs_effect_t *effect, size_t param)
{
	if (!effect) return NULL;

	struct gs_effect_param *params = effect->params.array;
	if (param >= effect->params.num)
		return NULL;

	return params+param;
}