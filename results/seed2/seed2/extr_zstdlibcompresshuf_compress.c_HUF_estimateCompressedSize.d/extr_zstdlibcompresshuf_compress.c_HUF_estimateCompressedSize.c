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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {unsigned int const nbBits; } ;
typedef  TYPE_1__ HUF_CElt ;

/* Variables and functions */

__attribute__((used)) static size_t HUF_estimateCompressedSize(HUF_CElt* CTable, const unsigned* count, unsigned maxSymbolValue)
{
    size_t nbBits = 0;
    int s;
    for (s = 0; s <= (int)maxSymbolValue; ++s) {
        nbBits += CTable[s].nbBits * count[s];
    }
    return nbBits >> 3;
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
          unsigned int maxSymbolValue = 100;
          int _len_CTable0 = 1;
          struct TYPE_3__ * CTable = (struct TYPE_3__ *) malloc(_len_CTable0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_CTable0; _i0++) {
            CTable[_i0].nbBits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_count0 = 1;
          const unsigned int * count = (const unsigned int *) malloc(_len_count0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = HUF_estimateCompressedSize(CTable,count,maxSymbolValue);
          printf("%lu\n", benchRet); 
          free(CTable);
          free(count);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int maxSymbolValue = 255;
          int _len_CTable0 = 65025;
          struct TYPE_3__ * CTable = (struct TYPE_3__ *) malloc(_len_CTable0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_CTable0; _i0++) {
            CTable[_i0].nbBits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_count0 = 65025;
          const unsigned int * count = (const unsigned int *) malloc(_len_count0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = HUF_estimateCompressedSize(CTable,count,maxSymbolValue);
          printf("%lu\n", benchRet); 
          free(CTable);
          free(count);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int maxSymbolValue = 10;
          int _len_CTable0 = 100;
          struct TYPE_3__ * CTable = (struct TYPE_3__ *) malloc(_len_CTable0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_CTable0; _i0++) {
            CTable[_i0].nbBits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_count0 = 100;
          const unsigned int * count = (const unsigned int *) malloc(_len_count0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = HUF_estimateCompressedSize(CTable,count,maxSymbolValue);
          printf("%lu\n", benchRet); 
          free(CTable);
          free(count);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
