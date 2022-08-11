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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ OsIndex; } ;
typedef  size_t SIZE_T ;
typedef  TYPE_1__* PKKLL_M_MEMORY_GENERIC ;

/* Variables and functions */
 scalar_t__ KiwiOsIndex ; 

PKKLL_M_MEMORY_GENERIC kkll_m_memory_getGenericFromBuild(PKKLL_M_MEMORY_GENERIC generics, SIZE_T cbGenerics)
{
	SIZE_T i;
	for(i = 0; i < cbGenerics; i++)
		if(generics[i].OsIndex == KiwiOsIndex)
			return generics + i;
	return NULL;
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
          unsigned long cbGenerics = 100;
          int _len_generics0 = 1;
          struct TYPE_4__ * generics = (struct TYPE_4__ *) malloc(_len_generics0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_generics0; _i0++) {
            generics[_i0].OsIndex = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ * benchRet = kkll_m_memory_getGenericFromBuild(generics,cbGenerics);
          printf("%ld\n", (*benchRet).OsIndex);
          free(generics);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long cbGenerics = 255;
          int _len_generics0 = 65025;
          struct TYPE_4__ * generics = (struct TYPE_4__ *) malloc(_len_generics0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_generics0; _i0++) {
            generics[_i0].OsIndex = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ * benchRet = kkll_m_memory_getGenericFromBuild(generics,cbGenerics);
          printf("%ld\n", (*benchRet).OsIndex);
          free(generics);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long cbGenerics = 10;
          int _len_generics0 = 100;
          struct TYPE_4__ * generics = (struct TYPE_4__ *) malloc(_len_generics0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_generics0; _i0++) {
            generics[_i0].OsIndex = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ * benchRet = kkll_m_memory_getGenericFromBuild(generics,cbGenerics);
          printf("%ld\n", (*benchRet).OsIndex);
          free(generics);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
