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
typedef  size_t u64 ;
struct hw_queue {size_t queue_length; struct ehea_page** queue_pages; } ;
struct ehea_page {void* entries; } ;

/* Variables and functions */
 size_t EHEA_PAGESHIFT ; 
 int EHEA_PAGESIZE ; 

__attribute__((used)) static inline void *hw_qeit_calc(struct hw_queue *queue, u64 q_offset)
{
	struct ehea_page *current_page;

	if (q_offset >= queue->queue_length)
		q_offset -= queue->queue_length;
	current_page = (queue->queue_pages)[q_offset >> EHEA_PAGESHIFT];
	return &current_page->entries[q_offset & (EHEA_PAGESIZE - 1)];
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
          unsigned long q_offset = 100;
          int _len_queue0 = 1;
          struct hw_queue * queue = (struct hw_queue *) malloc(_len_queue0*sizeof(struct hw_queue));
          for(int _i0 = 0; _i0 < _len_queue0; _i0++) {
            queue[_i0].queue_length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_queue__i0__queue_pages0 = 1;
          queue[_i0].queue_pages = (struct ehea_page **) malloc(_len_queue__i0__queue_pages0*sizeof(struct ehea_page *));
          for(int _j0 = 0; _j0 < _len_queue__i0__queue_pages0; _j0++) {
            int _len_queue__i0__queue_pages1 = 1;
            queue[_i0].queue_pages[_j0] = (struct ehea_page *) malloc(_len_queue__i0__queue_pages1*sizeof(struct ehea_page));
            for(int _j1 = 0; _j1 < _len_queue__i0__queue_pages1; _j1++) {
                  }
          }
          }
          void * benchRet = hw_qeit_calc(queue,q_offset);
          for(int _aux = 0; _aux < _len_queue0; _aux++) {
          free(*(queue[_aux].queue_pages));
        free(queue[_aux].queue_pages);
          }
          free(queue);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long q_offset = 255;
          int _len_queue0 = 65025;
          struct hw_queue * queue = (struct hw_queue *) malloc(_len_queue0*sizeof(struct hw_queue));
          for(int _i0 = 0; _i0 < _len_queue0; _i0++) {
            queue[_i0].queue_length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_queue__i0__queue_pages0 = 1;
          queue[_i0].queue_pages = (struct ehea_page **) malloc(_len_queue__i0__queue_pages0*sizeof(struct ehea_page *));
          for(int _j0 = 0; _j0 < _len_queue__i0__queue_pages0; _j0++) {
            int _len_queue__i0__queue_pages1 = 1;
            queue[_i0].queue_pages[_j0] = (struct ehea_page *) malloc(_len_queue__i0__queue_pages1*sizeof(struct ehea_page));
            for(int _j1 = 0; _j1 < _len_queue__i0__queue_pages1; _j1++) {
                  }
          }
          }
          void * benchRet = hw_qeit_calc(queue,q_offset);
          for(int _aux = 0; _aux < _len_queue0; _aux++) {
          free(*(queue[_aux].queue_pages));
        free(queue[_aux].queue_pages);
          }
          free(queue);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long q_offset = 10;
          int _len_queue0 = 100;
          struct hw_queue * queue = (struct hw_queue *) malloc(_len_queue0*sizeof(struct hw_queue));
          for(int _i0 = 0; _i0 < _len_queue0; _i0++) {
            queue[_i0].queue_length = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_queue__i0__queue_pages0 = 1;
          queue[_i0].queue_pages = (struct ehea_page **) malloc(_len_queue__i0__queue_pages0*sizeof(struct ehea_page *));
          for(int _j0 = 0; _j0 < _len_queue__i0__queue_pages0; _j0++) {
            int _len_queue__i0__queue_pages1 = 1;
            queue[_i0].queue_pages[_j0] = (struct ehea_page *) malloc(_len_queue__i0__queue_pages1*sizeof(struct ehea_page));
            for(int _j1 = 0; _j1 < _len_queue__i0__queue_pages1; _j1++) {
                  }
          }
          }
          void * benchRet = hw_qeit_calc(queue,q_offset);
          for(int _aux = 0; _aux < _len_queue0; _aux++) {
          free(*(queue[_aux].queue_pages));
        free(queue[_aux].queue_pages);
          }
          free(queue);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
