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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  double uint8_t ;
struct TYPE_6__ {int block_size; } ;
struct TYPE_5__ {int y; int x; } ;
typedef  TYPE_1__ PosCode ;
typedef  TYPE_2__ BM3DContext ;

/* Variables and functions */

__attribute__((used)) static double do_block_ssd(BM3DContext *s, PosCode *pos, const uint8_t *src, int src_stride, int r_y, int r_x)
{
    const uint8_t *srcp = src + pos->y * src_stride + pos->x;
    const uint8_t *refp = src + r_y * src_stride + r_x;
    const int block_size = s->block_size;
    double dist = 0.;
    int x, y;

    for (y = 0; y < block_size; y++) {
        for (x = 0; x < block_size; x++) {
            double temp = refp[x] - srcp[x];
            dist += temp * temp;
        }

        srcp += src_stride;
        refp += src_stride;
    }

    return dist;
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
          int src_stride = 100;
          int r_y = 100;
          int r_x = 100;
          int _len_s0 = 1;
          struct TYPE_6__ * s = (struct TYPE_6__ *) malloc(_len_s0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].block_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pos0 = 1;
          struct TYPE_5__ * pos = (struct TYPE_5__ *) malloc(_len_pos0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        pos[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          const double * src = (const double *) malloc(_len_src0*sizeof(const double));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          double benchRet = do_block_ssd(s,pos,src,src_stride,r_y,r_x);
          printf("%lf\n", benchRet); 
          free(s);
          free(pos);
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          int src_stride = 255;
          int r_y = 255;
          int r_x = 255;
          int _len_s0 = 65025;
          struct TYPE_6__ * s = (struct TYPE_6__ *) malloc(_len_s0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].block_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pos0 = 65025;
          struct TYPE_5__ * pos = (struct TYPE_5__ *) malloc(_len_pos0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        pos[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 65025;
          const double * src = (const double *) malloc(_len_src0*sizeof(const double));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          double benchRet = do_block_ssd(s,pos,src,src_stride,r_y,r_x);
          printf("%lf\n", benchRet); 
          free(s);
          free(pos);
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int src_stride = 10;
          int r_y = 10;
          int r_x = 10;
          int _len_s0 = 100;
          struct TYPE_6__ * s = (struct TYPE_6__ *) malloc(_len_s0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].block_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pos0 = 100;
          struct TYPE_5__ * pos = (struct TYPE_5__ *) malloc(_len_pos0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_pos0; _i0++) {
            pos[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        pos[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 100;
          const double * src = (const double *) malloc(_len_src0*sizeof(const double));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          double benchRet = do_block_ssd(s,pos,src,src_stride,r_y,r_x);
          printf("%lf\n", benchRet); 
          free(s);
          free(pos);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
