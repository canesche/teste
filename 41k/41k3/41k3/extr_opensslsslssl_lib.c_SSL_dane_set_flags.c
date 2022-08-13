#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {unsigned long flags; } ;
struct TYPE_5__ {TYPE_1__ dane; } ;
typedef  TYPE_2__ SSL ;

/* Variables and functions */

unsigned long SSL_dane_set_flags(SSL *ssl, unsigned long flags)
{
    unsigned long orig = ssl->dane.flags;

    ssl->dane.flags |= flags;
    return orig;
}