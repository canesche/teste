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
struct TYPE_3__ {scalar_t__* d; } ;
typedef  TYPE_1__ dw128_t ;

/* Variables and functions */

__attribute__((used)) inline static void convert_o0c1(dw128_t *w) {
    w->d[0] = 2.0 - w->d[0];
    w->d[1] = 2.0 - w->d[1];
}