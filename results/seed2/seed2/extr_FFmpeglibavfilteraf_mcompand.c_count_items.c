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

/* Variables and functions */

__attribute__((used)) static void count_items(char *item_str, int *nb_items, char delimiter)
{
    char *p;

    *nb_items = 1;
    for (p = item_str; *p; p++) {
        if (*p == delimiter)
            (*nb_items)++;
    }
}