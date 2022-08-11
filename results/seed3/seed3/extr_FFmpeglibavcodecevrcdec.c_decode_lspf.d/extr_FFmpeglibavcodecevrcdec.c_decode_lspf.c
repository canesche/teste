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
struct TYPE_4__ {int* lsp; } ;
struct TYPE_5__ {size_t bitrate; float* lspf; TYPE_1__ frame; } ;
typedef  TYPE_2__ EVRCContext ;

/* Variables and functions */
 int FILTER_ORDER ; 
 scalar_t__ MIN_LSP_SEP ; 
 float*** evrc_lspq_codebooks ; 
 int** evrc_lspq_codebooks_row_sizes ; 
 int* evrc_lspq_nb_codebooks ; 

__attribute__((used)) static int decode_lspf(EVRCContext *e)
{
    const float * const *codebooks = evrc_lspq_codebooks[e->bitrate];
    int i, j, k = 0;

    for (i = 0; i < evrc_lspq_nb_codebooks[e->bitrate]; i++) {
        int row_size = evrc_lspq_codebooks_row_sizes[e->bitrate][i];
        const float *codebook = codebooks[i];

        for (j = 0; j < row_size; j++)
            e->lspf[k++] = codebook[e->frame.lsp[i] * row_size + j];
    }

    // check for monotonic LSPs
    for (i = 1; i < FILTER_ORDER; i++)
        if (e->lspf[i] <= e->lspf[i - 1])
            return -1;

    // check for minimum separation of LSPs at the splits
    for (i = 0, k = 0; i < evrc_lspq_nb_codebooks[e->bitrate] - 1; i++) {
        k += evrc_lspq_codebooks_row_sizes[e->bitrate][i];
        if (e->lspf[k] - e->lspf[k - 1] <= MIN_LSP_SEP)
            return -1;
    }

    return 0;
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
          int _len_e0 = 1;
          struct TYPE_5__ * e = (struct TYPE_5__ *) malloc(_len_e0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_e__i0__lspf0 = 1;
          e[_i0].lspf = (float *) malloc(_len_e__i0__lspf0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_e__i0__lspf0; _j0++) {
            e[_i0].lspf[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_e__i0__frame_lsp0 = 1;
          e[_i0].frame.lsp = (int *) malloc(_len_e__i0__frame_lsp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__frame_lsp0; _j0++) {
            e[_i0].frame.lsp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = decode_lspf(e);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].lspf);
          }
          free(e);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_e0 = 65025;
          struct TYPE_5__ * e = (struct TYPE_5__ *) malloc(_len_e0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_e__i0__lspf0 = 1;
          e[_i0].lspf = (float *) malloc(_len_e__i0__lspf0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_e__i0__lspf0; _j0++) {
            e[_i0].lspf[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_e__i0__frame_lsp0 = 1;
          e[_i0].frame.lsp = (int *) malloc(_len_e__i0__frame_lsp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__frame_lsp0; _j0++) {
            e[_i0].frame.lsp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = decode_lspf(e);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].lspf);
          }
          free(e);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_e0 = 100;
          struct TYPE_5__ * e = (struct TYPE_5__ *) malloc(_len_e0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].bitrate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_e__i0__lspf0 = 1;
          e[_i0].lspf = (float *) malloc(_len_e__i0__lspf0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_e__i0__lspf0; _j0++) {
            e[_i0].lspf[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_e__i0__frame_lsp0 = 1;
          e[_i0].frame.lsp = (int *) malloc(_len_e__i0__frame_lsp0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_e__i0__frame_lsp0; _j0++) {
            e[_i0].frame.lsp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = decode_lspf(e);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_e0; _aux++) {
          free(e[_aux].lspf);
          }
          free(e);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
