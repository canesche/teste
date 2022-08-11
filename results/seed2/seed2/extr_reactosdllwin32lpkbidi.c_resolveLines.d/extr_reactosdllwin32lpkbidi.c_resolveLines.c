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
typedef  scalar_t__ WCHAR ;
typedef  scalar_t__* LPCWSTR ;
typedef  scalar_t__ BOOL ;

/* Variables and functions */

__attribute__((used)) static int resolveLines(LPCWSTR pszInput, const BOOL * pbrk, int cch)
{
    /* skip characters not of type LS */
    int ich = 0;
    for(; ich < cch; ich++)
    {
        if (pszInput[ich] == (WCHAR)'\n' || (pbrk && pbrk[ich]))
        {
            ich++;
            break;
        }
    }

    return ich;
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
          int cch = 100;
          int _len_pszInput0 = 1;
          long * pszInput = (long *) malloc(_len_pszInput0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pszInput0; _i0++) {
            pszInput[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pbrk0 = 1;
          const long * pbrk = (const long *) malloc(_len_pbrk0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pbrk0; _i0++) {
            pbrk[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = resolveLines(pszInput,pbrk,cch);
          printf("%d\n", benchRet); 
          free(pszInput);
          free(pbrk);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cch = 255;
          int _len_pszInput0 = 65025;
          long * pszInput = (long *) malloc(_len_pszInput0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pszInput0; _i0++) {
            pszInput[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pbrk0 = 65025;
          const long * pbrk = (const long *) malloc(_len_pbrk0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pbrk0; _i0++) {
            pbrk[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = resolveLines(pszInput,pbrk,cch);
          printf("%d\n", benchRet); 
          free(pszInput);
          free(pbrk);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cch = 10;
          int _len_pszInput0 = 100;
          long * pszInput = (long *) malloc(_len_pszInput0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_pszInput0; _i0++) {
            pszInput[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pbrk0 = 100;
          const long * pbrk = (const long *) malloc(_len_pbrk0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_pbrk0; _i0++) {
            pbrk[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = resolveLines(pszInput,pbrk,cch);
          printf("%d\n", benchRet); 
          free(pszInput);
          free(pbrk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
