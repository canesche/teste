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
typedef  int int8_t ;

/* Variables and functions */

__attribute__((used)) static void map_idx_34_to_20(int8_t *par_mapped, const int8_t *par, int full)
{
    par_mapped[ 0] = (2*par[ 0] +   par[ 1]) / 3;
    par_mapped[ 1] = (  par[ 1] + 2*par[ 2]) / 3;
    par_mapped[ 2] = (2*par[ 3] +   par[ 4]) / 3;
    par_mapped[ 3] = (  par[ 4] + 2*par[ 5]) / 3;
    par_mapped[ 4] = (  par[ 6] +   par[ 7]) / 2;
    par_mapped[ 5] = (  par[ 8] +   par[ 9]) / 2;
    par_mapped[ 6] =    par[10];
    par_mapped[ 7] =    par[11];
    par_mapped[ 8] = (  par[12] +   par[13]) / 2;
    par_mapped[ 9] = (  par[14] +   par[15]) / 2;
    par_mapped[10] =    par[16];
    if (full) {
        par_mapped[11] =    par[17];
        par_mapped[12] =    par[18];
        par_mapped[13] =    par[19];
        par_mapped[14] = (  par[20] +   par[21]) / 2;
        par_mapped[15] = (  par[22] +   par[23]) / 2;
        par_mapped[16] = (  par[24] +   par[25]) / 2;
        par_mapped[17] = (  par[26] +   par[27]) / 2;
        par_mapped[18] = (  par[28] +   par[29] +   par[30] +   par[31]) / 4;
        par_mapped[19] = (  par[32] +   par[33]) / 2;
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
          int full = 100;
          int _len_par_mapped0 = 1;
          int * par_mapped = (int *) malloc(_len_par_mapped0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_par_mapped0; _i0++) {
            par_mapped[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_par0 = 1;
          const int * par = (const int *) malloc(_len_par0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          map_idx_34_to_20(par_mapped,par,full);
          free(par_mapped);
          free(par);
        
        break;
    }
    // big-arr
    case 1:
    {
          int full = 255;
          int _len_par_mapped0 = 65025;
          int * par_mapped = (int *) malloc(_len_par_mapped0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_par_mapped0; _i0++) {
            par_mapped[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_par0 = 65025;
          const int * par = (const int *) malloc(_len_par0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          map_idx_34_to_20(par_mapped,par,full);
          free(par_mapped);
          free(par);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int full = 10;
          int _len_par_mapped0 = 100;
          int * par_mapped = (int *) malloc(_len_par_mapped0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_par_mapped0; _i0++) {
            par_mapped[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_par0 = 100;
          const int * par = (const int *) malloc(_len_par0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          map_idx_34_to_20(par_mapped,par,full);
          free(par_mapped);
          free(par);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
