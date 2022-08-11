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
struct TYPE_3__ {float** prev_samples; } ;
typedef  TYPE_1__ obs_volmeter_t ;

/* Variables and functions */

__attribute__((used)) static void volmeter_process_peak_last_samples(obs_volmeter_t *volmeter,
		int channel_nr, float *samples, size_t nr_samples)
{
	/* Take the last 4 samples that need to be used for the next peak
	 * calculation. If there are less than 4 samples in total the new
	 * samples shift out the old samples. */

	switch (nr_samples) {
	case 0:
		break;
	case 1:
		volmeter->prev_samples[channel_nr][0] =
				volmeter->prev_samples[channel_nr][1];
		volmeter->prev_samples[channel_nr][1] =
				volmeter->prev_samples[channel_nr][2];
		volmeter->prev_samples[channel_nr][2] =
				volmeter->prev_samples[channel_nr][3];
		volmeter->prev_samples[channel_nr][3] = samples[nr_samples-1];
		break;
	case 2:
		volmeter->prev_samples[channel_nr][0] =
				volmeter->prev_samples[channel_nr][2];
		volmeter->prev_samples[channel_nr][1] =
				volmeter->prev_samples[channel_nr][3];
		volmeter->prev_samples[channel_nr][2] = samples[nr_samples-2];
		volmeter->prev_samples[channel_nr][3] = samples[nr_samples-1];
		break;
	case 3:
		volmeter->prev_samples[channel_nr][0] =
				volmeter->prev_samples[channel_nr][3];
		volmeter->prev_samples[channel_nr][1] = samples[nr_samples-3];
		volmeter->prev_samples[channel_nr][2] = samples[nr_samples-2];
		volmeter->prev_samples[channel_nr][3] = samples[nr_samples-1];
		break;
	default:
		volmeter->prev_samples[channel_nr][0] = samples[nr_samples-4];
		volmeter->prev_samples[channel_nr][1] = samples[nr_samples-3];
		volmeter->prev_samples[channel_nr][2] = samples[nr_samples-2];
		volmeter->prev_samples[channel_nr][3] = samples[nr_samples-1];
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
          int channel_nr = 100;
          unsigned long nr_samples = 100;
          int _len_volmeter0 = 1;
          struct TYPE_3__ * volmeter = (struct TYPE_3__ *) malloc(_len_volmeter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_volmeter0; _i0++) {
              int _len_volmeter__i0__prev_samples0 = 1;
          volmeter[_i0].prev_samples = (float **) malloc(_len_volmeter__i0__prev_samples0*sizeof(float *));
          for(int _j0 = 0; _j0 < _len_volmeter__i0__prev_samples0; _j0++) {
            int _len_volmeter__i0__prev_samples1 = 1;
            volmeter[_i0].prev_samples[_j0] = (float *) malloc(_len_volmeter__i0__prev_samples1*sizeof(float));
            for(int _j1 = 0; _j1 < _len_volmeter__i0__prev_samples1; _j1++) {
              volmeter[_i0].prev_samples[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          }
          int _len_samples0 = 1;
          float * samples = (float *) malloc(_len_samples0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_samples0; _i0++) {
            samples[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          volmeter_process_peak_last_samples(volmeter,channel_nr,samples,nr_samples);
          for(int _aux = 0; _aux < _len_volmeter0; _aux++) {
          free(*(volmeter[_aux].prev_samples));
        free(volmeter[_aux].prev_samples);
          }
          free(volmeter);
          free(samples);
        
        break;
    }
    // big-arr
    case 1:
    {
          int channel_nr = 255;
          unsigned long nr_samples = 255;
          int _len_volmeter0 = 65025;
          struct TYPE_3__ * volmeter = (struct TYPE_3__ *) malloc(_len_volmeter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_volmeter0; _i0++) {
              int _len_volmeter__i0__prev_samples0 = 1;
          volmeter[_i0].prev_samples = (float **) malloc(_len_volmeter__i0__prev_samples0*sizeof(float *));
          for(int _j0 = 0; _j0 < _len_volmeter__i0__prev_samples0; _j0++) {
            int _len_volmeter__i0__prev_samples1 = 1;
            volmeter[_i0].prev_samples[_j0] = (float *) malloc(_len_volmeter__i0__prev_samples1*sizeof(float));
            for(int _j1 = 0; _j1 < _len_volmeter__i0__prev_samples1; _j1++) {
              volmeter[_i0].prev_samples[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          }
          int _len_samples0 = 65025;
          float * samples = (float *) malloc(_len_samples0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_samples0; _i0++) {
            samples[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          volmeter_process_peak_last_samples(volmeter,channel_nr,samples,nr_samples);
          for(int _aux = 0; _aux < _len_volmeter0; _aux++) {
          free(*(volmeter[_aux].prev_samples));
        free(volmeter[_aux].prev_samples);
          }
          free(volmeter);
          free(samples);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int channel_nr = 10;
          unsigned long nr_samples = 10;
          int _len_volmeter0 = 100;
          struct TYPE_3__ * volmeter = (struct TYPE_3__ *) malloc(_len_volmeter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_volmeter0; _i0++) {
              int _len_volmeter__i0__prev_samples0 = 1;
          volmeter[_i0].prev_samples = (float **) malloc(_len_volmeter__i0__prev_samples0*sizeof(float *));
          for(int _j0 = 0; _j0 < _len_volmeter__i0__prev_samples0; _j0++) {
            int _len_volmeter__i0__prev_samples1 = 1;
            volmeter[_i0].prev_samples[_j0] = (float *) malloc(_len_volmeter__i0__prev_samples1*sizeof(float));
            for(int _j1 = 0; _j1 < _len_volmeter__i0__prev_samples1; _j1++) {
              volmeter[_i0].prev_samples[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          }
          int _len_samples0 = 100;
          float * samples = (float *) malloc(_len_samples0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_samples0; _i0++) {
            samples[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          volmeter_process_peak_last_samples(volmeter,channel_nr,samples,nr_samples);
          for(int _aux = 0; _aux < _len_volmeter0; _aux++) {
          free(*(volmeter[_aux].prev_samples));
        free(volmeter[_aux].prev_samples);
          }
          free(volmeter);
          free(samples);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
