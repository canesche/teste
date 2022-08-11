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
typedef  int /*<<< orphan*/  uint32_t ;
struct tcpcb {TYPE_2__* t_inpcb; } ;
struct rtentry {int /*<<< orphan*/  rtt_min; } ;
struct TYPE_3__ {struct rtentry* ro_rt; } ;
struct TYPE_4__ {TYPE_1__ inp_route; } ;

/* Variables and functions */

uint32_t
get_base_rtt(struct tcpcb *tp)
{
	struct rtentry *rt = tp->t_inpcb->inp_route.ro_rt;
	return ((rt == NULL) ? 0 : rt->rtt_min);
}