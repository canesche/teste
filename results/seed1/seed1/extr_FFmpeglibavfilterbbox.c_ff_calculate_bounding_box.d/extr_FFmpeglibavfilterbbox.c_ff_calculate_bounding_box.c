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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
struct TYPE_3__ {int x1; int y1; int x2; int y2; } ;
typedef  TYPE_1__ FFBoundingBox ;

/* Variables and functions */

int ff_calculate_bounding_box(FFBoundingBox *bbox,
                              const uint8_t *data, int linesize, int w, int h,
                              int min_val)
{
    int x, y;
    int start_x;
    int start_y;
    int end_x;
    int end_y;
    const uint8_t *line;

    /* left bound */
    for (start_x = 0; start_x < w; start_x++)
        for (y = 0; y < h; y++)
            if ((data[y * linesize + start_x] > min_val))
                goto outl;
outl:
    if (start_x == w) /* no points found */
        return 0;

    /* right bound */
    for (end_x = w - 1; end_x >= start_x; end_x--)
        for (y = 0; y < h; y++)
            if ((data[y * linesize + end_x] > min_val))
                goto outr;
outr:

    /* top bound */
    line = data;
    for (start_y = 0; start_y < h; start_y++) {
        for (x = 0; x < w; x++)
            if (line[x] > min_val)
                goto outt;
        line += linesize;
    }
outt:

    /* bottom bound */
    line = data + (h-1)*linesize;
    for (end_y = h - 1; end_y >= start_y; end_y--) {
        for (x = 0; x < w; x++)
            if (line[x] > min_val)
                goto outb;
        line -= linesize;
    }
outb:

    bbox->x1 = start_x;
    bbox->y1 = start_y;
    bbox->x2 = end_x;
    bbox->y2 = end_y;
    return 1;
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
          int linesize = 100;
          int w = 100;
          int h = 100;
          int min_val = 100;
          int _len_bbox0 = 1;
          struct TYPE_3__ * bbox = (struct TYPE_3__ *) malloc(_len_bbox0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_bbox0; _i0++) {
            bbox[_i0].x1 = ((-2 * (next_i()%2)) + 1) * next_i();
        bbox[_i0].y1 = ((-2 * (next_i()%2)) + 1) * next_i();
        bbox[_i0].x2 = ((-2 * (next_i()%2)) + 1) * next_i();
        bbox[_i0].y2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ff_calculate_bounding_box(bbox,data,linesize,w,h,min_val);
          printf("%d\n", benchRet); 
          free(bbox);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int linesize = 255;
          int w = 255;
          int h = 255;
          int min_val = 255;
          int _len_bbox0 = 65025;
          struct TYPE_3__ * bbox = (struct TYPE_3__ *) malloc(_len_bbox0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_bbox0; _i0++) {
            bbox[_i0].x1 = ((-2 * (next_i()%2)) + 1) * next_i();
        bbox[_i0].y1 = ((-2 * (next_i()%2)) + 1) * next_i();
        bbox[_i0].x2 = ((-2 * (next_i()%2)) + 1) * next_i();
        bbox[_i0].y2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ff_calculate_bounding_box(bbox,data,linesize,w,h,min_val);
          printf("%d\n", benchRet); 
          free(bbox);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int linesize = 10;
          int w = 10;
          int h = 10;
          int min_val = 10;
          int _len_bbox0 = 100;
          struct TYPE_3__ * bbox = (struct TYPE_3__ *) malloc(_len_bbox0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_bbox0; _i0++) {
            bbox[_i0].x1 = ((-2 * (next_i()%2)) + 1) * next_i();
        bbox[_i0].y1 = ((-2 * (next_i()%2)) + 1) * next_i();
        bbox[_i0].x2 = ((-2 * (next_i()%2)) + 1) * next_i();
        bbox[_i0].y2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ff_calculate_bounding_box(bbox,data,linesize,w,h,min_val);
          printf("%d\n", benchRet); 
          free(bbox);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
