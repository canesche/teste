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
typedef  scalar_t__ int8_t ;

/* Variables and functions */

__attribute__((used)) static void map_idx_10_to_34(int8_t *par_mapped, const int8_t *par, int full)
{
    if (full) {
        par_mapped[33] = par[9];
        par_mapped[32] = par[9];
        par_mapped[31] = par[9];
        par_mapped[30] = par[9];
        par_mapped[29] = par[9];
        par_mapped[28] = par[9];
        par_mapped[27] = par[8];
        par_mapped[26] = par[8];
        par_mapped[25] = par[8];
        par_mapped[24] = par[8];
        par_mapped[23] = par[7];
        par_mapped[22] = par[7];
        par_mapped[21] = par[7];
        par_mapped[20] = par[7];
        par_mapped[19] = par[6];
        par_mapped[18] = par[6];
        par_mapped[17] = par[5];
        par_mapped[16] = par[5];
    } else {
        par_mapped[16] =      0;
    }
    par_mapped[15] = par[4];
    par_mapped[14] = par[4];
    par_mapped[13] = par[4];
    par_mapped[12] = par[4];
    par_mapped[11] = par[3];
    par_mapped[10] = par[3];
    par_mapped[ 9] = par[2];
    par_mapped[ 8] = par[2];
    par_mapped[ 7] = par[2];
    par_mapped[ 6] = par[2];
    par_mapped[ 5] = par[1];
    par_mapped[ 4] = par[1];
    par_mapped[ 3] = par[1];
    par_mapped[ 2] = par[0];
    par_mapped[ 1] = par[0];
    par_mapped[ 0] = par[0];
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
          long * par_mapped = (long *) malloc(_len_par_mapped0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_par_mapped0; _i0++) {
            par_mapped[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_par0 = 1;
          const long * par = (const long *) malloc(_len_par0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          map_idx_10_to_34(par_mapped,par,full);
          free(par_mapped);
          free(par);
        
        break;
    }
    // big-arr
    case 1:
    {
          int full = 255;
          int _len_par_mapped0 = 65025;
          long * par_mapped = (long *) malloc(_len_par_mapped0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_par_mapped0; _i0++) {
            par_mapped[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_par0 = 65025;
          const long * par = (const long *) malloc(_len_par0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          map_idx_10_to_34(par_mapped,par,full);
          free(par_mapped);
          free(par);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int full = 10;
          int _len_par_mapped0 = 100;
          long * par_mapped = (long *) malloc(_len_par_mapped0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_par_mapped0; _i0++) {
            par_mapped[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_par0 = 100;
          const long * par = (const long *) malloc(_len_par0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          map_idx_10_to_34(par_mapped,par,full);
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
