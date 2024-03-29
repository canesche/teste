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
 unsigned int WM5102_MAX_SYSCLK_1 ; 
 unsigned int WM5102_MAX_SYSCLK_2 ; 

__attribute__((used)) static inline unsigned int calc_sysclk(unsigned int rate)
{
	return (rate % 4000) ? WM5102_MAX_SYSCLK_2 : WM5102_MAX_SYSCLK_1;
}