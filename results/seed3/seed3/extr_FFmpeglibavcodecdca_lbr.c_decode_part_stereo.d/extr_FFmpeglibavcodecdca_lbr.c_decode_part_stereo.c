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
typedef  size_t uint8_t ;
struct TYPE_3__ {int min_mono_subband; int nsubbands; size_t*** part_stereo; float*** time_samples; unsigned int* ch_pres; } ;
typedef  TYPE_1__ DCALbrDecoder ;

/* Variables and functions */
 float* ff_dca_st_coeff ; 

__attribute__((used)) static void decode_part_stereo(DCALbrDecoder *s, int ch1, int ch2)
{
    int i, ch, sb, sf;

    for (ch = ch1; ch <= ch2; ch++) {
        for (sb = s->min_mono_subband; sb < s->nsubbands; sb++) {
            uint8_t *pt_st = s->part_stereo[ch][(sb - s->min_mono_subband) / 4];
            float *samples = s->time_samples[ch][sb];

            if (s->ch_pres[ch2] & (1U << sb))
                continue;

            for (sf = 1; sf <= 4; sf++, samples += 32) {
                float prev = ff_dca_st_coeff[pt_st[sf - 1]];
                float next = ff_dca_st_coeff[pt_st[sf    ]];

                for (i = 0; i < 32; i++)
                    samples[i] *= (32 - i) * prev + i * next;
            }
        }
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
          int ch1 = 100;
          int ch2 = 100;
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].min_mono_subband = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].nsubbands = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__part_stereo0 = 1;
          s[_i0].part_stereo = (unsigned long ***) malloc(_len_s__i0__part_stereo0*sizeof(unsigned long **));
          for(int _j0 = 0; _j0 < _len_s__i0__part_stereo0; _j0++) {
            int _len_s__i0__part_stereo1 = 1;
            s[_i0].part_stereo[_j0] = (unsigned long **) malloc(_len_s__i0__part_stereo1*sizeof(unsigned long *));
            for(int _j1 = 0; _j1 < _len_s__i0__part_stereo1; _j1++) {
              int _len_s__i0__part_stereo2 = 1;
              s[_i0].part_stereo[_j0][_j1] = (unsigned long *) malloc(_len_s__i0__part_stereo2*sizeof(unsigned long));
              for(int _j2 = 0; _j2 < _len_s__i0__part_stereo2; _j2++) {
                s[_i0].part_stereo[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_s__i0__time_samples0 = 1;
          s[_i0].time_samples = (float ***) malloc(_len_s__i0__time_samples0*sizeof(float **));
          for(int _j0 = 0; _j0 < _len_s__i0__time_samples0; _j0++) {
            int _len_s__i0__time_samples1 = 1;
            s[_i0].time_samples[_j0] = (float **) malloc(_len_s__i0__time_samples1*sizeof(float *));
            for(int _j1 = 0; _j1 < _len_s__i0__time_samples1; _j1++) {
              int _len_s__i0__time_samples2 = 1;
              s[_i0].time_samples[_j0][_j1] = (float *) malloc(_len_s__i0__time_samples2*sizeof(float));
              for(int _j2 = 0; _j2 < _len_s__i0__time_samples2; _j2++) {
                s[_i0].time_samples[_j0][_j1][_j2] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
              }
            }
          }
          int _len_s__i0__ch_pres0 = 1;
          s[_i0].ch_pres = (unsigned int *) malloc(_len_s__i0__ch_pres0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_s__i0__ch_pres0; _j0++) {
            s[_i0].ch_pres[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          decode_part_stereo(s,ch1,ch2);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].ch_pres);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ch1 = 255;
          int ch2 = 255;
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].min_mono_subband = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].nsubbands = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__part_stereo0 = 1;
          s[_i0].part_stereo = (unsigned long ***) malloc(_len_s__i0__part_stereo0*sizeof(unsigned long **));
          for(int _j0 = 0; _j0 < _len_s__i0__part_stereo0; _j0++) {
            int _len_s__i0__part_stereo1 = 1;
            s[_i0].part_stereo[_j0] = (unsigned long **) malloc(_len_s__i0__part_stereo1*sizeof(unsigned long *));
            for(int _j1 = 0; _j1 < _len_s__i0__part_stereo1; _j1++) {
              int _len_s__i0__part_stereo2 = 1;
              s[_i0].part_stereo[_j0][_j1] = (unsigned long *) malloc(_len_s__i0__part_stereo2*sizeof(unsigned long));
              for(int _j2 = 0; _j2 < _len_s__i0__part_stereo2; _j2++) {
                s[_i0].part_stereo[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_s__i0__time_samples0 = 1;
          s[_i0].time_samples = (float ***) malloc(_len_s__i0__time_samples0*sizeof(float **));
          for(int _j0 = 0; _j0 < _len_s__i0__time_samples0; _j0++) {
            int _len_s__i0__time_samples1 = 1;
            s[_i0].time_samples[_j0] = (float **) malloc(_len_s__i0__time_samples1*sizeof(float *));
            for(int _j1 = 0; _j1 < _len_s__i0__time_samples1; _j1++) {
              int _len_s__i0__time_samples2 = 1;
              s[_i0].time_samples[_j0][_j1] = (float *) malloc(_len_s__i0__time_samples2*sizeof(float));
              for(int _j2 = 0; _j2 < _len_s__i0__time_samples2; _j2++) {
                s[_i0].time_samples[_j0][_j1][_j2] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
              }
            }
          }
          int _len_s__i0__ch_pres0 = 1;
          s[_i0].ch_pres = (unsigned int *) malloc(_len_s__i0__ch_pres0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_s__i0__ch_pres0; _j0++) {
            s[_i0].ch_pres[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          decode_part_stereo(s,ch1,ch2);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].ch_pres);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ch1 = 10;
          int ch2 = 10;
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].min_mono_subband = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].nsubbands = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__part_stereo0 = 1;
          s[_i0].part_stereo = (unsigned long ***) malloc(_len_s__i0__part_stereo0*sizeof(unsigned long **));
          for(int _j0 = 0; _j0 < _len_s__i0__part_stereo0; _j0++) {
            int _len_s__i0__part_stereo1 = 1;
            s[_i0].part_stereo[_j0] = (unsigned long **) malloc(_len_s__i0__part_stereo1*sizeof(unsigned long *));
            for(int _j1 = 0; _j1 < _len_s__i0__part_stereo1; _j1++) {
              int _len_s__i0__part_stereo2 = 1;
              s[_i0].part_stereo[_j0][_j1] = (unsigned long *) malloc(_len_s__i0__part_stereo2*sizeof(unsigned long));
              for(int _j2 = 0; _j2 < _len_s__i0__part_stereo2; _j2++) {
                s[_i0].part_stereo[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_s__i0__time_samples0 = 1;
          s[_i0].time_samples = (float ***) malloc(_len_s__i0__time_samples0*sizeof(float **));
          for(int _j0 = 0; _j0 < _len_s__i0__time_samples0; _j0++) {
            int _len_s__i0__time_samples1 = 1;
            s[_i0].time_samples[_j0] = (float **) malloc(_len_s__i0__time_samples1*sizeof(float *));
            for(int _j1 = 0; _j1 < _len_s__i0__time_samples1; _j1++) {
              int _len_s__i0__time_samples2 = 1;
              s[_i0].time_samples[_j0][_j1] = (float *) malloc(_len_s__i0__time_samples2*sizeof(float));
              for(int _j2 = 0; _j2 < _len_s__i0__time_samples2; _j2++) {
                s[_i0].time_samples[_j0][_j1][_j2] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
              }
            }
          }
          int _len_s__i0__ch_pres0 = 1;
          s[_i0].ch_pres = (unsigned int *) malloc(_len_s__i0__ch_pres0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_s__i0__ch_pres0; _j0++) {
            s[_i0].ch_pres[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          decode_part_stereo(s,ch1,ch2);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].ch_pres);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
