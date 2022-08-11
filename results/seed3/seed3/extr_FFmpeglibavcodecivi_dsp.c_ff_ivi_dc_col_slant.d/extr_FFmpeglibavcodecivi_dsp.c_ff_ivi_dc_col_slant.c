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
typedef  int /*<<< orphan*/  ptrdiff_t ;
typedef  int int32_t ;
typedef  int int16_t ;

/* Variables and functions */

void ff_ivi_dc_col_slant(const int32_t *in, int16_t *out, ptrdiff_t pitch, int blk_size)
{
    int     x, y;
    int16_t dc_coeff;

    dc_coeff = (*in + 1) >> 1;

    for (y = 0; y < blk_size; out += pitch, y++) {
        out[0] = dc_coeff;
        for (x = 1; x < blk_size; x++)
            out[x] = 0;
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
          int pitch = 100;
          int blk_size = 100;
          int _len_in0 = 1;
          const int * in = (const int *) malloc(_len_in0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 1;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_ivi_dc_col_slant(in,out,pitch,blk_size);
          free(in);
          free(out);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pitch = 255;
          int blk_size = 255;
          int _len_in0 = 65025;
          const int * in = (const int *) malloc(_len_in0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 65025;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_ivi_dc_col_slant(in,out,pitch,blk_size);
          free(in);
          free(out);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pitch = 10;
          int blk_size = 10;
          int _len_in0 = 100;
          const int * in = (const int *) malloc(_len_in0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 100;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_ivi_dc_col_slant(in,out,pitch,blk_size);
          free(in);
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
