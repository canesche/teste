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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
typedef  int /*<<< orphan*/  int16_t ;
struct TYPE_6__ {int global_gain; int scalefac_scale; size_t preflag; int long_end; int const* scale_factors; int short_start; int* subblock_gain; } ;
struct TYPE_5__ {size_t sample_rate_index; } ;
typedef  TYPE_1__ MPADecodeContext ;
typedef  TYPE_2__ GranuleDef ;

/* Variables and functions */
 int** band_size_long ; 
 int** band_size_short ; 
 int** mpa_pretab ; 

__attribute__((used)) static void exponents_from_scale_factors(MPADecodeContext *s, GranuleDef *g,
                                         int16_t *exponents)
{
    const uint8_t *bstab, *pretab;
    int len, i, j, k, l, v0, shift, gain, gains[3];
    int16_t *exp_ptr;

    exp_ptr = exponents;
    gain    = g->global_gain - 210;
    shift   = g->scalefac_scale + 1;

    bstab  = band_size_long[s->sample_rate_index];
    pretab = mpa_pretab[g->preflag];
    for (i = 0; i < g->long_end; i++) {
        v0 = gain - ((g->scale_factors[i] + pretab[i]) << shift) + 400;
        len = bstab[i];
        for (j = len; j > 0; j--)
            *exp_ptr++ = v0;
    }

    if (g->short_start < 13) {
        bstab    = band_size_short[s->sample_rate_index];
        gains[0] = gain - (g->subblock_gain[0] << 3);
        gains[1] = gain - (g->subblock_gain[1] << 3);
        gains[2] = gain - (g->subblock_gain[2] << 3);
        k        = g->long_end;
        for (i = g->short_start; i < 13; i++) {
            len = bstab[i];
            for (l = 0; l < 3; l++) {
                v0 = gains[l] - (g->scale_factors[k++] << shift) + 400;
                for (j = len; j > 0; j--)
                    *exp_ptr++ = v0;
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
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].sample_rate_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_g0 = 1;
          struct TYPE_6__ * g = (struct TYPE_6__ *) malloc(_len_g0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_g0; _i0++) {
            g[_i0].global_gain = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].scalefac_scale = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].preflag = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].long_end = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_g__i0__scale_factors0 = 1;
          g[_i0].scale_factors = (const int *) malloc(_len_g__i0__scale_factors0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_g__i0__scale_factors0; _j0++) {
            g[_i0].scale_factors[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        g[_i0].short_start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_g__i0__subblock_gain0 = 1;
          g[_i0].subblock_gain = (int *) malloc(_len_g__i0__subblock_gain0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_g__i0__subblock_gain0; _j0++) {
            g[_i0].subblock_gain[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_exponents0 = 1;
          int * exponents = (int *) malloc(_len_exponents0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_exponents0; _i0++) {
            exponents[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          exponents_from_scale_factors(s,g,exponents);
          free(s);
          for(int _aux = 0; _aux < _len_g0; _aux++) {
          free(g[_aux].scale_factors);
          }
          for(int _aux = 0; _aux < _len_g0; _aux++) {
          free(g[_aux].subblock_gain);
          }
          free(g);
          free(exponents);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].sample_rate_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_g0 = 65025;
          struct TYPE_6__ * g = (struct TYPE_6__ *) malloc(_len_g0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_g0; _i0++) {
            g[_i0].global_gain = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].scalefac_scale = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].preflag = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].long_end = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_g__i0__scale_factors0 = 1;
          g[_i0].scale_factors = (const int *) malloc(_len_g__i0__scale_factors0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_g__i0__scale_factors0; _j0++) {
            g[_i0].scale_factors[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        g[_i0].short_start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_g__i0__subblock_gain0 = 1;
          g[_i0].subblock_gain = (int *) malloc(_len_g__i0__subblock_gain0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_g__i0__subblock_gain0; _j0++) {
            g[_i0].subblock_gain[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_exponents0 = 65025;
          int * exponents = (int *) malloc(_len_exponents0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_exponents0; _i0++) {
            exponents[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          exponents_from_scale_factors(s,g,exponents);
          free(s);
          for(int _aux = 0; _aux < _len_g0; _aux++) {
          free(g[_aux].scale_factors);
          }
          for(int _aux = 0; _aux < _len_g0; _aux++) {
          free(g[_aux].subblock_gain);
          }
          free(g);
          free(exponents);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].sample_rate_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_g0 = 100;
          struct TYPE_6__ * g = (struct TYPE_6__ *) malloc(_len_g0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_g0; _i0++) {
            g[_i0].global_gain = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].scalefac_scale = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].preflag = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].long_end = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_g__i0__scale_factors0 = 1;
          g[_i0].scale_factors = (const int *) malloc(_len_g__i0__scale_factors0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_g__i0__scale_factors0; _j0++) {
            g[_i0].scale_factors[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        g[_i0].short_start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_g__i0__subblock_gain0 = 1;
          g[_i0].subblock_gain = (int *) malloc(_len_g__i0__subblock_gain0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_g__i0__subblock_gain0; _j0++) {
            g[_i0].subblock_gain[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_exponents0 = 100;
          int * exponents = (int *) malloc(_len_exponents0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_exponents0; _i0++) {
            exponents[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          exponents_from_scale_factors(s,g,exponents);
          free(s);
          for(int _aux = 0; _aux < _len_g0; _aux++) {
          free(g[_aux].scale_factors);
          }
          for(int _aux = 0; _aux < _len_g0; _aux++) {
          free(g[_aux].subblock_gain);
          }
          free(g);
          free(exponents);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
