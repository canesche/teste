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
typedef  int int16_t ;

/* Variables and functions */

__attribute__((used)) static void linear_perm(int16_t *out, int16_t *in, int n_blocks, int size)
{
    int block_size = size / n_blocks;
    int i;

    for (i = 0; i < size; i++)
        out[i] = block_size * (in[i] % n_blocks) + in[i] / n_blocks;
}