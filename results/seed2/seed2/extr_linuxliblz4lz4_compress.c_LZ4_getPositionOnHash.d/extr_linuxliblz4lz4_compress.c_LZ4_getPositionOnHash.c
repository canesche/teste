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
typedef  scalar_t__ tableType_t ;
typedef  size_t U32 ;
typedef  int U16 ;
typedef  int /*<<< orphan*/  BYTE ;

/* Variables and functions */
 scalar_t__ byPtr ; 
 scalar_t__ byU32 ; 

__attribute__((used)) static const BYTE *LZ4_getPositionOnHash(
	U32 h,
	void *tableBase,
	tableType_t tableType,
	const BYTE *srcBase)
{
	if (tableType == byPtr) {
		const BYTE **hashTable = (const BYTE **) tableBase;

		return hashTable[h];
	}

	if (tableType == byU32) {
		const U32 * const hashTable = (U32 *) tableBase;

		return hashTable[h] + srcBase;
	}

	{
		/* default, to ensure a return */
		const U16 * const hashTable = (U16 *) tableBase;

		return hashTable[h] + srcBase;
	}
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
          unsigned long h = 100;
          long tableType = 100;
          void * tableBase;
          int _len_srcBase0 = 1;
          const int * srcBase = (const int *) malloc(_len_srcBase0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_srcBase0; _i0++) {
            srcBase[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = LZ4_getPositionOnHash(h,tableBase,tableType,srcBase);
          printf("%d\n", (*benchRet)); 
          free(srcBase);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long h = 255;
          long tableType = 255;
          void * tableBase;
          int _len_srcBase0 = 65025;
          const int * srcBase = (const int *) malloc(_len_srcBase0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_srcBase0; _i0++) {
            srcBase[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = LZ4_getPositionOnHash(h,tableBase,tableType,srcBase);
          printf("%d\n", (*benchRet)); 
          free(srcBase);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long h = 10;
          long tableType = 10;
          void * tableBase;
          int _len_srcBase0 = 100;
          const int * srcBase = (const int *) malloc(_len_srcBase0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_srcBase0; _i0++) {
            srcBase[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = LZ4_getPositionOnHash(h,tableBase,tableType,srcBase);
          printf("%d\n", (*benchRet)); 
          free(srcBase);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
