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
typedef  int int16_t ;

/* Variables and functions */
 size_t MA_NP ; 
 int*** cb_ma_predictor ; 
 int** cb_ma_predictor_sum_inv ; 

__attribute__((used)) static void lsf_restore_from_previous(int16_t* lsfq,
                                      int16_t* past_quantizer_outputs[MA_NP + 1],
                                      int ma_predictor_prev)
{
    int16_t* quantizer_output = past_quantizer_outputs[MA_NP];
    int i,k;

    for (i = 0; i < 10; i++) {
        int tmp = lsfq[i] << 15;

        for (k = 0; k < MA_NP; k++)
            tmp -= past_quantizer_outputs[k][i] * cb_ma_predictor[ma_predictor_prev][k][i];

        quantizer_output[i] = ((tmp >> 15) * cb_ma_predictor_sum_inv[ma_predictor_prev][i]) >> 12;
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
          int ma_predictor_prev = 100;
          int _len_lsfq0 = 1;
          int * lsfq = (int *) malloc(_len_lsfq0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lsfq0; _i0++) {
            lsfq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_past_quantizer_outputs0 = MA_NP + 1;
          int ** past_quantizer_outputs = (int **) malloc(_len_past_quantizer_outputs0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_past_quantizer_outputs0; _i0++) {
            int _len_past_quantizer_outputs1 = 1;
            past_quantizer_outputs[_i0] = (int *) malloc(_len_past_quantizer_outputs1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_past_quantizer_outputs1; _i1++) {
              past_quantizer_outputs[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          lsf_restore_from_previous(lsfq,past_quantizer_outputs,ma_predictor_prev);
          free(lsfq);
          for(int i1 = 0; i1 < _len_past_quantizer_outputs0; i1++) {
            int _len_past_quantizer_outputs1 = 1;
              free(past_quantizer_outputs[i1]);
          }
          free(past_quantizer_outputs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ma_predictor_prev = 255;
          int _len_lsfq0 = 65025;
          int * lsfq = (int *) malloc(_len_lsfq0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lsfq0; _i0++) {
            lsfq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_past_quantizer_outputs0 = 65025;
          int ** past_quantizer_outputs = (int **) malloc(_len_past_quantizer_outputs0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_past_quantizer_outputs0; _i0++) {
            int _len_past_quantizer_outputs1 = 1;
            past_quantizer_outputs[_i0] = (int *) malloc(_len_past_quantizer_outputs1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_past_quantizer_outputs1; _i1++) {
              past_quantizer_outputs[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          lsf_restore_from_previous(lsfq,past_quantizer_outputs,ma_predictor_prev);
          free(lsfq);
          for(int i1 = 0; i1 < _len_past_quantizer_outputs0; i1++) {
            int _len_past_quantizer_outputs1 = 1;
              free(past_quantizer_outputs[i1]);
          }
          free(past_quantizer_outputs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ma_predictor_prev = 10;
          int _len_lsfq0 = 100;
          int * lsfq = (int *) malloc(_len_lsfq0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lsfq0; _i0++) {
            lsfq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_past_quantizer_outputs0 = 100;
          int ** past_quantizer_outputs = (int **) malloc(_len_past_quantizer_outputs0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_past_quantizer_outputs0; _i0++) {
            int _len_past_quantizer_outputs1 = 1;
            past_quantizer_outputs[_i0] = (int *) malloc(_len_past_quantizer_outputs1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_past_quantizer_outputs1; _i1++) {
              past_quantizer_outputs[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          lsf_restore_from_previous(lsfq,past_quantizer_outputs,ma_predictor_prev);
          free(lsfq);
          for(int i1 = 0; i1 < _len_past_quantizer_outputs0; i1++) {
            int _len_past_quantizer_outputs1 = 1;
              free(past_quantizer_outputs[i1]);
          }
          free(past_quantizer_outputs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
