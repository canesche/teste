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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  ut8 ;
struct TYPE_4__ {size_t prefixSize; scalar_t__ extDictSize; int /*<<< orphan*/ * externalDict; int /*<<< orphan*/  const* prefixEnd; } ;
struct TYPE_5__ {TYPE_1__ internal_donotuse; } ;
typedef  TYPE_1__ LZ4_streamDecode_t_internal ;
typedef  TYPE_2__ LZ4_streamDecode_t ;

/* Variables and functions */

int LZ4_setStreamDecode (LZ4_streamDecode_t* LZ4_streamDecode, const char* dictionary, int dictSize) {
	LZ4_streamDecode_t_internal* lz4sd = &LZ4_streamDecode->internal_donotuse;
	lz4sd->prefixSize = (size_t) dictSize;
	lz4sd->prefixEnd = (const ut8*) dictionary + dictSize;
	lz4sd->externalDict = NULL;
	lz4sd->extDictSize  = 0;
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
          struct TYPE_5__ * LZ4_streamDecode = (struct TYPE_5__ *) malloc(_len_LZ4_streamDecode0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_LZ4_streamDecode0; _i0++) {
            LZ4_streamDecode[_i0].internal_donotuse.prefixSize = ((-2 * (next_i()%2)) + 1) * next_i();
        LZ4_streamDecode[_i0].internal_donotuse.extDictSize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_LZ4_streamDecode__i0__internal_donotuse_externalDict0 = 1;
          LZ4_streamDecode[_i0].internal_donotuse.externalDict = (int *) malloc(_len_LZ4_streamDecode__i0__internal_donotuse_externalDict0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_LZ4_streamDecode__i0__internal_donotuse_externalDict0; _j0++) {
            LZ4_streamDecode[_i0].internal_donotuse.externalDict[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_LZ4_streamDecode__i0__internal_donotuse_prefixEnd0 = 1;
          LZ4_streamDecode[_i0].internal_donotuse.prefixEnd = (const int *) malloc(_len_LZ4_streamDecode__i0__internal_donotuse_prefixEnd0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_LZ4_streamDecode__i0__internal_donotuse_prefixEnd0; _j0++) {
            LZ4_streamDecode[_i0].internal_donotuse.prefixEnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
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
          struct TYPE_5__ * LZ4_streamDecode = (struct TYPE_5__ *) malloc(_len_LZ4_streamDecode0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_LZ4_streamDecode0; _i0++) {
            LZ4_streamDecode[_i0].internal_donotuse.prefixSize = ((-2 * (next_i()%2)) + 1) * next_i();
        LZ4_streamDecode[_i0].internal_donotuse.extDictSize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_LZ4_streamDecode__i0__internal_donotuse_externalDict0 = 1;
          LZ4_streamDecode[_i0].internal_donotuse.externalDict = (int *) malloc(_len_LZ4_streamDecode__i0__internal_donotuse_externalDict0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_LZ4_streamDecode__i0__internal_donotuse_externalDict0; _j0++) {
            LZ4_streamDecode[_i0].internal_donotuse.externalDict[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_LZ4_streamDecode__i0__internal_donotuse_prefixEnd0 = 1;
          LZ4_streamDecode[_i0].internal_donotuse.prefixEnd = (const int *) malloc(_len_LZ4_streamDecode__i0__internal_donotuse_prefixEnd0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_LZ4_streamDecode__i0__internal_donotuse_prefixEnd0; _j0++) {
            LZ4_streamDecode[_i0].internal_donotuse.prefixEnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
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
          struct TYPE_5__ * LZ4_streamDecode = (struct TYPE_5__ *) malloc(_len_LZ4_streamDecode0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_LZ4_streamDecode0; _i0++) {
            LZ4_streamDecode[_i0].internal_donotuse.prefixSize = ((-2 * (next_i()%2)) + 1) * next_i();
        LZ4_streamDecode[_i0].internal_donotuse.extDictSize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_LZ4_streamDecode__i0__internal_donotuse_externalDict0 = 1;
          LZ4_streamDecode[_i0].internal_donotuse.externalDict = (int *) malloc(_len_LZ4_streamDecode__i0__internal_donotuse_externalDict0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_LZ4_streamDecode__i0__internal_donotuse_externalDict0; _j0++) {
            LZ4_streamDecode[_i0].internal_donotuse.externalDict[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_LZ4_streamDecode__i0__internal_donotuse_prefixEnd0 = 1;
          LZ4_streamDecode[_i0].internal_donotuse.prefixEnd = (const int *) malloc(_len_LZ4_streamDecode__i0__internal_donotuse_prefixEnd0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_LZ4_streamDecode__i0__internal_donotuse_prefixEnd0; _j0++) {
            LZ4_streamDecode[_i0].internal_donotuse.prefixEnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
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
