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
typedef  int u32 ;
struct videobuf_queue {struct cx231xx_fh* priv_data; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int norm; int width; } ;

/* Variables and functions */
 unsigned int CX231XX_DEF_VBI_BUF ; 
 unsigned int CX231XX_MIN_BUF ; 
 int NTSC_VBI_LINES ; 
 int PAL_VBI_LINES ; 
 int V4L2_STD_625_50 ; 

__attribute__((used)) static int
vbi_buffer_setup(struct videobuf_queue *vq, unsigned int *count,
		 unsigned int *size)
{
	struct cx231xx_fh *fh = vq->priv_data;
	struct cx231xx *dev = fh->dev;
	u32 height = 0;

	height = ((dev->norm & V4L2_STD_625_50) ?
		  PAL_VBI_LINES : NTSC_VBI_LINES);

	*size = (dev->width * height * 2 * 2);
	if (0 == *count)
		*count = CX231XX_DEF_VBI_BUF;

	if (*count < CX231XX_MIN_BUF)
		*count = CX231XX_MIN_BUF;

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
          int _len_vq0 = 1;
          struct videobuf_queue * vq = (struct videobuf_queue *) malloc(_len_vq0*sizeof(struct videobuf_queue));
          for(int _i0 = 0; _i0 < _len_vq0; _i0++) {
              int _len_vq__i0__priv_data0 = 1;
          vq[_i0].priv_data = (struct cx231xx_fh *) malloc(_len_vq__i0__priv_data0*sizeof(struct cx231xx_fh));
          for(int _j0 = 0; _j0 < _len_vq__i0__priv_data0; _j0++) {
              int _len_vq__i0__priv_data_dev0 = 1;
          vq[_i0].priv_data->dev = (struct cx231xx *) malloc(_len_vq__i0__priv_data_dev0*sizeof(struct cx231xx));
          for(int _j0 = 0; _j0 < _len_vq__i0__priv_data_dev0; _j0++) {
            vq[_i0].priv_data->dev->norm = ((-2 * (next_i()%2)) + 1) * next_i();
        vq[_i0].priv_data->dev->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_count0 = 1;
          unsigned int * count = (unsigned int *) malloc(_len_count0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_size0 = 1;
          unsigned int * size = (unsigned int *) malloc(_len_size0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vbi_buffer_setup(vq,count,size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vq0; _aux++) {
          free(vq[_aux].priv_data);
          }
          free(vq);
          free(count);
          free(size);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vq0 = 65025;
          struct videobuf_queue * vq = (struct videobuf_queue *) malloc(_len_vq0*sizeof(struct videobuf_queue));
          for(int _i0 = 0; _i0 < _len_vq0; _i0++) {
              int _len_vq__i0__priv_data0 = 1;
          vq[_i0].priv_data = (struct cx231xx_fh *) malloc(_len_vq__i0__priv_data0*sizeof(struct cx231xx_fh));
          for(int _j0 = 0; _j0 < _len_vq__i0__priv_data0; _j0++) {
              int _len_vq__i0__priv_data_dev0 = 1;
          vq[_i0].priv_data->dev = (struct cx231xx *) malloc(_len_vq__i0__priv_data_dev0*sizeof(struct cx231xx));
          for(int _j0 = 0; _j0 < _len_vq__i0__priv_data_dev0; _j0++) {
            vq[_i0].priv_data->dev->norm = ((-2 * (next_i()%2)) + 1) * next_i();
        vq[_i0].priv_data->dev->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_count0 = 65025;
          unsigned int * count = (unsigned int *) malloc(_len_count0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_size0 = 65025;
          unsigned int * size = (unsigned int *) malloc(_len_size0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vbi_buffer_setup(vq,count,size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vq0; _aux++) {
          free(vq[_aux].priv_data);
          }
          free(vq);
          free(count);
          free(size);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vq0 = 100;
          struct videobuf_queue * vq = (struct videobuf_queue *) malloc(_len_vq0*sizeof(struct videobuf_queue));
          for(int _i0 = 0; _i0 < _len_vq0; _i0++) {
              int _len_vq__i0__priv_data0 = 1;
          vq[_i0].priv_data = (struct cx231xx_fh *) malloc(_len_vq__i0__priv_data0*sizeof(struct cx231xx_fh));
          for(int _j0 = 0; _j0 < _len_vq__i0__priv_data0; _j0++) {
              int _len_vq__i0__priv_data_dev0 = 1;
          vq[_i0].priv_data->dev = (struct cx231xx *) malloc(_len_vq__i0__priv_data_dev0*sizeof(struct cx231xx));
          for(int _j0 = 0; _j0 < _len_vq__i0__priv_data_dev0; _j0++) {
            vq[_i0].priv_data->dev->norm = ((-2 * (next_i()%2)) + 1) * next_i();
        vq[_i0].priv_data->dev->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_count0 = 100;
          unsigned int * count = (unsigned int *) malloc(_len_count0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_size0 = 100;
          unsigned int * size = (unsigned int *) malloc(_len_size0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vbi_buffer_setup(vq,count,size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vq0; _aux++) {
          free(vq[_aux].priv_data);
          }
          free(vq);
          free(count);
          free(size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
