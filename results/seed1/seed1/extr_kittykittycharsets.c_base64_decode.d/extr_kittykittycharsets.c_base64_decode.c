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
typedef  char uint8_t ;
typedef  char uint32_t ;

/* Variables and functions */
 char* b64_decoding_table ; 

const char*
base64_decode(const uint32_t *src, size_t src_sz, uint8_t *dest, size_t dest_capacity, size_t *dest_sz) {
    if (!src_sz) { *dest_sz = 0; return NULL; }
    if (src_sz % 4 != 0) return "base64 encoded data must have a length that is a multiple of four";
    *dest_sz = (src_sz / 4) * 3;
    if (src[src_sz - 1] == '=') (*dest_sz)--;
    if (src[src_sz - 2] == '=') (*dest_sz)--;
    if (*dest_sz > dest_capacity) return "output buffer too small";
    for (size_t i = 0, j = 0; i < src_sz;) {
        uint32_t sextet_a = src[i] == '=' ? 0 & i++ : b64_decoding_table[src[i++] & 0xff];
        uint32_t sextet_b = src[i] == '=' ? 0 & i++ : b64_decoding_table[src[i++] & 0xff];
        uint32_t sextet_c = src[i] == '=' ? 0 & i++ : b64_decoding_table[src[i++] & 0xff];
        uint32_t sextet_d = src[i] == '=' ? 0 & i++ : b64_decoding_table[src[i++] & 0xff];
        uint32_t triple = (sextet_a << 3 * 6) + (sextet_b << 2 * 6) + (sextet_c << 1 * 6) + (sextet_d << 0 * 6);

        if (j < *dest_sz) dest[j++] = (triple >> 2 * 8) & 0xFF;
        if (j < *dest_sz) dest[j++] = (triple >> 1 * 8) & 0xFF;
        if (j < *dest_sz) dest[j++] = (triple >> 0 * 8) & 0xFF;
    }
    return NULL;
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
          unsigned long src_sz = 100;
          unsigned long dest_capacity = 100;
          int _len_src0 = 1;
          const char * src = (const char *) malloc(_len_src0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest0 = 1;
          char * dest = (char *) malloc(_len_dest0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest_sz0 = 1;
          unsigned long * dest_sz = (unsigned long *) malloc(_len_dest_sz0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_dest_sz0; _i0++) {
            dest_sz[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = base64_decode(src,src_sz,dest,dest_capacity,dest_sz);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(src);
          free(dest);
          free(dest_sz);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long src_sz = 255;
          unsigned long dest_capacity = 255;
          int _len_src0 = 65025;
          const char * src = (const char *) malloc(_len_src0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest0 = 65025;
          char * dest = (char *) malloc(_len_dest0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest_sz0 = 65025;
          unsigned long * dest_sz = (unsigned long *) malloc(_len_dest_sz0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_dest_sz0; _i0++) {
            dest_sz[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = base64_decode(src,src_sz,dest,dest_capacity,dest_sz);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(src);
          free(dest);
          free(dest_sz);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long src_sz = 10;
          unsigned long dest_capacity = 10;
          int _len_src0 = 100;
          const char * src = (const char *) malloc(_len_src0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest0 = 100;
          char * dest = (char *) malloc(_len_dest0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest_sz0 = 100;
          unsigned long * dest_sz = (unsigned long *) malloc(_len_dest_sz0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_dest_sz0; _i0++) {
            dest_sz[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = base64_decode(src,src_sz,dest,dest_capacity,dest_sz);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(src);
          free(dest);
          free(dest_sz);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
