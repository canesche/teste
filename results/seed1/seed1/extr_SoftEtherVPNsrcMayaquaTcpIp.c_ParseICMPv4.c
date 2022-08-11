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
typedef  int UINT ;
typedef  int /*<<< orphan*/  UCHAR ;
struct TYPE_4__ {int /*<<< orphan*/ * ICMPHeader; } ;
struct TYPE_5__ {int /*<<< orphan*/  TypeL4; TYPE_1__ L4; } ;
typedef  TYPE_2__ PKT ;
typedef  int /*<<< orphan*/  ICMP_HEADER ;

/* Variables and functions */
 int /*<<< orphan*/  L4_ICMPV4 ; 

bool ParseICMPv4(PKT *p, UCHAR *buf, UINT size)
{
	// Validate arguments
	if (p == NULL || buf == NULL)
	{
		return false;
	}

	// Check the size
	if (size < sizeof(ICMP_HEADER))
	{
		// Size is invalid
		return false;
	}

	// ICMPv4 header
	p->L4.ICMPHeader = (ICMP_HEADER *)buf;
	p->TypeL4 = L4_ICMPV4;

	buf += sizeof(ICMP_HEADER);
	size -= sizeof(ICMP_HEADER);

	return true;
}