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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int UInt32 ;
struct TYPE_2__ {int dictSize; int pb; int lp; scalar_t__ lc; } ;
typedef  scalar_t__ SizeT ;
typedef  int /*<<< orphan*/  SRes ;
typedef  scalar_t__ CLzmaEncHandle ;
typedef  TYPE_1__ CLzmaEnc ;
typedef  scalar_t__ Byte ;

/* Variables and functions */
 scalar_t__ LZMA_PROPS_SIZE ; 
 int /*<<< orphan*/  SZ_ERROR_PARAM ; 
 int /*<<< orphan*/  SZ_OK ; 

SRes LzmaEnc_WriteProperties(CLzmaEncHandle pp, Byte *props, SizeT *size)
{
  CLzmaEnc *p = (CLzmaEnc *)pp;
  int i;
  UInt32 dictSize = p->dictSize;
  if (*size < LZMA_PROPS_SIZE)
    return SZ_ERROR_PARAM;
  *size = LZMA_PROPS_SIZE;
  props[0] = (Byte)((p->pb * 5 + p->lp) * 9 + p->lc);

  for (i = 11; i <= 30; i++)
  {
    if (dictSize <= ((UInt32)2 << i))
    {
      dictSize = (2 << i);
      break;
    }
    if (dictSize <= ((UInt32)3 << i))
    {
      dictSize = (3 << i);
      break;
    }
  }

  for (i = 0; i < 4; i++)
    props[1 + i] = (Byte)(dictSize >> (8 * i));
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
          long pp = 100;
          int _len_props0 = 1;
          long * props = (long *) malloc(_len_props0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_props0; _i0++) {
            props[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_size0 = 1;
          long * size = (long *) malloc(_len_size0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = LzmaEnc_WriteProperties(pp,props,size);
          printf("%d\n", benchRet); 
          free(props);
          free(size);
        
        break;
    }
    // big-arr
    case 1:
    {
          long pp = 255;
          int _len_props0 = 65025;
          long * props = (long *) malloc(_len_props0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_props0; _i0++) {
            props[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_size0 = 65025;
          long * size = (long *) malloc(_len_size0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = LzmaEnc_WriteProperties(pp,props,size);
          printf("%d\n", benchRet); 
          free(props);
          free(size);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long pp = 10;
          int _len_props0 = 100;
          long * props = (long *) malloc(_len_props0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_props0; _i0++) {
            props[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_size0 = 100;
          long * size = (long *) malloc(_len_size0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = LzmaEnc_WriteProperties(pp,props,size);
          printf("%d\n", benchRet); 
          free(props);
          free(size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
