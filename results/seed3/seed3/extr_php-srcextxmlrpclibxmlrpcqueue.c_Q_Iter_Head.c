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
struct TYPE_3__ {scalar_t__ head; } ;
typedef  TYPE_1__ queue ;
typedef  int /*<<< orphan*/ * q_iter ;

/* Variables and functions */

q_iter Q_Iter_Head(queue *q) {
   return q ? (q_iter)q->head : NULL;
}