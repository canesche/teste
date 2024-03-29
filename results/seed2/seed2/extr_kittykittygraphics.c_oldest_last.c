#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {double atime; } ;
typedef  TYPE_1__ Image ;

/* Variables and functions */

__attribute__((used)) static int
oldest_last(const void* a, const void *b) {
    double ans = ((Image*)(b))->atime - ((Image*)(a))->atime;
    return ans < 0 ? -1 : (ans == 0 ? 0 : 1);
}