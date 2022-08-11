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
typedef  float const int32_t ;

/* Variables and functions */

__attribute__((used)) static void lfe_fir_float_c(float *pcm_samples, int32_t *lfe_samples,
                            const float *filter_coeff, ptrdiff_t npcmblocks,
                            int dec_select)
{
    // Select decimation factor
    int factor = 64 << dec_select;
    int ncoeffs = 8 >> dec_select;
    int nlfesamples = npcmblocks >> (dec_select + 1);
    int i, j, k;

    for (i = 0; i < nlfesamples; i++) {
        // One decimated sample generates 64 or 128 interpolated ones
        for (j = 0; j < factor / 2; j++) {
            float a = 0;
            float b = 0;

            for (k = 0; k < ncoeffs; k++) {
                a += filter_coeff[      j * ncoeffs + k] * lfe_samples[-k];
                b += filter_coeff[255 - j * ncoeffs - k] * lfe_samples[-k];
            }

            pcm_samples[             j] = a;
            pcm_samples[factor / 2 + j] = b;
        }

        lfe_samples++;
        pcm_samples += factor;
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
          int npcmblocks = 100;
          int dec_select = 100;
          int _len_pcm_samples0 = 1;
          float * pcm_samples = (float *) malloc(_len_pcm_samples0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_pcm_samples0; _i0++) {
            pcm_samples[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_lfe_samples0 = 1;
          const float * lfe_samples = (const float *) malloc(_len_lfe_samples0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_lfe_samples0; _i0++) {
            lfe_samples[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_filter_coeff0 = 1;
          const float * filter_coeff = (const float *) malloc(_len_filter_coeff0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_filter_coeff0; _i0++) {
            filter_coeff[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          lfe_fir_float_c(pcm_samples,lfe_samples,filter_coeff,npcmblocks,dec_select);
          free(pcm_samples);
          free(lfe_samples);
          free(filter_coeff);
        
        break;
    }
    // big-arr
    case 1:
    {
          int npcmblocks = 255;
          int dec_select = 255;
          int _len_pcm_samples0 = 65025;
          float * pcm_samples = (float *) malloc(_len_pcm_samples0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_pcm_samples0; _i0++) {
            pcm_samples[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_lfe_samples0 = 65025;
          const float * lfe_samples = (const float *) malloc(_len_lfe_samples0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_lfe_samples0; _i0++) {
            lfe_samples[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_filter_coeff0 = 65025;
          const float * filter_coeff = (const float *) malloc(_len_filter_coeff0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_filter_coeff0; _i0++) {
            filter_coeff[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          lfe_fir_float_c(pcm_samples,lfe_samples,filter_coeff,npcmblocks,dec_select);
          free(pcm_samples);
          free(lfe_samples);
          free(filter_coeff);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int npcmblocks = 10;
          int dec_select = 10;
          int _len_pcm_samples0 = 100;
          float * pcm_samples = (float *) malloc(_len_pcm_samples0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_pcm_samples0; _i0++) {
            pcm_samples[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_lfe_samples0 = 100;
          const float * lfe_samples = (const float *) malloc(_len_lfe_samples0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_lfe_samples0; _i0++) {
            lfe_samples[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_filter_coeff0 = 100;
          const float * filter_coeff = (const float *) malloc(_len_filter_coeff0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_filter_coeff0; _i0++) {
            filter_coeff[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          lfe_fir_float_c(pcm_samples,lfe_samples,filter_coeff,npcmblocks,dec_select);
          free(pcm_samples);
          free(lfe_samples);
          free(filter_coeff);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
