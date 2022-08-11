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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct rlimit {scalar_t__ rlim_cur; } ;
struct TYPE_2__ {int personality; } ;

/* Variables and functions */
 int ADDR_COMPAT_LAYOUT ; 
 scalar_t__ RLIM_INFINITY ; 
 TYPE_1__* current ; 
 int sysctl_legacy_va_layout ; 

__attribute__((used)) static inline int mmap_is_legacy(struct rlimit *rlim_stack)
{
	if (current->personality & ADDR_COMPAT_LAYOUT)
		return 1;

	if (rlim_stack->rlim_cur == RLIM_INFINITY)
		return 1;

	return sysctl_legacy_va_layout;
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
          int _len_rlim_stack0 = 1;
          struct rlimit * rlim_stack = (struct rlimit *) malloc(_len_rlim_stack0*sizeof(struct rlimit));
          for(int _i0 = 0; _i0 < _len_rlim_stack0; _i0++) {
            rlim_stack[_i0].rlim_cur = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mmap_is_legacy(rlim_stack);
          printf("%d\n", benchRet); 
          free(rlim_stack);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rlim_stack0 = 65025;
          struct rlimit * rlim_stack = (struct rlimit *) malloc(_len_rlim_stack0*sizeof(struct rlimit));
          for(int _i0 = 0; _i0 < _len_rlim_stack0; _i0++) {
            rlim_stack[_i0].rlim_cur = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mmap_is_legacy(rlim_stack);
          printf("%d\n", benchRet); 
          free(rlim_stack);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rlim_stack0 = 100;
          struct rlimit * rlim_stack = (struct rlimit *) malloc(_len_rlim_stack0*sizeof(struct rlimit));
          for(int _i0 = 0; _i0 < _len_rlim_stack0; _i0++) {
            rlim_stack[_i0].rlim_cur = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mmap_is_legacy(rlim_stack);
          printf("%d\n", benchRet); 
          free(rlim_stack);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
