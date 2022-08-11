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
typedef  int /*<<< orphan*/  HASH_CONTEXT ;
typedef  int /*<<< orphan*/  BOOL ;
typedef  int /*<<< orphan*/  ALG_ID ;

/* Variables and functions */
 int /*<<< orphan*/  TRUE ; 

BOOL duplicate_hash_impl(ALG_ID aiAlgid, const HASH_CONTEXT *pSrcHashContext,
                         HASH_CONTEXT *pDestHashContext) 
{
    *pDestHashContext = *pSrcHashContext;

    return TRUE;
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
          int aiAlgid = 100;
          int _len_pSrcHashContext0 = 1;
          const int * pSrcHashContext = (const int *) malloc(_len_pSrcHashContext0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pSrcHashContext0; _i0++) {
            pSrcHashContext[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pDestHashContext0 = 1;
          int * pDestHashContext = (int *) malloc(_len_pDestHashContext0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pDestHashContext0; _i0++) {
            pDestHashContext[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = duplicate_hash_impl(aiAlgid,pSrcHashContext,pDestHashContext);
          printf("%d\n", benchRet); 
          free(pSrcHashContext);
          free(pDestHashContext);
        
        break;
    }
    // big-arr
    case 1:
    {
          int aiAlgid = 255;
          int _len_pSrcHashContext0 = 65025;
          const int * pSrcHashContext = (const int *) malloc(_len_pSrcHashContext0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pSrcHashContext0; _i0++) {
            pSrcHashContext[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pDestHashContext0 = 65025;
          int * pDestHashContext = (int *) malloc(_len_pDestHashContext0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pDestHashContext0; _i0++) {
            pDestHashContext[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = duplicate_hash_impl(aiAlgid,pSrcHashContext,pDestHashContext);
          printf("%d\n", benchRet); 
          free(pSrcHashContext);
          free(pDestHashContext);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int aiAlgid = 10;
          int _len_pSrcHashContext0 = 100;
          const int * pSrcHashContext = (const int *) malloc(_len_pSrcHashContext0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pSrcHashContext0; _i0++) {
            pSrcHashContext[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pDestHashContext0 = 100;
          int * pDestHashContext = (int *) malloc(_len_pDestHashContext0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pDestHashContext0; _i0++) {
            pDestHashContext[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = duplicate_hash_impl(aiAlgid,pSrcHashContext,pDestHashContext);
          printf("%d\n", benchRet); 
          free(pSrcHashContext);
          free(pDestHashContext);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
