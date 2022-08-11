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
typedef  int int32_t ;
struct TYPE_5__ {int** coeff; int* fbits; } ;
struct TYPE_7__ {TYPE_1__ matrix_params; } ;
struct TYPE_6__ {unsigned int num_channels; TYPE_3__* cur_decoding_params; } ;
typedef  TYPE_1__ MatrixParams ;
typedef  TYPE_2__ MLPEncodeContext ;
typedef  TYPE_3__ DecodingParams ;

/* Variables and functions */

__attribute__((used)) static void code_matrix_coeffs(MLPEncodeContext *ctx, unsigned int mat)
{
    DecodingParams *dp = ctx->cur_decoding_params;
    MatrixParams *mp = &dp->matrix_params;
    int32_t coeff_mask = 0;
    unsigned int channel;
    unsigned int bits;

    for (channel = 0; channel < ctx->num_channels; channel++) {
        int32_t coeff = mp->coeff[mat][channel];
        coeff_mask |= coeff;
    }

    for (bits = 0; bits < 14 && !(coeff_mask & (1<<bits)); bits++);

    mp->fbits   [mat] = 14 - bits;
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
          unsigned int mat = 100;
          int _len_ctx0 = 1;
          struct TYPE_6__ * ctx = (struct TYPE_6__ *) malloc(_len_ctx0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__cur_decoding_params0 = 1;
          ctx[_i0].cur_decoding_params = (struct TYPE_7__ *) malloc(_len_ctx__i0__cur_decoding_params0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cur_decoding_params0; _j0++) {
              int _len_ctx__i0__cur_decoding_params_matrix_params_coeff0 = 1;
          ctx[_i0].cur_decoding_params->matrix_params.coeff = (int **) malloc(_len_ctx__i0__cur_decoding_params_matrix_params_coeff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cur_decoding_params_matrix_params_coeff0; _j0++) {
            int _len_ctx__i0__cur_decoding_params_matrix_params_coeff1 = 1;
            ctx[_i0].cur_decoding_params->matrix_params.coeff[_j0] = (int *) malloc(_len_ctx__i0__cur_decoding_params_matrix_params_coeff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ctx__i0__cur_decoding_params_matrix_params_coeff1; _j1++) {
              ctx[_i0].cur_decoding_params->matrix_params.coeff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ctx__i0__cur_decoding_params_matrix_params_fbits0 = 1;
          ctx[_i0].cur_decoding_params->matrix_params.fbits = (int *) malloc(_len_ctx__i0__cur_decoding_params_matrix_params_fbits0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cur_decoding_params_matrix_params_fbits0; _j0++) {
            ctx[_i0].cur_decoding_params->matrix_params.fbits[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          code_matrix_coeffs(ctx,mat);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].cur_decoding_params);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int mat = 255;
          int _len_ctx0 = 65025;
          struct TYPE_6__ * ctx = (struct TYPE_6__ *) malloc(_len_ctx0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__cur_decoding_params0 = 1;
          ctx[_i0].cur_decoding_params = (struct TYPE_7__ *) malloc(_len_ctx__i0__cur_decoding_params0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cur_decoding_params0; _j0++) {
              int _len_ctx__i0__cur_decoding_params_matrix_params_coeff0 = 1;
          ctx[_i0].cur_decoding_params->matrix_params.coeff = (int **) malloc(_len_ctx__i0__cur_decoding_params_matrix_params_coeff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cur_decoding_params_matrix_params_coeff0; _j0++) {
            int _len_ctx__i0__cur_decoding_params_matrix_params_coeff1 = 1;
            ctx[_i0].cur_decoding_params->matrix_params.coeff[_j0] = (int *) malloc(_len_ctx__i0__cur_decoding_params_matrix_params_coeff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ctx__i0__cur_decoding_params_matrix_params_coeff1; _j1++) {
              ctx[_i0].cur_decoding_params->matrix_params.coeff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ctx__i0__cur_decoding_params_matrix_params_fbits0 = 1;
          ctx[_i0].cur_decoding_params->matrix_params.fbits = (int *) malloc(_len_ctx__i0__cur_decoding_params_matrix_params_fbits0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cur_decoding_params_matrix_params_fbits0; _j0++) {
            ctx[_i0].cur_decoding_params->matrix_params.fbits[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          code_matrix_coeffs(ctx,mat);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].cur_decoding_params);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int mat = 10;
          int _len_ctx0 = 100;
          struct TYPE_6__ * ctx = (struct TYPE_6__ *) malloc(_len_ctx0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__cur_decoding_params0 = 1;
          ctx[_i0].cur_decoding_params = (struct TYPE_7__ *) malloc(_len_ctx__i0__cur_decoding_params0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cur_decoding_params0; _j0++) {
              int _len_ctx__i0__cur_decoding_params_matrix_params_coeff0 = 1;
          ctx[_i0].cur_decoding_params->matrix_params.coeff = (int **) malloc(_len_ctx__i0__cur_decoding_params_matrix_params_coeff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cur_decoding_params_matrix_params_coeff0; _j0++) {
            int _len_ctx__i0__cur_decoding_params_matrix_params_coeff1 = 1;
            ctx[_i0].cur_decoding_params->matrix_params.coeff[_j0] = (int *) malloc(_len_ctx__i0__cur_decoding_params_matrix_params_coeff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ctx__i0__cur_decoding_params_matrix_params_coeff1; _j1++) {
              ctx[_i0].cur_decoding_params->matrix_params.coeff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ctx__i0__cur_decoding_params_matrix_params_fbits0 = 1;
          ctx[_i0].cur_decoding_params->matrix_params.fbits = (int *) malloc(_len_ctx__i0__cur_decoding_params_matrix_params_fbits0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__cur_decoding_params_matrix_params_fbits0; _j0++) {
            ctx[_i0].cur_decoding_params->matrix_params.fbits[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          code_matrix_coeffs(ctx,mat);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].cur_decoding_params);
          }
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
