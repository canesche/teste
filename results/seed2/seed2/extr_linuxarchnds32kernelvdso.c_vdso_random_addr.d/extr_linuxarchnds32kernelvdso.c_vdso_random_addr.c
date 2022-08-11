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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {unsigned long mmap_base; } ;

/* Variables and functions */
 unsigned long PAGE_ALIGN (unsigned long) ; 
 unsigned long PAGE_SHIFT ; 
 unsigned long PMD_MASK ; 
 unsigned long PMD_SIZE ; 
 unsigned long TASK_SIZE ; 
 TYPE_2__* current ; 
 unsigned long get_random_int () ; 

unsigned long inline vdso_random_addr(unsigned long vdso_mapping_len)
{
	unsigned long start = current->mm->mmap_base, end, offset, addr;
	start = PAGE_ALIGN(start);

	/* Round the lowest possible end address up to a PMD boundary. */
	end = (start + vdso_mapping_len + PMD_SIZE - 1) & PMD_MASK;
	if (end >= TASK_SIZE)
		end = TASK_SIZE;
	end -= vdso_mapping_len;

	if (end > start) {
		offset = get_random_int() % (((end - start) >> PAGE_SHIFT) + 1);
		addr = start + (offset << PAGE_SHIFT);
	} else {
		addr = start;
	}
	return addr;
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
          long unsigned = 100;
          unsigned long benchRet = PAGE_ALIGN(unsigned);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long unsigned = 255;
          unsigned long benchRet = PAGE_ALIGN(unsigned);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long unsigned = 10;
          unsigned long benchRet = PAGE_ALIGN(unsigned);
          printf("%lu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
