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
struct TYPE_3__ {size_t band_index; float* noise_buffer; } ;
typedef  TYPE_1__ QDMCContext ;

/* Variables and functions */
 int* noise_bands_size ; 
 int* qdmc_nodes ; 

__attribute__((used)) static void make_noises(QDMCContext *s)
{
    int i, j, n0, n1, n2, diff;
    float *nptr;

    for (j = 0; j < noise_bands_size[s->band_index]; j++) {
        n0 = qdmc_nodes[j + 21 * s->band_index    ];
        n1 = qdmc_nodes[j + 21 * s->band_index + 1];
        n2 = qdmc_nodes[j + 21 * s->band_index + 2];
        nptr = s->noise_buffer + 256 * j;

        for (i = 0; i + n0 < n1; i++, nptr++)
            nptr[0] = i / (float)(n1 - n0);

        diff = n2 - n1;
        nptr = s->noise_buffer + (j << 8) + n1 - n0;

        for (i = n1; i < n2; i++, nptr++, diff--)
            nptr[0] = diff / (float)(n2 - n1);
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
            s[_i0].band_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__noise_buffer0 = 1;
          s[_i0].noise_buffer = (float *) malloc(_len_s__i0__noise_buffer0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_s__i0__noise_buffer0; _j0++) {
            s[_i0].noise_buffer[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          make_noises(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].noise_buffer);
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
            s[_i0].band_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__noise_buffer0 = 1;
          s[_i0].noise_buffer = (float *) malloc(_len_s__i0__noise_buffer0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_s__i0__noise_buffer0; _j0++) {
            s[_i0].noise_buffer[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          make_noises(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].noise_buffer);
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
            s[_i0].band_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__noise_buffer0 = 1;
          s[_i0].noise_buffer = (float *) malloc(_len_s__i0__noise_buffer0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_s__i0__noise_buffer0; _j0++) {
            s[_i0].noise_buffer[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          make_noises(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].noise_buffer);
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
