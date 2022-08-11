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
typedef  scalar_t__ ut64 ;

/* Variables and functions */

__attribute__((used)) static int regcmp(const void *a, const void *b) {
	const ut64 *A = (const ut64*)a;
	const ut64 *B = (const ut64*)b;
	if (*A > *B) {
		return 1;
	}
	if (*A == *B) {
		return 0;
	}
	return -1;
}