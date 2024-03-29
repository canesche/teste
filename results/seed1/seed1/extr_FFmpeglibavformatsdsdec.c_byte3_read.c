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
typedef  int uint8_t ;
typedef  unsigned int uint32_t ;

/* Variables and functions */

__attribute__((used)) static void byte3_read(const uint8_t *src, uint32_t *dst)
{
    int i;

    for (i = 0; i < 120; i += 3) {
        unsigned sample;

        sample = (src[i + 0] << 25) | (src[i + 1] << 18) | (src[i + 2] << 11);
        dst[i / 3] = sample;
    }
}