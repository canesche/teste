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

__attribute__((used)) static unsigned readU32FromChar(const char** stringPtr)
{
    unsigned result = 0;
    while ((**stringPtr >='0') && (**stringPtr <='9'))
        result *= 10, result += **stringPtr - '0', (*stringPtr)++ ;
    if ((**stringPtr=='K') || (**stringPtr=='M')) {
        result <<= 10;
        if (**stringPtr=='M') result <<= 10;
        (*stringPtr)++ ;
        if (**stringPtr=='i') (*stringPtr)++;
        if (**stringPtr=='B') (*stringPtr)++;
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
          int _len_stringPtr0 = 1;
          const char ** stringPtr = (const char **) malloc(_len_stringPtr0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_stringPtr0; _i0++) {
            int _len_stringPtr1 = 1;
            stringPtr[_i0] = (const char *) malloc(_len_stringPtr1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_stringPtr1; _i1++) {
              stringPtr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          unsigned int benchRet = readU32FromChar(stringPtr);
          printf("%u\n", benchRet); 
          for(int i1 = 0; i1 < _len_stringPtr0; i1++) {
            int _len_stringPtr1 = 1;
              free(stringPtr[i1]);
          }
          free(stringPtr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_stringPtr0 = 65025;
          const char ** stringPtr = (const char **) malloc(_len_stringPtr0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_stringPtr0; _i0++) {
            int _len_stringPtr1 = 1;
            stringPtr[_i0] = (const char *) malloc(_len_stringPtr1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_stringPtr1; _i1++) {
              stringPtr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          unsigned int benchRet = readU32FromChar(stringPtr);
          printf("%u\n", benchRet); 
          for(int i1 = 0; i1 < _len_stringPtr0; i1++) {
            int _len_stringPtr1 = 1;
              free(stringPtr[i1]);
          }
          free(stringPtr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_stringPtr0 = 100;
          const char ** stringPtr = (const char **) malloc(_len_stringPtr0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_stringPtr0; _i0++) {
            int _len_stringPtr1 = 1;
            stringPtr[_i0] = (const char *) malloc(_len_stringPtr1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_stringPtr1; _i1++) {
              stringPtr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          unsigned int benchRet = readU32FromChar(stringPtr);
          printf("%u\n", benchRet); 
          for(int i1 = 0; i1 < _len_stringPtr0; i1++) {
            int _len_stringPtr1 = 1;
              free(stringPtr[i1]);
          }
          free(stringPtr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
