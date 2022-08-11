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
typedef  int /*<<< orphan*/  urlcache_header ;
typedef  int /*<<< orphan*/  entry_hash_table ;
typedef  scalar_t__ LPBYTE ;
typedef  scalar_t__ DWORD ;

/* Variables and functions */

__attribute__((used)) static inline entry_hash_table* urlcache_get_hash_table(const urlcache_header *pHeader, DWORD dwOffset)
{
    if(!dwOffset)
        return NULL;
    return (entry_hash_table*)((LPBYTE)pHeader + dwOffset);
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
          long dwOffset = 100;
          int _len_pHeader0 = 1;
          const int * pHeader = (const int *) malloc(_len_pHeader0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pHeader0; _i0++) {
            pHeader[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = urlcache_get_hash_table(pHeader,dwOffset);
          printf("%d\n", (*benchRet)); 
          free(pHeader);
        
        break;
    }
    // big-arr
    case 1:
    {
          long dwOffset = 255;
          int _len_pHeader0 = 65025;
          const int * pHeader = (const int *) malloc(_len_pHeader0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pHeader0; _i0++) {
            pHeader[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = urlcache_get_hash_table(pHeader,dwOffset);
          printf("%d\n", (*benchRet)); 
          free(pHeader);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long dwOffset = 10;
          int _len_pHeader0 = 100;
          const int * pHeader = (const int *) malloc(_len_pHeader0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pHeader0; _i0++) {
            pHeader[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = urlcache_get_hash_table(pHeader,dwOffset);
          printf("%d\n", (*benchRet)); 
          free(pHeader);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
