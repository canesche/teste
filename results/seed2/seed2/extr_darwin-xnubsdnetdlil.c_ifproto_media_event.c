#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
struct kev_msg {int dummy; } ;
struct ifnet {int dummy; } ;
typedef  int /*<<< orphan*/  protocol_family_t ;

/* Variables and functions */

__attribute__((used)) static void
ifproto_media_event(struct ifnet *ifp, protocol_family_t protocol,
    const struct kev_msg *event)
{
#pragma unused(ifp, protocol, event)
}