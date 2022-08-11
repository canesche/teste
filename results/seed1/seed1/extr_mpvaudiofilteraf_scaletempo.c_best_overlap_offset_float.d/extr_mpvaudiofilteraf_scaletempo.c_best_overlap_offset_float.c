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
struct priv {float* table_window; float* buf_overlap; int num_channels; float* buf_pre_corr; int samples_overlap; int frames_search; scalar_t__ buf_queue; } ;

/* Variables and functions */
 float INT_MIN ; 

__attribute__((used)) static int best_overlap_offset_float(struct priv *s)
{
    float best_corr = INT_MIN;
    int best_off = 0;

    float *pw  = s->table_window;
    float *po  = s->buf_overlap;
    po += s->num_channels;
    float *ppc = s->buf_pre_corr;
    for (int i = s->num_channels; i < s->samples_overlap; i++)
        *ppc++ = *pw++ **po++;

    float *search_start = (float *)s->buf_queue + s->num_channels;
    for (int off = 0; off < s->frames_search; off++) {
        float corr = 0;
        float *ps = search_start;
        ppc = s->buf_pre_corr;
        for (int i = s->num_channels; i < s->samples_overlap; i++)
            corr += *ppc++ **ps++;
        if (corr > best_corr) {
            best_corr = corr;
            best_off  = off;
        }
        search_start += s->num_channels;
    }

    return best_off * 4 * s->num_channels;
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
          int _len_s0 = 1;
          struct priv * s = (struct priv *) malloc(_len_s0*sizeof(struct priv));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__table_window0 = 1;
          s[_i0].table_window = (float *) malloc(_len_s__i0__table_window0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_s__i0__table_window0; _j0++) {
            s[_i0].table_window[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_s__i0__buf_overlap0 = 1;
          s[_i0].buf_overlap = (float *) malloc(_len_s__i0__buf_overlap0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_s__i0__buf_overlap0; _j0++) {
            s[_i0].buf_overlap[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        s[_i0].num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__buf_pre_corr0 = 1;
          s[_i0].buf_pre_corr = (float *) malloc(_len_s__i0__buf_pre_corr0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_s__i0__buf_pre_corr0; _j0++) {
            s[_i0].buf_pre_corr[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        s[_i0].samples_overlap = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].frames_search = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].buf_queue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = best_overlap_offset_float(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].table_window);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf_overlap);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf_pre_corr);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct priv * s = (struct priv *) malloc(_len_s0*sizeof(struct priv));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__table_window0 = 1;
          s[_i0].table_window = (float *) malloc(_len_s__i0__table_window0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_s__i0__table_window0; _j0++) {
            s[_i0].table_window[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_s__i0__buf_overlap0 = 1;
          s[_i0].buf_overlap = (float *) malloc(_len_s__i0__buf_overlap0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_s__i0__buf_overlap0; _j0++) {
            s[_i0].buf_overlap[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        s[_i0].num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__buf_pre_corr0 = 1;
          s[_i0].buf_pre_corr = (float *) malloc(_len_s__i0__buf_pre_corr0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_s__i0__buf_pre_corr0; _j0++) {
            s[_i0].buf_pre_corr[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        s[_i0].samples_overlap = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].frames_search = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].buf_queue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = best_overlap_offset_float(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].table_window);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf_overlap);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf_pre_corr);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct priv * s = (struct priv *) malloc(_len_s0*sizeof(struct priv));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__table_window0 = 1;
          s[_i0].table_window = (float *) malloc(_len_s__i0__table_window0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_s__i0__table_window0; _j0++) {
            s[_i0].table_window[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_s__i0__buf_overlap0 = 1;
          s[_i0].buf_overlap = (float *) malloc(_len_s__i0__buf_overlap0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_s__i0__buf_overlap0; _j0++) {
            s[_i0].buf_overlap[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        s[_i0].num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__buf_pre_corr0 = 1;
          s[_i0].buf_pre_corr = (float *) malloc(_len_s__i0__buf_pre_corr0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_s__i0__buf_pre_corr0; _j0++) {
            s[_i0].buf_pre_corr[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        s[_i0].samples_overlap = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].frames_search = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].buf_queue = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = best_overlap_offset_float(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].table_window);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf_overlap);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].buf_pre_corr);
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
