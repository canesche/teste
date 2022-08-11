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
struct ring_buffer_per_cpu {int /*<<< orphan*/  read_stamp; int /*<<< orphan*/  read; TYPE_2__* reader_page; } ;
struct ring_buffer_iter {TYPE_2__* head_page; int /*<<< orphan*/  read_stamp; int /*<<< orphan*/  head; int /*<<< orphan*/  cache_read; TYPE_2__* cache_reader_page; struct ring_buffer_per_cpu* cpu_buffer; } ;
struct TYPE_4__ {TYPE_1__* page; int /*<<< orphan*/  read; } ;
struct TYPE_3__ {int /*<<< orphan*/  time_stamp; } ;

/* Variables and functions */

__attribute__((used)) static void rb_iter_reset(struct ring_buffer_iter *iter)
{
	struct ring_buffer_per_cpu *cpu_buffer = iter->cpu_buffer;

	/* Iterator usage is expected to have record disabled */
	iter->head_page = cpu_buffer->reader_page;
	iter->head = cpu_buffer->reader_page->read;

	iter->cache_reader_page = iter->head_page;
	iter->cache_read = cpu_buffer->read;

	if (iter->head)
		iter->read_stamp = cpu_buffer->read_stamp;
	else
		iter->read_stamp = iter->head_page->page->time_stamp;
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
          int _len_iter0 = 1;
          struct ring_buffer_iter * iter = (struct ring_buffer_iter *) malloc(_len_iter0*sizeof(struct ring_buffer_iter));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
              int _len_iter__i0__head_page0 = 1;
          iter[_i0].head_page = (struct TYPE_4__ *) malloc(_len_iter__i0__head_page0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_iter__i0__head_page0; _j0++) {
              int _len_iter__i0__head_page_page0 = 1;
          iter[_i0].head_page->page = (struct TYPE_3__ *) malloc(_len_iter__i0__head_page_page0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_iter__i0__head_page_page0; _j0++) {
            iter[_i0].head_page->page->time_stamp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iter[_i0].head_page->read = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iter[_i0].read_stamp = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].cache_read = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iter__i0__cache_reader_page0 = 1;
          iter[_i0].cache_reader_page = (struct TYPE_4__ *) malloc(_len_iter__i0__cache_reader_page0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_iter__i0__cache_reader_page0; _j0++) {
              int _len_iter__i0__cache_reader_page_page0 = 1;
          iter[_i0].cache_reader_page->page = (struct TYPE_3__ *) malloc(_len_iter__i0__cache_reader_page_page0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_iter__i0__cache_reader_page_page0; _j0++) {
            iter[_i0].cache_reader_page->page->time_stamp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iter[_i0].cache_reader_page->read = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iter__i0__cpu_buffer0 = 1;
          iter[_i0].cpu_buffer = (struct ring_buffer_per_cpu *) malloc(_len_iter__i0__cpu_buffer0*sizeof(struct ring_buffer_per_cpu));
          for(int _j0 = 0; _j0 < _len_iter__i0__cpu_buffer0; _j0++) {
            iter[_i0].cpu_buffer->read_stamp = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].cpu_buffer->read = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iter__i0__cpu_buffer_reader_page0 = 1;
          iter[_i0].cpu_buffer->reader_page = (struct TYPE_4__ *) malloc(_len_iter__i0__cpu_buffer_reader_page0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_iter__i0__cpu_buffer_reader_page0; _j0++) {
              int _len_iter__i0__cpu_buffer_reader_page_page0 = 1;
          iter[_i0].cpu_buffer->reader_page->page = (struct TYPE_3__ *) malloc(_len_iter__i0__cpu_buffer_reader_page_page0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_iter__i0__cpu_buffer_reader_page_page0; _j0++) {
            iter[_i0].cpu_buffer->reader_page->page->time_stamp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iter[_i0].cpu_buffer->reader_page->read = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rb_iter_reset(iter);
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].head_page);
          }
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].cache_reader_page);
          }
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].cpu_buffer);
          }
          free(iter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_iter0 = 65025;
          struct ring_buffer_iter * iter = (struct ring_buffer_iter *) malloc(_len_iter0*sizeof(struct ring_buffer_iter));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
              int _len_iter__i0__head_page0 = 1;
          iter[_i0].head_page = (struct TYPE_4__ *) malloc(_len_iter__i0__head_page0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_iter__i0__head_page0; _j0++) {
              int _len_iter__i0__head_page_page0 = 1;
          iter[_i0].head_page->page = (struct TYPE_3__ *) malloc(_len_iter__i0__head_page_page0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_iter__i0__head_page_page0; _j0++) {
            iter[_i0].head_page->page->time_stamp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iter[_i0].head_page->read = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iter[_i0].read_stamp = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].cache_read = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iter__i0__cache_reader_page0 = 1;
          iter[_i0].cache_reader_page = (struct TYPE_4__ *) malloc(_len_iter__i0__cache_reader_page0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_iter__i0__cache_reader_page0; _j0++) {
              int _len_iter__i0__cache_reader_page_page0 = 1;
          iter[_i0].cache_reader_page->page = (struct TYPE_3__ *) malloc(_len_iter__i0__cache_reader_page_page0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_iter__i0__cache_reader_page_page0; _j0++) {
            iter[_i0].cache_reader_page->page->time_stamp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iter[_i0].cache_reader_page->read = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iter__i0__cpu_buffer0 = 1;
          iter[_i0].cpu_buffer = (struct ring_buffer_per_cpu *) malloc(_len_iter__i0__cpu_buffer0*sizeof(struct ring_buffer_per_cpu));
          for(int _j0 = 0; _j0 < _len_iter__i0__cpu_buffer0; _j0++) {
            iter[_i0].cpu_buffer->read_stamp = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].cpu_buffer->read = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iter__i0__cpu_buffer_reader_page0 = 1;
          iter[_i0].cpu_buffer->reader_page = (struct TYPE_4__ *) malloc(_len_iter__i0__cpu_buffer_reader_page0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_iter__i0__cpu_buffer_reader_page0; _j0++) {
              int _len_iter__i0__cpu_buffer_reader_page_page0 = 1;
          iter[_i0].cpu_buffer->reader_page->page = (struct TYPE_3__ *) malloc(_len_iter__i0__cpu_buffer_reader_page_page0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_iter__i0__cpu_buffer_reader_page_page0; _j0++) {
            iter[_i0].cpu_buffer->reader_page->page->time_stamp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iter[_i0].cpu_buffer->reader_page->read = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rb_iter_reset(iter);
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].head_page);
          }
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].cache_reader_page);
          }
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].cpu_buffer);
          }
          free(iter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_iter0 = 100;
          struct ring_buffer_iter * iter = (struct ring_buffer_iter *) malloc(_len_iter0*sizeof(struct ring_buffer_iter));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
              int _len_iter__i0__head_page0 = 1;
          iter[_i0].head_page = (struct TYPE_4__ *) malloc(_len_iter__i0__head_page0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_iter__i0__head_page0; _j0++) {
              int _len_iter__i0__head_page_page0 = 1;
          iter[_i0].head_page->page = (struct TYPE_3__ *) malloc(_len_iter__i0__head_page_page0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_iter__i0__head_page_page0; _j0++) {
            iter[_i0].head_page->page->time_stamp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iter[_i0].head_page->read = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iter[_i0].read_stamp = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].head = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].cache_read = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iter__i0__cache_reader_page0 = 1;
          iter[_i0].cache_reader_page = (struct TYPE_4__ *) malloc(_len_iter__i0__cache_reader_page0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_iter__i0__cache_reader_page0; _j0++) {
              int _len_iter__i0__cache_reader_page_page0 = 1;
          iter[_i0].cache_reader_page->page = (struct TYPE_3__ *) malloc(_len_iter__i0__cache_reader_page_page0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_iter__i0__cache_reader_page_page0; _j0++) {
            iter[_i0].cache_reader_page->page->time_stamp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iter[_i0].cache_reader_page->read = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iter__i0__cpu_buffer0 = 1;
          iter[_i0].cpu_buffer = (struct ring_buffer_per_cpu *) malloc(_len_iter__i0__cpu_buffer0*sizeof(struct ring_buffer_per_cpu));
          for(int _j0 = 0; _j0 < _len_iter__i0__cpu_buffer0; _j0++) {
            iter[_i0].cpu_buffer->read_stamp = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].cpu_buffer->read = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iter__i0__cpu_buffer_reader_page0 = 1;
          iter[_i0].cpu_buffer->reader_page = (struct TYPE_4__ *) malloc(_len_iter__i0__cpu_buffer_reader_page0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_iter__i0__cpu_buffer_reader_page0; _j0++) {
              int _len_iter__i0__cpu_buffer_reader_page_page0 = 1;
          iter[_i0].cpu_buffer->reader_page->page = (struct TYPE_3__ *) malloc(_len_iter__i0__cpu_buffer_reader_page_page0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_iter__i0__cpu_buffer_reader_page_page0; _j0++) {
            iter[_i0].cpu_buffer->reader_page->page->time_stamp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iter[_i0].cpu_buffer->reader_page->read = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rb_iter_reset(iter);
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].head_page);
          }
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].cache_reader_page);
          }
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].cpu_buffer);
          }
          free(iter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
