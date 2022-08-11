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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int uint64_t ;
struct TYPE_3__ {int nbits; scalar_t__ code; } ;
typedef  TYPE_1__ nghttp2_huff_sym ;

/* Variables and functions */
 size_t SIZE_MAX ; 
 TYPE_1__* huff_sym_table ; 

size_t h2o_hpack_encode_huffman(uint8_t *_dst, const uint8_t *src, size_t len)
{
    uint8_t *dst = _dst, *dst_end = dst + len;
    const uint8_t *src_end = src + len;
    uint64_t bits = 0;
    int bits_left = 40;

    while (src != src_end) {
        const nghttp2_huff_sym *sym = huff_sym_table + *src++;
        bits |= (uint64_t)sym->code << (bits_left - sym->nbits);
        bits_left -= sym->nbits;
        while (bits_left <= 32) {
            *dst++ = bits >> 32;
            bits <<= 8;
            bits_left += 8;
            if (dst == dst_end) {
                return SIZE_MAX;
            }
        }
    }

    if (bits_left != 40) {
        bits |= ((uint64_t)1 << bits_left) - 1;
        *dst++ = bits >> 32;
    }
    if (dst == dst_end) {
        return SIZE_MAX;
    }

    return dst - _dst;
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
          unsigned long len = 100;
          int _len__dst0 = 1;
          int * _dst = (int *) malloc(_len__dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len__dst0; _i0++) {
            _dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = h2o_hpack_encode_huffman(_dst,src,len);
          printf("%lu\n", benchRet); 
          free(_dst);
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
          int _len__dst0 = 65025;
          int * _dst = (int *) malloc(_len__dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len__dst0; _i0++) {
            _dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 65025;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = h2o_hpack_encode_huffman(_dst,src,len);
          printf("%lu\n", benchRet); 
          free(_dst);
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
          int _len__dst0 = 100;
          int * _dst = (int *) malloc(_len__dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len__dst0; _i0++) {
            _dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 100;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = h2o_hpack_encode_huffman(_dst,src,len);
          printf("%lu\n", benchRet); 
          free(_dst);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
