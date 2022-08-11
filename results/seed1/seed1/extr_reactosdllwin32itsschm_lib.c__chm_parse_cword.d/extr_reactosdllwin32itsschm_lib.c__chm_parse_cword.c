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
typedef  int UChar ;

/* Variables and functions */

__attribute__((used)) static UInt64 _chm_parse_cword(UChar **pEntry)
{
    UInt64 accum = 0;
    UChar temp;
    while ((temp=*(*pEntry)++) >= 0x80)
    {
        accum <<= 7;
        accum += temp & 0x7f;
    }

    return (accum << 7) + temp;
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
          int _len_pEntry0 = 1;
          int ** pEntry = (int **) malloc(_len_pEntry0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pEntry0; _i0++) {
            int _len_pEntry1 = 1;
            pEntry[_i0] = (int *) malloc(_len_pEntry1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pEntry1; _i1++) {
              pEntry[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = _chm_parse_cword(pEntry);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_pEntry0; i1++) {
            int _len_pEntry1 = 1;
              free(pEntry[i1]);
          }
          free(pEntry);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pEntry0 = 65025;
          int ** pEntry = (int **) malloc(_len_pEntry0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pEntry0; _i0++) {
            int _len_pEntry1 = 1;
            pEntry[_i0] = (int *) malloc(_len_pEntry1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pEntry1; _i1++) {
              pEntry[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = _chm_parse_cword(pEntry);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_pEntry0; i1++) {
            int _len_pEntry1 = 1;
              free(pEntry[i1]);
          }
          free(pEntry);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pEntry0 = 100;
          int ** pEntry = (int **) malloc(_len_pEntry0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pEntry0; _i0++) {
            int _len_pEntry1 = 1;
            pEntry[_i0] = (int *) malloc(_len_pEntry1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pEntry1; _i1++) {
              pEntry[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = _chm_parse_cword(pEntry);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_pEntry0; i1++) {
            int _len_pEntry1 = 1;
              free(pEntry[i1]);
          }
          free(pEntry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
