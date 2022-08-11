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
struct cx18_mdl {scalar_t__ readpos; int /*<<< orphan*/  bytesused; int /*<<< orphan*/ * curr_buf; } ;
struct cx18_buffer {scalar_t__ readpos; int /*<<< orphan*/  bytesused; int /*<<< orphan*/  buf; } ;
struct TYPE_2__ {int inserted_frame; int /*<<< orphan*/ * sliced_mpeg_size; int /*<<< orphan*/ * sliced_mpeg_data; struct cx18_buffer sliced_mpeg_buf; struct cx18_mdl sliced_mpeg_mdl; } ;
struct cx18 {TYPE_1__ vbi; } ;

/* Variables and functions */
 int CX18_VBI_FRAMES ; 

__attribute__((used)) static void cx18_setup_sliced_vbi_mdl(struct cx18 *cx)
{
	struct cx18_mdl *mdl = &cx->vbi.sliced_mpeg_mdl;
	struct cx18_buffer *buf = &cx->vbi.sliced_mpeg_buf;
	int idx = cx->vbi.inserted_frame % CX18_VBI_FRAMES;

	buf->buf = cx->vbi.sliced_mpeg_data[idx];
	buf->bytesused = cx->vbi.sliced_mpeg_size[idx];
	buf->readpos = 0;

	mdl->curr_buf = NULL;
	mdl->bytesused = cx->vbi.sliced_mpeg_size[idx];
	mdl->readpos = 0;
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
          int _len_cx0 = 1;
          struct cx18 * cx = (struct cx18 *) malloc(_len_cx0*sizeof(struct cx18));
          for(int _i0 = 0; _i0 < _len_cx0; _i0++) {
            cx[_i0].vbi.inserted_frame = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cx__i0__vbi_sliced_mpeg_size0 = 1;
          cx[_i0].vbi.sliced_mpeg_size = (int *) malloc(_len_cx__i0__vbi_sliced_mpeg_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cx__i0__vbi_sliced_mpeg_size0; _j0++) {
            cx[_i0].vbi.sliced_mpeg_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cx__i0__vbi_sliced_mpeg_data0 = 1;
          cx[_i0].vbi.sliced_mpeg_data = (int *) malloc(_len_cx__i0__vbi_sliced_mpeg_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cx__i0__vbi_sliced_mpeg_data0; _j0++) {
            cx[_i0].vbi.sliced_mpeg_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cx[_i0].vbi.sliced_mpeg_buf.readpos = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].vbi.sliced_mpeg_buf.bytesused = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].vbi.sliced_mpeg_buf.buf = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].vbi.sliced_mpeg_mdl.readpos = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].vbi.sliced_mpeg_mdl.bytesused = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cx__i0__vbi_sliced_mpeg_mdl_curr_buf0 = 1;
          cx[_i0].vbi.sliced_mpeg_mdl.curr_buf = (int *) malloc(_len_cx__i0__vbi_sliced_mpeg_mdl_curr_buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cx__i0__vbi_sliced_mpeg_mdl_curr_buf0; _j0++) {
            cx[_i0].vbi.sliced_mpeg_mdl.curr_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cx18_setup_sliced_vbi_mdl(cx);
          free(cx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cx0 = 65025;
          struct cx18 * cx = (struct cx18 *) malloc(_len_cx0*sizeof(struct cx18));
          for(int _i0 = 0; _i0 < _len_cx0; _i0++) {
            cx[_i0].vbi.inserted_frame = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cx__i0__vbi_sliced_mpeg_size0 = 1;
          cx[_i0].vbi.sliced_mpeg_size = (int *) malloc(_len_cx__i0__vbi_sliced_mpeg_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cx__i0__vbi_sliced_mpeg_size0; _j0++) {
            cx[_i0].vbi.sliced_mpeg_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cx__i0__vbi_sliced_mpeg_data0 = 1;
          cx[_i0].vbi.sliced_mpeg_data = (int *) malloc(_len_cx__i0__vbi_sliced_mpeg_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cx__i0__vbi_sliced_mpeg_data0; _j0++) {
            cx[_i0].vbi.sliced_mpeg_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cx[_i0].vbi.sliced_mpeg_buf.readpos = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].vbi.sliced_mpeg_buf.bytesused = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].vbi.sliced_mpeg_buf.buf = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].vbi.sliced_mpeg_mdl.readpos = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].vbi.sliced_mpeg_mdl.bytesused = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cx__i0__vbi_sliced_mpeg_mdl_curr_buf0 = 1;
          cx[_i0].vbi.sliced_mpeg_mdl.curr_buf = (int *) malloc(_len_cx__i0__vbi_sliced_mpeg_mdl_curr_buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cx__i0__vbi_sliced_mpeg_mdl_curr_buf0; _j0++) {
            cx[_i0].vbi.sliced_mpeg_mdl.curr_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cx18_setup_sliced_vbi_mdl(cx);
          free(cx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cx0 = 100;
          struct cx18 * cx = (struct cx18 *) malloc(_len_cx0*sizeof(struct cx18));
          for(int _i0 = 0; _i0 < _len_cx0; _i0++) {
            cx[_i0].vbi.inserted_frame = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cx__i0__vbi_sliced_mpeg_size0 = 1;
          cx[_i0].vbi.sliced_mpeg_size = (int *) malloc(_len_cx__i0__vbi_sliced_mpeg_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cx__i0__vbi_sliced_mpeg_size0; _j0++) {
            cx[_i0].vbi.sliced_mpeg_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cx__i0__vbi_sliced_mpeg_data0 = 1;
          cx[_i0].vbi.sliced_mpeg_data = (int *) malloc(_len_cx__i0__vbi_sliced_mpeg_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cx__i0__vbi_sliced_mpeg_data0; _j0++) {
            cx[_i0].vbi.sliced_mpeg_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cx[_i0].vbi.sliced_mpeg_buf.readpos = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].vbi.sliced_mpeg_buf.bytesused = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].vbi.sliced_mpeg_buf.buf = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].vbi.sliced_mpeg_mdl.readpos = ((-2 * (next_i()%2)) + 1) * next_i();
        cx[_i0].vbi.sliced_mpeg_mdl.bytesused = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cx__i0__vbi_sliced_mpeg_mdl_curr_buf0 = 1;
          cx[_i0].vbi.sliced_mpeg_mdl.curr_buf = (int *) malloc(_len_cx__i0__vbi_sliced_mpeg_mdl_curr_buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cx__i0__vbi_sliced_mpeg_mdl_curr_buf0; _j0++) {
            cx[_i0].vbi.sliced_mpeg_mdl.curr_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cx18_setup_sliced_vbi_mdl(cx);
          free(cx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
