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
struct nes_cm_node {int dummy; } ;
struct nes_cm_core {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int mini_cm_accept(struct nes_cm_core *cm_core, struct nes_cm_node *cm_node)
{
	return 0;
}