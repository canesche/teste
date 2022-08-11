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
typedef  scalar_t__ ut8 ;
typedef  scalar_t__ unichar ;

/* Variables and functions */

__attribute__((used)) static int ascmatch(const ut8 *s, const unichar *us, size_t ulen) {
	size_t i;
	for (i = 0; i < ulen; i++) {
		if (s[i] != us[i]) {
			return 0;
		}
	}
	return s[i]? 0: 1;
}