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
struct bnxt {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static bool bnxt_promisc_ok(struct bnxt *bp)
{
#ifdef CONFIG_BNXT_SRIOV
	if (BNXT_VF(bp) && !bp->vf.vlan)
		return false;
#endif
	return true;
}