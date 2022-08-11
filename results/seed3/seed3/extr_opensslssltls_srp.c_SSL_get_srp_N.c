#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int /*<<< orphan*/ * N; } ;
struct TYPE_9__ {TYPE_3__* ctx; TYPE_1__ srp_ctx; } ;
struct TYPE_7__ {int /*<<< orphan*/ * N; } ;
struct TYPE_8__ {TYPE_2__ srp_ctx; } ;
typedef  TYPE_4__ SSL ;
typedef  int /*<<< orphan*/  BIGNUM ;

/* Variables and functions */

BIGNUM *SSL_get_srp_N(SSL *s)
{
    if (s->srp_ctx.N != NULL)
        return s->srp_ctx.N;
    return s->ctx->srp_ctx.N;
}