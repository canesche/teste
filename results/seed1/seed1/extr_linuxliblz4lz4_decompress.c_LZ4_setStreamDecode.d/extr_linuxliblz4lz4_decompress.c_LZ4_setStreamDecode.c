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
struct TYPE_2__ {size_t prefixSize; scalar_t__ extDictSize; int /*<<< orphan*/ * externalDict; int /*<<< orphan*/  const* prefixEnd; } ;
typedef  TYPE_1__ LZ4_streamDecode_t_internal ;
typedef  int /*<<< orphan*/  LZ4_streamDecode_t ;
typedef  int /*<<< orphan*/  BYTE ;

/* Variables and functions */

int LZ4_setStreamDecode(LZ4_streamDecode_t *LZ4_streamDecode,
	const char *dictionary, int dictSize)
{
	LZ4_streamDecode_t_internal *lz4sd = (LZ4_streamDecode_t_internal *) LZ4_streamDecode;

	lz4sd->prefixSize = (size_t) dictSize;
	lz4sd->prefixEnd = (const BYTE *) dictionary + dictSize;
	lz4sd->externalDict = NULL;
	lz4sd->extDictSize	= 0;
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
          int dictSize = 100;
          int _len_LZ4_streamDecode0 = 1;
          int * LZ4_streamDecode = (int *) malloc(_len_LZ4_streamDecode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_LZ4_streamDecode0; _i0++) {
            LZ4_streamDecode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dictionary0 = 1;
          const char * dictionary = (const char *) malloc(_len_dictionary0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_dictionary0; _i0++) {
            dictionary[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = LZ4_setStreamDecode(LZ4_streamDecode,dictionary,dictSize);
          printf("%d\n", benchRet); 
          free(LZ4_streamDecode);
          free(dictionary);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dictSize = 255;
          int _len_LZ4_streamDecode0 = 65025;
          int * LZ4_streamDecode = (int *) malloc(_len_LZ4_streamDecode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_LZ4_streamDecode0; _i0++) {
            LZ4_streamDecode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dictionary0 = 65025;
          const char * dictionary = (const char *) malloc(_len_dictionary0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_dictionary0; _i0++) {
            dictionary[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = LZ4_setStreamDecode(LZ4_streamDecode,dictionary,dictSize);
          printf("%d\n", benchRet); 
          free(LZ4_streamDecode);
          free(dictionary);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dictSize = 10;
          int _len_LZ4_streamDecode0 = 100;
          int * LZ4_streamDecode = (int *) malloc(_len_LZ4_streamDecode0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_LZ4_streamDecode0; _i0++) {
            LZ4_streamDecode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dictionary0 = 100;
          const char * dictionary = (const char *) malloc(_len_dictionary0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_dictionary0; _i0++) {
            dictionary[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = LZ4_setStreamDecode(LZ4_streamDecode,dictionary,dictSize);
          printf("%d\n", benchRet); 
          free(LZ4_streamDecode);
          free(dictionary);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
