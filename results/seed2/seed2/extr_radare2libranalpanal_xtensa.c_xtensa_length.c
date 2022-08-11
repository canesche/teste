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
typedef  int ut8 ;

/* Variables and functions */

__attribute__((used)) static int xtensa_length(const ut8 *insn) {
	static int length_table[16] = { 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 8, 8 };
	return length_table[*insn & 0xf];
}