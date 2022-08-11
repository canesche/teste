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
 char const FILTER_STAR ; 

__attribute__((used)) static __inline const char* skip_stars(
    const char *filter)
{
    while (*filter == FILTER_STAR)
        filter++;
    return filter;
}