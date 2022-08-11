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
struct TYPE_4__ {int index; struct TYPE_4__* next; } ;
typedef  TYPE_1__ lwEnvelope ;

/* Variables and functions */

lwEnvelope *lwFindEnvelope( lwEnvelope *list, int index ){
	lwEnvelope *env;

	env = list;
	while ( env ) {
		if ( env->index == index ) {
			break;
		}
		env = env->next;
	}
	return env;
}