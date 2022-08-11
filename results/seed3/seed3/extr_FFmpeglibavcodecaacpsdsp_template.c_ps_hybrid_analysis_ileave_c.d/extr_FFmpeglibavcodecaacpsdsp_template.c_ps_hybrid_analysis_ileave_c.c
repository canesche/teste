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
typedef  int /*<<< orphan*/  INTFLOAT ;

/* Variables and functions */

__attribute__((used)) static void ps_hybrid_analysis_ileave_c(INTFLOAT (*out)[32][2], INTFLOAT L[2][38][64],
                                      int i, int len)
{
    int j;

    for (; i < 64; i++) {
        for (j = 0; j < len; j++) {
            out[i][j][0] = L[0][j][i];
            out[i][j][1] = L[1][j][i];
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
          int i = 100;
          int len = 100;
          int _len_out0 = 32;
          int (*)** out = (int (*)**) malloc(_len_out0*sizeof(int ()**));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 2;
            out[_i0] = (int ()**) malloc(_len_out1*sizeof(int ()*));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              int _len_out2 = 1;
              out[_i0][_i1] = (int ()*) malloc(_len_out2*sizeof(int ()));
              for(int _i2 = 0; _i2 < _len_out2; _i2++) {
                out[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_L0 = 2;
          int *** L = (int ***) malloc(_len_L0*sizeof(int **));
          for(int _i0 = 0; _i0 < _len_L0; _i0++) {
            int _len_L1 = 38;
            L[_i0] = (int **) malloc(_len_L1*sizeof(int *));
            for(int _i1 = 0; _i1 < _len_L1; _i1++) {
              int _len_L2 = 64;
              L[_i0][_i1] = (int *) malloc(_len_L2*sizeof(int));
              for(int _i2 = 0; _i2 < _len_L2; _i2++) {
                L[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          ps_hybrid_analysis_ileave_c(out,L,i,len);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 2;
              for(int i2 = 0; i2 < _len_out1; i2++) {
            int _len_out2 = 1;
              free(out[i1][i2]);
          }
          free(out[i1]);
          }
          free(out);
          for(int i1 = 0; i1 < _len_L0; i1++) {
            int _len_L1 = 38;
              for(int i2 = 0; i2 < _len_L1; i2++) {
            int _len_L2 = 64;
              free(L[i1][i2]);
          }
          free(L[i1]);
          }
          free(L);
        
        break;
    }
    // big-arr
    case 1:
    {
          int i = 255;
          int len = 255;
          int _len_out0 = 65025;
          int (*)** out = (int (*)**) malloc(_len_out0*sizeof(int ()**));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 2;
            out[_i0] = (int ()**) malloc(_len_out1*sizeof(int ()*));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              int _len_out2 = 1;
              out[_i0][_i1] = (int ()*) malloc(_len_out2*sizeof(int ()));
              for(int _i2 = 0; _i2 < _len_out2; _i2++) {
                out[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_L0 = 65025;
          int *** L = (int ***) malloc(_len_L0*sizeof(int **));
          for(int _i0 = 0; _i0 < _len_L0; _i0++) {
            int _len_L1 = 38;
            L[_i0] = (int **) malloc(_len_L1*sizeof(int *));
            for(int _i1 = 0; _i1 < _len_L1; _i1++) {
              int _len_L2 = 64;
              L[_i0][_i1] = (int *) malloc(_len_L2*sizeof(int));
              for(int _i2 = 0; _i2 < _len_L2; _i2++) {
                L[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          ps_hybrid_analysis_ileave_c(out,L,i,len);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 2;
              for(int i2 = 0; i2 < _len_out1; i2++) {
            int _len_out2 = 1;
              free(out[i1][i2]);
          }
          free(out[i1]);
          }
          free(out);
          for(int i1 = 0; i1 < _len_L0; i1++) {
            int _len_L1 = 38;
              for(int i2 = 0; i2 < _len_L1; i2++) {
            int _len_L2 = 64;
              free(L[i1][i2]);
          }
          free(L[i1]);
          }
          free(L);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int i = 10;
          int len = 10;
          int _len_out0 = 100;
          int (*)** out = (int (*)**) malloc(_len_out0*sizeof(int ()**));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 2;
            out[_i0] = (int ()**) malloc(_len_out1*sizeof(int ()*));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              int _len_out2 = 1;
              out[_i0][_i1] = (int ()*) malloc(_len_out2*sizeof(int ()));
              for(int _i2 = 0; _i2 < _len_out2; _i2++) {
                out[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_L0 = 100;
          int *** L = (int ***) malloc(_len_L0*sizeof(int **));
          for(int _i0 = 0; _i0 < _len_L0; _i0++) {
            int _len_L1 = 38;
            L[_i0] = (int **) malloc(_len_L1*sizeof(int *));
            for(int _i1 = 0; _i1 < _len_L1; _i1++) {
              int _len_L2 = 64;
              L[_i0][_i1] = (int *) malloc(_len_L2*sizeof(int));
              for(int _i2 = 0; _i2 < _len_L2; _i2++) {
                L[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          ps_hybrid_analysis_ileave_c(out,L,i,len);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 2;
              for(int i2 = 0; i2 < _len_out1; i2++) {
            int _len_out2 = 1;
              free(out[i1][i2]);
          }
          free(out[i1]);
          }
          free(out);
          for(int i1 = 0; i1 < _len_L0; i1++) {
            int _len_L1 = 38;
              for(int i2 = 0; i2 < _len_L1; i2++) {
            int _len_L2 = 64;
              free(L[i1][i2]);
          }
          free(L[i1]);
          }
          free(L);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
