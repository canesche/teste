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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint8_t ;
struct TYPE_7__ {int numcomps; TYPE_1__* comps; } ;
typedef  TYPE_2__ opj_image_t ;
struct TYPE_8__ {int height; int width; int* linesize; int /*<<< orphan*/ ** data; } ;
struct TYPE_6__ {int sgnd; scalar_t__* data; } ;
typedef  TYPE_3__ AVFrame ;

/* Variables and functions */

__attribute__((used)) static inline void libopenjpeg_copy_to_packed8(AVFrame *picture, opj_image_t *image) {
    uint8_t *img_ptr;
    int index, x, y, c;
    for (y = 0; y < picture->height; y++) {
        index   = y * picture->width;
        img_ptr = picture->data[0] + y * picture->linesize[0];
        for (x = 0; x < picture->width; x++, index++)
            for (c = 0; c < image->numcomps; c++)
                *img_ptr++ = 0x80 * image->comps[c].sgnd + image->comps[c].data[index];
    }
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
          int _len_picture0 = 1;
          struct TYPE_8__ * picture = (struct TYPE_8__ *) malloc(_len_picture0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_picture0; _i0++) {
            picture[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        picture[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_picture__i0__linesize0 = 1;
          picture[_i0].linesize = (int *) malloc(_len_picture__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_picture__i0__linesize0; _j0++) {
            picture[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_picture__i0__data0 = 1;
          picture[_i0].data = (int **) malloc(_len_picture__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_picture__i0__data0; _j0++) {
            int _len_picture__i0__data1 = 1;
            picture[_i0].data[_j0] = (int *) malloc(_len_picture__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_picture__i0__data1; _j1++) {
              picture[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_image0 = 1;
          struct TYPE_7__ * image = (struct TYPE_7__ *) malloc(_len_image0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_image0; _i0++) {
            image[_i0].numcomps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_image__i0__comps0 = 1;
          image[_i0].comps = (struct TYPE_6__ *) malloc(_len_image__i0__comps0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_image__i0__comps0; _j0++) {
            image[_i0].comps->sgnd = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_image__i0__comps_data0 = 1;
          image[_i0].comps->data = (long *) malloc(_len_image__i0__comps_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_image__i0__comps_data0; _j0++) {
            image[_i0].comps->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          libopenjpeg_copy_to_packed8(picture,image);
          for(int _aux = 0; _aux < _len_picture0; _aux++) {
          free(picture[_aux].linesize);
          }
          for(int _aux = 0; _aux < _len_picture0; _aux++) {
          free(*(picture[_aux].data));
        free(picture[_aux].data);
          }
          free(picture);
          for(int _aux = 0; _aux < _len_image0; _aux++) {
          free(image[_aux].comps);
          }
          free(image);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_picture0 = 65025;
          struct TYPE_8__ * picture = (struct TYPE_8__ *) malloc(_len_picture0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_picture0; _i0++) {
            picture[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        picture[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_picture__i0__linesize0 = 1;
          picture[_i0].linesize = (int *) malloc(_len_picture__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_picture__i0__linesize0; _j0++) {
            picture[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_picture__i0__data0 = 1;
          picture[_i0].data = (int **) malloc(_len_picture__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_picture__i0__data0; _j0++) {
            int _len_picture__i0__data1 = 1;
            picture[_i0].data[_j0] = (int *) malloc(_len_picture__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_picture__i0__data1; _j1++) {
              picture[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_image0 = 65025;
          struct TYPE_7__ * image = (struct TYPE_7__ *) malloc(_len_image0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_image0; _i0++) {
            image[_i0].numcomps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_image__i0__comps0 = 1;
          image[_i0].comps = (struct TYPE_6__ *) malloc(_len_image__i0__comps0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_image__i0__comps0; _j0++) {
            image[_i0].comps->sgnd = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_image__i0__comps_data0 = 1;
          image[_i0].comps->data = (long *) malloc(_len_image__i0__comps_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_image__i0__comps_data0; _j0++) {
            image[_i0].comps->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          libopenjpeg_copy_to_packed8(picture,image);
          for(int _aux = 0; _aux < _len_picture0; _aux++) {
          free(picture[_aux].linesize);
          }
          for(int _aux = 0; _aux < _len_picture0; _aux++) {
          free(*(picture[_aux].data));
        free(picture[_aux].data);
          }
          free(picture);
          for(int _aux = 0; _aux < _len_image0; _aux++) {
          free(image[_aux].comps);
          }
          free(image);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_picture0 = 100;
          struct TYPE_8__ * picture = (struct TYPE_8__ *) malloc(_len_picture0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_picture0; _i0++) {
            picture[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        picture[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_picture__i0__linesize0 = 1;
          picture[_i0].linesize = (int *) malloc(_len_picture__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_picture__i0__linesize0; _j0++) {
            picture[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_picture__i0__data0 = 1;
          picture[_i0].data = (int **) malloc(_len_picture__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_picture__i0__data0; _j0++) {
            int _len_picture__i0__data1 = 1;
            picture[_i0].data[_j0] = (int *) malloc(_len_picture__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_picture__i0__data1; _j1++) {
              picture[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_image0 = 100;
          struct TYPE_7__ * image = (struct TYPE_7__ *) malloc(_len_image0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_image0; _i0++) {
            image[_i0].numcomps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_image__i0__comps0 = 1;
          image[_i0].comps = (struct TYPE_6__ *) malloc(_len_image__i0__comps0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_image__i0__comps0; _j0++) {
            image[_i0].comps->sgnd = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_image__i0__comps_data0 = 1;
          image[_i0].comps->data = (long *) malloc(_len_image__i0__comps_data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_image__i0__comps_data0; _j0++) {
            image[_i0].comps->data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          libopenjpeg_copy_to_packed8(picture,image);
          for(int _aux = 0; _aux < _len_picture0; _aux++) {
          free(picture[_aux].linesize);
          }
          for(int _aux = 0; _aux < _len_picture0; _aux++) {
          free(*(picture[_aux].data));
        free(picture[_aux].data);
          }
          free(picture);
          for(int _aux = 0; _aux < _len_image0; _aux++) {
          free(image[_aux].comps);
          }
          free(image);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
