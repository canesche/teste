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
typedef  scalar_t__ u8 ;
typedef  int /*<<< orphan*/  const u32 ;
typedef  int /*<<< orphan*/  const u16 ;

/* Variables and functions */
 scalar_t__ const BDB_MIPI_SEQUENCE ; 

__attribute__((used)) static u32 _get_blocksize(const u8 *block_base)
{
	/* The MIPI Sequence Block v3+ has a separate size field. */
	if (*block_base == BDB_MIPI_SEQUENCE && *(block_base + 3) >= 3)
		return *((const u32 *)(block_base + 4));
	else
		return *((const u16 *)(block_base + 1));
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
          int _len_block_base0 = 1;
          const long * block_base = (const long *) malloc(_len_block_base0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_block_base0; _i0++) {
            block_base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int benchRet = _get_blocksize(block_base);
          printf("%d\n", benchRet); 
          free(block_base);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_block_base0 = 65025;
          const long * block_base = (const long *) malloc(_len_block_base0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_block_base0; _i0++) {
            block_base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int benchRet = _get_blocksize(block_base);
          printf("%d\n", benchRet); 
          free(block_base);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_block_base0 = 100;
          const long * block_base = (const long *) malloc(_len_block_base0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_block_base0; _i0++) {
            block_base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int benchRet = _get_blocksize(block_base);
          printf("%d\n", benchRet); 
          free(block_base);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
