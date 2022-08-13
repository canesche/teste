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
struct TYPE_2__ {int /*<<< orphan*/  sec; } ;
struct index_state {TYPE_1__ timestamp; int /*<<< orphan*/  alloc; int /*<<< orphan*/  cache_nr; } ;

/* Variables and functions */

int is_index_unborn(struct index_state *istate)
{
    return (!istate->cache_nr && !istate->alloc && !istate->timestamp.sec);
}