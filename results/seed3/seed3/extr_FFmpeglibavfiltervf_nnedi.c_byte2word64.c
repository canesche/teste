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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int /*<<< orphan*/  int16_t ;

/* Variables and functions */

__attribute__((used)) static void byte2word64(const uint8_t *t, const int pitch, float *p)
{
    int16_t *ps = (int16_t *)p;
    int y, x;

    for (y = 0; y < 4; y++)
        for (x = 0; x < 16; x++)
            ps[y * 16 + x] = t[y * pitch * 2 + x];
}