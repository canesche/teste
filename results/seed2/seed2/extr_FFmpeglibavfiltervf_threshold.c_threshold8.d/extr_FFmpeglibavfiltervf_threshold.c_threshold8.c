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
typedef  scalar_t__ uint8_t ;
typedef  int /*<<< orphan*/  ptrdiff_t ;

/* Variables and functions */

__attribute__((used)) static void threshold8(const uint8_t *in, const uint8_t *threshold,
                       const uint8_t *min, const uint8_t *max,
                       uint8_t *out,
                       ptrdiff_t ilinesize, ptrdiff_t tlinesize,
                       ptrdiff_t flinesize, ptrdiff_t slinesize,
                       ptrdiff_t olinesize,
                       int w, int h)
{
    int x, y;

    for (y = 0; y < h; y++) {
        for (x = 0; x < w; x++) {
            out[x] = in[x] < threshold[x] ? min[x] : max[x];
        }

        in        += ilinesize;
        threshold += tlinesize;
        min       += flinesize;
        max       += slinesize;
        out       += olinesize;
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
          int ilinesize = 100;
          int tlinesize = 100;
          int flinesize = 100;
          int slinesize = 100;
          int olinesize = 100;
          int w = 100;
          int h = 100;
          int _len_in0 = 1;
          const long * in = (const long *) malloc(_len_in0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_threshold0 = 1;
          const long * threshold = (const long *) malloc(_len_threshold0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_threshold0; _i0++) {
            threshold[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_min0 = 1;
          const long * min = (const long *) malloc(_len_min0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_min0; _i0++) {
            min[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max0 = 1;
          const long * max = (const long *) malloc(_len_max0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_max0; _i0++) {
            max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 1;
          long * out = (long *) malloc(_len_out0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          threshold8(in,threshold,min,max,out,ilinesize,tlinesize,flinesize,slinesize,olinesize,w,h);
          free(in);
          free(threshold);
          free(min);
          free(max);
          free(out);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ilinesize = 255;
          int tlinesize = 255;
          int flinesize = 255;
          int slinesize = 255;
          int olinesize = 255;
          int w = 255;
          int h = 255;
          int _len_in0 = 65025;
          const long * in = (const long *) malloc(_len_in0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_threshold0 = 65025;
          const long * threshold = (const long *) malloc(_len_threshold0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_threshold0; _i0++) {
            threshold[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_min0 = 65025;
          const long * min = (const long *) malloc(_len_min0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_min0; _i0++) {
            min[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max0 = 65025;
          const long * max = (const long *) malloc(_len_max0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_max0; _i0++) {
            max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 65025;
          long * out = (long *) malloc(_len_out0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          threshold8(in,threshold,min,max,out,ilinesize,tlinesize,flinesize,slinesize,olinesize,w,h);
          free(in);
          free(threshold);
          free(min);
          free(max);
          free(out);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ilinesize = 10;
          int tlinesize = 10;
          int flinesize = 10;
          int slinesize = 10;
          int olinesize = 10;
          int w = 10;
          int h = 10;
          int _len_in0 = 100;
          const long * in = (const long *) malloc(_len_in0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_threshold0 = 100;
          const long * threshold = (const long *) malloc(_len_threshold0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_threshold0; _i0++) {
            threshold[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_min0 = 100;
          const long * min = (const long *) malloc(_len_min0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_min0; _i0++) {
            min[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max0 = 100;
          const long * max = (const long *) malloc(_len_max0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_max0; _i0++) {
            max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 100;
          long * out = (long *) malloc(_len_out0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          threshold8(in,threshold,min,max,out,ilinesize,tlinesize,flinesize,slinesize,olinesize,w,h);
          free(in);
          free(threshold);
          free(min);
          free(max);
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
