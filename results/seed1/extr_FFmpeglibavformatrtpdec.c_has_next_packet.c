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
typedef  scalar_t__ uint16_t ;
struct TYPE_5__ {scalar_t__ seq; TYPE_1__* queue; } ;
struct TYPE_4__ {scalar_t__ seq; } ;
typedef  TYPE_2__ RTPDemuxContext ;

/* Variables and functions */

__attribute__((used)) static int has_next_packet(RTPDemuxContext *s)
{
    return s->queue && s->queue->seq == (uint16_t) (s->seq + 1);
}