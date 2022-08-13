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
typedef  int /*<<< orphan*/  uint32_t ;
struct TYPE_4__ {int /*<<< orphan*/  max_early_data; } ;
struct TYPE_5__ {TYPE_1__ ext; } ;
typedef  TYPE_2__ SSL_SESSION ;

/* Variables and functions */

int SSL_SESSION_set_max_early_data(SSL_SESSION *s, uint32_t max_early_data)
{
    s->ext.max_early_data = max_early_data;

    return 1;
}