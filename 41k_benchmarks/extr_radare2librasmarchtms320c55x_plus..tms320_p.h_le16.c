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
typedef  int /*<<< orphan*/  ut16 ;

/* Variables and functions */

__attribute__((used)) static inline ut16 le16(ut16 v)
{
	ut16 value = v;
#if __BYTE_ORDER__ != __ORDER_LITTLE_ENDIAN__
	ut8 * pv = (void *)&v;
	value = (pv[0] << 8) | pv[1];
#endif
	return value;
}