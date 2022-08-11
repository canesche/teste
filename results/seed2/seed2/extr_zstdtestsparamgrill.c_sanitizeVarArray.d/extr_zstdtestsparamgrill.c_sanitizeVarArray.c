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
typedef  scalar_t__ varInds_t ;
typedef  scalar_t__ ZSTD_strategy ;

/* Variables and functions */
 scalar_t__ const ZSTD_btopt ; 
 scalar_t__ const ZSTD_dfast ; 
 scalar_t__ const ZSTD_fast ; 
 scalar_t__ const clog_ind ; 
 scalar_t__ const slog_ind ; 
 scalar_t__ const tlen_ind ; 

__attribute__((used)) static size_t sanitizeVarArray(varInds_t* varNew, const size_t varLength, const varInds_t* varArray, const ZSTD_strategy strat) {
    size_t i, j = 0;
    for(i = 0; i < varLength; i++) {
        if( !((varArray[i] == clog_ind && strat == ZSTD_fast)
            || (varArray[i] == slog_ind && strat == ZSTD_fast)
            || (varArray[i] == slog_ind && strat == ZSTD_dfast)
            || (varArray[i] == tlen_ind && strat < ZSTD_btopt && strat != ZSTD_fast))) {
            varNew[j] = varArray[i];
            j++;
        }
    }
    return j;
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
          const unsigned long varLength = 100;
          const long strat = 100;
          int _len_varNew0 = 1;
          long * varNew = (long *) malloc(_len_varNew0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_varNew0; _i0++) {
            varNew[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_varArray0 = 1;
          const long * varArray = (const long *) malloc(_len_varArray0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_varArray0; _i0++) {
            varArray[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = sanitizeVarArray(varNew,varLength,varArray,strat);
          printf("%lu\n", benchRet); 
          free(varNew);
          free(varArray);
        
        break;
    }
    // big-arr
    case 1:
    {
          const unsigned long varLength = 255;
          const long strat = 255;
          int _len_varNew0 = 65025;
          long * varNew = (long *) malloc(_len_varNew0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_varNew0; _i0++) {
            varNew[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_varArray0 = 65025;
          const long * varArray = (const long *) malloc(_len_varArray0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_varArray0; _i0++) {
            varArray[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = sanitizeVarArray(varNew,varLength,varArray,strat);
          printf("%lu\n", benchRet); 
          free(varNew);
          free(varArray);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const unsigned long varLength = 10;
          const long strat = 10;
          int _len_varNew0 = 100;
          long * varNew = (long *) malloc(_len_varNew0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_varNew0; _i0++) {
            varNew[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_varArray0 = 100;
          const long * varArray = (const long *) malloc(_len_varArray0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_varArray0; _i0++) {
            varArray[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = sanitizeVarArray(varNew,varLength,varArray,strat);
          printf("%lu\n", benchRet); 
          free(varNew);
          free(varArray);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
