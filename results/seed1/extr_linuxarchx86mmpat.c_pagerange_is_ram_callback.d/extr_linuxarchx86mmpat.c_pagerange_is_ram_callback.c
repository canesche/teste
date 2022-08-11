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
struct pagerange_state {int not_ram; unsigned long cur_pfn; int ram; } ;

/* Variables and functions */

__attribute__((used)) static int
pagerange_is_ram_callback(unsigned long initial_pfn, unsigned long total_nr_pages, void *arg)
{
	struct pagerange_state *state = arg;

	state->not_ram	|= initial_pfn > state->cur_pfn;
	state->ram	|= total_nr_pages > 0;
	state->cur_pfn	 = initial_pfn + total_nr_pages;

	return state->ram && state->not_ram;
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
          unsigned long initial_pfn = 100;
          unsigned long total_nr_pages = 100;
          void * arg;
          int benchRet = pagerange_is_ram_callback(initial_pfn,total_nr_pages,arg);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long initial_pfn = 255;
          unsigned long total_nr_pages = 255;
          void * arg;
          int benchRet = pagerange_is_ram_callback(initial_pfn,total_nr_pages,arg);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long initial_pfn = 10;
          unsigned long total_nr_pages = 10;
          void * arg;
          int benchRet = pagerange_is_ram_callback(initial_pfn,total_nr_pages,arg);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
