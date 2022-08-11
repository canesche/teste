#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int bounds_type; } ;
typedef  TYPE_1__ obs_sceneitem_t ;
typedef  enum obs_bounds_type { ____Placeholder_obs_bounds_type } obs_bounds_type ;

/* Variables and functions */
 int OBS_BOUNDS_NONE ; 

enum obs_bounds_type obs_sceneitem_get_bounds_type(const obs_sceneitem_t *item)
{
	return item ? item->bounds_type : OBS_BOUNDS_NONE;
}