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
struct osd_obj_id {int dummy; } ;
struct ore_io_state {TYPE_2__* oc; } ;
struct TYPE_4__ {unsigned int single_comp; TYPE_1__* comps; } ;
struct TYPE_3__ {struct osd_obj_id obj; } ;

/* Variables and functions */

__attribute__((used)) static struct osd_obj_id *_ios_obj(struct ore_io_state *ios, unsigned index)
{
	return &ios->oc->comps[index & ios->oc->single_comp].obj;
}