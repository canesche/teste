#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
typedef  int /*<<< orphan*/  ptrdiff_t ;
typedef  int /*<<< orphan*/  int32_t ;
typedef  int int16_t ;

/* Variables and functions */

void ff_ivi_dc_haar_2d(const int32_t *in, int16_t *out, ptrdiff_t pitch,
                       int blk_size)
{
    int     x, y;
    int16_t dc_coeff;

    dc_coeff = (*in + 0) >> 3;

    for (y = 0; y < blk_size; out += pitch, y++) {
        for (x = 0; x < blk_size; x++)
            out[x] = dc_coeff;
    }
}