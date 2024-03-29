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
struct TYPE_3__ {scalar_t__ func; } ;
struct TYPE_4__ {TYPE_1__ vcpu_is_preempted; } ;

/* Variables and functions */
 scalar_t__ __raw_callee_save___native_vcpu_is_preempted ; 
 TYPE_2__ pv_lock_ops ; 

bool pv_is_native_vcpu_is_preempted(void)
{
	return pv_lock_ops.vcpu_is_preempted.func ==
		__raw_callee_save___native_vcpu_is_preempted;
}