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
typedef  size_t uint8_t ;
typedef  float int16_t ;
typedef  enum Mode { ____Placeholder_Mode } Mode ;

/* Variables and functions */
 int const MODE_8k85 ; 
 float** qua_gain_6b ; 
 float** qua_gain_7b ; 

__attribute__((used)) static void decode_gains(const uint8_t vq_gain, const enum Mode mode,
                         float *fixed_gain_factor, float *pitch_gain)
{
    const int16_t *gains = (mode <= MODE_8k85 ? qua_gain_6b[vq_gain] :
                                                qua_gain_7b[vq_gain]);

    *pitch_gain        = gains[0] * (1.0f / (1 << 14));
    *fixed_gain_factor = gains[1] * (1.0f / (1 << 11));
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
          const unsigned long vq_gain = 100;
          const enum Mode mode = 0;
          int _len_fixed_gain_factor0 = 1;
          float * fixed_gain_factor = (float *) malloc(_len_fixed_gain_factor0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_fixed_gain_factor0; _i0++) {
            fixed_gain_factor[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_pitch_gain0 = 1;
          float * pitch_gain = (float *) malloc(_len_pitch_gain0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_pitch_gain0; _i0++) {
            pitch_gain[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          decode_gains(vq_gain,mode,fixed_gain_factor,pitch_gain);
          free(fixed_gain_factor);
          free(pitch_gain);
        
        break;
    }
    // big-arr
    case 1:
    {
          const unsigned long vq_gain = 255;
          const enum Mode mode = 0;
          int _len_fixed_gain_factor0 = 65025;
          float * fixed_gain_factor = (float *) malloc(_len_fixed_gain_factor0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_fixed_gain_factor0; _i0++) {
            fixed_gain_factor[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_pitch_gain0 = 65025;
          float * pitch_gain = (float *) malloc(_len_pitch_gain0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_pitch_gain0; _i0++) {
            pitch_gain[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          decode_gains(vq_gain,mode,fixed_gain_factor,pitch_gain);
          free(fixed_gain_factor);
          free(pitch_gain);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const unsigned long vq_gain = 10;
          const enum Mode mode = 0;
          int _len_fixed_gain_factor0 = 100;
          float * fixed_gain_factor = (float *) malloc(_len_fixed_gain_factor0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_fixed_gain_factor0; _i0++) {
            fixed_gain_factor[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_pitch_gain0 = 100;
          float * pitch_gain = (float *) malloc(_len_pitch_gain0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_pitch_gain0; _i0++) {
            pitch_gain[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          decode_gains(vq_gain,mode,fixed_gain_factor,pitch_gain);
          free(fixed_gain_factor);
          free(pitch_gain);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
