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

/* Variables and functions */

void
rawdata_to_hex (const unsigned char *rawdata, char *hex_str, int n_bytes)
{
    static const char hex[] = "0123456789abcdef";
    int i;

    for (i = 0; i < n_bytes; i++) {
        unsigned int val = *rawdata++;
        *hex_str++ = hex[val >> 4];
        *hex_str++ = hex[val & 0xf];
    }
    *hex_str = '\0';
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
          int n_bytes = 100;
          int _len_rawdata0 = 1;
          const unsigned char * rawdata = (const unsigned char *) malloc(_len_rawdata0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_rawdata0; _i0++) {
            rawdata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hex_str0 = 1;
          char * hex_str = (char *) malloc(_len_hex_str0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_hex_str0; _i0++) {
            hex_str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rawdata_to_hex(rawdata,hex_str,n_bytes);
          free(rawdata);
          free(hex_str);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n_bytes = 255;
          int _len_rawdata0 = 65025;
          const unsigned char * rawdata = (const unsigned char *) malloc(_len_rawdata0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_rawdata0; _i0++) {
            rawdata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hex_str0 = 65025;
          char * hex_str = (char *) malloc(_len_hex_str0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_hex_str0; _i0++) {
            hex_str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rawdata_to_hex(rawdata,hex_str,n_bytes);
          free(rawdata);
          free(hex_str);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n_bytes = 10;
          int _len_rawdata0 = 100;
          const unsigned char * rawdata = (const unsigned char *) malloc(_len_rawdata0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_rawdata0; _i0++) {
            rawdata[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hex_str0 = 100;
          char * hex_str = (char *) malloc(_len_hex_str0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_hex_str0; _i0++) {
            hex_str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rawdata_to_hex(rawdata,hex_str,n_bytes);
          free(rawdata);
          free(hex_str);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
