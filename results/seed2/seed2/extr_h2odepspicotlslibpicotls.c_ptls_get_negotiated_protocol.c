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
struct TYPE_3__ {char const* negotiated_protocol; } ;
typedef  TYPE_1__ ptls_t ;

/* Variables and functions */

const char *ptls_get_negotiated_protocol(ptls_t *tls)
{
    return tls->negotiated_protocol;
}