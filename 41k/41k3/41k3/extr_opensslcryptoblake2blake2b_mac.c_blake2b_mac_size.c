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
struct TYPE_4__ {size_t digest_length; } ;
struct TYPE_5__ {TYPE_1__ params; } ;
typedef  TYPE_2__ EVP_MAC_IMPL ;

/* Variables and functions */

__attribute__((used)) static size_t blake2b_mac_size(EVP_MAC_IMPL *macctx)
{
    return macctx->params.digest_length;
}