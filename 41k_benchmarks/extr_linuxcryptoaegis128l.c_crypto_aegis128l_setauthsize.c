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
struct crypto_aead {int dummy; } ;

/* Variables and functions */
 unsigned int AEGIS128L_MAX_AUTH_SIZE ; 
 unsigned int AEGIS128L_MIN_AUTH_SIZE ; 
 int EINVAL ; 

__attribute__((used)) static int crypto_aegis128l_setauthsize(struct crypto_aead *tfm,
					unsigned int authsize)
{
	if (authsize > AEGIS128L_MAX_AUTH_SIZE)
		return -EINVAL;
	if (authsize < AEGIS128L_MIN_AUTH_SIZE)
		return -EINVAL;
	return 0;
}