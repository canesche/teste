#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {char const* name; struct TYPE_4__* link; } ;
typedef  TYPE_1__* Field ;

/* Variables and functions */

__attribute__((used)) static Field isfield(const char *name, Field flist) {
	for ( ; flist; flist = flist->link)
		if (flist->name == name)
			break;
	return flist;
}