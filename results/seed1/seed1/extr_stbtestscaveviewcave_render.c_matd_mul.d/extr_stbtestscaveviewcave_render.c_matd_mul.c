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

/* Variables and functions */

__attribute__((used)) static void matd_mul(double out[4][4], double src1[4][4], double src2[4][4])
{
   int i,j,k;
   for (j=0; j < 4; ++j) {
      for (i=0; i < 4; ++i) {
         double t=0;
         for (k=0; k < 4; ++k)
            t += src1[k][i] * src2[j][k];
         out[i][j] = t;
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
          int _len_out0 = 4;
          double ** out = (double **) malloc(_len_out0*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 4;
            out[_i0] = (double *) malloc(_len_out1*sizeof(double));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_src10 = 4;
          double ** src1 = (double **) malloc(_len_src10*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_src10; _i0++) {
            int _len_src11 = 4;
            src1[_i0] = (double *) malloc(_len_src11*sizeof(double));
            for(int _i1 = 0; _i1 < _len_src11; _i1++) {
              src1[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_src20 = 4;
          double ** src2 = (double **) malloc(_len_src20*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_src20; _i0++) {
            int _len_src21 = 4;
            src2[_i0] = (double *) malloc(_len_src21*sizeof(double));
            for(int _i1 = 0; _i1 < _len_src21; _i1++) {
              src2[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          matd_mul(out,src1,src2);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 4;
              free(out[i1]);
          }
          free(out);
          for(int i1 = 0; i1 < _len_src10; i1++) {
            int _len_src11 = 4;
              free(src1[i1]);
          }
          free(src1);
          for(int i1 = 0; i1 < _len_src20; i1++) {
            int _len_src21 = 4;
              free(src2[i1]);
          }
          free(src2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_out0 = 65025;
          double ** out = (double **) malloc(_len_out0*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 4;
            out[_i0] = (double *) malloc(_len_out1*sizeof(double));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_src10 = 65025;
          double ** src1 = (double **) malloc(_len_src10*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_src10; _i0++) {
            int _len_src11 = 4;
            src1[_i0] = (double *) malloc(_len_src11*sizeof(double));
            for(int _i1 = 0; _i1 < _len_src11; _i1++) {
              src1[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_src20 = 65025;
          double ** src2 = (double **) malloc(_len_src20*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_src20; _i0++) {
            int _len_src21 = 4;
            src2[_i0] = (double *) malloc(_len_src21*sizeof(double));
            for(int _i1 = 0; _i1 < _len_src21; _i1++) {
              src2[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          matd_mul(out,src1,src2);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 4;
              free(out[i1]);
          }
          free(out);
          for(int i1 = 0; i1 < _len_src10; i1++) {
            int _len_src11 = 4;
              free(src1[i1]);
          }
          free(src1);
          for(int i1 = 0; i1 < _len_src20; i1++) {
            int _len_src21 = 4;
              free(src2[i1]);
          }
          free(src2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_out0 = 100;
          double ** out = (double **) malloc(_len_out0*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 4;
            out[_i0] = (double *) malloc(_len_out1*sizeof(double));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_src10 = 100;
          double ** src1 = (double **) malloc(_len_src10*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_src10; _i0++) {
            int _len_src11 = 4;
            src1[_i0] = (double *) malloc(_len_src11*sizeof(double));
            for(int _i1 = 0; _i1 < _len_src11; _i1++) {
              src1[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_src20 = 100;
          double ** src2 = (double **) malloc(_len_src20*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_src20; _i0++) {
            int _len_src21 = 4;
            src2[_i0] = (double *) malloc(_len_src21*sizeof(double));
            for(int _i1 = 0; _i1 < _len_src21; _i1++) {
              src2[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          matd_mul(out,src1,src2);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 4;
              free(out[i1]);
          }
          free(out);
          for(int i1 = 0; i1 < _len_src10; i1++) {
            int _len_src11 = 4;
              free(src1[i1]);
          }
          free(src1);
          for(int i1 = 0; i1 < _len_src20; i1++) {
            int _len_src21 = 4;
              free(src2[i1]);
          }
          free(src2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
