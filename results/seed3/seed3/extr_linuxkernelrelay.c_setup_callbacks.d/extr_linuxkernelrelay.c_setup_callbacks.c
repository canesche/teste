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
struct rchan_callbacks {scalar_t__ remove_buf_file; scalar_t__ create_buf_file; scalar_t__ buf_unmapped; scalar_t__ buf_mapped; scalar_t__ subbuf_start; } ;
struct rchan {struct rchan_callbacks* cb; } ;

/* Variables and functions */
 scalar_t__ buf_mapped_default_callback ; 
 scalar_t__ buf_unmapped_default_callback ; 
 scalar_t__ create_buf_file_default_callback ; 
 struct rchan_callbacks default_channel_callbacks ; 
 scalar_t__ remove_buf_file_default_callback ; 
 scalar_t__ subbuf_start_default_callback ; 

__attribute__((used)) static void setup_callbacks(struct rchan *chan,
				   struct rchan_callbacks *cb)
{
	if (!cb) {
		chan->cb = &default_channel_callbacks;
		return;
	}

	if (!cb->subbuf_start)
		cb->subbuf_start = subbuf_start_default_callback;
	if (!cb->buf_mapped)
		cb->buf_mapped = buf_mapped_default_callback;
	if (!cb->buf_unmapped)
		cb->buf_unmapped = buf_unmapped_default_callback;
	if (!cb->create_buf_file)
		cb->create_buf_file = create_buf_file_default_callback;
	if (!cb->remove_buf_file)
		cb->remove_buf_file = remove_buf_file_default_callback;
	chan->cb = cb;
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
          int _len_chan0 = 1;
          struct rchan * chan = (struct rchan *) malloc(_len_chan0*sizeof(struct rchan));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
              int _len_chan__i0__cb0 = 1;
          chan[_i0].cb = (struct rchan_callbacks *) malloc(_len_chan__i0__cb0*sizeof(struct rchan_callbacks));
          for(int _j0 = 0; _j0 < _len_chan__i0__cb0; _j0++) {
            chan[_i0].cb->remove_buf_file = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].cb->create_buf_file = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].cb->buf_unmapped = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].cb->buf_mapped = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].cb->subbuf_start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cb0 = 1;
          struct rchan_callbacks * cb = (struct rchan_callbacks *) malloc(_len_cb0*sizeof(struct rchan_callbacks));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0].remove_buf_file = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].create_buf_file = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].buf_unmapped = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].buf_mapped = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].subbuf_start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_callbacks(chan,cb);
          for(int _aux = 0; _aux < _len_chan0; _aux++) {
          free(chan[_aux].cb);
          }
          free(chan);
          free(cb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_chan0 = 65025;
          struct rchan * chan = (struct rchan *) malloc(_len_chan0*sizeof(struct rchan));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
              int _len_chan__i0__cb0 = 1;
          chan[_i0].cb = (struct rchan_callbacks *) malloc(_len_chan__i0__cb0*sizeof(struct rchan_callbacks));
          for(int _j0 = 0; _j0 < _len_chan__i0__cb0; _j0++) {
            chan[_i0].cb->remove_buf_file = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].cb->create_buf_file = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].cb->buf_unmapped = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].cb->buf_mapped = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].cb->subbuf_start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cb0 = 65025;
          struct rchan_callbacks * cb = (struct rchan_callbacks *) malloc(_len_cb0*sizeof(struct rchan_callbacks));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0].remove_buf_file = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].create_buf_file = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].buf_unmapped = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].buf_mapped = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].subbuf_start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_callbacks(chan,cb);
          for(int _aux = 0; _aux < _len_chan0; _aux++) {
          free(chan[_aux].cb);
          }
          free(chan);
          free(cb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_chan0 = 100;
          struct rchan * chan = (struct rchan *) malloc(_len_chan0*sizeof(struct rchan));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
              int _len_chan__i0__cb0 = 1;
          chan[_i0].cb = (struct rchan_callbacks *) malloc(_len_chan__i0__cb0*sizeof(struct rchan_callbacks));
          for(int _j0 = 0; _j0 < _len_chan__i0__cb0; _j0++) {
            chan[_i0].cb->remove_buf_file = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].cb->create_buf_file = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].cb->buf_unmapped = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].cb->buf_mapped = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].cb->subbuf_start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cb0 = 100;
          struct rchan_callbacks * cb = (struct rchan_callbacks *) malloc(_len_cb0*sizeof(struct rchan_callbacks));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0].remove_buf_file = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].create_buf_file = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].buf_unmapped = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].buf_mapped = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].subbuf_start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_callbacks(chan,cb);
          for(int _aux = 0; _aux < _len_chan0; _aux++) {
          free(chan[_aux].cb);
          }
          free(chan);
          free(cb);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_chan0 = 1;
          struct rchan * chan = (struct rchan *) malloc(_len_chan0*sizeof(struct rchan));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
              int _len_chan__i0__cb0 = 1;
          chan[_i0].cb = (struct rchan_callbacks *) malloc(_len_chan__i0__cb0*sizeof(struct rchan_callbacks));
          for(int _j0 = 0; _j0 < _len_chan__i0__cb0; _j0++) {
            chan[_i0].cb->remove_buf_file = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].cb->create_buf_file = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].cb->buf_unmapped = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].cb->buf_mapped = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].cb->subbuf_start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cb0 = 1;
          struct rchan_callbacks * cb = (struct rchan_callbacks *) malloc(_len_cb0*sizeof(struct rchan_callbacks));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb[_i0].remove_buf_file = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].create_buf_file = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].buf_unmapped = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].buf_mapped = ((-2 * (next_i()%2)) + 1) * next_i();
        cb[_i0].subbuf_start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_callbacks(chan,cb);
          for(int _aux = 0; _aux < _len_chan0; _aux++) {
          free(chan[_aux].cb);
          }
          free(chan);
          free(cb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
