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
 int* atrac3p_qu_num_to_seg ; 

__attribute__((used)) static inline void unpack_vq_shape(int start_val, const int8_t *shape_vec,
                                   int *dst, int num_values)
{
    int i;

    if (num_values) {
        dst[0] = dst[1] = dst[2] = start_val;
        for (i = 3; i < num_values; i++)
            dst[i] = start_val - shape_vec[atrac3p_qu_num_to_seg[i] - 1];
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
          int start_val = 100;
          int num_values = 100;
          int _len_shape_vec0 = 1;
          const int * shape_vec = (const int *) malloc(_len_shape_vec0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_shape_vec0; _i0++) {
            shape_vec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unpack_vq_shape(start_val,shape_vec,dst,num_values);
          free(shape_vec);
          free(dst);
        
        break;
    }
    // big-arr
    case 1:
    {
          int start_val = 255;
          int num_values = 255;
          int _len_shape_vec0 = 65025;
          const int * shape_vec = (const int *) malloc(_len_shape_vec0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_shape_vec0; _i0++) {
            shape_vec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 65025;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unpack_vq_shape(start_val,shape_vec,dst,num_values);
          free(shape_vec);
          free(dst);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int start_val = 10;
          int num_values = 10;
          int _len_shape_vec0 = 100;
          const int * shape_vec = (const int *) malloc(_len_shape_vec0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_shape_vec0; _i0++) {
            shape_vec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 100;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unpack_vq_shape(start_val,shape_vec,dst,num_values);
          free(shape_vec);
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
