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

__attribute__((used)) static void sbr_qmf_post_shuffle_c(int W[32][2], const int *z)
{
    int k;
    for (k = 0; k < 32; k++) {
        W[k][0] = -z[63-k];
        W[k][1] = z[k];
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
          int _len_W0 = 32;
          int ** W = (int **) malloc(_len_W0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_W0; _i0++) {
            int _len_W1 = 2;
            W[_i0] = (int *) malloc(_len_W1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_W1; _i1++) {
              W[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_z0 = 1;
          const int * z = (const int *) malloc(_len_z0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_z0; _i0++) {
            z[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sbr_qmf_post_shuffle_c(W,z);
          for(int i1 = 0; i1 < _len_W0; i1++) {
            int _len_W1 = 2;
              free(W[i1]);
          }
          free(W);
          free(z);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_W0 = 65025;
          int ** W = (int **) malloc(_len_W0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_W0; _i0++) {
            int _len_W1 = 2;
            W[_i0] = (int *) malloc(_len_W1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_W1; _i1++) {
              W[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_z0 = 65025;
          const int * z = (const int *) malloc(_len_z0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_z0; _i0++) {
            z[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sbr_qmf_post_shuffle_c(W,z);
          for(int i1 = 0; i1 < _len_W0; i1++) {
            int _len_W1 = 2;
              free(W[i1]);
          }
          free(W);
          free(z);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_W0 = 100;
          int ** W = (int **) malloc(_len_W0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_W0; _i0++) {
            int _len_W1 = 2;
            W[_i0] = (int *) malloc(_len_W1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_W1; _i1++) {
              W[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_z0 = 100;
          const int * z = (const int *) malloc(_len_z0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_z0; _i0++) {
            z[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sbr_qmf_post_shuffle_c(W,z);
          for(int i1 = 0; i1 < _len_W0; i1++) {
            int _len_W1 = 2;
              free(W[i1]);
          }
          free(W);
          free(z);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
