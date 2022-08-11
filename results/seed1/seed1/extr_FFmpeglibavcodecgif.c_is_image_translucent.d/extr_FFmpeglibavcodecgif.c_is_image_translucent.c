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
struct TYPE_5__ {int height; int width; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int transparent_index; } ;
typedef  TYPE_1__ GIFContext ;
typedef  TYPE_2__ AVCodecContext ;

/* Variables and functions */

__attribute__((used)) static int is_image_translucent(AVCodecContext *avctx,
                                const uint8_t *buf, const int linesize)
{
    GIFContext *s = avctx->priv_data;
    int trans = s->transparent_index;

    if (trans < 0)
        return 0;

    for (int y = 0; y < avctx->height; y++) {
        for (int x = 0; x < avctx->width; x++) {
            if (buf[x] == trans) {
                return 1;
            }
        }
        buf += linesize;
    }

    return 0;
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
          const int linesize = 100;
          int _len_avctx0 = 1;
          struct TYPE_5__ * avctx = (struct TYPE_5__ *) malloc(_len_avctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_avctx__i0__priv_data0 = 1;
          avctx[_i0].priv_data = (struct TYPE_4__ *) malloc(_len_avctx__i0__priv_data0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv_data0; _j0++) {
            avctx[_i0].priv_data->transparent_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 1;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_image_translucent(avctx,buf,linesize);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_avctx0; _aux++) {
          free(avctx[_aux].priv_data);
          }
          free(avctx);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          const int linesize = 255;
          int _len_avctx0 = 65025;
          struct TYPE_5__ * avctx = (struct TYPE_5__ *) malloc(_len_avctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_avctx__i0__priv_data0 = 1;
          avctx[_i0].priv_data = (struct TYPE_4__ *) malloc(_len_avctx__i0__priv_data0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv_data0; _j0++) {
            avctx[_i0].priv_data->transparent_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 65025;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_image_translucent(avctx,buf,linesize);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_avctx0; _aux++) {
          free(avctx[_aux].priv_data);
          }
          free(avctx);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int linesize = 10;
          int _len_avctx0 = 100;
          struct TYPE_5__ * avctx = (struct TYPE_5__ *) malloc(_len_avctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_avctx__i0__priv_data0 = 1;
          avctx[_i0].priv_data = (struct TYPE_4__ *) malloc(_len_avctx__i0__priv_data0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv_data0; _j0++) {
            avctx[_i0].priv_data->transparent_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buf0 = 100;
          const int * buf = (const int *) malloc(_len_buf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_image_translucent(avctx,buf,linesize);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_avctx0; _aux++) {
          free(avctx[_aux].priv_data);
          }
          free(avctx);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
