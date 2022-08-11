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
typedef  int uint32_t ;
struct TYPE_3__ {scalar_t__ rndx; scalar_t__ wndx; } ;
typedef  TYPE_1__ IjkFifoBuffer ;

/* Variables and functions */

int ijk_av_fifo_size(const IjkFifoBuffer *f)
{
    return (uint32_t)(f->wndx - f->rndx);
}