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

/* Variables and functions */

__attribute__((used)) static void postfilter_c(float *data, int period, float *gains, int len)
{
    const float g0 = gains[0];
    const float g1 = gains[1];
    const float g2 = gains[2];

    float x4 = data[-period - 2];
    float x3 = data[-period - 1];
    float x2 = data[-period + 0];
    float x1 = data[-period + 1];

    for (int i = 0; i < len; i++) {
        float x0 = data[i - period + 2];
        data[i] += g0 * x2        +
                   g1 * (x1 + x3) +
                   g2 * (x0 + x4);
        x4 = x3;
        x3 = x2;
        x2 = x1;
        x1 = x0;
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
          int period = 100;
          int len = 100;
          int _len_data0 = 1;
          float * data = (float *) malloc(_len_data0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_gains0 = 1;
          float * gains = (float *) malloc(_len_gains0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_gains0; _i0++) {
            gains[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          postfilter_c(data,period,gains,len);
          free(data);
          free(gains);
        
        break;
    }
    // big-arr
    case 1:
    {
          int period = 255;
          int len = 255;
          int _len_data0 = 65025;
          float * data = (float *) malloc(_len_data0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_gains0 = 65025;
          float * gains = (float *) malloc(_len_gains0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_gains0; _i0++) {
            gains[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          postfilter_c(data,period,gains,len);
          free(data);
          free(gains);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int period = 10;
          int len = 10;
          int _len_data0 = 100;
          float * data = (float *) malloc(_len_data0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_gains0 = 100;
          float * gains = (float *) malloc(_len_gains0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_gains0; _i0++) {
            gains[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          postfilter_c(data,period,gains,len);
          free(data);
          free(gains);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
