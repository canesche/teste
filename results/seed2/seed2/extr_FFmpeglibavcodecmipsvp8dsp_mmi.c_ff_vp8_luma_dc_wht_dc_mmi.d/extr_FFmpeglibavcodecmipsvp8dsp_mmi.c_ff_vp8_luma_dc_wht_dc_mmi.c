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
typedef  int int16_t ;

/* Variables and functions */

void ff_vp8_luma_dc_wht_dc_mmi(int16_t block[4][4][16], int16_t dc[16])
{
    int val = (dc[0] + 3) >> 3;

    dc[0] = 0;

    block[0][0][0] = val;
    block[0][1][0] = val;
    block[0][2][0] = val;
    block[0][3][0] = val;
    block[1][0][0] = val;
    block[1][1][0] = val;
    block[1][2][0] = val;
    block[1][3][0] = val;
    block[2][0][0] = val;
    block[2][1][0] = val;
    block[2][2][0] = val;
    block[2][3][0] = val;
    block[3][0][0] = val;
    block[3][1][0] = val;
    block[3][2][0] = val;
    block[3][3][0] = val;
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
          int _len_block0 = 4;
          int *** block = (int ***) malloc(_len_block0*sizeof(int **));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            int _len_block1 = 4;
            block[_i0] = (int **) malloc(_len_block1*sizeof(int *));
            for(int _i1 = 0; _i1 < _len_block1; _i1++) {
              int _len_block2 = 16;
              block[_i0][_i1] = (int *) malloc(_len_block2*sizeof(int));
              for(int _i2 = 0; _i2 < _len_block2; _i2++) {
                block[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_dc0 = 16;
          int * dc = (int *) malloc(_len_dc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
            dc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_vp8_luma_dc_wht_dc_mmi(block,dc);
          for(int i1 = 0; i1 < _len_block0; i1++) {
            int _len_block1 = 4;
              for(int i2 = 0; i2 < _len_block1; i2++) {
            int _len_block2 = 16;
              free(block[i1][i2]);
          }
          free(block[i1]);
          }
          free(block);
          free(dc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_block0 = 65025;
          int *** block = (int ***) malloc(_len_block0*sizeof(int **));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            int _len_block1 = 4;
            block[_i0] = (int **) malloc(_len_block1*sizeof(int *));
            for(int _i1 = 0; _i1 < _len_block1; _i1++) {
              int _len_block2 = 16;
              block[_i0][_i1] = (int *) malloc(_len_block2*sizeof(int));
              for(int _i2 = 0; _i2 < _len_block2; _i2++) {
                block[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_dc0 = 65025;
          int * dc = (int *) malloc(_len_dc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
            dc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_vp8_luma_dc_wht_dc_mmi(block,dc);
          for(int i1 = 0; i1 < _len_block0; i1++) {
            int _len_block1 = 4;
              for(int i2 = 0; i2 < _len_block1; i2++) {
            int _len_block2 = 16;
              free(block[i1][i2]);
          }
          free(block[i1]);
          }
          free(block);
          free(dc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_block0 = 100;
          int *** block = (int ***) malloc(_len_block0*sizeof(int **));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            int _len_block1 = 4;
            block[_i0] = (int **) malloc(_len_block1*sizeof(int *));
            for(int _i1 = 0; _i1 < _len_block1; _i1++) {
              int _len_block2 = 16;
              block[_i0][_i1] = (int *) malloc(_len_block2*sizeof(int));
              for(int _i2 = 0; _i2 < _len_block2; _i2++) {
                block[_i0][_i1][_i2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_dc0 = 100;
          int * dc = (int *) malloc(_len_dc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
            dc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_vp8_luma_dc_wht_dc_mmi(block,dc);
          for(int i1 = 0; i1 < _len_block0; i1++) {
            int _len_block1 = 4;
              for(int i2 = 0; i2 < _len_block1; i2++) {
            int _len_block2 = 16;
              free(block[i1][i2]);
          }
          free(block[i1]);
          }
          free(block);
          free(dc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
