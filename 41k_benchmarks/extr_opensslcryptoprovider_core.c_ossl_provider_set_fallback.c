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
struct TYPE_3__ {int flag_fallback; } ;
typedef  TYPE_1__ OSSL_PROVIDER ;

/* Variables and functions */

int ossl_provider_set_fallback(OSSL_PROVIDER *prov)
{
    if (prov == NULL)
        return 0;

    prov->flag_fallback = 1;
    return 1;
}