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
struct TYPE_4__ {size_t num; } ;
struct TYPE_5__ {TYPE_1__ params; } ;
typedef  TYPE_2__ gs_effect_t ;

/* Variables and functions */

size_t gs_effect_get_num_params(const gs_effect_t *effect)
{
	return effect ? effect->params.num : 0;
}