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
       3            linked\n\
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
struct ispstat_buffer {scalar_t__ frame_number; scalar_t__ empty; } ;
struct ispstat {struct ispstat_buffer* active_buf; struct ispstat_buffer* locked_buf; struct ispstat_buffer* buf; } ;
typedef  scalar_t__ s32 ;

/* Variables and functions */
 int STAT_MAX_BUFS ; 

__attribute__((used)) static struct ispstat_buffer *
__isp_stat_buf_find(struct ispstat *stat, int look_empty)
{
	struct ispstat_buffer *found = NULL;
	int i;

	for (i = 0; i < STAT_MAX_BUFS; i++) {
		struct ispstat_buffer *curr = &stat->buf[i];

		/*
		 * Don't select the buffer which is being copied to
		 * userspace or used by the module.
		 */
		if (curr == stat->locked_buf || curr == stat->active_buf)
			continue;

		/* Don't select uninitialised buffers if it's not required */
		if (!look_empty && curr->empty)
			continue;

		/* Pick uninitialised buffer over anything else if look_empty */
		if (curr->empty) {
			found = curr;
			break;
		}

		/* Choose the oldest buffer */
		if (!found ||
		    (s32)curr->frame_number - (s32)found->frame_number < 0)
			found = curr;
	}

	return found;
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
          int look_empty = 100;
          int _len_stat0 = 1;
          struct ispstat * stat = (struct ispstat *) malloc(_len_stat0*sizeof(struct ispstat));
          for(int _i0 = 0; _i0 < _len_stat0; _i0++) {
              int _len_stat__i0__active_buf0 = 1;
          stat[_i0].active_buf = (struct ispstat_buffer *) malloc(_len_stat__i0__active_buf0*sizeof(struct ispstat_buffer));
          for(int _j0 = 0; _j0 < _len_stat__i0__active_buf0; _j0++) {
            stat[_i0].active_buf->frame_number = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].active_buf->empty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stat__i0__locked_buf0 = 1;
          stat[_i0].locked_buf = (struct ispstat_buffer *) malloc(_len_stat__i0__locked_buf0*sizeof(struct ispstat_buffer));
          for(int _j0 = 0; _j0 < _len_stat__i0__locked_buf0; _j0++) {
            stat[_i0].locked_buf->frame_number = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].locked_buf->empty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stat__i0__buf0 = 1;
          stat[_i0].buf = (struct ispstat_buffer *) malloc(_len_stat__i0__buf0*sizeof(struct ispstat_buffer));
          for(int _j0 = 0; _j0 < _len_stat__i0__buf0; _j0++) {
            stat[_i0].buf->frame_number = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].buf->empty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ispstat_buffer * benchRet = __isp_stat_buf_find(stat,look_empty);
          printf("%ld\n", (*benchRet).frame_number);
          printf("%ld\n", (*benchRet).empty);
          for(int _aux = 0; _aux < _len_stat0; _aux++) {
          free(stat[_aux].active_buf);
          }
          for(int _aux = 0; _aux < _len_stat0; _aux++) {
          free(stat[_aux].locked_buf);
          }
          for(int _aux = 0; _aux < _len_stat0; _aux++) {
          free(stat[_aux].buf);
          }
          free(stat);
        
        break;
    }
    // big-arr
    case 1:
    {
          int look_empty = 255;
          int _len_stat0 = 65025;
          struct ispstat * stat = (struct ispstat *) malloc(_len_stat0*sizeof(struct ispstat));
          for(int _i0 = 0; _i0 < _len_stat0; _i0++) {
              int _len_stat__i0__active_buf0 = 1;
          stat[_i0].active_buf = (struct ispstat_buffer *) malloc(_len_stat__i0__active_buf0*sizeof(struct ispstat_buffer));
          for(int _j0 = 0; _j0 < _len_stat__i0__active_buf0; _j0++) {
            stat[_i0].active_buf->frame_number = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].active_buf->empty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stat__i0__locked_buf0 = 1;
          stat[_i0].locked_buf = (struct ispstat_buffer *) malloc(_len_stat__i0__locked_buf0*sizeof(struct ispstat_buffer));
          for(int _j0 = 0; _j0 < _len_stat__i0__locked_buf0; _j0++) {
            stat[_i0].locked_buf->frame_number = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].locked_buf->empty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stat__i0__buf0 = 1;
          stat[_i0].buf = (struct ispstat_buffer *) malloc(_len_stat__i0__buf0*sizeof(struct ispstat_buffer));
          for(int _j0 = 0; _j0 < _len_stat__i0__buf0; _j0++) {
            stat[_i0].buf->frame_number = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].buf->empty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ispstat_buffer * benchRet = __isp_stat_buf_find(stat,look_empty);
          printf("%ld\n", (*benchRet).frame_number);
          printf("%ld\n", (*benchRet).empty);
          for(int _aux = 0; _aux < _len_stat0; _aux++) {
          free(stat[_aux].active_buf);
          }
          for(int _aux = 0; _aux < _len_stat0; _aux++) {
          free(stat[_aux].locked_buf);
          }
          for(int _aux = 0; _aux < _len_stat0; _aux++) {
          free(stat[_aux].buf);
          }
          free(stat);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int look_empty = 10;
          int _len_stat0 = 100;
          struct ispstat * stat = (struct ispstat *) malloc(_len_stat0*sizeof(struct ispstat));
          for(int _i0 = 0; _i0 < _len_stat0; _i0++) {
              int _len_stat__i0__active_buf0 = 1;
          stat[_i0].active_buf = (struct ispstat_buffer *) malloc(_len_stat__i0__active_buf0*sizeof(struct ispstat_buffer));
          for(int _j0 = 0; _j0 < _len_stat__i0__active_buf0; _j0++) {
            stat[_i0].active_buf->frame_number = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].active_buf->empty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stat__i0__locked_buf0 = 1;
          stat[_i0].locked_buf = (struct ispstat_buffer *) malloc(_len_stat__i0__locked_buf0*sizeof(struct ispstat_buffer));
          for(int _j0 = 0; _j0 < _len_stat__i0__locked_buf0; _j0++) {
            stat[_i0].locked_buf->frame_number = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].locked_buf->empty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stat__i0__buf0 = 1;
          stat[_i0].buf = (struct ispstat_buffer *) malloc(_len_stat__i0__buf0*sizeof(struct ispstat_buffer));
          for(int _j0 = 0; _j0 < _len_stat__i0__buf0; _j0++) {
            stat[_i0].buf->frame_number = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].buf->empty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ispstat_buffer * benchRet = __isp_stat_buf_find(stat,look_empty);
          printf("%ld\n", (*benchRet).frame_number);
          printf("%ld\n", (*benchRet).empty);
          for(int _aux = 0; _aux < _len_stat0; _aux++) {
          free(stat[_aux].active_buf);
          }
          for(int _aux = 0; _aux < _len_stat0; _aux++) {
          free(stat[_aux].locked_buf);
          }
          for(int _aux = 0; _aux < _len_stat0; _aux++) {
          free(stat[_aux].buf);
          }
          free(stat);
        
        break;
    }
    // linked
    case 3:
    {
          int look_empty = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stat0 = 1;
          struct ispstat * stat = (struct ispstat *) malloc(_len_stat0*sizeof(struct ispstat));
          for(int _i0 = 0; _i0 < _len_stat0; _i0++) {
              int _len_stat__i0__active_buf0 = 1;
          stat[_i0].active_buf = (struct ispstat_buffer *) malloc(_len_stat__i0__active_buf0*sizeof(struct ispstat_buffer));
          for(int _j0 = 0; _j0 < _len_stat__i0__active_buf0; _j0++) {
            stat[_i0].active_buf->frame_number = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].active_buf->empty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stat__i0__locked_buf0 = 1;
          stat[_i0].locked_buf = (struct ispstat_buffer *) malloc(_len_stat__i0__locked_buf0*sizeof(struct ispstat_buffer));
          for(int _j0 = 0; _j0 < _len_stat__i0__locked_buf0; _j0++) {
            stat[_i0].locked_buf->frame_number = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].locked_buf->empty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stat__i0__buf0 = 1;
          stat[_i0].buf = (struct ispstat_buffer *) malloc(_len_stat__i0__buf0*sizeof(struct ispstat_buffer));
          for(int _j0 = 0; _j0 < _len_stat__i0__buf0; _j0++) {
            stat[_i0].buf->frame_number = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].buf->empty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ispstat_buffer * benchRet = __isp_stat_buf_find(stat,look_empty);
          printf("%ld\n", (*benchRet).frame_number);
          printf("%ld\n", (*benchRet).empty);
          for(int _aux = 0; _aux < _len_stat0; _aux++) {
          free(stat[_aux].active_buf);
          }
          for(int _aux = 0; _aux < _len_stat0; _aux++) {
          free(stat[_aux].locked_buf);
          }
          for(int _aux = 0; _aux < _len_stat0; _aux++) {
          free(stat[_aux].buf);
          }
          free(stat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
