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
struct TYPE_2__ {struct ifnet* rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static __inline void
igmp_save_context(struct mbuf *m, struct ifnet *ifp)
{
        m->m_pkthdr.rcvif = ifp;
}