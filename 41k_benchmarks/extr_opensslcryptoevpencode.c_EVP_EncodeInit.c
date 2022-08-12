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
struct TYPE_3__ {int length; scalar_t__ flags; scalar_t__ line_num; scalar_t__ num; } ;
typedef  TYPE_1__ EVP_ENCODE_CTX ;

/* Variables and functions */

void EVP_EncodeInit(EVP_ENCODE_CTX *ctx)
{
    ctx->length = 48;
    ctx->num = 0;
    ctx->line_num = 0;
    ctx->flags = 0;
}