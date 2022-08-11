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
typedef  scalar_t__ BYTE ;

/* Variables and functions */

__attribute__((used)) static size_t ZSTD_ldm_countBackwardsMatch(
            const BYTE* pIn, const BYTE* pAnchor,
            const BYTE* pMatch, const BYTE* pBase)
{
    size_t matchLength = 0;
    while (pIn > pAnchor && pMatch > pBase && pIn[-1] == pMatch[-1]) {
        pIn--;
        pMatch--;
        matchLength++;
    }
    return matchLength;
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
          int _len_pIn0 = 1;
          const long * pIn = (const long *) malloc(_len_pIn0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pIn0; _i0++) {
            pIn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pAnchor0 = 1;
          const long * pAnchor = (const long *) malloc(_len_pAnchor0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pAnchor0; _i0++) {
            pAnchor[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pMatch0 = 1;
          const long * pMatch = (const long *) malloc(_len_pMatch0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pMatch0; _i0++) {
            pMatch[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pBase0 = 1;
          const long * pBase = (const long *) malloc(_len_pBase0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pBase0; _i0++) {
            pBase[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = ZSTD_ldm_countBackwardsMatch(pIn,pAnchor,pMatch,pBase);
          printf("%lu\n", benchRet); 
          free(pIn);
          free(pAnchor);
          free(pMatch);
          free(pBase);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pIn0 = 65025;
          const long * pIn = (const long *) malloc(_len_pIn0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pIn0; _i0++) {
            pIn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pAnchor0 = 65025;
          const long * pAnchor = (const long *) malloc(_len_pAnchor0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pAnchor0; _i0++) {
            pAnchor[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pMatch0 = 65025;
          const long * pMatch = (const long *) malloc(_len_pMatch0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pMatch0; _i0++) {
            pMatch[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pBase0 = 65025;
          const long * pBase = (const long *) malloc(_len_pBase0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pBase0; _i0++) {
            pBase[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = ZSTD_ldm_countBackwardsMatch(pIn,pAnchor,pMatch,pBase);
          printf("%lu\n", benchRet); 
          free(pIn);
          free(pAnchor);
          free(pMatch);
          free(pBase);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pIn0 = 100;
          const long * pIn = (const long *) malloc(_len_pIn0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pIn0; _i0++) {
            pIn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pAnchor0 = 100;
          const long * pAnchor = (const long *) malloc(_len_pAnchor0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pAnchor0; _i0++) {
            pAnchor[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pMatch0 = 100;
          const long * pMatch = (const long *) malloc(_len_pMatch0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pMatch0; _i0++) {
            pMatch[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pBase0 = 100;
          const long * pBase = (const long *) malloc(_len_pBase0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pBase0; _i0++) {
            pBase[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = ZSTD_ldm_countBackwardsMatch(pIn,pAnchor,pMatch,pBase);
          printf("%lu\n", benchRet); 
          free(pIn);
          free(pAnchor);
          free(pMatch);
          free(pBase);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
