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
typedef  int const s32 ;
typedef  int limb ;

/* Variables and functions */

__attribute__((used)) static void
swap_conditional(limb a[19], limb b[19], limb iswap) {
  unsigned i;
  const s32 swap = (s32) -iswap;

  for (i = 0; i < 10; ++i) {
    const s32 x = swap & ( ((s32)a[i]) ^ ((s32)b[i]) );
    a[i] = ((s32)a[i]) ^ x;
    b[i] = ((s32)b[i]) ^ x;
  }
}