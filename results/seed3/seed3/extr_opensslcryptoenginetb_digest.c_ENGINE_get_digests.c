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
struct TYPE_3__ {int /*<<< orphan*/  digests; } ;
typedef  int /*<<< orphan*/  ENGINE_DIGESTS_PTR ;
typedef  TYPE_1__ ENGINE ;

/* Variables and functions */

ENGINE_DIGESTS_PTR ENGINE_get_digests(const ENGINE *e)
{
    return e->digests;
}