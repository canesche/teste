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
typedef  enum CPUSubTypeX86 { ____Placeholder_CPUSubTypeX86 } CPUSubTypeX86 ;

/* Variables and functions */

__attribute__((used)) static inline int CPU_SUBTYPE_INTEL_MODEL(enum CPUSubTypeX86 ST) {
	return ((int)ST) >> 4;
}