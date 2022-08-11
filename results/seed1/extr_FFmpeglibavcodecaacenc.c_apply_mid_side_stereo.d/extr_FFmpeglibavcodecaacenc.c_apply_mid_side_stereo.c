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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {TYPE_1__* ch; scalar_t__* is_mask; int /*<<< orphan*/ * ms_mask; int /*<<< orphan*/  common_window; } ;
struct TYPE_6__ {int num_windows; int* group_len; int num_swb; int* swb_sizes; } ;
struct TYPE_5__ {scalar_t__* band_type; float* coeffs; TYPE_2__ ics; } ;
typedef  TYPE_2__ IndividualChannelStream ;
typedef  TYPE_3__ ChannelElement ;

/* Variables and functions */
 scalar_t__ NOISE_BT ; 

__attribute__((used)) static void apply_mid_side_stereo(ChannelElement *cpe)
{
    int w, w2, g, i;
    IndividualChannelStream *ics = &cpe->ch[0].ics;
    if (!cpe->common_window)
        return;
    for (w = 0; w < ics->num_windows; w += ics->group_len[w]) {
        for (w2 =  0; w2 < ics->group_len[w]; w2++) {
            int start = (w+w2) * 128;
            for (g = 0; g < ics->num_swb; g++) {
                /* ms_mask can be used for other purposes in PNS and I/S,
                 * so must not apply M/S if any band uses either, even if
                 * ms_mask is set.
                 */
                if (!cpe->ms_mask[w*16 + g] || cpe->is_mask[w*16 + g]
                    || cpe->ch[0].band_type[w*16 + g] >= NOISE_BT
                    || cpe->ch[1].band_type[w*16 + g] >= NOISE_BT) {
                    start += ics->swb_sizes[g];
                    continue;
                }
                for (i = 0; i < ics->swb_sizes[g]; i++) {
                    float L = (cpe->ch[0].coeffs[start+i] + cpe->ch[1].coeffs[start+i]) * 0.5f;
                    float R = L - cpe->ch[1].coeffs[start+i];
                    cpe->ch[0].coeffs[start+i] = L;
                    cpe->ch[1].coeffs[start+i] = R;
                }
                start += ics->swb_sizes[g];
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
          int _len_cpe0 = 1;
          struct TYPE_7__ * cpe = (struct TYPE_7__ *) malloc(_len_cpe0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_cpe0; _i0++) {
              int _len_cpe__i0__ch0 = 1;
          cpe[_i0].ch = (struct TYPE_5__ *) malloc(_len_cpe__i0__ch0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cpe__i0__ch0; _j0++) {
              int _len_cpe__i0__ch_band_type0 = 1;
          cpe[_i0].ch->band_type = (long *) malloc(_len_cpe__i0__ch_band_type0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_cpe__i0__ch_band_type0; _j0++) {
            cpe[_i0].ch->band_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cpe__i0__ch_coeffs0 = 1;
          cpe[_i0].ch->coeffs = (float *) malloc(_len_cpe__i0__ch_coeffs0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_cpe__i0__ch_coeffs0; _j0++) {
            cpe[_i0].ch->coeffs[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        cpe[_i0].ch->ics.num_windows = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cpe__i0__ch_ics_group_len0 = 1;
          cpe[_i0].ch->ics.group_len = (int *) malloc(_len_cpe__i0__ch_ics_group_len0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cpe__i0__ch_ics_group_len0; _j0++) {
            cpe[_i0].ch->ics.group_len[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cpe[_i0].ch->ics.num_swb = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cpe__i0__ch_ics_swb_sizes0 = 1;
          cpe[_i0].ch->ics.swb_sizes = (int *) malloc(_len_cpe__i0__ch_ics_swb_sizes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cpe__i0__ch_ics_swb_sizes0; _j0++) {
            cpe[_i0].ch->ics.swb_sizes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cpe__i0__is_mask0 = 1;
          cpe[_i0].is_mask = (long *) malloc(_len_cpe__i0__is_mask0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_cpe__i0__is_mask0; _j0++) {
            cpe[_i0].is_mask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cpe__i0__ms_mask0 = 1;
          cpe[_i0].ms_mask = (int *) malloc(_len_cpe__i0__ms_mask0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cpe__i0__ms_mask0; _j0++) {
            cpe[_i0].ms_mask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cpe[_i0].common_window = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          apply_mid_side_stereo(cpe);
          for(int _aux = 0; _aux < _len_cpe0; _aux++) {
          free(cpe[_aux].ch);
          }
          for(int _aux = 0; _aux < _len_cpe0; _aux++) {
          free(cpe[_aux].is_mask);
          }
          for(int _aux = 0; _aux < _len_cpe0; _aux++) {
          free(cpe[_aux].ms_mask);
          }
          free(cpe);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cpe0 = 65025;
          struct TYPE_7__ * cpe = (struct TYPE_7__ *) malloc(_len_cpe0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_cpe0; _i0++) {
              int _len_cpe__i0__ch0 = 1;
          cpe[_i0].ch = (struct TYPE_5__ *) malloc(_len_cpe__i0__ch0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cpe__i0__ch0; _j0++) {
              int _len_cpe__i0__ch_band_type0 = 1;
          cpe[_i0].ch->band_type = (long *) malloc(_len_cpe__i0__ch_band_type0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_cpe__i0__ch_band_type0; _j0++) {
            cpe[_i0].ch->band_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cpe__i0__ch_coeffs0 = 1;
          cpe[_i0].ch->coeffs = (float *) malloc(_len_cpe__i0__ch_coeffs0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_cpe__i0__ch_coeffs0; _j0++) {
            cpe[_i0].ch->coeffs[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        cpe[_i0].ch->ics.num_windows = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cpe__i0__ch_ics_group_len0 = 1;
          cpe[_i0].ch->ics.group_len = (int *) malloc(_len_cpe__i0__ch_ics_group_len0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cpe__i0__ch_ics_group_len0; _j0++) {
            cpe[_i0].ch->ics.group_len[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cpe[_i0].ch->ics.num_swb = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cpe__i0__ch_ics_swb_sizes0 = 1;
          cpe[_i0].ch->ics.swb_sizes = (int *) malloc(_len_cpe__i0__ch_ics_swb_sizes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cpe__i0__ch_ics_swb_sizes0; _j0++) {
            cpe[_i0].ch->ics.swb_sizes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cpe__i0__is_mask0 = 1;
          cpe[_i0].is_mask = (long *) malloc(_len_cpe__i0__is_mask0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_cpe__i0__is_mask0; _j0++) {
            cpe[_i0].is_mask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cpe__i0__ms_mask0 = 1;
          cpe[_i0].ms_mask = (int *) malloc(_len_cpe__i0__ms_mask0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cpe__i0__ms_mask0; _j0++) {
            cpe[_i0].ms_mask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cpe[_i0].common_window = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          apply_mid_side_stereo(cpe);
          for(int _aux = 0; _aux < _len_cpe0; _aux++) {
          free(cpe[_aux].ch);
          }
          for(int _aux = 0; _aux < _len_cpe0; _aux++) {
          free(cpe[_aux].is_mask);
          }
          for(int _aux = 0; _aux < _len_cpe0; _aux++) {
          free(cpe[_aux].ms_mask);
          }
          free(cpe);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cpe0 = 100;
          struct TYPE_7__ * cpe = (struct TYPE_7__ *) malloc(_len_cpe0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_cpe0; _i0++) {
              int _len_cpe__i0__ch0 = 1;
          cpe[_i0].ch = (struct TYPE_5__ *) malloc(_len_cpe__i0__ch0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cpe__i0__ch0; _j0++) {
              int _len_cpe__i0__ch_band_type0 = 1;
          cpe[_i0].ch->band_type = (long *) malloc(_len_cpe__i0__ch_band_type0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_cpe__i0__ch_band_type0; _j0++) {
            cpe[_i0].ch->band_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cpe__i0__ch_coeffs0 = 1;
          cpe[_i0].ch->coeffs = (float *) malloc(_len_cpe__i0__ch_coeffs0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_cpe__i0__ch_coeffs0; _j0++) {
            cpe[_i0].ch->coeffs[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        cpe[_i0].ch->ics.num_windows = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cpe__i0__ch_ics_group_len0 = 1;
          cpe[_i0].ch->ics.group_len = (int *) malloc(_len_cpe__i0__ch_ics_group_len0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cpe__i0__ch_ics_group_len0; _j0++) {
            cpe[_i0].ch->ics.group_len[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cpe[_i0].ch->ics.num_swb = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cpe__i0__ch_ics_swb_sizes0 = 1;
          cpe[_i0].ch->ics.swb_sizes = (int *) malloc(_len_cpe__i0__ch_ics_swb_sizes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cpe__i0__ch_ics_swb_sizes0; _j0++) {
            cpe[_i0].ch->ics.swb_sizes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cpe__i0__is_mask0 = 1;
          cpe[_i0].is_mask = (long *) malloc(_len_cpe__i0__is_mask0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_cpe__i0__is_mask0; _j0++) {
            cpe[_i0].is_mask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cpe__i0__ms_mask0 = 1;
          cpe[_i0].ms_mask = (int *) malloc(_len_cpe__i0__ms_mask0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cpe__i0__ms_mask0; _j0++) {
            cpe[_i0].ms_mask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cpe[_i0].common_window = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          apply_mid_side_stereo(cpe);
          for(int _aux = 0; _aux < _len_cpe0; _aux++) {
          free(cpe[_aux].ch);
          }
          for(int _aux = 0; _aux < _len_cpe0; _aux++) {
          free(cpe[_aux].is_mask);
          }
          for(int _aux = 0; _aux < _len_cpe0; _aux++) {
          free(cpe[_aux].ms_mask);
          }
          free(cpe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
