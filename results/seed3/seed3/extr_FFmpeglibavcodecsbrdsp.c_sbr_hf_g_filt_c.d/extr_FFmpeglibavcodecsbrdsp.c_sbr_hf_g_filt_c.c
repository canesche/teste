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

__attribute__((used)) static void sbr_hf_g_filt_c(float (*Y)[2], const float (*X_high)[40][2],
                            const float *g_filt, int m_max, intptr_t ixh)
{
    int m;

    for (m = 0; m < m_max; m++) {
        Y[m][0] = X_high[m][ixh][0] * g_filt[m];
        Y[m][1] = X_high[m][ixh][1] * g_filt[m];
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
          int m_max = 100;
          long ixh = 100;
          int _len_Y0 = 2;
          float (*)* Y = (float (*)*) malloc(_len_Y0*sizeof(float ()*));
          for(int _i0 = 0; _i0 < _len_Y0; _i0++) {
            int _len_Y1 = 1;
            Y[_i0] = (float ()*) malloc(_len_Y1*sizeof(float ()));
            for(int _i1 = 0; _i1 < _len_Y1; _i1++) {
              Y[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_X_high0 = 40;
          float const (*)** X_high = (float const (*)**) malloc(_len_X_high0*sizeof(float const ()**));
          for(int _i0 = 0; _i0 < _len_X_high0; _i0++) {
            int _len_X_high1 = 2;
            X_high[_i0] = (float const ()**) malloc(_len_X_high1*sizeof(float const ()*));
            for(int _i1 = 0; _i1 < _len_X_high1; _i1++) {
              int _len_X_high2 = 1;
              X_high[_i0][_i1] = (float const ()*) malloc(_len_X_high2*sizeof(float const ()));
              for(int _i2 = 0; _i2 < _len_X_high2; _i2++) {
                X_high[_i0][_i1][_i2] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
              }
            }
          }
          int _len_g_filt0 = 1;
          const float * g_filt = (const float *) malloc(_len_g_filt0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_g_filt0; _i0++) {
            g_filt[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          sbr_hf_g_filt_c(Y,X_high,g_filt,m_max,ixh);
          for(int i1 = 0; i1 < _len_Y0; i1++) {
            int _len_Y1 = 1;
              free(Y[i1]);
          }
          free(Y);
          for(int i1 = 0; i1 < _len_X_high0; i1++) {
            int _len_X_high1 = 2;
              for(int i2 = 0; i2 < _len_X_high1; i2++) {
            int _len_X_high2 = 1;
              free(X_high[i1][i2]);
          }
          free(X_high[i1]);
          }
          free(X_high);
          free(g_filt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int m_max = 255;
          long ixh = 255;
          int _len_Y0 = 65025;
          float (*)* Y = (float (*)*) malloc(_len_Y0*sizeof(float ()*));
          for(int _i0 = 0; _i0 < _len_Y0; _i0++) {
            int _len_Y1 = 1;
            Y[_i0] = (float ()*) malloc(_len_Y1*sizeof(float ()));
            for(int _i1 = 0; _i1 < _len_Y1; _i1++) {
              Y[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_X_high0 = 65025;
          float const (*)** X_high = (float const (*)**) malloc(_len_X_high0*sizeof(float const ()**));
          for(int _i0 = 0; _i0 < _len_X_high0; _i0++) {
            int _len_X_high1 = 2;
            X_high[_i0] = (float const ()**) malloc(_len_X_high1*sizeof(float const ()*));
            for(int _i1 = 0; _i1 < _len_X_high1; _i1++) {
              int _len_X_high2 = 1;
              X_high[_i0][_i1] = (float const ()*) malloc(_len_X_high2*sizeof(float const ()));
              for(int _i2 = 0; _i2 < _len_X_high2; _i2++) {
                X_high[_i0][_i1][_i2] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
              }
            }
          }
          int _len_g_filt0 = 65025;
          const float * g_filt = (const float *) malloc(_len_g_filt0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_g_filt0; _i0++) {
            g_filt[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          sbr_hf_g_filt_c(Y,X_high,g_filt,m_max,ixh);
          for(int i1 = 0; i1 < _len_Y0; i1++) {
            int _len_Y1 = 1;
              free(Y[i1]);
          }
          free(Y);
          for(int i1 = 0; i1 < _len_X_high0; i1++) {
            int _len_X_high1 = 2;
              for(int i2 = 0; i2 < _len_X_high1; i2++) {
            int _len_X_high2 = 1;
              free(X_high[i1][i2]);
          }
          free(X_high[i1]);
          }
          free(X_high);
          free(g_filt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int m_max = 10;
          long ixh = 10;
          int _len_Y0 = 100;
          float (*)* Y = (float (*)*) malloc(_len_Y0*sizeof(float ()*));
          for(int _i0 = 0; _i0 < _len_Y0; _i0++) {
            int _len_Y1 = 1;
            Y[_i0] = (float ()*) malloc(_len_Y1*sizeof(float ()));
            for(int _i1 = 0; _i1 < _len_Y1; _i1++) {
              Y[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_X_high0 = 100;
          float const (*)** X_high = (float const (*)**) malloc(_len_X_high0*sizeof(float const ()**));
          for(int _i0 = 0; _i0 < _len_X_high0; _i0++) {
            int _len_X_high1 = 2;
            X_high[_i0] = (float const ()**) malloc(_len_X_high1*sizeof(float const ()*));
            for(int _i1 = 0; _i1 < _len_X_high1; _i1++) {
              int _len_X_high2 = 1;
              X_high[_i0][_i1] = (float const ()*) malloc(_len_X_high2*sizeof(float const ()));
              for(int _i2 = 0; _i2 < _len_X_high2; _i2++) {
                X_high[_i0][_i1][_i2] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
              }
            }
          }
          int _len_g_filt0 = 100;
          const float * g_filt = (const float *) malloc(_len_g_filt0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_g_filt0; _i0++) {
            g_filt[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          sbr_hf_g_filt_c(Y,X_high,g_filt,m_max,ixh);
          for(int i1 = 0; i1 < _len_Y0; i1++) {
            int _len_Y1 = 1;
              free(Y[i1]);
          }
          free(Y);
          for(int i1 = 0; i1 < _len_X_high0; i1++) {
            int _len_X_high1 = 2;
              for(int i2 = 0; i2 < _len_X_high1; i2++) {
            int _len_X_high2 = 1;
              free(X_high[i1][i2]);
          }
          free(X_high[i1]);
          }
          free(X_high);
          free(g_filt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
