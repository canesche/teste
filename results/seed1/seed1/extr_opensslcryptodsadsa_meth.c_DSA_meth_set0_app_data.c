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
struct TYPE_3__ {void* app_data; } ;
typedef  TYPE_1__ DSA_METHOD ;

/* Variables and functions */

int DSA_meth_set0_app_data(DSA_METHOD *dsam, void *app_data)
{
    dsam->app_data = app_data;
    return 1;
}