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

void backward_scale_cpu(float *x_norm, float *delta, int batch, int n, int size, float *scale_updates)
{
    int i,b,f;
    for(f = 0; f < n; ++f){
        float sum = 0;
        for(b = 0; b < batch; ++b){
            for(i = 0; i < size; ++i){
                int index = i + size*(f + n*b);
                sum += delta[index] * x_norm[index];
            }
        }
        scale_updates[f] += sum;
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
          int batch = 100;
          int n = 100;
          int size = 100;
          int _len_x_norm0 = 1;
          float * x_norm = (float *) malloc(_len_x_norm0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_x_norm0; _i0++) {
            x_norm[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_delta0 = 1;
          float * delta = (float *) malloc(_len_delta0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_delta0; _i0++) {
            delta[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_scale_updates0 = 1;
          float * scale_updates = (float *) malloc(_len_scale_updates0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_scale_updates0; _i0++) {
            scale_updates[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          backward_scale_cpu(x_norm,delta,batch,n,size,scale_updates);
          free(x_norm);
          free(delta);
          free(scale_updates);
        
        break;
    }
    // big-arr
    case 1:
    {
          int batch = 255;
          int n = 255;
          int size = 255;
          int _len_x_norm0 = 65025;
          float * x_norm = (float *) malloc(_len_x_norm0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_x_norm0; _i0++) {
            x_norm[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_delta0 = 65025;
          float * delta = (float *) malloc(_len_delta0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_delta0; _i0++) {
            delta[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_scale_updates0 = 65025;
          float * scale_updates = (float *) malloc(_len_scale_updates0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_scale_updates0; _i0++) {
            scale_updates[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          backward_scale_cpu(x_norm,delta,batch,n,size,scale_updates);
          free(x_norm);
          free(delta);
          free(scale_updates);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int batch = 10;
          int n = 10;
          int size = 10;
          int _len_x_norm0 = 100;
          float * x_norm = (float *) malloc(_len_x_norm0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_x_norm0; _i0++) {
            x_norm[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_delta0 = 100;
          float * delta = (float *) malloc(_len_delta0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_delta0; _i0++) {
            delta[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_scale_updates0 = 100;
          float * scale_updates = (float *) malloc(_len_scale_updates0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_scale_updates0; _i0++) {
            scale_updates[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          backward_scale_cpu(x_norm,delta,batch,n,size,scale_updates);
          free(x_norm);
          free(delta);
          free(scale_updates);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
