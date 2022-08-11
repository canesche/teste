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
struct alloc_info {int flags; unsigned long base; } ;

/* Variables and functions */
 int ENTRY_BEEN_USED ; 
 int ENTRY_IN_USE ; 
 struct alloc_info* alloc_tbl ; 
 unsigned long tbl_entries ; 

__attribute__((used)) static struct alloc_info *simple_find_entry(void *ptr)
{
	unsigned long i;
	struct alloc_info *p = alloc_tbl;

	for (i=0; i<tbl_entries; i++,p++) {
		if (!(p->flags & ENTRY_BEEN_USED))
			break;
		if ((p->flags & ENTRY_IN_USE) &&
		    (p->base == (unsigned long)ptr))
			return p;
	}
	return NULL;
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
          void * ptr;
          struct alloc_info * benchRet = simple_find_entry(ptr);
          printf("%d\n", (*benchRet).flags);
          printf("%lu\n", (*benchRet).base);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * ptr;
          struct alloc_info * benchRet = simple_find_entry(ptr);
          printf("%d\n", (*benchRet).flags);
          printf("%lu\n", (*benchRet).base);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * ptr;
          struct alloc_info * benchRet = simple_find_entry(ptr);
          printf("%d\n", (*benchRet).flags);
          printf("%lu\n", (*benchRet).base);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
