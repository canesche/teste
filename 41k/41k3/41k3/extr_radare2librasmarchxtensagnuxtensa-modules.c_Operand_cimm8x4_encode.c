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
typedef  unsigned int uint32 ;

/* Variables and functions */

__attribute__((used)) static int
Operand_cimm8x4_encode (uint32 *valp)
{
  unsigned imm8_0, cimm8x4_0;
  cimm8x4_0 = *valp;
  imm8_0 = (cimm8x4_0 >> 2) & 0xff;
  *valp = imm8_0;
  return 0;
}