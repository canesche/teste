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
typedef  int ulong ;
typedef  int /*<<< orphan*/  uchar ;
struct TYPE_3__ {scalar_t__ p; scalar_t__ ep; } ;
typedef  TYPE_1__ DwarfBuf ;

/* Variables and functions */
 int /*<<< orphan*/ * nil ; 

uchar*
dwarfgetnref(DwarfBuf *b, ulong n)
{
	uchar *p;

	if(b->p==nil || b->p+n > b->ep){
		b->p = nil;
		return nil;
	}
	p = b->p;
	b->p += n;
	return p;
}