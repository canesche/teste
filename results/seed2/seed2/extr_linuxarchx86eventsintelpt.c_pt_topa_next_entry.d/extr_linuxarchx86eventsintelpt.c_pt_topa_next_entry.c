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
struct topa_entry {int dummy; } ;
struct pt_buffer {int nr_pages; struct topa_entry** topa_index; TYPE_1__* first; TYPE_1__* last; } ;
struct TYPE_2__ {int last; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int pt_topa_next_entry(struct pt_buffer *buf, unsigned int pg)
{
	struct topa_entry *te = buf->topa_index[pg];

	/* one region */
	if (buf->first == buf->last && buf->first->last == 1)
		return pg;

	do {
		pg++;
		pg &= buf->nr_pages - 1;
	} while (buf->topa_index[pg] == te);

	return pg;
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
          unsigned int pg = 100;
          int _len_buf0 = 1;
          struct pt_buffer * buf = (struct pt_buffer *) malloc(_len_buf0*sizeof(struct pt_buffer));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].nr_pages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buf__i0__topa_index0 = 1;
          buf[_i0].topa_index = (struct topa_entry **) malloc(_len_buf__i0__topa_index0*sizeof(struct topa_entry *));
          for(int _j0 = 0; _j0 < _len_buf__i0__topa_index0; _j0++) {
            int _len_buf__i0__topa_index1 = 1;
            buf[_i0].topa_index[_j0] = (struct topa_entry *) malloc(_len_buf__i0__topa_index1*sizeof(struct topa_entry));
            for(int _j1 = 0; _j1 < _len_buf__i0__topa_index1; _j1++) {
              buf[_i0].topa_index[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_buf__i0__first0 = 1;
          buf[_i0].first = (struct TYPE_2__ *) malloc(_len_buf__i0__first0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_buf__i0__first0; _j0++) {
            buf[_i0].first->last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf__i0__last0 = 1;
          buf[_i0].last = (struct TYPE_2__ *) malloc(_len_buf__i0__last0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_buf__i0__last0; _j0++) {
            buf[_i0].last->last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = pt_topa_next_entry(buf,pg);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(*(buf[_aux].topa_index));
        free(buf[_aux].topa_index);
          }
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].first);
          }
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].last);
          }
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int pg = 255;
          int _len_buf0 = 65025;
          struct pt_buffer * buf = (struct pt_buffer *) malloc(_len_buf0*sizeof(struct pt_buffer));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].nr_pages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buf__i0__topa_index0 = 1;
          buf[_i0].topa_index = (struct topa_entry **) malloc(_len_buf__i0__topa_index0*sizeof(struct topa_entry *));
          for(int _j0 = 0; _j0 < _len_buf__i0__topa_index0; _j0++) {
            int _len_buf__i0__topa_index1 = 1;
            buf[_i0].topa_index[_j0] = (struct topa_entry *) malloc(_len_buf__i0__topa_index1*sizeof(struct topa_entry));
            for(int _j1 = 0; _j1 < _len_buf__i0__topa_index1; _j1++) {
              buf[_i0].topa_index[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_buf__i0__first0 = 1;
          buf[_i0].first = (struct TYPE_2__ *) malloc(_len_buf__i0__first0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_buf__i0__first0; _j0++) {
            buf[_i0].first->last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf__i0__last0 = 1;
          buf[_i0].last = (struct TYPE_2__ *) malloc(_len_buf__i0__last0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_buf__i0__last0; _j0++) {
            buf[_i0].last->last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = pt_topa_next_entry(buf,pg);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(*(buf[_aux].topa_index));
        free(buf[_aux].topa_index);
          }
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].first);
          }
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].last);
          }
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int pg = 10;
          int _len_buf0 = 100;
          struct pt_buffer * buf = (struct pt_buffer *) malloc(_len_buf0*sizeof(struct pt_buffer));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].nr_pages = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buf__i0__topa_index0 = 1;
          buf[_i0].topa_index = (struct topa_entry **) malloc(_len_buf__i0__topa_index0*sizeof(struct topa_entry *));
          for(int _j0 = 0; _j0 < _len_buf__i0__topa_index0; _j0++) {
            int _len_buf__i0__topa_index1 = 1;
            buf[_i0].topa_index[_j0] = (struct topa_entry *) malloc(_len_buf__i0__topa_index1*sizeof(struct topa_entry));
            for(int _j1 = 0; _j1 < _len_buf__i0__topa_index1; _j1++) {
              buf[_i0].topa_index[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_buf__i0__first0 = 1;
          buf[_i0].first = (struct TYPE_2__ *) malloc(_len_buf__i0__first0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_buf__i0__first0; _j0++) {
            buf[_i0].first->last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf__i0__last0 = 1;
          buf[_i0].last = (struct TYPE_2__ *) malloc(_len_buf__i0__last0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_buf__i0__last0; _j0++) {
            buf[_i0].last->last = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = pt_topa_next_entry(buf,pg);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(*(buf[_aux].topa_index));
        free(buf[_aux].topa_index);
          }
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].first);
          }
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].last);
          }
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
