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
struct TYPE_3__ {unsigned char* buf; } ;
typedef  TYPE_1__ zbar_decoder_t ;

/* Variables and functions */

__attribute__((used)) static inline int
codabar_checksum (zbar_decoder_t *dcode,
                  unsigned n)
{
    unsigned chk = 0;
    unsigned char *buf = dcode->buf;
    while(n--)
        chk += *(buf++);
    return(!!(chk & 0xf));
}