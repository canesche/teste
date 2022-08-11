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
struct videobuf_queue {int dummy; } ;
struct cx18_stream {int vb_type; struct videobuf_queue vbuf_q; } ;
struct cx18_open_id {size_t type; struct cx18* cx; } ;
struct cx18 {struct cx18_stream* streams; } ;

/* Variables and functions */
#define  V4L2_BUF_TYPE_VBI_CAPTURE 129 
#define  V4L2_BUF_TYPE_VIDEO_CAPTURE 128 

__attribute__((used)) static struct videobuf_queue *cx18_vb_queue(struct cx18_open_id *id)
{
	struct videobuf_queue *q = NULL;
	struct cx18 *cx = id->cx;
	struct cx18_stream *s = &cx->streams[id->type];

	switch (s->vb_type) {
	case V4L2_BUF_TYPE_VIDEO_CAPTURE:
		q = &s->vbuf_q;
		break;
	case V4L2_BUF_TYPE_VBI_CAPTURE:
		break;
	default:
		break;
	}
	return q;
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
          int _len_id0 = 1;
          struct cx18_open_id * id = (struct cx18_open_id *) malloc(_len_id0*sizeof(struct cx18_open_id));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_id__i0__cx0 = 1;
          id[_i0].cx = (struct cx18 *) malloc(_len_id__i0__cx0*sizeof(struct cx18));
          for(int _j0 = 0; _j0 < _len_id__i0__cx0; _j0++) {
              int _len_id__i0__cx_streams0 = 1;
          id[_i0].cx->streams = (struct cx18_stream *) malloc(_len_id__i0__cx_streams0*sizeof(struct cx18_stream));
          for(int _j0 = 0; _j0 < _len_id__i0__cx_streams0; _j0++) {
            id[_i0].cx->streams->vb_type = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].cx->streams->vbuf_q.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct videobuf_queue * benchRet = cx18_vb_queue(id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_id0; _aux++) {
          free(id[_aux].cx);
          }
          free(id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_id0 = 65025;
          struct cx18_open_id * id = (struct cx18_open_id *) malloc(_len_id0*sizeof(struct cx18_open_id));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_id__i0__cx0 = 1;
          id[_i0].cx = (struct cx18 *) malloc(_len_id__i0__cx0*sizeof(struct cx18));
          for(int _j0 = 0; _j0 < _len_id__i0__cx0; _j0++) {
              int _len_id__i0__cx_streams0 = 1;
          id[_i0].cx->streams = (struct cx18_stream *) malloc(_len_id__i0__cx_streams0*sizeof(struct cx18_stream));
          for(int _j0 = 0; _j0 < _len_id__i0__cx_streams0; _j0++) {
            id[_i0].cx->streams->vb_type = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].cx->streams->vbuf_q.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct videobuf_queue * benchRet = cx18_vb_queue(id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_id0; _aux++) {
          free(id[_aux].cx);
          }
          free(id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_id0 = 100;
          struct cx18_open_id * id = (struct cx18_open_id *) malloc(_len_id0*sizeof(struct cx18_open_id));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_id__i0__cx0 = 1;
          id[_i0].cx = (struct cx18 *) malloc(_len_id__i0__cx0*sizeof(struct cx18));
          for(int _j0 = 0; _j0 < _len_id__i0__cx0; _j0++) {
              int _len_id__i0__cx_streams0 = 1;
          id[_i0].cx->streams = (struct cx18_stream *) malloc(_len_id__i0__cx_streams0*sizeof(struct cx18_stream));
          for(int _j0 = 0; _j0 < _len_id__i0__cx_streams0; _j0++) {
            id[_i0].cx->streams->vb_type = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].cx->streams->vbuf_q.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct videobuf_queue * benchRet = cx18_vb_queue(id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_id0; _aux++) {
          free(id[_aux].cx);
          }
          free(id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
