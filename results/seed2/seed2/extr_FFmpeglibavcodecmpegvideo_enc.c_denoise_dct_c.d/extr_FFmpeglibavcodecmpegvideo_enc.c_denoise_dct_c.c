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
typedef  int int16_t ;
struct TYPE_3__ {int mb_intra; int** dct_error_sum; scalar_t__** dct_offset; int /*<<< orphan*/ * dct_count; } ;
typedef  TYPE_1__ MpegEncContext ;

/* Variables and functions */

__attribute__((used)) static void denoise_dct_c(MpegEncContext *s, int16_t *block){
    const int intra= s->mb_intra;
    int i;

    s->dct_count[intra]++;

    for(i=0; i<64; i++){
        int level= block[i];

        if(level){
            if(level>0){
                s->dct_error_sum[intra][i] += level;
                level -= s->dct_offset[intra][i];
                if(level<0) level=0;
            }else{
                s->dct_error_sum[intra][i] -= level;
                level += s->dct_offset[intra][i];
                if(level>0) level=0;
            }
            block[i]= level;
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
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].mb_intra = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__dct_error_sum0 = 1;
          s[_i0].dct_error_sum = (int **) malloc(_len_s__i0__dct_error_sum0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__dct_error_sum0; _j0++) {
            int _len_s__i0__dct_error_sum1 = 1;
            s[_i0].dct_error_sum[_j0] = (int *) malloc(_len_s__i0__dct_error_sum1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__dct_error_sum1; _j1++) {
              s[_i0].dct_error_sum[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__dct_offset0 = 1;
          s[_i0].dct_offset = (long **) malloc(_len_s__i0__dct_offset0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_s__i0__dct_offset0; _j0++) {
            int _len_s__i0__dct_offset1 = 1;
            s[_i0].dct_offset[_j0] = (long *) malloc(_len_s__i0__dct_offset1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_s__i0__dct_offset1; _j1++) {
              s[_i0].dct_offset[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__dct_count0 = 1;
          s[_i0].dct_count = (int *) malloc(_len_s__i0__dct_count0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__dct_count0; _j0++) {
            s[_i0].dct_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_block0 = 1;
          int * block = (int *) malloc(_len_block0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          denoise_dct_c(s,block);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].dct_error_sum));
        free(s[_aux].dct_error_sum);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].dct_offset));
        free(s[_aux].dct_offset);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].dct_count);
          }
          free(s);
          free(block);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].mb_intra = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__dct_error_sum0 = 1;
          s[_i0].dct_error_sum = (int **) malloc(_len_s__i0__dct_error_sum0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__dct_error_sum0; _j0++) {
            int _len_s__i0__dct_error_sum1 = 1;
            s[_i0].dct_error_sum[_j0] = (int *) malloc(_len_s__i0__dct_error_sum1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__dct_error_sum1; _j1++) {
              s[_i0].dct_error_sum[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__dct_offset0 = 1;
          s[_i0].dct_offset = (long **) malloc(_len_s__i0__dct_offset0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_s__i0__dct_offset0; _j0++) {
            int _len_s__i0__dct_offset1 = 1;
            s[_i0].dct_offset[_j0] = (long *) malloc(_len_s__i0__dct_offset1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_s__i0__dct_offset1; _j1++) {
              s[_i0].dct_offset[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__dct_count0 = 1;
          s[_i0].dct_count = (int *) malloc(_len_s__i0__dct_count0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__dct_count0; _j0++) {
            s[_i0].dct_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_block0 = 65025;
          int * block = (int *) malloc(_len_block0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          denoise_dct_c(s,block);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].dct_error_sum));
        free(s[_aux].dct_error_sum);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].dct_offset));
        free(s[_aux].dct_offset);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].dct_count);
          }
          free(s);
          free(block);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].mb_intra = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__dct_error_sum0 = 1;
          s[_i0].dct_error_sum = (int **) malloc(_len_s__i0__dct_error_sum0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__dct_error_sum0; _j0++) {
            int _len_s__i0__dct_error_sum1 = 1;
            s[_i0].dct_error_sum[_j0] = (int *) malloc(_len_s__i0__dct_error_sum1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__dct_error_sum1; _j1++) {
              s[_i0].dct_error_sum[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__dct_offset0 = 1;
          s[_i0].dct_offset = (long **) malloc(_len_s__i0__dct_offset0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_s__i0__dct_offset0; _j0++) {
            int _len_s__i0__dct_offset1 = 1;
            s[_i0].dct_offset[_j0] = (long *) malloc(_len_s__i0__dct_offset1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_s__i0__dct_offset1; _j1++) {
              s[_i0].dct_offset[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__dct_count0 = 1;
          s[_i0].dct_count = (int *) malloc(_len_s__i0__dct_count0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__dct_count0; _j0++) {
            s[_i0].dct_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_block0 = 100;
          int * block = (int *) malloc(_len_block0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          denoise_dct_c(s,block);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].dct_error_sum));
        free(s[_aux].dct_error_sum);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].dct_offset));
        free(s[_aux].dct_offset);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].dct_count);
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
