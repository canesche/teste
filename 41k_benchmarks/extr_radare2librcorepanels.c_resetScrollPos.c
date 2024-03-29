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
struct TYPE_5__ {TYPE_1__* view; } ;
struct TYPE_4__ {scalar_t__ sy; scalar_t__ sx; } ;
typedef  TYPE_2__ RPanel ;

/* Variables and functions */

__attribute__((used)) static void resetScrollPos(RPanel *p) {
	p->view->sx = 0;
	p->view->sy = 0;
}