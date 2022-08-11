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
typedef  int UInt64 ;
typedef  scalar_t__ SizeT ;
typedef  int /*<<< orphan*/  SRes ;
typedef  int /*<<< orphan*/  Byte ;

/* Variables and functions */
 scalar_t__ LZMA86_HEADER_SIZE ; 
 unsigned int LZMA86_SIZE_OFFSET ; 
 int /*<<< orphan*/  SZ_ERROR_INPUT_EOF ; 
 int /*<<< orphan*/  SZ_OK ; 

SRes Lzma86_GetUnpackSize(const Byte *src, SizeT srcLen, UInt64 *unpackSize)
{
  unsigned i;
  if (srcLen < LZMA86_HEADER_SIZE)
    return SZ_ERROR_INPUT_EOF;
  *unpackSize = 0;
  for (i = 0; i < sizeof(UInt64); i++)
    *unpackSize += ((UInt64)src[LZMA86_SIZE_OFFSET + i]) << (8 * i);
  return SZ_OK;
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
          long srcLen = 100;
          int _len_src0 = 1;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_unpackSize0 = 1;
          int * unpackSize = (int *) malloc(_len_unpackSize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_unpackSize0; _i0++) {
            unpackSize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = Lzma86_GetUnpackSize(src,srcLen,unpackSize);
          printf("%d\n", benchRet); 
          free(src);
          free(unpackSize);
        
        break;
    }
    // big-arr
    case 1:
    {
          long srcLen = 255;
          int _len_src0 = 65025;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_unpackSize0 = 65025;
          int * unpackSize = (int *) malloc(_len_unpackSize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_unpackSize0; _i0++) {
            unpackSize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = Lzma86_GetUnpackSize(src,srcLen,unpackSize);
          printf("%d\n", benchRet); 
          free(src);
          free(unpackSize);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long srcLen = 10;
          int _len_src0 = 100;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_unpackSize0 = 100;
          int * unpackSize = (int *) malloc(_len_unpackSize0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_unpackSize0; _i0++) {
            unpackSize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = Lzma86_GetUnpackSize(src,srcLen,unpackSize);
          printf("%d\n", benchRet); 
          free(src);
          free(unpackSize);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
