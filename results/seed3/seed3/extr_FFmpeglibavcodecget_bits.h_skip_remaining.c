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
struct TYPE_3__ {unsigned int cache; unsigned int bits_left; } ;
typedef  TYPE_1__ GetBitContext ;

/* Variables and functions */

__attribute__((used)) static inline void skip_remaining(GetBitContext *s, unsigned n)
{
#ifdef BITSTREAM_READER_LE
    s->cache >>= n;
#else
    s->cache <<= n;
#endif
    s->bits_left -= n;
}