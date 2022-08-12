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
typedef  TYPE_1__* proc_t ;
struct TYPE_3__ {int p_flag; } ;

/* Variables and functions */
 int P_NOREMOTEHANG ; 

int
proc_noremotehang(proc_t p)
{
	int retval = 0;

	if (p)
		retval = p->p_flag & P_NOREMOTEHANG;
	return(retval? 1: 0);

}