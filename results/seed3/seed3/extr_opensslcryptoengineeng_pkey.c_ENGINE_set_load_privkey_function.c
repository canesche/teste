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
struct TYPE_3__ {int /*<<< orphan*/  load_privkey; } ;
typedef  int /*<<< orphan*/  ENGINE_LOAD_KEY_PTR ;
typedef  TYPE_1__ ENGINE ;

/* Variables and functions */

int ENGINE_set_load_privkey_function(ENGINE *e,
                                     ENGINE_LOAD_KEY_PTR loadpriv_f)
{
    e->load_privkey = loadpriv_f;
    return 1;
}