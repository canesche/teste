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
typedef  unsigned int u32 ;
struct TYPE_3__ {unsigned int num_placement; unsigned int num_busy_placement; TYPE_2__* busy_placement; TYPE_2__* placement; } ;
struct ast_bo {TYPE_2__* placements; TYPE_1__ placement; } ;
struct TYPE_4__ {int flags; scalar_t__ lpfn; scalar_t__ fpfn; } ;

/* Variables and functions */
 int TTM_PL_FLAG_CACHED ; 
 int TTM_PL_FLAG_SYSTEM ; 
 int TTM_PL_FLAG_UNCACHED ; 
 int TTM_PL_FLAG_VRAM ; 
 int TTM_PL_FLAG_WC ; 

void ast_ttm_placement(struct ast_bo *bo, int domain)
{
	u32 c = 0;
	unsigned i;

	bo->placement.placement = bo->placements;
	bo->placement.busy_placement = bo->placements;
	if (domain & TTM_PL_FLAG_VRAM)
		bo->placements[c++].flags = TTM_PL_FLAG_WC | TTM_PL_FLAG_UNCACHED | TTM_PL_FLAG_VRAM;
	if (domain & TTM_PL_FLAG_SYSTEM)
		bo->placements[c++].flags = TTM_PL_FLAG_CACHED | TTM_PL_FLAG_SYSTEM;
	if (!c)
		bo->placements[c++].flags = TTM_PL_FLAG_CACHED | TTM_PL_FLAG_SYSTEM;
	bo->placement.num_placement = c;
	bo->placement.num_busy_placement = c;
	for (i = 0; i < c; ++i) {
		bo->placements[i].fpfn = 0;
		bo->placements[i].lpfn = 0;
	}
}