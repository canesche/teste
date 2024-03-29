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
typedef  int /*<<< orphan*/  CreateIndexInfo ;

/* Variables and functions */

__attribute__((used)) static bool
multitransaction_create_index_mark_valid(CreateIndexInfo info)
{
#ifdef DEBUG
	return info.extended_options.max_chunks < 0;
#else
	return true;
#endif
}