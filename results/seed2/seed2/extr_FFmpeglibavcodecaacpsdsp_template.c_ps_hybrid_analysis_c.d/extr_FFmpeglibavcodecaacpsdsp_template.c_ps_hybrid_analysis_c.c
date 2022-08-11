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
typedef  int ptrdiff_t ;
typedef  int INTFLOAT ;
typedef  int INT64FLOAT ;

/* Variables and functions */

__attribute__((used)) static void ps_hybrid_analysis_c(INTFLOAT (*out)[2], INTFLOAT (*in)[2],
                                 const INTFLOAT (*filter)[8][2],
                                 ptrdiff_t stride, int n)
{
    int i, j;

    for (i = 0; i < n; i++) {
        INT64FLOAT sum_re = (INT64FLOAT)filter[i][6][0] * in[6][0];
        INT64FLOAT sum_im = (INT64FLOAT)filter[i][6][0] * in[6][1];

        for (j = 0; j < 6; j++) {
            INTFLOAT in0_re = in[j][0];
            INTFLOAT in0_im = in[j][1];
            INTFLOAT in1_re = in[12-j][0];
            INTFLOAT in1_im = in[12-j][1];
            sum_re += (INT64FLOAT)filter[i][j][0] * (in0_re + in1_re) -
                      (INT64FLOAT)filter[i][j][1] * (in0_im - in1_im);
            sum_im += (INT64FLOAT)filter[i][j][0] * (in0_im + in1_im) +
                      (INT64FLOAT)filter[i][j][1] * (in0_re - in1_re);
        }
#if USE_FIXED
        out[i * stride][0] = (int)((sum_re + 0x40000000) >> 31);
        out[i * stride][1] = (int)((sum_im + 0x40000000) >> 31);
#else
        out[i * stride][0] = sum_re;
        out[i * stride][1] = sum_im;
#endif /* USE_FIXED */
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
          int stride = 100;
          int n = 100;
          int _len_out0 = 2;
          int (*)* out = (int (*)*) malloc(_len_out0*sizeof(int ()*));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 1;
            out[_i0] = (int ()*) malloc(_len_out1*sizeof(int ()));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_in0 = 2;
          int (*)* in = (int (*)*) malloc(_len_in0*sizeof(int ()*));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            int _len_in1 = 1;
            in[_i0] = (int ()*) malloc(_len_in1*sizeof(int ()));
            for(int _i1 = 0; _i1 < _len_in1; _i1++) {
              in[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_filter0 = 8;
          int const (*)** filter = (int const (*)**) malloc(_len_filter0*sizeof(int const ()**));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
            int _len_filter1 = 2;
            filter[_i0] = (int const ()**) malloc(_len_filter1*sizeof(int const ()*));
            for(int _i1 = 0; _i1 < _len_filter1; _i1++) {
              int _len_filter2 = 1;
              filter[_i0][_i1] = (int const ()*) malloc(_len_filter2*sizeof(int const ()));
              for(int _i2 = 0; _i2 < _len_filter2; _i2++) {
                filter[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          ps_hybrid_analysis_c(out,in,filter,stride,n);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 1;
              free(out[i1]);
          }
          free(out);
          for(int i1 = 0; i1 < _len_in0; i1++) {
            int _len_in1 = 1;
              free(in[i1]);
          }
          free(in);
          for(int i1 = 0; i1 < _len_filter0; i1++) {
            int _len_filter1 = 2;
              for(int i2 = 0; i2 < _len_filter1; i2++) {
            int _len_filter2 = 1;
              free(filter[i1][i2]);
          }
          free(filter[i1]);
          }
          free(filter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int stride = 255;
          int n = 255;
          int _len_out0 = 65025;
          int (*)* out = (int (*)*) malloc(_len_out0*sizeof(int ()*));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 1;
            out[_i0] = (int ()*) malloc(_len_out1*sizeof(int ()));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_in0 = 65025;
          int (*)* in = (int (*)*) malloc(_len_in0*sizeof(int ()*));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            int _len_in1 = 1;
            in[_i0] = (int ()*) malloc(_len_in1*sizeof(int ()));
            for(int _i1 = 0; _i1 < _len_in1; _i1++) {
              in[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_filter0 = 65025;
          int const (*)** filter = (int const (*)**) malloc(_len_filter0*sizeof(int const ()**));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
            int _len_filter1 = 2;
            filter[_i0] = (int const ()**) malloc(_len_filter1*sizeof(int const ()*));
            for(int _i1 = 0; _i1 < _len_filter1; _i1++) {
              int _len_filter2 = 1;
              filter[_i0][_i1] = (int const ()*) malloc(_len_filter2*sizeof(int const ()));
              for(int _i2 = 0; _i2 < _len_filter2; _i2++) {
                filter[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          ps_hybrid_analysis_c(out,in,filter,stride,n);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 1;
              free(out[i1]);
          }
          free(out);
          for(int i1 = 0; i1 < _len_in0; i1++) {
            int _len_in1 = 1;
              free(in[i1]);
          }
          free(in);
          for(int i1 = 0; i1 < _len_filter0; i1++) {
            int _len_filter1 = 2;
              for(int i2 = 0; i2 < _len_filter1; i2++) {
            int _len_filter2 = 1;
              free(filter[i1][i2]);
          }
          free(filter[i1]);
          }
          free(filter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int stride = 10;
          int n = 10;
          int _len_out0 = 100;
          int (*)* out = (int (*)*) malloc(_len_out0*sizeof(int ()*));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 1;
            out[_i0] = (int ()*) malloc(_len_out1*sizeof(int ()));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_in0 = 100;
          int (*)* in = (int (*)*) malloc(_len_in0*sizeof(int ()*));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            int _len_in1 = 1;
            in[_i0] = (int ()*) malloc(_len_in1*sizeof(int ()));
            for(int _i1 = 0; _i1 < _len_in1; _i1++) {
              in[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_filter0 = 100;
          int const (*)** filter = (int const (*)**) malloc(_len_filter0*sizeof(int const ()**));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
            int _len_filter1 = 2;
            filter[_i0] = (int const ()**) malloc(_len_filter1*sizeof(int const ()*));
            for(int _i1 = 0; _i1 < _len_filter1; _i1++) {
              int _len_filter2 = 1;
              filter[_i0][_i1] = (int const ()*) malloc(_len_filter2*sizeof(int const ()));
              for(int _i2 = 0; _i2 < _len_filter2; _i2++) {
                filter[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          ps_hybrid_analysis_c(out,in,filter,stride,n);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 1;
              free(out[i1]);
          }
          free(out);
          for(int i1 = 0; i1 < _len_in0; i1++) {
            int _len_in1 = 1;
              free(in[i1]);
          }
          free(in);
          for(int i1 = 0; i1 < _len_filter0; i1++) {
            int _len_filter1 = 2;
              for(int i2 = 0; i2 < _len_filter1; i2++) {
            int _len_filter2 = 1;
              free(filter[i1][i2]);
          }
          free(filter[i1]);
          }
          free(filter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
