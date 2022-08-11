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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int int16_t ;
typedef  enum TwinVQFrameType { ____Placeholder_TwinVQFrameType } TwinVQFrameType ;
struct TYPE_3__ {int* n_div; int** length; int* length_change; int* bits_main_spec_change; int*** bits_main_spec; size_t** permut; } ;
typedef  TYPE_1__ TwinVQContext ;

/* Variables and functions */

__attribute__((used)) static void dequant(TwinVQContext *tctx, const uint8_t *cb_bits, float *out,
                    enum TwinVQFrameType ftype,
                    const int16_t *cb0, const int16_t *cb1, int cb_len)
{
    int pos = 0;
    int i, j;

    for (i = 0; i < tctx->n_div[ftype]; i++) {
        int tmp0, tmp1;
        int sign0 = 1;
        int sign1 = 1;
        const int16_t *tab0, *tab1;
        int length = tctx->length[ftype][i >= tctx->length_change[ftype]];
        int bitstream_second_part = (i >= tctx->bits_main_spec_change[ftype]);

        int bits = tctx->bits_main_spec[0][ftype][bitstream_second_part];
        tmp0 = *cb_bits++;
        if (bits == 7) {
            if (tmp0 & 0x40)
                sign0 = -1;
            tmp0 &= 0x3F;
        }

        bits = tctx->bits_main_spec[1][ftype][bitstream_second_part];
        tmp1 = *cb_bits++;
        if (bits == 7) {
            if (tmp1 & 0x40)
                sign1 = -1;
            tmp1 &= 0x3F;
        }

        tab0 = cb0 + tmp0 * cb_len;
        tab1 = cb1 + tmp1 * cb_len;

        for (j = 0; j < length; j++)
            out[tctx->permut[ftype][pos + j]] = sign0 * tab0[j] +
                                                sign1 * tab1[j];

        pos += length;
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
          enum TwinVQFrameType ftype = 0;
          int cb_len = 100;
          int _len_tctx0 = 1;
          struct TYPE_3__ * tctx = (struct TYPE_3__ *) malloc(_len_tctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tctx0; _i0++) {
              int _len_tctx__i0__n_div0 = 1;
          tctx[_i0].n_div = (int *) malloc(_len_tctx__i0__n_div0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tctx__i0__n_div0; _j0++) {
            tctx[_i0].n_div[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tctx__i0__length0 = 1;
          tctx[_i0].length = (int **) malloc(_len_tctx__i0__length0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_tctx__i0__length0; _j0++) {
            int _len_tctx__i0__length1 = 1;
            tctx[_i0].length[_j0] = (int *) malloc(_len_tctx__i0__length1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_tctx__i0__length1; _j1++) {
              tctx[_i0].length[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_tctx__i0__length_change0 = 1;
          tctx[_i0].length_change = (int *) malloc(_len_tctx__i0__length_change0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tctx__i0__length_change0; _j0++) {
            tctx[_i0].length_change[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tctx__i0__bits_main_spec_change0 = 1;
          tctx[_i0].bits_main_spec_change = (int *) malloc(_len_tctx__i0__bits_main_spec_change0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tctx__i0__bits_main_spec_change0; _j0++) {
            tctx[_i0].bits_main_spec_change[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tctx__i0__bits_main_spec0 = 1;
          tctx[_i0].bits_main_spec = (int ***) malloc(_len_tctx__i0__bits_main_spec0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_tctx__i0__bits_main_spec0; _j0++) {
            int _len_tctx__i0__bits_main_spec1 = 1;
            tctx[_i0].bits_main_spec[_j0] = (int **) malloc(_len_tctx__i0__bits_main_spec1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_tctx__i0__bits_main_spec1; _j1++) {
              int _len_tctx__i0__bits_main_spec2 = 1;
              tctx[_i0].bits_main_spec[_j0][_j1] = (int *) malloc(_len_tctx__i0__bits_main_spec2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_tctx__i0__bits_main_spec2; _j2++) {
                tctx[_i0].bits_main_spec[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_tctx__i0__permut0 = 1;
          tctx[_i0].permut = (unsigned long **) malloc(_len_tctx__i0__permut0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_tctx__i0__permut0; _j0++) {
            int _len_tctx__i0__permut1 = 1;
            tctx[_i0].permut[_j0] = (unsigned long *) malloc(_len_tctx__i0__permut1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_tctx__i0__permut1; _j1++) {
              tctx[_i0].permut[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_cb_bits0 = 1;
          const int * cb_bits = (const int *) malloc(_len_cb_bits0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_cb_bits0; _i0++) {
            cb_bits[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 1;
          float * out = (float *) malloc(_len_out0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_cb00 = 1;
          const int * cb0 = (const int *) malloc(_len_cb00*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_cb00; _i0++) {
            cb0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb10 = 1;
          const int * cb1 = (const int *) malloc(_len_cb10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_cb10; _i0++) {
            cb1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dequant(tctx,cb_bits,out,ftype,cb0,cb1,cb_len);
          for(int _aux = 0; _aux < _len_tctx0; _aux++) {
          free(tctx[_aux].n_div);
          }
          for(int _aux = 0; _aux < _len_tctx0; _aux++) {
          free(*(tctx[_aux].length));
        free(tctx[_aux].length);
          }
          for(int _aux = 0; _aux < _len_tctx0; _aux++) {
          free(tctx[_aux].length_change);
          }
          for(int _aux = 0; _aux < _len_tctx0; _aux++) {
          free(tctx[_aux].bits_main_spec_change);
          }
          for(int _aux = 0; _aux < _len_tctx0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_tctx0; _aux++) {
          free(*(tctx[_aux].permut));
        free(tctx[_aux].permut);
          }
          free(tctx);
          free(cb_bits);
          free(out);
          free(cb0);
          free(cb1);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum TwinVQFrameType ftype = 0;
          int cb_len = 255;
          int _len_tctx0 = 65025;
          struct TYPE_3__ * tctx = (struct TYPE_3__ *) malloc(_len_tctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tctx0; _i0++) {
              int _len_tctx__i0__n_div0 = 1;
          tctx[_i0].n_div = (int *) malloc(_len_tctx__i0__n_div0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tctx__i0__n_div0; _j0++) {
            tctx[_i0].n_div[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tctx__i0__length0 = 1;
          tctx[_i0].length = (int **) malloc(_len_tctx__i0__length0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_tctx__i0__length0; _j0++) {
            int _len_tctx__i0__length1 = 1;
            tctx[_i0].length[_j0] = (int *) malloc(_len_tctx__i0__length1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_tctx__i0__length1; _j1++) {
              tctx[_i0].length[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_tctx__i0__length_change0 = 1;
          tctx[_i0].length_change = (int *) malloc(_len_tctx__i0__length_change0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tctx__i0__length_change0; _j0++) {
            tctx[_i0].length_change[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tctx__i0__bits_main_spec_change0 = 1;
          tctx[_i0].bits_main_spec_change = (int *) malloc(_len_tctx__i0__bits_main_spec_change0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tctx__i0__bits_main_spec_change0; _j0++) {
            tctx[_i0].bits_main_spec_change[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tctx__i0__bits_main_spec0 = 1;
          tctx[_i0].bits_main_spec = (int ***) malloc(_len_tctx__i0__bits_main_spec0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_tctx__i0__bits_main_spec0; _j0++) {
            int _len_tctx__i0__bits_main_spec1 = 1;
            tctx[_i0].bits_main_spec[_j0] = (int **) malloc(_len_tctx__i0__bits_main_spec1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_tctx__i0__bits_main_spec1; _j1++) {
              int _len_tctx__i0__bits_main_spec2 = 1;
              tctx[_i0].bits_main_spec[_j0][_j1] = (int *) malloc(_len_tctx__i0__bits_main_spec2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_tctx__i0__bits_main_spec2; _j2++) {
                tctx[_i0].bits_main_spec[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_tctx__i0__permut0 = 1;
          tctx[_i0].permut = (unsigned long **) malloc(_len_tctx__i0__permut0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_tctx__i0__permut0; _j0++) {
            int _len_tctx__i0__permut1 = 1;
            tctx[_i0].permut[_j0] = (unsigned long *) malloc(_len_tctx__i0__permut1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_tctx__i0__permut1; _j1++) {
              tctx[_i0].permut[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_cb_bits0 = 65025;
          const int * cb_bits = (const int *) malloc(_len_cb_bits0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_cb_bits0; _i0++) {
            cb_bits[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 65025;
          float * out = (float *) malloc(_len_out0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_cb00 = 65025;
          const int * cb0 = (const int *) malloc(_len_cb00*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_cb00; _i0++) {
            cb0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb10 = 65025;
          const int * cb1 = (const int *) malloc(_len_cb10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_cb10; _i0++) {
            cb1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dequant(tctx,cb_bits,out,ftype,cb0,cb1,cb_len);
          for(int _aux = 0; _aux < _len_tctx0; _aux++) {
          free(tctx[_aux].n_div);
          }
          for(int _aux = 0; _aux < _len_tctx0; _aux++) {
          free(*(tctx[_aux].length));
        free(tctx[_aux].length);
          }
          for(int _aux = 0; _aux < _len_tctx0; _aux++) {
          free(tctx[_aux].length_change);
          }
          for(int _aux = 0; _aux < _len_tctx0; _aux++) {
          free(tctx[_aux].bits_main_spec_change);
          }
          for(int _aux = 0; _aux < _len_tctx0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_tctx0; _aux++) {
          free(*(tctx[_aux].permut));
        free(tctx[_aux].permut);
          }
          free(tctx);
          free(cb_bits);
          free(out);
          free(cb0);
          free(cb1);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum TwinVQFrameType ftype = 0;
          int cb_len = 10;
          int _len_tctx0 = 100;
          struct TYPE_3__ * tctx = (struct TYPE_3__ *) malloc(_len_tctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_tctx0; _i0++) {
              int _len_tctx__i0__n_div0 = 1;
          tctx[_i0].n_div = (int *) malloc(_len_tctx__i0__n_div0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tctx__i0__n_div0; _j0++) {
            tctx[_i0].n_div[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tctx__i0__length0 = 1;
          tctx[_i0].length = (int **) malloc(_len_tctx__i0__length0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_tctx__i0__length0; _j0++) {
            int _len_tctx__i0__length1 = 1;
            tctx[_i0].length[_j0] = (int *) malloc(_len_tctx__i0__length1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_tctx__i0__length1; _j1++) {
              tctx[_i0].length[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_tctx__i0__length_change0 = 1;
          tctx[_i0].length_change = (int *) malloc(_len_tctx__i0__length_change0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tctx__i0__length_change0; _j0++) {
            tctx[_i0].length_change[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tctx__i0__bits_main_spec_change0 = 1;
          tctx[_i0].bits_main_spec_change = (int *) malloc(_len_tctx__i0__bits_main_spec_change0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tctx__i0__bits_main_spec_change0; _j0++) {
            tctx[_i0].bits_main_spec_change[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tctx__i0__bits_main_spec0 = 1;
          tctx[_i0].bits_main_spec = (int ***) malloc(_len_tctx__i0__bits_main_spec0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_tctx__i0__bits_main_spec0; _j0++) {
            int _len_tctx__i0__bits_main_spec1 = 1;
            tctx[_i0].bits_main_spec[_j0] = (int **) malloc(_len_tctx__i0__bits_main_spec1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_tctx__i0__bits_main_spec1; _j1++) {
              int _len_tctx__i0__bits_main_spec2 = 1;
              tctx[_i0].bits_main_spec[_j0][_j1] = (int *) malloc(_len_tctx__i0__bits_main_spec2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_tctx__i0__bits_main_spec2; _j2++) {
                tctx[_i0].bits_main_spec[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_tctx__i0__permut0 = 1;
          tctx[_i0].permut = (unsigned long **) malloc(_len_tctx__i0__permut0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_tctx__i0__permut0; _j0++) {
            int _len_tctx__i0__permut1 = 1;
            tctx[_i0].permut[_j0] = (unsigned long *) malloc(_len_tctx__i0__permut1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_tctx__i0__permut1; _j1++) {
              tctx[_i0].permut[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_cb_bits0 = 100;
          const int * cb_bits = (const int *) malloc(_len_cb_bits0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_cb_bits0; _i0++) {
            cb_bits[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 100;
          float * out = (float *) malloc(_len_out0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_cb00 = 100;
          const int * cb0 = (const int *) malloc(_len_cb00*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_cb00; _i0++) {
            cb0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cb10 = 100;
          const int * cb1 = (const int *) malloc(_len_cb10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_cb10; _i0++) {
            cb1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dequant(tctx,cb_bits,out,ftype,cb0,cb1,cb_len);
          for(int _aux = 0; _aux < _len_tctx0; _aux++) {
          free(tctx[_aux].n_div);
          }
          for(int _aux = 0; _aux < _len_tctx0; _aux++) {
          free(*(tctx[_aux].length));
        free(tctx[_aux].length);
          }
          for(int _aux = 0; _aux < _len_tctx0; _aux++) {
          free(tctx[_aux].length_change);
          }
          for(int _aux = 0; _aux < _len_tctx0; _aux++) {
          free(tctx[_aux].bits_main_spec_change);
          }
          for(int _aux = 0; _aux < _len_tctx0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_tctx0; _aux++) {
          free(*(tctx[_aux].permut));
        free(tctx[_aux].permut);
          }
          free(tctx);
          free(cb_bits);
          free(out);
          free(cb0);
          free(cb1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
