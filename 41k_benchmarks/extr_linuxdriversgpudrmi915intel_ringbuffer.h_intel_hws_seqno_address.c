#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ ggtt_offset; } ;
struct intel_engine_cs {TYPE_1__ status_page; } ;

/* Variables and functions */
 scalar_t__ I915_GEM_HWS_INDEX_ADDR ; 

__attribute__((used)) static inline u32 intel_hws_seqno_address(struct intel_engine_cs *engine)
{
	return engine->status_page.ggtt_offset + I915_GEM_HWS_INDEX_ADDR;
}