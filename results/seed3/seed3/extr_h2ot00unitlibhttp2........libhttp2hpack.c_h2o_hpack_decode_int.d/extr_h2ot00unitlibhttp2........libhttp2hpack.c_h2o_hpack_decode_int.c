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
typedef  int uint8_t ;
typedef  int uint64_t ;
typedef  int int64_t ;

/* Variables and functions */
 int H2O_HTTP2_ERROR_COMPRESSION ; 
 int H2O_HTTP2_ERROR_INCOMPLETE ; 
 scalar_t__ INT64_MAX ; 

int64_t h2o_hpack_decode_int(const uint8_t **src, const uint8_t *src_end, unsigned prefix_bits)
{
    uint64_t value;
    unsigned shift;
    uint8_t prefix_max = (1 << prefix_bits) - 1;

    if (*src >= src_end)
        return H2O_HTTP2_ERROR_INCOMPLETE;

    value = *(*src)++ & prefix_max;
    if (value != prefix_max)
        return (int64_t)value;

    /* decode upto 8 octets (excluding prefix), that are guaranteed not to cause overflow */
    value = prefix_max;
    for (shift = 0; shift < 56; shift += 7) {
        if (*src == src_end)
            return H2O_HTTP2_ERROR_INCOMPLETE;
        value += (uint64_t)(**src & 127) << shift;
        if ((*(*src)++ & 128) == 0)
            return (int64_t)value;
    }
    /* handling the 9th octet */
    if (*src == src_end)
        return H2O_HTTP2_ERROR_INCOMPLETE;
    if ((**src & 128) != 0)
        return H2O_HTTP2_ERROR_COMPRESSION;
    value += (uint64_t)(*(*src)++ & 127) << shift;
    if (value > (uint64_t)INT64_MAX)
        return H2O_HTTP2_ERROR_COMPRESSION;
    return value;
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
          unsigned int prefix_bits = 100;
          int _len_src0 = 1;
          const int ** src = (const int **) malloc(_len_src0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            int _len_src1 = 1;
            src[_i0] = (const int *) malloc(_len_src1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_src1; _i1++) {
              src[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_src_end0 = 1;
          const int * src_end = (const int *) malloc(_len_src_end0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src_end0; _i0++) {
            src_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = h2o_hpack_decode_int(src,src_end,prefix_bits);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_src0; i1++) {
            int _len_src1 = 1;
              free(src[i1]);
          }
          free(src);
          free(src_end);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int prefix_bits = 255;
          int _len_src0 = 65025;
          const int ** src = (const int **) malloc(_len_src0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            int _len_src1 = 1;
            src[_i0] = (const int *) malloc(_len_src1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_src1; _i1++) {
              src[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_src_end0 = 65025;
          const int * src_end = (const int *) malloc(_len_src_end0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src_end0; _i0++) {
            src_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = h2o_hpack_decode_int(src,src_end,prefix_bits);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_src0; i1++) {
            int _len_src1 = 1;
              free(src[i1]);
          }
          free(src);
          free(src_end);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int prefix_bits = 10;
          int _len_src0 = 100;
          const int ** src = (const int **) malloc(_len_src0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            int _len_src1 = 1;
            src[_i0] = (const int *) malloc(_len_src1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_src1; _i1++) {
              src[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_src_end0 = 100;
          const int * src_end = (const int *) malloc(_len_src_end0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src_end0; _i0++) {
            src_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = h2o_hpack_decode_int(src,src_end,prefix_bits);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_src0; i1++) {
            int _len_src1 = 1;
              free(src[i1]);
          }
          free(src);
          free(src_end);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
