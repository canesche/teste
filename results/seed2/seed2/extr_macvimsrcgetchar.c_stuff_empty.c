#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int /*<<< orphan*/ * b_next; } ;
struct TYPE_8__ {TYPE_1__ bh_first; } ;
struct TYPE_6__ {int /*<<< orphan*/ * b_next; } ;
struct TYPE_7__ {TYPE_2__ bh_first; } ;

/* Variables and functions */
 TYPE_4__ readbuf1 ; 
 TYPE_3__ readbuf2 ; 

int
stuff_empty()
{
    return (readbuf1.bh_first.b_next == NULL
	 && readbuf2.bh_first.b_next == NULL);
}