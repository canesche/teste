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
typedef  size_t uint64_t ;

/* Variables and functions */

__attribute__((used)) static uint64_t
asn1_length(const unsigned char *px, uint64_t length, uint64_t *r_offset)
{
    uint64_t result;

    /* check for errors */
    if ( (*r_offset >= length)
        || ((px[*r_offset] & 0x80)
        && ((*r_offset) + (px[*r_offset]&0x7F) >= length))) {
        *r_offset = length;
        return 0xFFFFffff;
    }

    /* grab the byte's value */
    result = px[(*r_offset)++];


    if (result & 0x80) {
        unsigned length_of_length = result & 0x7F;
        if (length_of_length == 0) {
            *r_offset = length;
            return 0xFFFFffff;
        }
        result = 0;
        while (length_of_length) {
            result = result * 256 + px[(*r_offset)++];
            if (result > 0x10000) {
                *r_offset = length;
                return 0xFFFFffff;
            }
            length_of_length--;
        }
    }
    return result;
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
          unsigned long length = 100;
          int _len_px0 = 1;
          const unsigned char * px = (const unsigned char *) malloc(_len_px0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_px0; _i0++) {
            px[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_offset0 = 1;
          unsigned long * r_offset = (unsigned long *) malloc(_len_r_offset0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_r_offset0; _i0++) {
            r_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = asn1_length(px,length,r_offset);
          printf("%lu\n", benchRet); 
          free(px);
          free(r_offset);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long length = 255;
          int _len_px0 = 65025;
          const unsigned char * px = (const unsigned char *) malloc(_len_px0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_px0; _i0++) {
            px[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_offset0 = 65025;
          unsigned long * r_offset = (unsigned long *) malloc(_len_r_offset0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_r_offset0; _i0++) {
            r_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = asn1_length(px,length,r_offset);
          printf("%lu\n", benchRet); 
          free(px);
          free(r_offset);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long length = 10;
          int _len_px0 = 100;
          const unsigned char * px = (const unsigned char *) malloc(_len_px0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_px0; _i0++) {
            px[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r_offset0 = 100;
          unsigned long * r_offset = (unsigned long *) malloc(_len_r_offset0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_r_offset0; _i0++) {
            r_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = asn1_length(px,length,r_offset);
          printf("%lu\n", benchRet); 
          free(px);
          free(r_offset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
