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
struct TYPE_3__ {float* CWdecoded; int* CWlengthT; int* codewords; float const* flcoeffs6; int* bandFlagsBuf; scalar_t__* skipFlags; } ;
typedef  int /*<<< orphan*/  IMCContext ;
typedef  TYPE_1__ IMCChannel ;

/* Variables and functions */
 int AVERROR_INVALIDDATA ; 
 int BANDS ; 
 int* band_tab ; 
 float** imc_quantizer1 ; 
 float** imc_quantizer2 ; 

__attribute__((used)) static int inverse_quant_coeff(IMCContext *q, IMCChannel *chctx,
                               int stream_format_code)
{
    int i, j;
    int middle_value, cw_len, max_size;
    const float *quantizer;

    for (i = 0; i < BANDS; i++) {
        for (j = band_tab[i]; j < band_tab[i + 1]; j++) {
            chctx->CWdecoded[j] = 0;
            cw_len = chctx->CWlengthT[j];

            if (cw_len <= 0 || chctx->skipFlags[j])
                continue;

            max_size     = 1 << cw_len;
            middle_value = max_size >> 1;

            if (chctx->codewords[j] >= max_size || chctx->codewords[j] < 0)
                return AVERROR_INVALIDDATA;

            if (cw_len >= 4) {
                quantizer = imc_quantizer2[(stream_format_code & 2) >> 1];
                if (chctx->codewords[j] >= middle_value)
                    chctx->CWdecoded[j] =  quantizer[chctx->codewords[j] - 8]                * chctx->flcoeffs6[i];
                else
                    chctx->CWdecoded[j] = -quantizer[max_size - chctx->codewords[j] - 8 - 1] * chctx->flcoeffs6[i];
            }else{
                quantizer = imc_quantizer1[((stream_format_code & 2) >> 1) | (chctx->bandFlagsBuf[i] << 1)];
                if (chctx->codewords[j] >= middle_value)
                    chctx->CWdecoded[j] =  quantizer[chctx->codewords[j] - 1]            * chctx->flcoeffs6[i];
                else
                    chctx->CWdecoded[j] = -quantizer[max_size - 2 - chctx->codewords[j]] * chctx->flcoeffs6[i];
            }
        }
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
          int stream_format_code = 100;
          int _len_q0 = 1;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx0 = 1;
          struct TYPE_3__ * chctx = (struct TYPE_3__ *) malloc(_len_chctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_chctx0; _i0++) {
              int _len_chctx__i0__CWdecoded0 = 1;
          chctx[_i0].CWdecoded = (float *) malloc(_len_chctx__i0__CWdecoded0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_chctx__i0__CWdecoded0; _j0++) {
            chctx[_i0].CWdecoded[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_chctx__i0__CWlengthT0 = 1;
          chctx[_i0].CWlengthT = (int *) malloc(_len_chctx__i0__CWlengthT0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__CWlengthT0; _j0++) {
            chctx[_i0].CWlengthT[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx__i0__codewords0 = 1;
          chctx[_i0].codewords = (int *) malloc(_len_chctx__i0__codewords0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__codewords0; _j0++) {
            chctx[_i0].codewords[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx__i0__flcoeffs60 = 1;
          chctx[_i0].flcoeffs6 = (const float *) malloc(_len_chctx__i0__flcoeffs60*sizeof(const float));
          for(int _j0 = 0; _j0 < _len_chctx__i0__flcoeffs60; _j0++) {
            chctx[_i0].flcoeffs6[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_chctx__i0__bandFlagsBuf0 = 1;
          chctx[_i0].bandFlagsBuf = (int *) malloc(_len_chctx__i0__bandFlagsBuf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__bandFlagsBuf0; _j0++) {
            chctx[_i0].bandFlagsBuf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx__i0__skipFlags0 = 1;
          chctx[_i0].skipFlags = (long *) malloc(_len_chctx__i0__skipFlags0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_chctx__i0__skipFlags0; _j0++) {
            chctx[_i0].skipFlags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = inverse_quant_coeff(q,chctx,stream_format_code);
          printf("%d\n", benchRet); 
          free(q);
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].CWdecoded);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].CWlengthT);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].codewords);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].flcoeffs6);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].bandFlagsBuf);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].skipFlags);
          }
          free(chctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int stream_format_code = 255;
          int _len_q0 = 65025;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx0 = 65025;
          struct TYPE_3__ * chctx = (struct TYPE_3__ *) malloc(_len_chctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_chctx0; _i0++) {
              int _len_chctx__i0__CWdecoded0 = 1;
          chctx[_i0].CWdecoded = (float *) malloc(_len_chctx__i0__CWdecoded0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_chctx__i0__CWdecoded0; _j0++) {
            chctx[_i0].CWdecoded[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_chctx__i0__CWlengthT0 = 1;
          chctx[_i0].CWlengthT = (int *) malloc(_len_chctx__i0__CWlengthT0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__CWlengthT0; _j0++) {
            chctx[_i0].CWlengthT[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx__i0__codewords0 = 1;
          chctx[_i0].codewords = (int *) malloc(_len_chctx__i0__codewords0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__codewords0; _j0++) {
            chctx[_i0].codewords[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx__i0__flcoeffs60 = 1;
          chctx[_i0].flcoeffs6 = (const float *) malloc(_len_chctx__i0__flcoeffs60*sizeof(const float));
          for(int _j0 = 0; _j0 < _len_chctx__i0__flcoeffs60; _j0++) {
            chctx[_i0].flcoeffs6[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_chctx__i0__bandFlagsBuf0 = 1;
          chctx[_i0].bandFlagsBuf = (int *) malloc(_len_chctx__i0__bandFlagsBuf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__bandFlagsBuf0; _j0++) {
            chctx[_i0].bandFlagsBuf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx__i0__skipFlags0 = 1;
          chctx[_i0].skipFlags = (long *) malloc(_len_chctx__i0__skipFlags0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_chctx__i0__skipFlags0; _j0++) {
            chctx[_i0].skipFlags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = inverse_quant_coeff(q,chctx,stream_format_code);
          printf("%d\n", benchRet); 
          free(q);
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].CWdecoded);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].CWlengthT);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].codewords);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].flcoeffs6);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].bandFlagsBuf);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].skipFlags);
          }
          free(chctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int stream_format_code = 10;
          int _len_q0 = 100;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx0 = 100;
          struct TYPE_3__ * chctx = (struct TYPE_3__ *) malloc(_len_chctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_chctx0; _i0++) {
              int _len_chctx__i0__CWdecoded0 = 1;
          chctx[_i0].CWdecoded = (float *) malloc(_len_chctx__i0__CWdecoded0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_chctx__i0__CWdecoded0; _j0++) {
            chctx[_i0].CWdecoded[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_chctx__i0__CWlengthT0 = 1;
          chctx[_i0].CWlengthT = (int *) malloc(_len_chctx__i0__CWlengthT0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__CWlengthT0; _j0++) {
            chctx[_i0].CWlengthT[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx__i0__codewords0 = 1;
          chctx[_i0].codewords = (int *) malloc(_len_chctx__i0__codewords0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__codewords0; _j0++) {
            chctx[_i0].codewords[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx__i0__flcoeffs60 = 1;
          chctx[_i0].flcoeffs6 = (const float *) malloc(_len_chctx__i0__flcoeffs60*sizeof(const float));
          for(int _j0 = 0; _j0 < _len_chctx__i0__flcoeffs60; _j0++) {
            chctx[_i0].flcoeffs6[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_chctx__i0__bandFlagsBuf0 = 1;
          chctx[_i0].bandFlagsBuf = (int *) malloc(_len_chctx__i0__bandFlagsBuf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chctx__i0__bandFlagsBuf0; _j0++) {
            chctx[_i0].bandFlagsBuf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chctx__i0__skipFlags0 = 1;
          chctx[_i0].skipFlags = (long *) malloc(_len_chctx__i0__skipFlags0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_chctx__i0__skipFlags0; _j0++) {
            chctx[_i0].skipFlags[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = inverse_quant_coeff(q,chctx,stream_format_code);
          printf("%d\n", benchRet); 
          free(q);
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].CWdecoded);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].CWlengthT);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].codewords);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].flcoeffs6);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].bandFlagsBuf);
          }
          for(int _aux = 0; _aux < _len_chctx0; _aux++) {
          free(chctx[_aux].skipFlags);
          }
          free(chctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
