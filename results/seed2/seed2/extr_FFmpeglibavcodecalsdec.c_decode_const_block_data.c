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
typedef  int /*<<< orphan*/  int32_t ;
struct TYPE_3__ {int block_length; int /*<<< orphan*/ * raw_samples; } ;
typedef  int /*<<< orphan*/  ALSDecContext ;
typedef  TYPE_1__ ALSBlockData ;

/* Variables and functions */

__attribute__((used)) static void decode_const_block_data(ALSDecContext *ctx, ALSBlockData *bd)
{
    int      smp = bd->block_length - 1;
    int32_t  val = *bd->raw_samples;
    int32_t *dst = bd->raw_samples + 1;

    // write raw samples into buffer
    for (; smp; smp--)
        *dst++ = val;
}