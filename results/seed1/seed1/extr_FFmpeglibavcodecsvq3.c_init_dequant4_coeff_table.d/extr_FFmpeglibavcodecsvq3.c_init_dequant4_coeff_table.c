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
typedef  int uint32_t ;
struct TYPE_3__ {int** dequant4_coeff; } ;
typedef  TYPE_1__ SVQ3Context ;

/* Variables and functions */
 scalar_t__** ff_h264_dequant4_coeff_init ; 
 int* ff_h264_quant_div6 ; 
 int* ff_h264_quant_rem6 ; 

__attribute__((used)) static void init_dequant4_coeff_table(SVQ3Context *s)
{
    int q, x;
    const int max_qp = 51;

    for (q = 0; q < max_qp + 1; q++) {
        int shift = ff_h264_quant_div6[q] + 2;
        int idx   = ff_h264_quant_rem6[q];
        for (x = 0; x < 16; x++)
            s->dequant4_coeff[q][(x >> 2) | ((x << 2) & 0xF)] =
                ((uint32_t)ff_h264_dequant4_coeff_init[idx][(x & 1) + ((x >> 2) & 1)] * 16) << shift;
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
              int _len_s__i0__dequant4_coeff0 = 1;
          s[_i0].dequant4_coeff = (int **) malloc(_len_s__i0__dequant4_coeff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__dequant4_coeff0; _j0++) {
            int _len_s__i0__dequant4_coeff1 = 1;
            s[_i0].dequant4_coeff[_j0] = (int *) malloc(_len_s__i0__dequant4_coeff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__dequant4_coeff1; _j1++) {
              s[_i0].dequant4_coeff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          init_dequant4_coeff_table(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].dequant4_coeff));
        free(s[_aux].dequant4_coeff);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__dequant4_coeff0 = 1;
          s[_i0].dequant4_coeff = (int **) malloc(_len_s__i0__dequant4_coeff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__dequant4_coeff0; _j0++) {
            int _len_s__i0__dequant4_coeff1 = 1;
            s[_i0].dequant4_coeff[_j0] = (int *) malloc(_len_s__i0__dequant4_coeff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__dequant4_coeff1; _j1++) {
              s[_i0].dequant4_coeff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          init_dequant4_coeff_table(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].dequant4_coeff));
        free(s[_aux].dequant4_coeff);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__dequant4_coeff0 = 1;
          s[_i0].dequant4_coeff = (int **) malloc(_len_s__i0__dequant4_coeff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__dequant4_coeff0; _j0++) {
            int _len_s__i0__dequant4_coeff1 = 1;
            s[_i0].dequant4_coeff[_j0] = (int *) malloc(_len_s__i0__dequant4_coeff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__dequant4_coeff1; _j1++) {
              s[_i0].dequant4_coeff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          init_dequant4_coeff_table(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].dequant4_coeff));
        free(s[_aux].dequant4_coeff);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
