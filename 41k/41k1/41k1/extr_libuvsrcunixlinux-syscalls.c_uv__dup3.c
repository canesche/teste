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
 int ENOSYS ; 
 int errno ; 

int uv__dup3(int oldfd, int newfd, int flags) {
#if defined(__NR_dup3)
  return syscall(__NR_dup3, oldfd, newfd, flags);
#else
  return errno = ENOSYS, -1;
#endif
}