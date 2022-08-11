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
struct TYPE_3__ {void* time_cb_data; int /*<<< orphan*/  time_cb; } ;
typedef  int /*<<< orphan*/  TS_time_cb ;
typedef  TYPE_1__ TS_RESP_CTX ;

/* Variables and functions */

void TS_RESP_CTX_set_time_cb(TS_RESP_CTX *ctx, TS_time_cb cb, void *data)
{
    ctx->time_cb = cb;
    ctx->time_cb_data = data;
}