// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
");

}


// ------------------------------------------------------------------------- //

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

__attribute__((used)) static void thread_check_stack(void* arg) {
#if defined(__APPLE__)
  size_t expected;
  expected = arg == NULL ? 0 : ((uv_thread_options_t*)arg)->stack_size;
  /* 512 kB is the default stack size of threads other than the main thread
   * on MacOS. */
  if (expected == 0)
    expected = 512 * 1024;
  ASSERT(pthread_get_stacksize_np(pthread_self()) >= expected);
#elif defined(__linux__) && defined(__GLIBC__)
  size_t expected;
  struct rlimit lim;
  size_t stack_size;
  pthread_attr_t attr;
  ASSERT(0 == getrlimit(RLIMIT_STACK, &lim));
  if (lim.rlim_cur == RLIM_INFINITY)
    lim.rlim_cur = 2 << 20;  /* glibc default. */
  ASSERT(0 == pthread_getattr_np(pthread_self(), &attr));
  ASSERT(0 == pthread_attr_getstacksize(&attr, &stack_size));
  expected = arg == NULL ? 0 : ((uv_thread_options_t*)arg)->stack_size;
  if (expected == 0)
    expected = (size_t)lim.rlim_cur;
  ASSERT(stack_size >= expected);
#endif
}


// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          void * arg;
          thread_check_stack(arg);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * arg;
          thread_check_stack(arg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * arg;
          thread_check_stack(arg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
