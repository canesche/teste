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
typedef  scalar_t__* xtensa_insnbuf ;

/* Variables and functions */

__attribute__((used)) static void
Format_x24_encode (xtensa_insnbuf insn)
{
  insn[0] = 0;
  insn[1] = 0;
}