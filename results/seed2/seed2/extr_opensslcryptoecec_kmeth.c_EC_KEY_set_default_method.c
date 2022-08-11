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
typedef  int /*<<< orphan*/  EC_KEY_METHOD ;

/* Variables and functions */
 int /*<<< orphan*/  const* default_ec_key_meth ; 
 int /*<<< orphan*/  openssl_ec_key_method ; 

void EC_KEY_set_default_method(const EC_KEY_METHOD *meth)
{
    if (meth == NULL)
        default_ec_key_meth = &openssl_ec_key_method;
    else
        default_ec_key_meth = meth;
}