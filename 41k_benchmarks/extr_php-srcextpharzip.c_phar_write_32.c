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
typedef  int uint32_t ;

/* Variables and functions */

__attribute__((used)) static inline void phar_write_32(char buffer[4], uint32_t value)
{
	buffer[3] = (unsigned char) ((value & 0xff000000) >> 24);
	buffer[2] = (unsigned char) ((value & 0xff0000) >> 16);
	buffer[1] = (unsigned char) ((value & 0xff00) >> 8);
	buffer[0] = (unsigned char) (value & 0xff);
}