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
typedef  scalar_t__ uint16_t ;
typedef  int int16_t ;
struct TYPE_4__ {int* permutated; } ;
struct TYPE_5__ {int* block_last_index; TYPE_1__ intra_scantable; scalar_t__* inter_matrix; scalar_t__ alternate_scan; scalar_t__ q_scale_type; } ;
typedef  TYPE_2__ MpegEncContext ;

/* Variables and functions */
 int* ff_mpeg2_non_linear_qscale ; 

__attribute__((used)) static void dct_unquantize_mpeg2_inter_c(MpegEncContext *s,
                                   int16_t *block, int n, int qscale)
{
    int i, level, nCoeffs;
    const uint16_t *quant_matrix;
    int sum=-1;

    if (s->q_scale_type) qscale = ff_mpeg2_non_linear_qscale[qscale];
    else                 qscale <<= 1;

    if(s->alternate_scan) nCoeffs= 63;
    else nCoeffs= s->block_last_index[n];

    quant_matrix = s->inter_matrix;
    for(i=0; i<=nCoeffs; i++) {
        int j= s->intra_scantable.permutated[i];
        level = block[j];
        if (level) {
            if (level < 0) {
                level = -level;
                level = (((level << 1) + 1) * qscale *
                         ((int) (quant_matrix[j]))) >> 5;
                level = -level;
            } else {
                level = (((level << 1) + 1) * qscale *
                         ((int) (quant_matrix[j]))) >> 5;
            }
            block[j] = level;
            sum+=level;
        }
    }
    block[63]^=sum&1;
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
          int n = 100;
          int qscale = 100;
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__block_last_index0 = 1;
          s[_i0].block_last_index = (int *) malloc(_len_s__i0__block_last_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__block_last_index0; _j0++) {
            s[_i0].block_last_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__intra_scantable_permutated0 = 1;
          s[_i0].intra_scantable.permutated = (int *) malloc(_len_s__i0__intra_scantable_permutated0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__intra_scantable_permutated0; _j0++) {
            s[_i0].intra_scantable.permutated[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__inter_matrix0 = 1;
          s[_i0].inter_matrix = (long *) malloc(_len_s__i0__inter_matrix0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__inter_matrix0; _j0++) {
            s[_i0].inter_matrix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].alternate_scan = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].q_scale_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_block0 = 1;
          int * block = (int *) malloc(_len_block0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dct_unquantize_mpeg2_inter_c(s,block,n,qscale);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].block_last_index);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].inter_matrix);
          }
          free(s);
          free(block);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int qscale = 255;
          int _len_s0 = 65025;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__block_last_index0 = 1;
          s[_i0].block_last_index = (int *) malloc(_len_s__i0__block_last_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__block_last_index0; _j0++) {
            s[_i0].block_last_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__intra_scantable_permutated0 = 1;
          s[_i0].intra_scantable.permutated = (int *) malloc(_len_s__i0__intra_scantable_permutated0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__intra_scantable_permutated0; _j0++) {
            s[_i0].intra_scantable.permutated[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__inter_matrix0 = 1;
          s[_i0].inter_matrix = (long *) malloc(_len_s__i0__inter_matrix0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__inter_matrix0; _j0++) {
            s[_i0].inter_matrix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].alternate_scan = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].q_scale_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_block0 = 65025;
          int * block = (int *) malloc(_len_block0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dct_unquantize_mpeg2_inter_c(s,block,n,qscale);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].block_last_index);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].inter_matrix);
          }
          free(s);
          free(block);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int qscale = 10;
          int _len_s0 = 100;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__block_last_index0 = 1;
          s[_i0].block_last_index = (int *) malloc(_len_s__i0__block_last_index0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__block_last_index0; _j0++) {
            s[_i0].block_last_index[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__intra_scantable_permutated0 = 1;
          s[_i0].intra_scantable.permutated = (int *) malloc(_len_s__i0__intra_scantable_permutated0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__intra_scantable_permutated0; _j0++) {
            s[_i0].intra_scantable.permutated[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__inter_matrix0 = 1;
          s[_i0].inter_matrix = (long *) malloc(_len_s__i0__inter_matrix0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__inter_matrix0; _j0++) {
            s[_i0].inter_matrix[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].alternate_scan = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].q_scale_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_block0 = 100;
          int * block = (int *) malloc(_len_block0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dct_unquantize_mpeg2_inter_c(s,block,n,qscale);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].block_last_index);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].inter_matrix);
          }
          free(s);
          free(block);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
