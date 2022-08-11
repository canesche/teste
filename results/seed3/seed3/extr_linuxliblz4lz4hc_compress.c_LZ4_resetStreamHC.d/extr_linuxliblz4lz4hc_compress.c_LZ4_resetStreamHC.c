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
struct TYPE_4__ {unsigned int compressionLevel; int /*<<< orphan*/ * base; } ;
struct TYPE_5__ {TYPE_1__ internal_donotuse; } ;
typedef  TYPE_2__ LZ4_streamHC_t ;

/* Variables and functions */

void LZ4_resetStreamHC(LZ4_streamHC_t *LZ4_streamHCPtr, int compressionLevel)
{
	LZ4_streamHCPtr->internal_donotuse.base = NULL;
	LZ4_streamHCPtr->internal_donotuse.compressionLevel = (unsigned int)compressionLevel;
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
          int compressionLevel = 100;
          int _len_LZ4_streamHCPtr0 = 1;
          struct TYPE_5__ * LZ4_streamHCPtr = (struct TYPE_5__ *) malloc(_len_LZ4_streamHCPtr0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_LZ4_streamHCPtr0; _i0++) {
            LZ4_streamHCPtr[_i0].internal_donotuse.compressionLevel = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_LZ4_streamHCPtr__i0__internal_donotuse_base0 = 1;
          LZ4_streamHCPtr[_i0].internal_donotuse.base = (int *) malloc(_len_LZ4_streamHCPtr__i0__internal_donotuse_base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_LZ4_streamHCPtr__i0__internal_donotuse_base0; _j0++) {
            LZ4_streamHCPtr[_i0].internal_donotuse.base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          LZ4_resetStreamHC(LZ4_streamHCPtr,compressionLevel);
          free(LZ4_streamHCPtr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int compressionLevel = 255;
          int _len_LZ4_streamHCPtr0 = 65025;
          struct TYPE_5__ * LZ4_streamHCPtr = (struct TYPE_5__ *) malloc(_len_LZ4_streamHCPtr0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_LZ4_streamHCPtr0; _i0++) {
            LZ4_streamHCPtr[_i0].internal_donotuse.compressionLevel = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_LZ4_streamHCPtr__i0__internal_donotuse_base0 = 1;
          LZ4_streamHCPtr[_i0].internal_donotuse.base = (int *) malloc(_len_LZ4_streamHCPtr__i0__internal_donotuse_base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_LZ4_streamHCPtr__i0__internal_donotuse_base0; _j0++) {
            LZ4_streamHCPtr[_i0].internal_donotuse.base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          LZ4_resetStreamHC(LZ4_streamHCPtr,compressionLevel);
          free(LZ4_streamHCPtr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int compressionLevel = 10;
          int _len_LZ4_streamHCPtr0 = 100;
          struct TYPE_5__ * LZ4_streamHCPtr = (struct TYPE_5__ *) malloc(_len_LZ4_streamHCPtr0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_LZ4_streamHCPtr0; _i0++) {
            LZ4_streamHCPtr[_i0].internal_donotuse.compressionLevel = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_LZ4_streamHCPtr__i0__internal_donotuse_base0 = 1;
          LZ4_streamHCPtr[_i0].internal_donotuse.base = (int *) malloc(_len_LZ4_streamHCPtr__i0__internal_donotuse_base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_LZ4_streamHCPtr__i0__internal_donotuse_base0; _j0++) {
            LZ4_streamHCPtr[_i0].internal_donotuse.base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          LZ4_resetStreamHC(LZ4_streamHCPtr,compressionLevel);
          free(LZ4_streamHCPtr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
