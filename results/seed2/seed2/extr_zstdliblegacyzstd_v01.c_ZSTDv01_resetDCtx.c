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
struct TYPE_3__ {int /*<<< orphan*/ * base; int /*<<< orphan*/ * previousDstEnd; scalar_t__ phase; int /*<<< orphan*/  expected; } ;
typedef  TYPE_1__ ZSTDv01_Dctx ;

/* Variables and functions */
 int /*<<< orphan*/  ZSTD_frameHeaderSize ; 

size_t ZSTDv01_resetDCtx(ZSTDv01_Dctx* dctx)
{
    dctx->expected = ZSTD_frameHeaderSize;
    dctx->phase = 0;
    dctx->previousDstEnd = NULL;
    dctx->base = NULL;
    return 0;
}