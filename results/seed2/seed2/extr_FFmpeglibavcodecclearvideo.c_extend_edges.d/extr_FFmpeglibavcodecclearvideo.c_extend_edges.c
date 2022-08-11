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
struct TYPE_3__ {int width; int height; int* linesize; int** data; } ;
typedef  TYPE_1__ AVFrame ;

/* Variables and functions */

__attribute__((used)) static void extend_edges(AVFrame *buf, int tile_size)
{
    int comp, i, j;

    for (comp = 0; comp < 3; comp++) {
        int shift = comp > 0;
        int w = buf->width  >> shift;
        int h = buf->height >> shift;
        int size = comp == 0 ? tile_size : tile_size >> 1;
        int stride = buf->linesize[comp];
        uint8_t *framebuf = buf->data[comp];

        int right  = size - (w & (size - 1));
        int bottom = size - (h & (size - 1));

        if ((right == size) && (bottom == size)) {
            return;
        }
        if (right != size) {
            int off = w;
            for (j = 0; j < h; j++) {
                for (i = 0; i < right; i++) {
                    framebuf[off + i] = 0x80;
                }
                off += stride;
            }
        }
        if (bottom != size) {
            int off = h * stride;
            for (j = 0; j < bottom; j++) {
                for (i = 0; i < stride; i++) {
                    framebuf[off + i] = 0x80;
                }
                off += stride;
            }
        }
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
          int tile_size = 100;
          int _len_buf0 = 1;
          struct TYPE_3__ * buf = (struct TYPE_3__ *) malloc(_len_buf0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buf__i0__linesize0 = 1;
          buf[_i0].linesize = (int *) malloc(_len_buf__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_buf__i0__linesize0; _j0++) {
            buf[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf__i0__data0 = 1;
          buf[_i0].data = (int **) malloc(_len_buf__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_buf__i0__data0; _j0++) {
            int _len_buf__i0__data1 = 1;
            buf[_i0].data[_j0] = (int *) malloc(_len_buf__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_buf__i0__data1; _j1++) {
              buf[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          extend_edges(buf,tile_size);
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].linesize);
          }
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(*(buf[_aux].data));
        free(buf[_aux].data);
          }
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int tile_size = 255;
          int _len_buf0 = 65025;
          struct TYPE_3__ * buf = (struct TYPE_3__ *) malloc(_len_buf0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buf__i0__linesize0 = 1;
          buf[_i0].linesize = (int *) malloc(_len_buf__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_buf__i0__linesize0; _j0++) {
            buf[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf__i0__data0 = 1;
          buf[_i0].data = (int **) malloc(_len_buf__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_buf__i0__data0; _j0++) {
            int _len_buf__i0__data1 = 1;
            buf[_i0].data[_j0] = (int *) malloc(_len_buf__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_buf__i0__data1; _j1++) {
              buf[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          extend_edges(buf,tile_size);
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].linesize);
          }
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(*(buf[_aux].data));
        free(buf[_aux].data);
          }
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int tile_size = 10;
          int _len_buf0 = 100;
          struct TYPE_3__ * buf = (struct TYPE_3__ *) malloc(_len_buf0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buf__i0__linesize0 = 1;
          buf[_i0].linesize = (int *) malloc(_len_buf__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_buf__i0__linesize0; _j0++) {
            buf[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf__i0__data0 = 1;
          buf[_i0].data = (int **) malloc(_len_buf__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_buf__i0__data0; _j0++) {
            int _len_buf__i0__data1 = 1;
            buf[_i0].data[_j0] = (int *) malloc(_len_buf__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_buf__i0__data1; _j1++) {
              buf[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          extend_edges(buf,tile_size);
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].linesize);
          }
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(*(buf[_aux].data));
        free(buf[_aux].data);
          }
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
