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
typedef  unsigned int WORD ;
typedef  unsigned int DWORD ;

/* Variables and functions */

__attribute__((used)) static unsigned int get_stride_idx(const void *idx_data, unsigned int idx_size,
        unsigned int base_vertex_idx, unsigned int start_idx, unsigned int vertex_idx)
{
    if (!idx_data)
        return start_idx + vertex_idx;
    if (idx_size == 2)
        return ((const WORD *)idx_data)[start_idx + vertex_idx] + base_vertex_idx;
    return ((const DWORD *)idx_data)[start_idx + vertex_idx] + base_vertex_idx;
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
          unsigned int idx_size = 100;
          unsigned int base_vertex_idx = 100;
          unsigned int start_idx = 100;
          unsigned int vertex_idx = 100;
          int _len_idx_data0 = 1;
          const void * idx_data = (const void *) malloc(_len_idx_data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_idx_data0; _i0++) {
            idx_data[_i0] = 0;
          }
          unsigned int benchRet = get_stride_idx(idx_data,idx_size,base_vertex_idx,start_idx,vertex_idx);
          printf("%u\n", benchRet); 
          free(idx_data);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int idx_size = 255;
          unsigned int base_vertex_idx = 255;
          unsigned int start_idx = 255;
          unsigned int vertex_idx = 255;
          int _len_idx_data0 = 65025;
          const void * idx_data = (const void *) malloc(_len_idx_data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_idx_data0; _i0++) {
            idx_data[_i0] = 0;
          }
          unsigned int benchRet = get_stride_idx(idx_data,idx_size,base_vertex_idx,start_idx,vertex_idx);
          printf("%u\n", benchRet); 
          free(idx_data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int idx_size = 10;
          unsigned int base_vertex_idx = 10;
          unsigned int start_idx = 10;
          unsigned int vertex_idx = 10;
          int _len_idx_data0 = 100;
          const void * idx_data = (const void *) malloc(_len_idx_data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_idx_data0; _i0++) {
            idx_data[_i0] = 0;
          }
          unsigned int benchRet = get_stride_idx(idx_data,idx_size,base_vertex_idx,start_idx,vertex_idx);
          printf("%u\n", benchRet); 
          free(idx_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
