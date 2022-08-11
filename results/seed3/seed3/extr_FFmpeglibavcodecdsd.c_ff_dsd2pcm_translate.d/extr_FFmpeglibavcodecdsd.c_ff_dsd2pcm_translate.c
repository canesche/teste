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
typedef  int /*<<< orphan*/  ptrdiff_t ;
struct TYPE_3__ {unsigned int pos; unsigned char* buf; } ;
typedef  TYPE_1__ DSDContext ;

/* Variables and functions */
 unsigned int CTABLES ; 
 unsigned int FIFOMASK ; 
 scalar_t__** ctables ; 
 unsigned char const* ff_reverse ; 

void ff_dsd2pcm_translate(DSDContext* s, size_t samples, int lsbf,
                          const unsigned char *src, ptrdiff_t src_stride,
                          float *dst, ptrdiff_t dst_stride)
{
    unsigned pos, i;
    unsigned char* p;
    double sum;

    pos = s->pos;

    while (samples-- > 0) {
        s->buf[pos] = lsbf ? ff_reverse[*src] : *src;
        src += src_stride;

        p = s->buf + ((pos - CTABLES) & FIFOMASK);
        *p = ff_reverse[*p];

        sum = 0.0;
        for (i = 0; i < CTABLES; i++) {
            unsigned char a = s->buf[(pos                   - i) & FIFOMASK];
            unsigned char b = s->buf[(pos - (CTABLES*2 - 1) + i) & FIFOMASK];
            sum += ctables[i][a] + ctables[i][b];
        }

        *dst = (float)sum;
        dst += dst_stride;

        pos = (pos + 1) & FIFOMASK;
    }

    s->pos = pos;
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
          unsigned long samples = 100;
          int lsbf = 100;
          int src_stride = 100;
          int dst_stride = 100;
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__buf0 = 1;
          s[_i0].buf = (unsigned char *) malloc(_len_s__i0__buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_s__i0__buf0; _j0++) {
            s[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_src0 = 1;
          const unsigned char * src = (const unsigned char *) malloc(_len_src0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          float * dst = (float *) malloc(_len_dst0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          ff_dsd2pcm_translate(s,samples,lsbf,src,src_stride,dst,dst_stride);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf);
          }
          free(s);
          free(src);
          free(dst);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long samples = 255;
          int lsbf = 255;
          int src_stride = 255;
          int dst_stride = 255;
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__buf0 = 1;
          s[_i0].buf = (unsigned char *) malloc(_len_s__i0__buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_s__i0__buf0; _j0++) {
            s[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_src0 = 65025;
          const unsigned char * src = (const unsigned char *) malloc(_len_src0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 65025;
          float * dst = (float *) malloc(_len_dst0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          ff_dsd2pcm_translate(s,samples,lsbf,src,src_stride,dst,dst_stride);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf);
          }
          free(s);
          free(src);
          free(dst);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long samples = 10;
          int lsbf = 10;
          int src_stride = 10;
          int dst_stride = 10;
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__buf0 = 1;
          s[_i0].buf = (unsigned char *) malloc(_len_s__i0__buf0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_s__i0__buf0; _j0++) {
            s[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_src0 = 100;
          const unsigned char * src = (const unsigned char *) malloc(_len_src0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 100;
          float * dst = (float *) malloc(_len_dst0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          ff_dsd2pcm_translate(s,samples,lsbf,src,src_stride,dst,dst_stride);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf);
          }
          free(s);
          free(src);
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
