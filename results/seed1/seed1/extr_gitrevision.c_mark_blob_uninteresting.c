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
struct TYPE_2__ {int flags; } ;
struct blob {TYPE_1__ object; } ;

/* Variables and functions */
 int UNINTERESTING ; 

__attribute__((used)) static void mark_blob_uninteresting(struct blob *blob)
{
	if (!blob)
		return;
	if (blob->object.flags & UNINTERESTING)
		return;
	blob->object.flags |= UNINTERESTING;
}