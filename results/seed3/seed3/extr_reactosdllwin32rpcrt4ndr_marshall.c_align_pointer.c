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
typedef  int ULONG_PTR ;

/* Variables and functions */

__attribute__((used)) static inline void align_pointer( unsigned char **ptr, unsigned int align )
{
    ULONG_PTR mask = align - 1;
    *ptr = (unsigned char *)(((ULONG_PTR)*ptr + mask) & ~mask);
}