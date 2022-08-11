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

inline int poly_h (void *h, int size) {
  unsigned long long res = 0;
  int i;
  for (i = 0; i < 4; i++) {
    res *= 239017;
    res ^= ((long)h >> ((sizeof (long) / 4) * i)) & (0xffff);
    res *= 999987;
    res ^= (size >> (8 * i)) & (0xffff);
  }

  return res >> 16;
}