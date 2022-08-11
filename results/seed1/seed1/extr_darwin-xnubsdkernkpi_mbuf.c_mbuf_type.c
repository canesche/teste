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
typedef  int /*<<< orphan*/  mbuf_type_t ;
typedef  TYPE_1__* mbuf_t ;
struct TYPE_3__ {int /*<<< orphan*/  m_type; } ;

/* Variables and functions */

mbuf_type_t
mbuf_type(const mbuf_t mbuf)
{
	return (mbuf->m_type);
}