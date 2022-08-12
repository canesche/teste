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
typedef  int /*<<< orphan*/  SSL ;

/* Variables and functions */

__attribute__((used)) static int not_resumable_sess_cb(SSL *s, int is_forward_secure)
{
    /* disable resumption for sessions with forward secure ciphers */
    return is_forward_secure;
}