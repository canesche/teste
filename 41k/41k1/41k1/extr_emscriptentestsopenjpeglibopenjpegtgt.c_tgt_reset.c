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
struct TYPE_5__ {int numnodes; TYPE_1__* nodes; } ;
typedef  TYPE_2__ opj_tgt_tree_t ;
struct TYPE_4__ {int value; scalar_t__ known; scalar_t__ low; } ;

/* Variables and functions */

void tgt_reset(opj_tgt_tree_t *tree) {
	int i;

	if (NULL == tree)
		return;
	
	for (i = 0; i < tree->numnodes; i++) {
		tree->nodes[i].value = 999;
		tree->nodes[i].low = 0;
		tree->nodes[i].known = 0;
	}
}