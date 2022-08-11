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
struct TYPE_3__ {int frame_wanted_out; } ;
typedef  TYPE_1__ AVFilterLink ;

/* Variables and functions */

__attribute__((used)) static inline int ff_outlink_frame_wanted(AVFilterLink *link)
{
    return link->frame_wanted_out;
}