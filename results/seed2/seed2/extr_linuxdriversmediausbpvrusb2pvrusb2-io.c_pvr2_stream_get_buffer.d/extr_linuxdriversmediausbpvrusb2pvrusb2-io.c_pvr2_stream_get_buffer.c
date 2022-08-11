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
struct pvr2_stream {int buffer_total_count; struct pvr2_buffer** buffers; } ;
struct pvr2_buffer {int dummy; } ;

/* Variables and functions */

struct pvr2_buffer *pvr2_stream_get_buffer(struct pvr2_stream *sp, int id)
{
	if (id < 0) return NULL;
	if (id >= sp->buffer_total_count) return NULL;
	return sp->buffers[id];
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
          int id = 100;
          int _len_sp0 = 1;
          struct pvr2_stream * sp = (struct pvr2_stream *) malloc(_len_sp0*sizeof(struct pvr2_stream));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            sp[_i0].buffer_total_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sp__i0__buffers0 = 1;
          sp[_i0].buffers = (struct pvr2_buffer **) malloc(_len_sp__i0__buffers0*sizeof(struct pvr2_buffer *));
          for(int _j0 = 0; _j0 < _len_sp__i0__buffers0; _j0++) {
            int _len_sp__i0__buffers1 = 1;
            sp[_i0].buffers[_j0] = (struct pvr2_buffer *) malloc(_len_sp__i0__buffers1*sizeof(struct pvr2_buffer));
            for(int _j1 = 0; _j1 < _len_sp__i0__buffers1; _j1++) {
              sp[_i0].buffers[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct pvr2_buffer * benchRet = pvr2_stream_get_buffer(sp,id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(*(sp[_aux].buffers));
        free(sp[_aux].buffers);
          }
          free(sp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          int _len_sp0 = 65025;
          struct pvr2_stream * sp = (struct pvr2_stream *) malloc(_len_sp0*sizeof(struct pvr2_stream));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            sp[_i0].buffer_total_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sp__i0__buffers0 = 1;
          sp[_i0].buffers = (struct pvr2_buffer **) malloc(_len_sp__i0__buffers0*sizeof(struct pvr2_buffer *));
          for(int _j0 = 0; _j0 < _len_sp__i0__buffers0; _j0++) {
            int _len_sp__i0__buffers1 = 1;
            sp[_i0].buffers[_j0] = (struct pvr2_buffer *) malloc(_len_sp__i0__buffers1*sizeof(struct pvr2_buffer));
            for(int _j1 = 0; _j1 < _len_sp__i0__buffers1; _j1++) {
              sp[_i0].buffers[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct pvr2_buffer * benchRet = pvr2_stream_get_buffer(sp,id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(*(sp[_aux].buffers));
        free(sp[_aux].buffers);
          }
          free(sp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          int _len_sp0 = 100;
          struct pvr2_stream * sp = (struct pvr2_stream *) malloc(_len_sp0*sizeof(struct pvr2_stream));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            sp[_i0].buffer_total_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sp__i0__buffers0 = 1;
          sp[_i0].buffers = (struct pvr2_buffer **) malloc(_len_sp__i0__buffers0*sizeof(struct pvr2_buffer *));
          for(int _j0 = 0; _j0 < _len_sp__i0__buffers0; _j0++) {
            int _len_sp__i0__buffers1 = 1;
            sp[_i0].buffers[_j0] = (struct pvr2_buffer *) malloc(_len_sp__i0__buffers1*sizeof(struct pvr2_buffer));
            for(int _j1 = 0; _j1 < _len_sp__i0__buffers1; _j1++) {
              sp[_i0].buffers[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct pvr2_buffer * benchRet = pvr2_stream_get_buffer(sp,id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(*(sp[_aux].buffers));
        free(sp[_aux].buffers);
          }
          free(sp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
