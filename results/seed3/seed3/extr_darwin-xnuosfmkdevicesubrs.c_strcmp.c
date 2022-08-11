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

int
strcmp(
        const char *s1,
        const char *s2)
{
        unsigned int a, b;

        do {
                a = *s1++;
                b = *s2++;
                if (a != b)
                        return a-b;     /* includes case when
                                           'a' is zero and 'b' is not zero
                                           or vice versa */
	} while (a != '\0');

        return 0;       /* both are zero */
}