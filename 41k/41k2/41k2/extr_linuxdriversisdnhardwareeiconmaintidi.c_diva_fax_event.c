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
struct TYPE_3__ {long pending_fax_status; } ;
typedef  TYPE_1__ diva_strace_context_t ;

/* Variables and functions */

__attribute__((used)) static int diva_fax_event(diva_strace_context_t *pLib, int Channel) {
	pLib->pending_fax_status |= (1L << (Channel - 1));
	return (0);
}