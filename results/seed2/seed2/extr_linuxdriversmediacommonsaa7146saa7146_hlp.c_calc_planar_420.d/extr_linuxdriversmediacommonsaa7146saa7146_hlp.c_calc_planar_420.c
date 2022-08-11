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
struct saa7146_vv {scalar_t__ vflip; } ;
struct saa7146_video_dma {int pitch; scalar_t__ prot_addr; scalar_t__ base_even; scalar_t__ base_odd; } ;
struct saa7146_buf {TYPE_2__* pt; TYPE_1__* fmt; } ;
struct TYPE_4__ {scalar_t__ offset; } ;
struct TYPE_3__ {int height; int width; } ;

/* Variables and functions */

__attribute__((used)) static int calc_planar_420(struct saa7146_vv *vv, struct saa7146_buf *buf, struct saa7146_video_dma *vdma2, struct saa7146_video_dma *vdma3)
{
	int height = buf->fmt->height;
	int width = buf->fmt->width;

	vdma2->pitch	= width/2;
	vdma3->pitch	= width/2;

	if( 0 != vv->vflip ) {
		vdma2->prot_addr	= buf->pt[2].offset;
		vdma2->base_even	= ((vdma2->pitch/2)*height)+buf->pt[2].offset;
		vdma2->base_odd		= vdma2->base_even - (vdma2->pitch/2);

		vdma3->prot_addr	= buf->pt[1].offset;
		vdma3->base_even	= ((vdma3->pitch/2)*height)+buf->pt[1].offset;
		vdma3->base_odd		= vdma3->base_even - (vdma3->pitch/2);

	} else {
		vdma3->base_even	= buf->pt[2].offset;
		vdma3->base_odd		= vdma3->base_even + (vdma3->pitch);
		vdma3->prot_addr	= (vdma3->pitch/2)*height+buf->pt[2].offset;

		vdma2->base_even	= buf->pt[1].offset;
		vdma2->base_odd		= vdma2->base_even + (vdma2->pitch);
		vdma2->prot_addr	= (vdma2->pitch/2)*height+buf->pt[1].offset;
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
          int _len_vv0 = 1;
          struct saa7146_vv * vv = (struct saa7146_vv *) malloc(_len_vv0*sizeof(struct saa7146_vv));
          for(int _i0 = 0; _i0 < _len_vv0; _i0++) {
            vv[_i0].vflip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          struct saa7146_buf * buf = (struct saa7146_buf *) malloc(_len_buf0*sizeof(struct saa7146_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
              int _len_buf__i0__pt0 = 1;
          buf[_i0].pt = (struct TYPE_4__ *) malloc(_len_buf__i0__pt0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_buf__i0__pt0; _j0++) {
            buf[_i0].pt->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf__i0__fmt0 = 1;
          buf[_i0].fmt = (struct TYPE_3__ *) malloc(_len_buf__i0__fmt0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_buf__i0__fmt0; _j0++) {
            buf[_i0].fmt->height = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].fmt->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vdma20 = 1;
          struct saa7146_video_dma * vdma2 = (struct saa7146_video_dma *) malloc(_len_vdma20*sizeof(struct saa7146_video_dma));
          for(int _i0 = 0; _i0 < _len_vdma20; _i0++) {
            vdma2[_i0].pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        vdma2[_i0].prot_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        vdma2[_i0].base_even = ((-2 * (next_i()%2)) + 1) * next_i();
        vdma2[_i0].base_odd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vdma30 = 1;
          struct saa7146_video_dma * vdma3 = (struct saa7146_video_dma *) malloc(_len_vdma30*sizeof(struct saa7146_video_dma));
          for(int _i0 = 0; _i0 < _len_vdma30; _i0++) {
            vdma3[_i0].pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        vdma3[_i0].prot_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        vdma3[_i0].base_even = ((-2 * (next_i()%2)) + 1) * next_i();
        vdma3[_i0].base_odd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = calc_planar_420(vv,buf,vdma2,vdma3);
          printf("%d\n", benchRet); 
          free(vv);
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].pt);
          }
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].fmt);
          }
          free(buf);
          free(vdma2);
          free(vdma3);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vv0 = 65025;
          struct saa7146_vv * vv = (struct saa7146_vv *) malloc(_len_vv0*sizeof(struct saa7146_vv));
          for(int _i0 = 0; _i0 < _len_vv0; _i0++) {
            vv[_i0].vflip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          struct saa7146_buf * buf = (struct saa7146_buf *) malloc(_len_buf0*sizeof(struct saa7146_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
              int _len_buf__i0__pt0 = 1;
          buf[_i0].pt = (struct TYPE_4__ *) malloc(_len_buf__i0__pt0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_buf__i0__pt0; _j0++) {
            buf[_i0].pt->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf__i0__fmt0 = 1;
          buf[_i0].fmt = (struct TYPE_3__ *) malloc(_len_buf__i0__fmt0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_buf__i0__fmt0; _j0++) {
            buf[_i0].fmt->height = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].fmt->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vdma20 = 65025;
          struct saa7146_video_dma * vdma2 = (struct saa7146_video_dma *) malloc(_len_vdma20*sizeof(struct saa7146_video_dma));
          for(int _i0 = 0; _i0 < _len_vdma20; _i0++) {
            vdma2[_i0].pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        vdma2[_i0].prot_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        vdma2[_i0].base_even = ((-2 * (next_i()%2)) + 1) * next_i();
        vdma2[_i0].base_odd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vdma30 = 65025;
          struct saa7146_video_dma * vdma3 = (struct saa7146_video_dma *) malloc(_len_vdma30*sizeof(struct saa7146_video_dma));
          for(int _i0 = 0; _i0 < _len_vdma30; _i0++) {
            vdma3[_i0].pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        vdma3[_i0].prot_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        vdma3[_i0].base_even = ((-2 * (next_i()%2)) + 1) * next_i();
        vdma3[_i0].base_odd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = calc_planar_420(vv,buf,vdma2,vdma3);
          printf("%d\n", benchRet); 
          free(vv);
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].pt);
          }
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].fmt);
          }
          free(buf);
          free(vdma2);
          free(vdma3);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vv0 = 100;
          struct saa7146_vv * vv = (struct saa7146_vv *) malloc(_len_vv0*sizeof(struct saa7146_vv));
          for(int _i0 = 0; _i0 < _len_vv0; _i0++) {
            vv[_i0].vflip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          struct saa7146_buf * buf = (struct saa7146_buf *) malloc(_len_buf0*sizeof(struct saa7146_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
              int _len_buf__i0__pt0 = 1;
          buf[_i0].pt = (struct TYPE_4__ *) malloc(_len_buf__i0__pt0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_buf__i0__pt0; _j0++) {
            buf[_i0].pt->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf__i0__fmt0 = 1;
          buf[_i0].fmt = (struct TYPE_3__ *) malloc(_len_buf__i0__fmt0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_buf__i0__fmt0; _j0++) {
            buf[_i0].fmt->height = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].fmt->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vdma20 = 100;
          struct saa7146_video_dma * vdma2 = (struct saa7146_video_dma *) malloc(_len_vdma20*sizeof(struct saa7146_video_dma));
          for(int _i0 = 0; _i0 < _len_vdma20; _i0++) {
            vdma2[_i0].pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        vdma2[_i0].prot_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        vdma2[_i0].base_even = ((-2 * (next_i()%2)) + 1) * next_i();
        vdma2[_i0].base_odd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vdma30 = 100;
          struct saa7146_video_dma * vdma3 = (struct saa7146_video_dma *) malloc(_len_vdma30*sizeof(struct saa7146_video_dma));
          for(int _i0 = 0; _i0 < _len_vdma30; _i0++) {
            vdma3[_i0].pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        vdma3[_i0].prot_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        vdma3[_i0].base_even = ((-2 * (next_i()%2)) + 1) * next_i();
        vdma3[_i0].base_odd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = calc_planar_420(vv,buf,vdma2,vdma3);
          printf("%d\n", benchRet); 
          free(vv);
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].pt);
          }
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].fmt);
          }
          free(buf);
          free(vdma2);
          free(vdma3);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
