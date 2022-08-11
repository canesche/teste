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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ npy_intp ;
typedef  int npy_int64 ;
struct TYPE_2__ {int num; int denom; } ;
typedef  TYPE_1__ _strided_datetime_cast_data ;
typedef  int /*<<< orphan*/  NpyAuxData ;

/* Variables and functions */
 int NPY_DATETIME_NAT ; 

__attribute__((used)) static void
_aligned_strided_to_strided_datetime_cast(char *dst,
                        npy_intp dst_stride,
                        char *src, npy_intp src_stride,
                        npy_intp N, npy_intp src_itemsize,
                        NpyAuxData *data)
{
    _strided_datetime_cast_data *d = (_strided_datetime_cast_data *)data;
    npy_int64 num = d->num, denom = d->denom;
    npy_int64 dt;

    while (N > 0) {
        dt = *(npy_int64 *)src;

        if (dt != NPY_DATETIME_NAT) {
            /* Apply the scaling */
            if (dt < 0) {
                dt = (dt * num - (denom - 1)) / denom;
            }
            else {
                dt = dt * num / denom;
            }
        }

        *(npy_int64 *)dst = dt;

        dst += dst_stride;
        src += src_stride;
        --N;
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
          long dst_stride = 100;
          long src_stride = 100;
          long N = 100;
          long src_itemsize = 100;
          int _len_dst0 = 1;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          char * src = (char *) malloc(_len_src0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _aligned_strided_to_strided_datetime_cast(dst,dst_stride,src,src_stride,N,src_itemsize,data);
          free(dst);
          free(src);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          long dst_stride = 255;
          long src_stride = 255;
          long N = 255;
          long src_itemsize = 255;
          int _len_dst0 = 65025;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 65025;
          char * src = (char *) malloc(_len_src0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _aligned_strided_to_strided_datetime_cast(dst,dst_stride,src,src_stride,N,src_itemsize,data);
          free(dst);
          free(src);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long dst_stride = 10;
          long src_stride = 10;
          long N = 10;
          long src_itemsize = 10;
          int _len_dst0 = 100;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 100;
          char * src = (char *) malloc(_len_src0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _aligned_strided_to_strided_datetime_cast(dst,dst_stride,src,src_stride,N,src_itemsize,data);
          free(dst);
          free(src);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
