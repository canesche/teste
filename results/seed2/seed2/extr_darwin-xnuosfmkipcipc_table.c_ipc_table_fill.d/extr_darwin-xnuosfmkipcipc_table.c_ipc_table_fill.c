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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  unsigned int vm_size_t ;
typedef  TYPE_1__* ipc_table_size_t ;
typedef  void* ipc_table_elems_t ;
struct TYPE_3__ {void* its_size; } ;

/* Variables and functions */
 unsigned int PAGE_MAX_SIZE ; 

__attribute__((used)) static void
ipc_table_fill(
	ipc_table_size_t	its,	     /* array to fill */
	unsigned int		num,	     /* size of array */
	unsigned int		min,	     /* at least this many elements */
	vm_size_t		elemsize)    /* size of elements */
{
	unsigned int index;
	vm_size_t minsize = min * elemsize;
	vm_size_t size;
	vm_size_t incrsize;

	/* first use powers of two, up to the page size */

	for (index = 0, size = 1;
	     (index < num) && (size < PAGE_MAX_SIZE);
	     size <<= 1) {
		if (size >= minsize) {
			its[index].its_size = (ipc_table_elems_t)(size / elemsize);
			index++;
		}
	}

	/* then increments of a page, then two pages, etc. */

	for (incrsize = PAGE_MAX_SIZE; index < num;) {
		unsigned int period;

		for (period = 0;
		     (period < 15) && (index < num);
		     period++, size += incrsize) {
			if (size >= minsize) {
				its[index].its_size = (ipc_table_elems_t)(size / elemsize);
				index++;
			}
		}
		if (incrsize < (vm_size_t)(PAGE_MAX_SIZE << 3))
			incrsize <<= 1;
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
          unsigned int num = 100;
          unsigned int min = 100;
          unsigned int elemsize = 100;
          int _len_its0 = 1;
          struct TYPE_3__ * its = (struct TYPE_3__ *) malloc(_len_its0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_its0; _i0++) {
              }
          ipc_table_fill(its,num,min,elemsize);
          free(its);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int num = 255;
          unsigned int min = 255;
          unsigned int elemsize = 255;
          int _len_its0 = 65025;
          struct TYPE_3__ * its = (struct TYPE_3__ *) malloc(_len_its0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_its0; _i0++) {
              }
          ipc_table_fill(its,num,min,elemsize);
          free(its);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int num = 10;
          unsigned int min = 10;
          unsigned int elemsize = 10;
          int _len_its0 = 100;
          struct TYPE_3__ * its = (struct TYPE_3__ *) malloc(_len_its0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_its0; _i0++) {
              }
          ipc_table_fill(its,num,min,elemsize);
          free(its);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
