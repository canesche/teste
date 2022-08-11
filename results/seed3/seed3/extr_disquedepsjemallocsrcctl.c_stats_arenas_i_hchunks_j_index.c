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
typedef  int /*<<< orphan*/  ctl_named_node_t ;

/* Variables and functions */
 size_t nhclasses ; 
 int /*<<< orphan*/  const* super_stats_arenas_i_hchunks_j_node ; 

__attribute__((used)) static const ctl_named_node_t *
stats_arenas_i_hchunks_j_index(const size_t *mib, size_t miblen, size_t j)
{

	if (j > nhclasses)
		return (NULL);
	return (super_stats_arenas_i_hchunks_j_node);
}