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
typedef  int /*<<< orphan*/  uint8_t ;
struct gl_video {int num_dr_buffers; struct dr_buffer* dr_buffers; } ;
struct dr_buffer {TYPE_2__* buf; } ;
struct TYPE_3__ {size_t size; } ;
struct TYPE_4__ {TYPE_1__ params; int /*<<< orphan*/ * data; } ;

/* Variables and functions */

__attribute__((used)) static struct dr_buffer *gl_find_dr_buffer(struct gl_video *p, uint8_t *ptr)
{
   for (int i = 0; i < p->num_dr_buffers; i++) {
       struct dr_buffer *buffer = &p->dr_buffers[i];
        uint8_t *bufptr = buffer->buf->data;
        size_t size = buffer->buf->params.size;
        if (ptr >= bufptr && ptr < bufptr + size)
            return buffer;
    }

    return NULL;
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
          int _len_p0 = 1;
          struct gl_video * p = (struct gl_video *) malloc(_len_p0*sizeof(struct gl_video));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].num_dr_buffers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__dr_buffers0 = 1;
          p[_i0].dr_buffers = (struct dr_buffer *) malloc(_len_p__i0__dr_buffers0*sizeof(struct dr_buffer));
          for(int _j0 = 0; _j0 < _len_p__i0__dr_buffers0; _j0++) {
              int _len_p__i0__dr_buffers_buf0 = 1;
          p[_i0].dr_buffers->buf = (struct TYPE_4__ *) malloc(_len_p__i0__dr_buffers_buf0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p__i0__dr_buffers_buf0; _j0++) {
            p[_i0].dr_buffers->buf->params.size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__dr_buffers_buf_data0 = 1;
          p[_i0].dr_buffers->buf->data = (int *) malloc(_len_p__i0__dr_buffers_buf_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__dr_buffers_buf_data0; _j0++) {
            p[_i0].dr_buffers->buf->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_ptr0 = 1;
          int * ptr = (int *) malloc(_len_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct dr_buffer * benchRet = gl_find_dr_buffer(p,ptr);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].dr_buffers);
          }
          free(p);
          free(ptr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p0 = 65025;
          struct gl_video * p = (struct gl_video *) malloc(_len_p0*sizeof(struct gl_video));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].num_dr_buffers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__dr_buffers0 = 1;
          p[_i0].dr_buffers = (struct dr_buffer *) malloc(_len_p__i0__dr_buffers0*sizeof(struct dr_buffer));
          for(int _j0 = 0; _j0 < _len_p__i0__dr_buffers0; _j0++) {
              int _len_p__i0__dr_buffers_buf0 = 1;
          p[_i0].dr_buffers->buf = (struct TYPE_4__ *) malloc(_len_p__i0__dr_buffers_buf0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p__i0__dr_buffers_buf0; _j0++) {
            p[_i0].dr_buffers->buf->params.size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__dr_buffers_buf_data0 = 1;
          p[_i0].dr_buffers->buf->data = (int *) malloc(_len_p__i0__dr_buffers_buf_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__dr_buffers_buf_data0; _j0++) {
            p[_i0].dr_buffers->buf->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_ptr0 = 65025;
          int * ptr = (int *) malloc(_len_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct dr_buffer * benchRet = gl_find_dr_buffer(p,ptr);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].dr_buffers);
          }
          free(p);
          free(ptr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p0 = 100;
          struct gl_video * p = (struct gl_video *) malloc(_len_p0*sizeof(struct gl_video));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].num_dr_buffers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__dr_buffers0 = 1;
          p[_i0].dr_buffers = (struct dr_buffer *) malloc(_len_p__i0__dr_buffers0*sizeof(struct dr_buffer));
          for(int _j0 = 0; _j0 < _len_p__i0__dr_buffers0; _j0++) {
              int _len_p__i0__dr_buffers_buf0 = 1;
          p[_i0].dr_buffers->buf = (struct TYPE_4__ *) malloc(_len_p__i0__dr_buffers_buf0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p__i0__dr_buffers_buf0; _j0++) {
            p[_i0].dr_buffers->buf->params.size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__dr_buffers_buf_data0 = 1;
          p[_i0].dr_buffers->buf->data = (int *) malloc(_len_p__i0__dr_buffers_buf_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__dr_buffers_buf_data0; _j0++) {
            p[_i0].dr_buffers->buf->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_ptr0 = 100;
          int * ptr = (int *) malloc(_len_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct dr_buffer * benchRet = gl_find_dr_buffer(p,ptr);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].dr_buffers);
          }
          free(p);
          free(ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
