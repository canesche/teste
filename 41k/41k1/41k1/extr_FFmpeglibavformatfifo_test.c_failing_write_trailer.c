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
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int write_trailer_ret; } ;
typedef  TYPE_1__ FailingMuxerContext ;
typedef  TYPE_2__ AVFormatContext ;

/* Variables and functions */

__attribute__((used)) static int failing_write_trailer(AVFormatContext *avf)
{
    FailingMuxerContext *ctx = avf->priv_data;
    return ctx->write_trailer_ret;
}