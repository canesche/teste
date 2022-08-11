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
typedef  int WORD ;
typedef  int ULONG ;
typedef  int /*<<< orphan*/  UCHAR ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static BOOL is_incomplete_chunk(const UCHAR *compressed, ULONG compressed_size, BOOL check_all)
{
    ULONG chunk_size;

    if (compressed_size <= sizeof(WORD))
        return TRUE;

    while (compressed_size >= sizeof(WORD))
    {
        chunk_size = (*(WORD *)compressed & 0xFFF) + 1;
        if (compressed_size < sizeof(WORD) + chunk_size)
            return TRUE;
        if (!check_all)
            break;
        compressed      += sizeof(WORD) + chunk_size;
        compressed_size -= sizeof(WORD) + chunk_size;
    }

    return FALSE;
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
          int compressed_size = 100;
          int check_all = 100;
          int _len_compressed0 = 1;
          const int * compressed = (const int *) malloc(_len_compressed0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_compressed0; _i0++) {
            compressed[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_incomplete_chunk(compressed,compressed_size,check_all);
          printf("%d\n", benchRet); 
          free(compressed);
        
        break;
    }
    // big-arr
    case 1:
    {
          int compressed_size = 255;
          int check_all = 255;
          int _len_compressed0 = 65025;
          const int * compressed = (const int *) malloc(_len_compressed0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_compressed0; _i0++) {
            compressed[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_incomplete_chunk(compressed,compressed_size,check_all);
          printf("%d\n", benchRet); 
          free(compressed);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int compressed_size = 10;
          int check_all = 10;
          int _len_compressed0 = 100;
          const int * compressed = (const int *) malloc(_len_compressed0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_compressed0; _i0++) {
            compressed[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_incomplete_chunk(compressed,compressed_size,check_all);
          printf("%d\n", benchRet); 
          free(compressed);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
