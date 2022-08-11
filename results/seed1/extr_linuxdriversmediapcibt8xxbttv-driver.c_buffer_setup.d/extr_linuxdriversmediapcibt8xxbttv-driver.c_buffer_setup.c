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
struct videobuf_queue {struct bttv_fh* priv_data; } ;
struct bttv_fh {int width; int height; TYPE_1__* fmt; } ;
struct TYPE_2__ {int depth; } ;

/* Variables and functions */
 unsigned int gbuffers ; 
 unsigned int gbufsize ; 

__attribute__((used)) static int
buffer_setup(struct videobuf_queue *q, unsigned int *count, unsigned int *size)
{
	struct bttv_fh *fh = q->priv_data;

	*size = fh->fmt->depth*fh->width*fh->height >> 3;
	if (0 == *count)
		*count = gbuffers;
	if (*size * *count > gbuffers * gbufsize)
		*count = (gbuffers * gbufsize) / *size;
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
          int _len_q0 = 1;
          struct videobuf_queue * q = (struct videobuf_queue *) malloc(_len_q0*sizeof(struct videobuf_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__priv_data0 = 1;
          q[_i0].priv_data = (struct bttv_fh *) malloc(_len_q__i0__priv_data0*sizeof(struct bttv_fh));
          for(int _j0 = 0; _j0 < _len_q__i0__priv_data0; _j0++) {
            q[_i0].priv_data->width = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].priv_data->height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_q__i0__priv_data_fmt0 = 1;
          q[_i0].priv_data->fmt = (struct TYPE_2__ *) malloc(_len_q__i0__priv_data_fmt0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_q__i0__priv_data_fmt0; _j0++) {
            q[_i0].priv_data->fmt->depth = ((-2 * (next_i()%2)) + 1) * next_i();
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
          int benchRet = buffer_setup(q,count,size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].priv_data);
          }
          free(q);
          free(count);
          free(size);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_q0 = 65025;
          struct videobuf_queue * q = (struct videobuf_queue *) malloc(_len_q0*sizeof(struct videobuf_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__priv_data0 = 1;
          q[_i0].priv_data = (struct bttv_fh *) malloc(_len_q__i0__priv_data0*sizeof(struct bttv_fh));
          for(int _j0 = 0; _j0 < _len_q__i0__priv_data0; _j0++) {
            q[_i0].priv_data->width = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].priv_data->height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_q__i0__priv_data_fmt0 = 1;
          q[_i0].priv_data->fmt = (struct TYPE_2__ *) malloc(_len_q__i0__priv_data_fmt0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_q__i0__priv_data_fmt0; _j0++) {
            q[_i0].priv_data->fmt->depth = ((-2 * (next_i()%2)) + 1) * next_i();
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
          int benchRet = buffer_setup(q,count,size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].priv_data);
          }
          free(q);
          free(count);
          free(size);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_q0 = 100;
          struct videobuf_queue * q = (struct videobuf_queue *) malloc(_len_q0*sizeof(struct videobuf_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__priv_data0 = 1;
          q[_i0].priv_data = (struct bttv_fh *) malloc(_len_q__i0__priv_data0*sizeof(struct bttv_fh));
          for(int _j0 = 0; _j0 < _len_q__i0__priv_data0; _j0++) {
            q[_i0].priv_data->width = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].priv_data->height = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_q__i0__priv_data_fmt0 = 1;
          q[_i0].priv_data->fmt = (struct TYPE_2__ *) malloc(_len_q__i0__priv_data_fmt0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_q__i0__priv_data_fmt0; _j0++) {
            q[_i0].priv_data->fmt->depth = ((-2 * (next_i()%2)) + 1) * next_i();
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
          int benchRet = buffer_setup(q,count,size);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].priv_data);
          }
          free(q);
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
