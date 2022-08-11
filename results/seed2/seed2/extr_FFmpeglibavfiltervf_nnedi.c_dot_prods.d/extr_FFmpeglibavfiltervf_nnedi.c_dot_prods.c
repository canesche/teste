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
typedef  int int16_t ;
typedef  int /*<<< orphan*/  NNEDIContext ;

/* Variables and functions */

__attribute__((used)) static void dot_prods(NNEDIContext *s, const float *dataf, const float *weightsf, float *vals, const int n, const int len, const float *scale)
{
    const int16_t *data = (int16_t *)dataf;
    const int16_t *weights = (int16_t *)weightsf;
    const float *wf = (float *)&weights[n * len];
    int i, j;

    for (i = 0; i < n; i++) {
        int sum = 0, off = ((i >> 2) << 3) + (i & 3);
        for (j = 0; j < len; j++)
            sum += data[j] * weights[i * len + j];

        vals[i] = sum * wf[off] * scale[0] + wf[off + 4];
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
          const int n = 100;
          const int len = 100;
          int _len_s0 = 1;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dataf0 = 1;
          const float * dataf = (const float *) malloc(_len_dataf0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_dataf0; _i0++) {
            dataf[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_weightsf0 = 1;
          const float * weightsf = (const float *) malloc(_len_weightsf0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_weightsf0; _i0++) {
            weightsf[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_vals0 = 1;
          float * vals = (float *) malloc(_len_vals0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_vals0; _i0++) {
            vals[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_scale0 = 1;
          const float * scale = (const float *) malloc(_len_scale0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_scale0; _i0++) {
            scale[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          dot_prods(s,dataf,weightsf,vals,n,len,scale);
          free(s);
          free(dataf);
          free(weightsf);
          free(vals);
          free(scale);
        
        break;
    }
    // big-arr
    case 1:
    {
          const int n = 255;
          const int len = 255;
          int _len_s0 = 65025;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dataf0 = 65025;
          const float * dataf = (const float *) malloc(_len_dataf0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_dataf0; _i0++) {
            dataf[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_weightsf0 = 65025;
          const float * weightsf = (const float *) malloc(_len_weightsf0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_weightsf0; _i0++) {
            weightsf[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_vals0 = 65025;
          float * vals = (float *) malloc(_len_vals0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_vals0; _i0++) {
            vals[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_scale0 = 65025;
          const float * scale = (const float *) malloc(_len_scale0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_scale0; _i0++) {
            scale[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          dot_prods(s,dataf,weightsf,vals,n,len,scale);
          free(s);
          free(dataf);
          free(weightsf);
          free(vals);
          free(scale);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int n = 10;
          const int len = 10;
          int _len_s0 = 100;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dataf0 = 100;
          const float * dataf = (const float *) malloc(_len_dataf0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_dataf0; _i0++) {
            dataf[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_weightsf0 = 100;
          const float * weightsf = (const float *) malloc(_len_weightsf0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_weightsf0; _i0++) {
            weightsf[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_vals0 = 100;
          float * vals = (float *) malloc(_len_vals0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_vals0; _i0++) {
            vals[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_scale0 = 100;
          const float * scale = (const float *) malloc(_len_scale0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_scale0; _i0++) {
            scale[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          dot_prods(s,dataf,weightsf,vals,n,len,scale);
          free(s);
          free(dataf);
          free(weightsf);
          free(vals);
          free(scale);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
