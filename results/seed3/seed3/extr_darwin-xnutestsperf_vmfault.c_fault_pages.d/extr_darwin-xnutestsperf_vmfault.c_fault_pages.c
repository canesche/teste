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
 scalar_t__ SOFT_FAULT ; 
 char* memblock ; 
 char* memblock_share ; 
 size_t num_pages ; 
 scalar_t__ num_threads ; 
 size_t pgsize ; 
 scalar_t__ test_type ; 

__attribute__((used)) static void fault_pages(int thread_id)
{
	size_t region_len, region_start, region_end;
	char *ptr, *block;
	volatile char val;

	region_len = num_pages / (size_t)num_threads;
	region_start = region_len * (size_t)thread_id;

	if((size_t)thread_id < num_pages % (size_t)num_threads) {
		region_start += (size_t)thread_id;
		region_len++;
	}
	else {
		region_start += num_pages % (size_t)num_threads;
	}

	region_start *= pgsize;
	region_len *= pgsize;
	region_end = region_start + region_len;

	block = (test_type == SOFT_FAULT)? memblock_share: memblock;
	for(ptr = block + region_start; ptr < block + region_end; ptr += pgsize) {
		val = *ptr;
	}
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
          int thread_id = 100;
          fault_pages(thread_id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int thread_id = 255;
          fault_pages(thread_id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int thread_id = 10;
          fault_pages(thread_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
