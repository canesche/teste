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
typedef  TYPE_1__* bondport_ref ;
struct TYPE_3__ {int /*<<< orphan*/  po_flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  BONDPORT_FLAGS_MUX_ATTACHED ; 

__attribute__((used)) static __inline__ void
bondport_flags_clear_mux_attached(bondport_ref p)
{
    p->po_flags &= ~BONDPORT_FLAGS_MUX_ATTACHED;
    return;
}