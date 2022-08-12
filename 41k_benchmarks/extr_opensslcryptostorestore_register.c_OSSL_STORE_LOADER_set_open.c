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
struct TYPE_3__ {int /*<<< orphan*/  open; } ;
typedef  int /*<<< orphan*/  OSSL_STORE_open_fn ;
typedef  TYPE_1__ OSSL_STORE_LOADER ;

/* Variables and functions */

int OSSL_STORE_LOADER_set_open(OSSL_STORE_LOADER *loader,
                               OSSL_STORE_open_fn open_function)
{
    loader->open = open_function;
    return 1;
}