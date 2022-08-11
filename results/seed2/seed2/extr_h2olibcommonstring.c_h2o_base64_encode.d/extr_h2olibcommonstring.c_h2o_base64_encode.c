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
typedef  int uint32_t ;

/* Variables and functions */

size_t h2o_base64_encode(char *_dst, const void *_src, size_t len, int url_encoded)
{
    static const char *MAP = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                             "abcdefghijklmnopqrstuvwxyz"
                             "0123456789+/";
    static const char *MAP_URL_ENCODED = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                                         "abcdefghijklmnopqrstuvwxyz"
                                         "0123456789-_";

    char *dst = _dst;
    const uint8_t *src = _src;
    const char *map = url_encoded ? MAP_URL_ENCODED : MAP;
    uint32_t quad;

    for (; len >= 3; src += 3, len -= 3) {
        quad = ((uint32_t)src[0] << 16) | ((uint32_t)src[1] << 8) | src[2];
        *dst++ = map[quad >> 18];
        *dst++ = map[(quad >> 12) & 63];
        *dst++ = map[(quad >> 6) & 63];
        *dst++ = map[quad & 63];
    }
    if (len != 0) {
        quad = (uint32_t)src[0] << 16;
        *dst++ = map[quad >> 18];
        if (len == 2) {
            quad |= (uint32_t)src[1] << 8;
            *dst++ = map[(quad >> 12) & 63];
            *dst++ = map[(quad >> 6) & 63];
            if (!url_encoded)
                *dst++ = '=';
        } else {
            *dst++ = map[(quad >> 12) & 63];
            if (!url_encoded) {
                *dst++ = '=';
                *dst++ = '=';
            }
        }
    }

    *dst = '\0';
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
          int url_encoded = 100;
          int _len__dst0 = 1;
          char * _dst = (char *) malloc(_len__dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len__dst0; _i0++) {
            _dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__src0 = 1;
          const void * _src = (const void *) malloc(_len__src0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__src0; _i0++) {
            _src[_i0] = 0;
          }
          unsigned long benchRet = h2o_base64_encode(_dst,_src,len,url_encoded);
          printf("%lu\n", benchRet); 
          free(_dst);
          free(_src);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
          int url_encoded = 255;
          int _len__dst0 = 65025;
          char * _dst = (char *) malloc(_len__dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len__dst0; _i0++) {
            _dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__src0 = 65025;
          const void * _src = (const void *) malloc(_len__src0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__src0; _i0++) {
            _src[_i0] = 0;
          }
          unsigned long benchRet = h2o_base64_encode(_dst,_src,len,url_encoded);
          printf("%lu\n", benchRet); 
          free(_dst);
          free(_src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
          int url_encoded = 10;
          int _len__dst0 = 100;
          char * _dst = (char *) malloc(_len__dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len__dst0; _i0++) {
            _dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__src0 = 100;
          const void * _src = (const void *) malloc(_len__src0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len__src0; _i0++) {
            _src[_i0] = 0;
          }
          unsigned long benchRet = h2o_base64_encode(_dst,_src,len,url_encoded);
          printf("%lu\n", benchRet); 
          free(_dst);
          free(_src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
