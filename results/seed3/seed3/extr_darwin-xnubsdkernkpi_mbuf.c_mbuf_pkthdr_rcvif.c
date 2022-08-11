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
typedef  TYPE_2__* mbuf_t ;
typedef  int /*<<< orphan*/  ifnet_t ;
struct TYPE_4__ {int /*<<< orphan*/  rcvif; } ;
struct TYPE_5__ {TYPE_1__ m_pkthdr; } ;

/* Variables and functions */

ifnet_t
mbuf_pkthdr_rcvif(const mbuf_t mbuf)
{
	/*
	 * If we reference count ifnets, we should take a reference here
	 * before returning
	 */
	return (mbuf->m_pkthdr.rcvif);
}