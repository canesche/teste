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
struct TYPE_3__ {float tilt_coef; int pitch_lag_int; } ;
typedef  TYPE_1__ AMRWBContext ;

/* Variables and functions */
 int AMRWB_SFR_SIZE ; 

__attribute__((used)) static void pitch_sharpening(AMRWBContext *ctx, float *fixed_vector)
{
    int i;

    /* Tilt part */
    for (i = AMRWB_SFR_SIZE - 1; i != 0; i--)
        fixed_vector[i] -= fixed_vector[i - 1] * ctx->tilt_coef;

    /* Periodicity enhancement part */
    for (i = ctx->pitch_lag_int; i < AMRWB_SFR_SIZE; i++)
        fixed_vector[i] += fixed_vector[i - ctx->pitch_lag_int] * 0.85;
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
          int _len_ctx0 = 1;
          struct TYPE_3__ * ctx = (struct TYPE_3__ *) malloc(_len_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].tilt_coef = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ctx[_i0].pitch_lag_int = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fixed_vector0 = 1;
          float * fixed_vector = (float *) malloc(_len_fixed_vector0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_fixed_vector0; _i0++) {
            fixed_vector[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          pitch_sharpening(ctx,fixed_vector);
          free(ctx);
          free(fixed_vector);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct TYPE_3__ * ctx = (struct TYPE_3__ *) malloc(_len_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].tilt_coef = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ctx[_i0].pitch_lag_int = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fixed_vector0 = 65025;
          float * fixed_vector = (float *) malloc(_len_fixed_vector0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_fixed_vector0; _i0++) {
            fixed_vector[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          pitch_sharpening(ctx,fixed_vector);
          free(ctx);
          free(fixed_vector);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct TYPE_3__ * ctx = (struct TYPE_3__ *) malloc(_len_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].tilt_coef = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ctx[_i0].pitch_lag_int = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fixed_vector0 = 100;
          float * fixed_vector = (float *) malloc(_len_fixed_vector0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_fixed_vector0; _i0++) {
            fixed_vector[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          pitch_sharpening(ctx,fixed_vector);
          free(ctx);
          free(fixed_vector);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
