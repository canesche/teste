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
typedef  int /*<<< orphan*/  EVP_MAC_IMPL ;

/* Variables and functions */

__attribute__((used)) static int blake2b_mac_copy(EVP_MAC_IMPL *dst, EVP_MAC_IMPL *src)
{
    *dst = *src;
    return 1;
}