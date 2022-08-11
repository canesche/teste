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
struct fifo {int nrents; int imask; scalar_t__* fifobar; int /*<<< orphan*/  merge; scalar_t__ reset; scalar_t__ tail; scalar_t__ head; } ;

/* Variables and functions */
 int /*<<< orphan*/  ENTRY_MASK_O ; 

__attribute__((used)) static void fifo_setup(void *base_addr, int nr_entry)
{
	struct fifo *fifo_q = base_addr;
	int i;

	/* set up an empty fifo */
	fifo_q->head = 0;
	fifo_q->tail = 0;
	fifo_q->reset = 0;
	fifo_q->nrents = nr_entry;
	fifo_q->imask = nr_entry - 1;
	fifo_q->merge = ENTRY_MASK_O;

	for (i = 0; i < nr_entry; i++)
		fifo_q->fifobar[i] = 0;
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
          int nr_entry = 100;
          void * base_addr;
          fifo_setup(base_addr,nr_entry);
        
        break;
    }
    // big-arr
    case 1:
    {
          int nr_entry = 255;
          void * base_addr;
          fifo_setup(base_addr,nr_entry);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int nr_entry = 10;
          void * base_addr;
          fifo_setup(base_addr,nr_entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
