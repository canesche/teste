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
struct TYPE_4__ {scalar_t__ readpos; int /*<<< orphan*/  bytesused; int /*<<< orphan*/  buf; } ;
struct TYPE_3__ {int inserted_frame; TYPE_2__ sliced_mpeg_buf; int /*<<< orphan*/ * sliced_mpeg_size; int /*<<< orphan*/ * sliced_mpeg_data; } ;
struct ivtv {TYPE_1__ vbi; } ;

/* Variables and functions */
 int IVTV_VBI_FRAMES ; 

__attribute__((used)) static void ivtv_setup_sliced_vbi_buf(struct ivtv *itv)
{
	int idx = itv->vbi.inserted_frame % IVTV_VBI_FRAMES;

	itv->vbi.sliced_mpeg_buf.buf = itv->vbi.sliced_mpeg_data[idx];
	itv->vbi.sliced_mpeg_buf.bytesused = itv->vbi.sliced_mpeg_size[idx];
	itv->vbi.sliced_mpeg_buf.readpos = 0;
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
          int _len_itv0 = 1;
          struct ivtv * itv = (struct ivtv *) malloc(_len_itv0*sizeof(struct ivtv));
          for(int _i0 = 0; _i0 < _len_itv0; _i0++) {
            itv[_i0].vbi.inserted_frame = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].vbi.sliced_mpeg_buf.readpos = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].vbi.sliced_mpeg_buf.bytesused = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].vbi.sliced_mpeg_buf.buf = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_itv__i0__vbi_sliced_mpeg_size0 = 1;
          itv[_i0].vbi.sliced_mpeg_size = (int *) malloc(_len_itv__i0__vbi_sliced_mpeg_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_itv__i0__vbi_sliced_mpeg_size0; _j0++) {
            itv[_i0].vbi.sliced_mpeg_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_itv__i0__vbi_sliced_mpeg_data0 = 1;
          itv[_i0].vbi.sliced_mpeg_data = (int *) malloc(_len_itv__i0__vbi_sliced_mpeg_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_itv__i0__vbi_sliced_mpeg_data0; _j0++) {
            itv[_i0].vbi.sliced_mpeg_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ivtv_setup_sliced_vbi_buf(itv);
          free(itv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_itv0 = 65025;
          struct ivtv * itv = (struct ivtv *) malloc(_len_itv0*sizeof(struct ivtv));
          for(int _i0 = 0; _i0 < _len_itv0; _i0++) {
            itv[_i0].vbi.inserted_frame = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].vbi.sliced_mpeg_buf.readpos = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].vbi.sliced_mpeg_buf.bytesused = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].vbi.sliced_mpeg_buf.buf = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_itv__i0__vbi_sliced_mpeg_size0 = 1;
          itv[_i0].vbi.sliced_mpeg_size = (int *) malloc(_len_itv__i0__vbi_sliced_mpeg_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_itv__i0__vbi_sliced_mpeg_size0; _j0++) {
            itv[_i0].vbi.sliced_mpeg_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_itv__i0__vbi_sliced_mpeg_data0 = 1;
          itv[_i0].vbi.sliced_mpeg_data = (int *) malloc(_len_itv__i0__vbi_sliced_mpeg_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_itv__i0__vbi_sliced_mpeg_data0; _j0++) {
            itv[_i0].vbi.sliced_mpeg_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ivtv_setup_sliced_vbi_buf(itv);
          free(itv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_itv0 = 100;
          struct ivtv * itv = (struct ivtv *) malloc(_len_itv0*sizeof(struct ivtv));
          for(int _i0 = 0; _i0 < _len_itv0; _i0++) {
            itv[_i0].vbi.inserted_frame = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].vbi.sliced_mpeg_buf.readpos = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].vbi.sliced_mpeg_buf.bytesused = ((-2 * (next_i()%2)) + 1) * next_i();
        itv[_i0].vbi.sliced_mpeg_buf.buf = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_itv__i0__vbi_sliced_mpeg_size0 = 1;
          itv[_i0].vbi.sliced_mpeg_size = (int *) malloc(_len_itv__i0__vbi_sliced_mpeg_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_itv__i0__vbi_sliced_mpeg_size0; _j0++) {
            itv[_i0].vbi.sliced_mpeg_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_itv__i0__vbi_sliced_mpeg_data0 = 1;
          itv[_i0].vbi.sliced_mpeg_data = (int *) malloc(_len_itv__i0__vbi_sliced_mpeg_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_itv__i0__vbi_sliced_mpeg_data0; _j0++) {
            itv[_i0].vbi.sliced_mpeg_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ivtv_setup_sliced_vbi_buf(itv);
          free(itv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
