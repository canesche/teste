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
struct TYPE_3__ {double* noise_band_norm; double* noise_band_avr; double* noise_band_avi; double* noise_band_var; } ;
typedef  TYPE_1__ DeNoiseChannel ;

/* Variables and functions */

__attribute__((used)) static void init_sample_noise(DeNoiseChannel *dnch)
{
    for (int i = 0; i < 15; i++) {
        dnch->noise_band_norm[i] = 0.0;
        dnch->noise_band_avr[i] = 0.0;
        dnch->noise_band_avi[i] = 0.0;
        dnch->noise_band_var[i] = 0.0;
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
          int _len_dnch0 = 1;
          struct TYPE_3__ * dnch = (struct TYPE_3__ *) malloc(_len_dnch0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dnch0; _i0++) {
              int _len_dnch__i0__noise_band_norm0 = 1;
          dnch[_i0].noise_band_norm = (double *) malloc(_len_dnch__i0__noise_band_norm0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_dnch__i0__noise_band_norm0; _j0++) {
            dnch[_i0].noise_band_norm[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_dnch__i0__noise_band_avr0 = 1;
          dnch[_i0].noise_band_avr = (double *) malloc(_len_dnch__i0__noise_band_avr0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_dnch__i0__noise_band_avr0; _j0++) {
            dnch[_i0].noise_band_avr[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_dnch__i0__noise_band_avi0 = 1;
          dnch[_i0].noise_band_avi = (double *) malloc(_len_dnch__i0__noise_band_avi0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_dnch__i0__noise_band_avi0; _j0++) {
            dnch[_i0].noise_band_avi[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_dnch__i0__noise_band_var0 = 1;
          dnch[_i0].noise_band_var = (double *) malloc(_len_dnch__i0__noise_band_var0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_dnch__i0__noise_band_var0; _j0++) {
            dnch[_i0].noise_band_var[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          init_sample_noise(dnch);
          for(int _aux = 0; _aux < _len_dnch0; _aux++) {
          free(dnch[_aux].noise_band_norm);
          }
          for(int _aux = 0; _aux < _len_dnch0; _aux++) {
          free(dnch[_aux].noise_band_avr);
          }
          for(int _aux = 0; _aux < _len_dnch0; _aux++) {
          free(dnch[_aux].noise_band_avi);
          }
          for(int _aux = 0; _aux < _len_dnch0; _aux++) {
          free(dnch[_aux].noise_band_var);
          }
          free(dnch);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dnch0 = 65025;
          struct TYPE_3__ * dnch = (struct TYPE_3__ *) malloc(_len_dnch0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dnch0; _i0++) {
              int _len_dnch__i0__noise_band_norm0 = 1;
          dnch[_i0].noise_band_norm = (double *) malloc(_len_dnch__i0__noise_band_norm0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_dnch__i0__noise_band_norm0; _j0++) {
            dnch[_i0].noise_band_norm[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_dnch__i0__noise_band_avr0 = 1;
          dnch[_i0].noise_band_avr = (double *) malloc(_len_dnch__i0__noise_band_avr0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_dnch__i0__noise_band_avr0; _j0++) {
            dnch[_i0].noise_band_avr[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_dnch__i0__noise_band_avi0 = 1;
          dnch[_i0].noise_band_avi = (double *) malloc(_len_dnch__i0__noise_band_avi0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_dnch__i0__noise_band_avi0; _j0++) {
            dnch[_i0].noise_band_avi[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_dnch__i0__noise_band_var0 = 1;
          dnch[_i0].noise_band_var = (double *) malloc(_len_dnch__i0__noise_band_var0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_dnch__i0__noise_band_var0; _j0++) {
            dnch[_i0].noise_band_var[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          init_sample_noise(dnch);
          for(int _aux = 0; _aux < _len_dnch0; _aux++) {
          free(dnch[_aux].noise_band_norm);
          }
          for(int _aux = 0; _aux < _len_dnch0; _aux++) {
          free(dnch[_aux].noise_band_avr);
          }
          for(int _aux = 0; _aux < _len_dnch0; _aux++) {
          free(dnch[_aux].noise_band_avi);
          }
          for(int _aux = 0; _aux < _len_dnch0; _aux++) {
          free(dnch[_aux].noise_band_var);
          }
          free(dnch);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dnch0 = 100;
          struct TYPE_3__ * dnch = (struct TYPE_3__ *) malloc(_len_dnch0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dnch0; _i0++) {
              int _len_dnch__i0__noise_band_norm0 = 1;
          dnch[_i0].noise_band_norm = (double *) malloc(_len_dnch__i0__noise_band_norm0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_dnch__i0__noise_band_norm0; _j0++) {
            dnch[_i0].noise_band_norm[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_dnch__i0__noise_band_avr0 = 1;
          dnch[_i0].noise_band_avr = (double *) malloc(_len_dnch__i0__noise_band_avr0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_dnch__i0__noise_band_avr0; _j0++) {
            dnch[_i0].noise_band_avr[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_dnch__i0__noise_band_avi0 = 1;
          dnch[_i0].noise_band_avi = (double *) malloc(_len_dnch__i0__noise_band_avi0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_dnch__i0__noise_band_avi0; _j0++) {
            dnch[_i0].noise_band_avi[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_dnch__i0__noise_band_var0 = 1;
          dnch[_i0].noise_band_var = (double *) malloc(_len_dnch__i0__noise_band_var0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_dnch__i0__noise_band_var0; _j0++) {
            dnch[_i0].noise_band_var[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          init_sample_noise(dnch);
          for(int _aux = 0; _aux < _len_dnch0; _aux++) {
          free(dnch[_aux].noise_band_norm);
          }
          for(int _aux = 0; _aux < _len_dnch0; _aux++) {
          free(dnch[_aux].noise_band_avr);
          }
          for(int _aux = 0; _aux < _len_dnch0; _aux++) {
          free(dnch[_aux].noise_band_avi);
          }
          for(int _aux = 0; _aux < _len_dnch0; _aux++) {
          free(dnch[_aux].noise_band_var);
          }
          free(dnch);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
