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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int*** tonal_bounds; TYPE_1__* tones; } ;
struct TYPE_4__ {int* amp; int* phs; size_t f_delt; int x_freq; scalar_t__ ph_rot; } ;
typedef  TYPE_1__ DCALbrTone ;
typedef  TYPE_2__ DCALbrDecoder ;

/* Variables and functions */
 int DCA_LBR_TONES ; 
 float* cos_tab ; 
 float** ff_dca_corr_cf ; 
 float* ff_dca_quant_amp ; 
 float* ff_dca_synth_env ; 

__attribute__((used)) static void synth_tones(DCALbrDecoder *s, int ch, float *values,
                        int group, int group_sf, int synth_idx)
{
    int i, start, count;

    if (synth_idx < 0)
        return;

    start =  s->tonal_bounds[group][group_sf][0];
    count = (s->tonal_bounds[group][group_sf][1] - start) & (DCA_LBR_TONES - 1);

    for (i = 0; i < count; i++) {
        DCALbrTone *t = &s->tones[(start + i) & (DCA_LBR_TONES - 1)];

        if (t->amp[ch]) {
            float amp = ff_dca_synth_env[synth_idx] * ff_dca_quant_amp[t->amp[ch]];
            float c = amp * cos_tab[(t->phs[ch]     ) & 255];
            float s = amp * cos_tab[(t->phs[ch] + 64) & 255];
            const float *cf = ff_dca_corr_cf[t->f_delt];
            int x_freq = t->x_freq;

            switch (x_freq) {
            case 0:
                goto p0;
            case 1:
                values[3] += cf[0] * -s;
                values[2] += cf[1] *  c;
                values[1] += cf[2] *  s;
                values[0] += cf[3] * -c;
                goto p1;
            case 2:
                values[2] += cf[0] * -s;
                values[1] += cf[1] *  c;
                values[0] += cf[2] *  s;
                goto p2;
            case 3:
                values[1] += cf[0] * -s;
                values[0] += cf[1] *  c;
                goto p3;
            case 4:
                values[0] += cf[0] * -s;
                goto p4;
            }

            values[x_freq - 5] += cf[ 0] * -s;
        p4: values[x_freq - 4] += cf[ 1] *  c;
        p3: values[x_freq - 3] += cf[ 2] *  s;
        p2: values[x_freq - 2] += cf[ 3] * -c;
        p1: values[x_freq - 1] += cf[ 4] * -s;
        p0: values[x_freq    ] += cf[ 5] *  c;
            values[x_freq + 1] += cf[ 6] *  s;
            values[x_freq + 2] += cf[ 7] * -c;
            values[x_freq + 3] += cf[ 8] * -s;
            values[x_freq + 4] += cf[ 9] *  c;
            values[x_freq + 5] += cf[10] *  s;
        }

        t->phs[ch] += t->ph_rot;
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
          int ch = 100;
          int group = 100;
          int group_sf = 100;
          int synth_idx = 100;
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__tonal_bounds0 = 1;
          s[_i0].tonal_bounds = (int ***) malloc(_len_s__i0__tonal_bounds0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__tonal_bounds0; _j0++) {
            int _len_s__i0__tonal_bounds1 = 1;
            s[_i0].tonal_bounds[_j0] = (int **) malloc(_len_s__i0__tonal_bounds1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__tonal_bounds1; _j1++) {
              int _len_s__i0__tonal_bounds2 = 1;
              s[_i0].tonal_bounds[_j0][_j1] = (int *) malloc(_len_s__i0__tonal_bounds2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__tonal_bounds2; _j2++) {
                s[_i0].tonal_bounds[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_s__i0__tones0 = 1;
          s[_i0].tones = (struct TYPE_4__ *) malloc(_len_s__i0__tones0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__tones0; _j0++) {
              int _len_s__i0__tones_amp0 = 1;
          s[_i0].tones->amp = (int *) malloc(_len_s__i0__tones_amp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__tones_amp0; _j0++) {
            s[_i0].tones->amp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__tones_phs0 = 1;
          s[_i0].tones->phs = (int *) malloc(_len_s__i0__tones_phs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__tones_phs0; _j0++) {
            s[_i0].tones->phs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].tones->f_delt = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].tones->x_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].tones->ph_rot = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_values0 = 1;
          float * values = (float *) malloc(_len_values0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_values0; _i0++) {
            values[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          synth_tones(s,ch,values,group,group_sf,synth_idx);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].tones);
          }
          free(s);
          free(values);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ch = 255;
          int group = 255;
          int group_sf = 255;
          int synth_idx = 255;
          int _len_s0 = 65025;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__tonal_bounds0 = 1;
          s[_i0].tonal_bounds = (int ***) malloc(_len_s__i0__tonal_bounds0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__tonal_bounds0; _j0++) {
            int _len_s__i0__tonal_bounds1 = 1;
            s[_i0].tonal_bounds[_j0] = (int **) malloc(_len_s__i0__tonal_bounds1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__tonal_bounds1; _j1++) {
              int _len_s__i0__tonal_bounds2 = 1;
              s[_i0].tonal_bounds[_j0][_j1] = (int *) malloc(_len_s__i0__tonal_bounds2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__tonal_bounds2; _j2++) {
                s[_i0].tonal_bounds[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_s__i0__tones0 = 1;
          s[_i0].tones = (struct TYPE_4__ *) malloc(_len_s__i0__tones0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__tones0; _j0++) {
              int _len_s__i0__tones_amp0 = 1;
          s[_i0].tones->amp = (int *) malloc(_len_s__i0__tones_amp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__tones_amp0; _j0++) {
            s[_i0].tones->amp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__tones_phs0 = 1;
          s[_i0].tones->phs = (int *) malloc(_len_s__i0__tones_phs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__tones_phs0; _j0++) {
            s[_i0].tones->phs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].tones->f_delt = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].tones->x_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].tones->ph_rot = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_values0 = 65025;
          float * values = (float *) malloc(_len_values0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_values0; _i0++) {
            values[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          synth_tones(s,ch,values,group,group_sf,synth_idx);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].tones);
          }
          free(s);
          free(values);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ch = 10;
          int group = 10;
          int group_sf = 10;
          int synth_idx = 10;
          int _len_s0 = 100;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__tonal_bounds0 = 1;
          s[_i0].tonal_bounds = (int ***) malloc(_len_s__i0__tonal_bounds0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__tonal_bounds0; _j0++) {
            int _len_s__i0__tonal_bounds1 = 1;
            s[_i0].tonal_bounds[_j0] = (int **) malloc(_len_s__i0__tonal_bounds1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__tonal_bounds1; _j1++) {
              int _len_s__i0__tonal_bounds2 = 1;
              s[_i0].tonal_bounds[_j0][_j1] = (int *) malloc(_len_s__i0__tonal_bounds2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__tonal_bounds2; _j2++) {
                s[_i0].tonal_bounds[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_s__i0__tones0 = 1;
          s[_i0].tones = (struct TYPE_4__ *) malloc(_len_s__i0__tones0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__tones0; _j0++) {
              int _len_s__i0__tones_amp0 = 1;
          s[_i0].tones->amp = (int *) malloc(_len_s__i0__tones_amp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__tones_amp0; _j0++) {
            s[_i0].tones->amp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__tones_phs0 = 1;
          s[_i0].tones->phs = (int *) malloc(_len_s__i0__tones_phs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__tones_phs0; _j0++) {
            s[_i0].tones->phs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].tones->f_delt = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].tones->x_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].tones->ph_rot = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_values0 = 100;
          float * values = (float *) malloc(_len_values0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_values0; _i0++) {
            values[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          synth_tones(s,ch,values,group,group_sf,synth_idx);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].tones);
          }
          free(s);
          free(values);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
