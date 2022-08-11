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
struct TYPE_3__ {size_t nr_objects; } ;
typedef  TYPE_1__ git_packbuilder ;

/* Variables and functions */

size_t git_packbuilder_object_count(git_packbuilder *pb)
{
	return pb->nr_objects;
}