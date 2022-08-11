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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;

/* Variables and functions */

int ijk_image_convert(int width, int height,
    enum AVPixelFormat dst_format, uint8_t **dst_data, int *dst_linesize,
    enum AVPixelFormat src_format, const uint8_t **src_data, const int *src_linesize)
{
#if defined(__ANDROID__)
    switch (src_format) {
        case AV_PIX_FMT_YUV420P:
        case AV_PIX_FMT_YUVJ420P: // FIXME: 9 not equal to AV_PIX_FMT_YUV420P, but a workaround
            switch (dst_format) {
            case AV_PIX_FMT_RGB565:
                return I420ToRGB565(
                    src_data[0], src_linesize[0],
                    src_data[1], src_linesize[1],
                    src_data[2], src_linesize[2],
                    dst_data[0], dst_linesize[0],
                    width, height);
            case AV_PIX_FMT_0BGR32:
                return I420ToABGR(
                    src_data[0], src_linesize[0],
                    src_data[1], src_linesize[1],
                    src_data[2], src_linesize[2],
                    dst_data[0], dst_linesize[0],
                    width, height);
            default:
                break;
            }
            break;
        default:
            break;
    }
#endif
    return -1;
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
          int width = 100;
          int height = 100;
          enum AVPixelFormat dst_format = 0;
          enum AVPixelFormat src_format = 0;
          int _len_dst_data0 = 1;
          int ** dst_data = (int **) malloc(_len_dst_data0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_dst_data0; _i0++) {
            int _len_dst_data1 = 1;
            dst_data[_i0] = (int *) malloc(_len_dst_data1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_dst_data1; _i1++) {
              dst_data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_dst_linesize0 = 1;
          int * dst_linesize = (int *) malloc(_len_dst_linesize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst_linesize0; _i0++) {
            dst_linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src_data0 = 1;
          const int ** src_data = (const int **) malloc(_len_src_data0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_src_data0; _i0++) {
            int _len_src_data1 = 1;
            src_data[_i0] = (const int *) malloc(_len_src_data1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_src_data1; _i1++) {
              src_data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_src_linesize0 = 1;
          const int * src_linesize = (const int *) malloc(_len_src_linesize0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src_linesize0; _i0++) {
            src_linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ijk_image_convert(width,height,dst_format,dst_data,dst_linesize,src_format,src_data,src_linesize);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_dst_data0; i1++) {
            int _len_dst_data1 = 1;
              free(dst_data[i1]);
          }
          free(dst_data);
          free(dst_linesize);
          for(int i1 = 0; i1 < _len_src_data0; i1++) {
            int _len_src_data1 = 1;
              free(src_data[i1]);
          }
          free(src_data);
          free(src_linesize);
        
        break;
    }
    // big-arr
    case 1:
    {
          int width = 255;
          int height = 255;
          enum AVPixelFormat dst_format = 0;
          enum AVPixelFormat src_format = 0;
          int _len_dst_data0 = 65025;
          int ** dst_data = (int **) malloc(_len_dst_data0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_dst_data0; _i0++) {
            int _len_dst_data1 = 1;
            dst_data[_i0] = (int *) malloc(_len_dst_data1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_dst_data1; _i1++) {
              dst_data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_dst_linesize0 = 65025;
          int * dst_linesize = (int *) malloc(_len_dst_linesize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst_linesize0; _i0++) {
            dst_linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src_data0 = 65025;
          const int ** src_data = (const int **) malloc(_len_src_data0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_src_data0; _i0++) {
            int _len_src_data1 = 1;
            src_data[_i0] = (const int *) malloc(_len_src_data1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_src_data1; _i1++) {
              src_data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_src_linesize0 = 65025;
          const int * src_linesize = (const int *) malloc(_len_src_linesize0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src_linesize0; _i0++) {
            src_linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ijk_image_convert(width,height,dst_format,dst_data,dst_linesize,src_format,src_data,src_linesize);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_dst_data0; i1++) {
            int _len_dst_data1 = 1;
              free(dst_data[i1]);
          }
          free(dst_data);
          free(dst_linesize);
          for(int i1 = 0; i1 < _len_src_data0; i1++) {
            int _len_src_data1 = 1;
              free(src_data[i1]);
          }
          free(src_data);
          free(src_linesize);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int width = 10;
          int height = 10;
          enum AVPixelFormat dst_format = 0;
          enum AVPixelFormat src_format = 0;
          int _len_dst_data0 = 100;
          int ** dst_data = (int **) malloc(_len_dst_data0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_dst_data0; _i0++) {
            int _len_dst_data1 = 1;
            dst_data[_i0] = (int *) malloc(_len_dst_data1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_dst_data1; _i1++) {
              dst_data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_dst_linesize0 = 100;
          int * dst_linesize = (int *) malloc(_len_dst_linesize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst_linesize0; _i0++) {
            dst_linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src_data0 = 100;
          const int ** src_data = (const int **) malloc(_len_src_data0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_src_data0; _i0++) {
            int _len_src_data1 = 1;
            src_data[_i0] = (const int *) malloc(_len_src_data1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_src_data1; _i1++) {
              src_data[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_src_linesize0 = 100;
          const int * src_linesize = (const int *) malloc(_len_src_linesize0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src_linesize0; _i0++) {
            src_linesize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ijk_image_convert(width,height,dst_format,dst_data,dst_linesize,src_format,src_data,src_linesize);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_dst_data0; i1++) {
            int _len_dst_data1 = 1;
              free(dst_data[i1]);
          }
          free(dst_data);
          free(dst_linesize);
          for(int i1 = 0; i1 < _len_src_data0; i1++) {
            int _len_src_data1 = 1;
              free(src_data[i1]);
          }
          free(src_data);
          free(src_linesize);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
