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
typedef  int int32_t ;

/* Variables and functions */

size_t utf8_check_full(const char *buffer, size_t size, int32_t *codepoint)
{
    size_t i;
    int32_t value = 0;
    unsigned char u = (unsigned char)buffer[0];

    if(size == 2)
    {
        value = u & 0x1F;
    }
    else if(size == 3)
    {
        value = u & 0xF;
    }
    else if(size == 4)
    {
        value = u & 0x7;
    }
    else
        return 0;

    for(i = 1; i < size; i++)
    {
        u = (unsigned char)buffer[i];

        if(u < 0x80 || u > 0xBF) {
            /* not a continuation byte */
            return 0;
        }

        value = (value << 6) + (u & 0x3F);
    }

    if(value > 0x10FFFF) {
        /* not in Unicode range */
        return 0;
    }

    else if(0xD800 <= value && value <= 0xDFFF) {
        /* invalid code point (UTF-16 surrogate halves) */
        return 0;
    }

    else if((size == 2 && value < 0x80) ||
            (size == 3 && value < 0x800) ||
            (size == 4 && value < 0x10000)) {
        /* overlong encoding */
        return 0;
    }

    if(codepoint)
        *codepoint = value;

    return 1;
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
          unsigned long size = 100;
          int _len_buffer0 = 1;
          const char * buffer = (const char *) malloc(_len_buffer0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_codepoint0 = 1;
          int * codepoint = (int *) malloc(_len_codepoint0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_codepoint0; _i0++) {
            codepoint[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = utf8_check_full(buffer,size,codepoint);
          printf("%lu\n", benchRet); 
          free(buffer);
          free(codepoint);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long size = 255;
          int _len_buffer0 = 65025;
          const char * buffer = (const char *) malloc(_len_buffer0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_codepoint0 = 65025;
          int * codepoint = (int *) malloc(_len_codepoint0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_codepoint0; _i0++) {
            codepoint[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = utf8_check_full(buffer,size,codepoint);
          printf("%lu\n", benchRet); 
          free(buffer);
          free(codepoint);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long size = 10;
          int _len_buffer0 = 100;
          const char * buffer = (const char *) malloc(_len_buffer0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_codepoint0 = 100;
          int * codepoint = (int *) malloc(_len_codepoint0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_codepoint0; _i0++) {
            codepoint[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = utf8_check_full(buffer,size,codepoint);
          printf("%lu\n", benchRet); 
          free(buffer);
          free(codepoint);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
