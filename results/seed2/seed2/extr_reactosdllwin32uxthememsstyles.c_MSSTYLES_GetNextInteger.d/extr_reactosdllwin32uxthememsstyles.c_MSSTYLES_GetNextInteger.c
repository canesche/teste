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
typedef  char* LPCWSTR ;
typedef  scalar_t__ BOOL ;

/* Variables and functions */
 scalar_t__ FALSE ; 
 scalar_t__ TRUE ; 

__attribute__((used)) static BOOL MSSTYLES_GetNextInteger(LPCWSTR lpStringStart, LPCWSTR lpStringEnd, LPCWSTR *lpValEnd, int *value)
{
    LPCWSTR cur = lpStringStart;
    int total = 0;
    BOOL gotNeg = FALSE;

    while(cur < lpStringEnd && ((*cur < '0' || *cur > '9') && *cur != '-')) cur++;
    if(cur >= lpStringEnd) {
        return FALSE;
    }
    if(*cur == '-') {
        cur++;
        gotNeg = TRUE;
    }
    while(cur < lpStringEnd && (*cur >= '0' && *cur <= '9')) {
        total = total * 10 + (*cur - '0');
        cur++;
    }
    if(gotNeg) total = -total;
    *value = total;
    if(lpValEnd) *lpValEnd = cur;
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
          int _len_lpStringStart0 = 1;
          char * lpStringStart = (char *) malloc(_len_lpStringStart0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_lpStringStart0; _i0++) {
            lpStringStart[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lpStringEnd0 = 1;
          char * lpStringEnd = (char *) malloc(_len_lpStringEnd0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_lpStringEnd0; _i0++) {
            lpStringEnd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lpValEnd0 = 1;
          char ** lpValEnd = (char **) malloc(_len_lpValEnd0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_lpValEnd0; _i0++) {
            int _len_lpValEnd1 = 1;
            lpValEnd[_i0] = (char *) malloc(_len_lpValEnd1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_lpValEnd1; _i1++) {
              lpValEnd[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_value0 = 1;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = MSSTYLES_GetNextInteger(lpStringStart,lpStringEnd,lpValEnd,value);
          printf("%ld\n", benchRet); 
          free(lpStringStart);
          free(lpStringEnd);
          for(int i1 = 0; i1 < _len_lpValEnd0; i1++) {
            int _len_lpValEnd1 = 1;
              free(lpValEnd[i1]);
          }
          free(lpValEnd);
          free(value);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_lpStringStart0 = 65025;
          char * lpStringStart = (char *) malloc(_len_lpStringStart0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_lpStringStart0; _i0++) {
            lpStringStart[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lpStringEnd0 = 65025;
          char * lpStringEnd = (char *) malloc(_len_lpStringEnd0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_lpStringEnd0; _i0++) {
            lpStringEnd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lpValEnd0 = 65025;
          char ** lpValEnd = (char **) malloc(_len_lpValEnd0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_lpValEnd0; _i0++) {
            int _len_lpValEnd1 = 1;
            lpValEnd[_i0] = (char *) malloc(_len_lpValEnd1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_lpValEnd1; _i1++) {
              lpValEnd[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_value0 = 65025;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = MSSTYLES_GetNextInteger(lpStringStart,lpStringEnd,lpValEnd,value);
          printf("%ld\n", benchRet); 
          free(lpStringStart);
          free(lpStringEnd);
          for(int i1 = 0; i1 < _len_lpValEnd0; i1++) {
            int _len_lpValEnd1 = 1;
              free(lpValEnd[i1]);
          }
          free(lpValEnd);
          free(value);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_lpStringStart0 = 100;
          char * lpStringStart = (char *) malloc(_len_lpStringStart0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_lpStringStart0; _i0++) {
            lpStringStart[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lpStringEnd0 = 100;
          char * lpStringEnd = (char *) malloc(_len_lpStringEnd0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_lpStringEnd0; _i0++) {
            lpStringEnd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lpValEnd0 = 100;
          char ** lpValEnd = (char **) malloc(_len_lpValEnd0*sizeof(char *));
          for(int _i0 = 0; _i0 < _len_lpValEnd0; _i0++) {
            int _len_lpValEnd1 = 1;
            lpValEnd[_i0] = (char *) malloc(_len_lpValEnd1*sizeof(char));
            for(int _i1 = 0; _i1 < _len_lpValEnd1; _i1++) {
              lpValEnd[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_value0 = 100;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = MSSTYLES_GetNextInteger(lpStringStart,lpStringEnd,lpValEnd,value);
          printf("%ld\n", benchRet); 
          free(lpStringStart);
          free(lpStringEnd);
          for(int i1 = 0; i1 < _len_lpValEnd0; i1++) {
            int _len_lpValEnd1 = 1;
              free(lpValEnd[i1]);
          }
          free(lpValEnd);
          free(value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
