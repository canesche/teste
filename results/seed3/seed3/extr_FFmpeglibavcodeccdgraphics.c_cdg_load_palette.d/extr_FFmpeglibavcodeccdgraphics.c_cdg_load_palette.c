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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
typedef  int uint32_t ;
typedef  int uint16_t ;
typedef  int color ;
struct TYPE_5__ {size_t transparency; TYPE_1__* frame; } ;
struct TYPE_4__ {int palette_has_changed; scalar_t__* data; } ;
typedef  TYPE_2__ CDGraphicsContext ;

/* Variables and functions */

__attribute__((used)) static void cdg_load_palette(CDGraphicsContext *cc, uint8_t *data, int low)
{
    uint8_t r, g, b;
    uint16_t color;
    int i;
    int array_offset  = low ? 0 : 8;
    uint32_t *palette = (uint32_t *) cc->frame->data[1];

    for (i = 0; i < 8; i++) {
        color = (data[2 * i] << 6) + (data[2 * i + 1] & 0x3F);
        r = ((color >> 8) & 0x000F) * 17;
        g = ((color >> 4) & 0x000F) * 17;
        b = ((color     ) & 0x000F) * 17;
        palette[i + array_offset] = 0xFFU << 24 | r << 16 | g << 8 | b;
        if (cc->transparency >= 0)
            palette[cc->transparency] &= 0xFFFFFF;
    }
    cc->frame->palette_has_changed = 1;
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
          int low = 100;
          int _len_cc0 = 1;
          struct TYPE_5__ * cc = (struct TYPE_5__ *) malloc(_len_cc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_cc0; _i0++) {
            cc[_i0].transparency = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cc__i0__frame0 = 1;
          cc[_i0].frame = (struct TYPE_4__ *) malloc(_len_cc__i0__frame0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cc__i0__frame0; _j0++) {
            cc[_i0].frame->palette_has_changed = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cc__i0__frame_data0 = 1;
          cc[_i0].frame->data = (long *) malloc(_len_cc__i0__frame_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_cc__i0__frame_data0; _j0++) {
            cc[_i0].frame->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_data0 = 1;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cdg_load_palette(cc,data,low);
          for(int _aux = 0; _aux < _len_cc0; _aux++) {
          free(cc[_aux].frame);
          }
          free(cc);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int low = 255;
          int _len_cc0 = 65025;
          struct TYPE_5__ * cc = (struct TYPE_5__ *) malloc(_len_cc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_cc0; _i0++) {
            cc[_i0].transparency = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cc__i0__frame0 = 1;
          cc[_i0].frame = (struct TYPE_4__ *) malloc(_len_cc__i0__frame0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cc__i0__frame0; _j0++) {
            cc[_i0].frame->palette_has_changed = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cc__i0__frame_data0 = 1;
          cc[_i0].frame->data = (long *) malloc(_len_cc__i0__frame_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_cc__i0__frame_data0; _j0++) {
            cc[_i0].frame->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_data0 = 65025;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cdg_load_palette(cc,data,low);
          for(int _aux = 0; _aux < _len_cc0; _aux++) {
          free(cc[_aux].frame);
          }
          free(cc);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int low = 10;
          int _len_cc0 = 100;
          struct TYPE_5__ * cc = (struct TYPE_5__ *) malloc(_len_cc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_cc0; _i0++) {
            cc[_i0].transparency = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cc__i0__frame0 = 1;
          cc[_i0].frame = (struct TYPE_4__ *) malloc(_len_cc__i0__frame0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cc__i0__frame0; _j0++) {
            cc[_i0].frame->palette_has_changed = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cc__i0__frame_data0 = 1;
          cc[_i0].frame->data = (long *) malloc(_len_cc__i0__frame_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_cc__i0__frame_data0; _j0++) {
            cc[_i0].frame->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_data0 = 100;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cdg_load_palette(cc,data,low);
          for(int _aux = 0; _aux < _len_cc0; _aux++) {
          free(cc[_aux].frame);
          }
          free(cc);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
