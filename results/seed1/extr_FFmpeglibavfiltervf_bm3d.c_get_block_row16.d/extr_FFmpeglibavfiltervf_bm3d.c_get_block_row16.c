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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  float uint16_t ;

/* Variables and functions */

__attribute__((used)) static void get_block_row16(const uint8_t *srcp, int src_linesize,
                            int y, int x, int block_size, float *dst)
{
    const uint16_t *src = (uint16_t *)srcp + y * src_linesize / 2 + x;
    int j;

    for (j = 0; j < block_size; j++) {
        dst[j] = src[j];
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
          int src_linesize = 100;
          int y = 100;
          int x = 100;
          int block_size = 100;
          int _len_srcp0 = 1;
          const int * srcp = (const int *) malloc(_len_srcp0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_srcp0; _i0++) {
            srcp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          float * dst = (float *) malloc(_len_dst0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          get_block_row16(srcp,src_linesize,y,x,block_size,dst);
          free(srcp);
          free(dst);
        
        break;
    }
    // big-arr
    case 1:
    {
          int src_linesize = 255;
          int y = 255;
          int x = 255;
          int block_size = 255;
          int _len_srcp0 = 65025;
          const int * srcp = (const int *) malloc(_len_srcp0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_srcp0; _i0++) {
            srcp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 65025;
          float * dst = (float *) malloc(_len_dst0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          get_block_row16(srcp,src_linesize,y,x,block_size,dst);
          free(srcp);
          free(dst);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int src_linesize = 10;
          int y = 10;
          int x = 10;
          int block_size = 10;
          int _len_srcp0 = 100;
          const int * srcp = (const int *) malloc(_len_srcp0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_srcp0; _i0++) {
            srcp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 100;
          float * dst = (float *) malloc(_len_dst0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          get_block_row16(srcp,src_linesize,y,x,block_size,dst);
          free(srcp);
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
