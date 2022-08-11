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

/* Variables and functions */

__attribute__((used)) static size_t BrotliParseAsUTF8(
    int* symbol, const uint8_t* input, size_t size) {
  /* ASCII */
  if ((input[0] & 0x80) == 0) {
    *symbol = input[0];
    if (*symbol > 0) {
      return 1;
    }
  }
  /* 2-byte UTF8 */
  if (size > 1u &&
      (input[0] & 0xE0) == 0xC0 &&
      (input[1] & 0xC0) == 0x80) {
    *symbol = (((input[0] & 0x1F) << 6) |
               (input[1] & 0x3F));
    if (*symbol > 0x7F) {
      return 2;
    }
  }
  /* 3-byte UFT8 */
  if (size > 2u &&
      (input[0] & 0xF0) == 0xE0 &&
      (input[1] & 0xC0) == 0x80 &&
      (input[2] & 0xC0) == 0x80) {
    *symbol = (((input[0] & 0x0F) << 12) |
               ((input[1] & 0x3F) << 6) |
               (input[2] & 0x3F));
    if (*symbol > 0x7FF) {
      return 3;
    }
  }
  /* 4-byte UFT8 */
  if (size > 3u &&
      (input[0] & 0xF8) == 0xF0 &&
      (input[1] & 0xC0) == 0x80 &&
      (input[2] & 0xC0) == 0x80 &&
      (input[3] & 0xC0) == 0x80) {
    *symbol = (((input[0] & 0x07) << 18) |
               ((input[1] & 0x3F) << 12) |
               ((input[2] & 0x3F) << 6) |
               (input[3] & 0x3F));
    if (*symbol > 0xFFFF && *symbol <= 0x10FFFF) {
      return 4;
    }
  }
  /* Not UTF8, emit a special symbol above the UTF8-code space */
  *symbol = 0x110000 | input[0];
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
          int _len_symbol0 = 1;
          int * symbol = (int *) malloc(_len_symbol0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_symbol0; _i0++) {
            symbol[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_input0 = 1;
          const int * input = (const int *) malloc(_len_input0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = BrotliParseAsUTF8(symbol,input,size);
          printf("%lu\n", benchRet); 
          free(symbol);
          free(input);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long size = 255;
          int _len_symbol0 = 65025;
          int * symbol = (int *) malloc(_len_symbol0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_symbol0; _i0++) {
            symbol[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_input0 = 65025;
          const int * input = (const int *) malloc(_len_input0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = BrotliParseAsUTF8(symbol,input,size);
          printf("%lu\n", benchRet); 
          free(symbol);
          free(input);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long size = 10;
          int _len_symbol0 = 100;
          int * symbol = (int *) malloc(_len_symbol0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_symbol0; _i0++) {
            symbol[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_input0 = 100;
          const int * input = (const int *) malloc(_len_input0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = BrotliParseAsUTF8(symbol,input,size);
          printf("%lu\n", benchRet); 
          free(symbol);
          free(input);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
