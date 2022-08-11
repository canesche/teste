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
struct TYPE_3__ {void* data; } ;
typedef  TYPE_1__ EVP_PKEY_CTX ;

/* Variables and functions */

void EVP_PKEY_CTX_set_data(EVP_PKEY_CTX *ctx, void *data)
{
    ctx->data = data;
}