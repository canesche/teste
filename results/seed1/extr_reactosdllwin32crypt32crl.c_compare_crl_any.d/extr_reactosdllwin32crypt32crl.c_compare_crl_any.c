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
typedef  int /*<<< orphan*/  PCCRL_CONTEXT ;
typedef  int /*<<< orphan*/  DWORD ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static BOOL compare_crl_any(PCCRL_CONTEXT pCrlContext, DWORD dwType,
 DWORD dwFlags, const void *pvPara)
{
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
          int pCrlContext = 100;
          int dwType = 100;
          int dwFlags = 100;
          int _len_pvPara0 = 1;
          const void * pvPara = (const void *) malloc(_len_pvPara0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pvPara0; _i0++) {
            pvPara[_i0] = 0;
          }
          int benchRet = compare_crl_any(pCrlContext,dwType,dwFlags,pvPara);
          printf("%d\n", benchRet); 
          free(pvPara);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pCrlContext = 255;
          int dwType = 255;
          int dwFlags = 255;
          int _len_pvPara0 = 65025;
          const void * pvPara = (const void *) malloc(_len_pvPara0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pvPara0; _i0++) {
            pvPara[_i0] = 0;
          }
          int benchRet = compare_crl_any(pCrlContext,dwType,dwFlags,pvPara);
          printf("%d\n", benchRet); 
          free(pvPara);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pCrlContext = 10;
          int dwType = 10;
          int dwFlags = 10;
          int _len_pvPara0 = 100;
          const void * pvPara = (const void *) malloc(_len_pvPara0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pvPara0; _i0++) {
            pvPara[_i0] = 0;
          }
          int benchRet = compare_crl_any(pCrlContext,dwType,dwFlags,pvPara);
          printf("%d\n", benchRet); 
          free(pvPara);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
