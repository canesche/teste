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
struct TYPE_3__ {float*** audio_output_buf; } ;
typedef  TYPE_1__ obs_source_t ;

/* Variables and functions */
 int AUDIO_OUTPUT_FRAMES ; 

__attribute__((used)) static inline void multiply_vol_data(obs_source_t *source, size_t mix,
		size_t channels, float *vol_data)
{
	for (size_t ch = 0; ch < channels; ch++) {
		register float *out = source->audio_output_buf[mix][ch];
		register float *end = out + AUDIO_OUTPUT_FRAMES;
		register float *vol = vol_data;

		while (out < end)
			*(out++) *= *(vol++);
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
          unsigned long mix = 100;
          unsigned long channels = 100;
          int _len_source0 = 1;
          struct TYPE_3__ * source = (struct TYPE_3__ *) malloc(_len_source0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_source0; _i0++) {
              int _len_source__i0__audio_output_buf0 = 1;
          source[_i0].audio_output_buf = (float ***) malloc(_len_source__i0__audio_output_buf0*sizeof(float **));
          for(int _j0 = 0; _j0 < _len_source__i0__audio_output_buf0; _j0++) {
            int _len_source__i0__audio_output_buf1 = 1;
            source[_i0].audio_output_buf[_j0] = (float **) malloc(_len_source__i0__audio_output_buf1*sizeof(float *));
            for(int _j1 = 0; _j1 < _len_source__i0__audio_output_buf1; _j1++) {
              int _len_source__i0__audio_output_buf2 = 1;
              source[_i0].audio_output_buf[_j0][_j1] = (float *) malloc(_len_source__i0__audio_output_buf2*sizeof(float));
              for(int _j2 = 0; _j2 < _len_source__i0__audio_output_buf2; _j2++) {
                source[_i0].audio_output_buf[_j0][_j1][_j2] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
              }
            }
          }
          }
          int _len_vol_data0 = 1;
          float * vol_data = (float *) malloc(_len_vol_data0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_vol_data0; _i0++) {
            vol_data[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          multiply_vol_data(source,mix,channels,vol_data);
          for(int _aux = 0; _aux < _len_source0; _aux++) {
          }
          free(source);
          free(vol_data);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long mix = 255;
          unsigned long channels = 255;
          int _len_source0 = 65025;
          struct TYPE_3__ * source = (struct TYPE_3__ *) malloc(_len_source0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_source0; _i0++) {
              int _len_source__i0__audio_output_buf0 = 1;
          source[_i0].audio_output_buf = (float ***) malloc(_len_source__i0__audio_output_buf0*sizeof(float **));
          for(int _j0 = 0; _j0 < _len_source__i0__audio_output_buf0; _j0++) {
            int _len_source__i0__audio_output_buf1 = 1;
            source[_i0].audio_output_buf[_j0] = (float **) malloc(_len_source__i0__audio_output_buf1*sizeof(float *));
            for(int _j1 = 0; _j1 < _len_source__i0__audio_output_buf1; _j1++) {
              int _len_source__i0__audio_output_buf2 = 1;
              source[_i0].audio_output_buf[_j0][_j1] = (float *) malloc(_len_source__i0__audio_output_buf2*sizeof(float));
              for(int _j2 = 0; _j2 < _len_source__i0__audio_output_buf2; _j2++) {
                source[_i0].audio_output_buf[_j0][_j1][_j2] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
              }
            }
          }
          }
          int _len_vol_data0 = 65025;
          float * vol_data = (float *) malloc(_len_vol_data0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_vol_data0; _i0++) {
            vol_data[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          multiply_vol_data(source,mix,channels,vol_data);
          for(int _aux = 0; _aux < _len_source0; _aux++) {
          }
          free(source);
          free(vol_data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long mix = 10;
          unsigned long channels = 10;
          int _len_source0 = 100;
          struct TYPE_3__ * source = (struct TYPE_3__ *) malloc(_len_source0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_source0; _i0++) {
              int _len_source__i0__audio_output_buf0 = 1;
          source[_i0].audio_output_buf = (float ***) malloc(_len_source__i0__audio_output_buf0*sizeof(float **));
          for(int _j0 = 0; _j0 < _len_source__i0__audio_output_buf0; _j0++) {
            int _len_source__i0__audio_output_buf1 = 1;
            source[_i0].audio_output_buf[_j0] = (float **) malloc(_len_source__i0__audio_output_buf1*sizeof(float *));
            for(int _j1 = 0; _j1 < _len_source__i0__audio_output_buf1; _j1++) {
              int _len_source__i0__audio_output_buf2 = 1;
              source[_i0].audio_output_buf[_j0][_j1] = (float *) malloc(_len_source__i0__audio_output_buf2*sizeof(float));
              for(int _j2 = 0; _j2 < _len_source__i0__audio_output_buf2; _j2++) {
                source[_i0].audio_output_buf[_j0][_j1][_j2] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
              }
            }
          }
          }
          int _len_vol_data0 = 100;
          float * vol_data = (float *) malloc(_len_vol_data0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_vol_data0; _i0++) {
            vol_data[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          multiply_vol_data(source,mix,channels,vol_data);
          for(int _aux = 0; _aux < _len_source0; _aux++) {
          }
          free(source);
          free(vol_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
