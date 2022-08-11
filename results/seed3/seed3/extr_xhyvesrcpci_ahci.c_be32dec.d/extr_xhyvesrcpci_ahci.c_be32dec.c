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
typedef  int uint64_t ;
typedef  int /*<<< orphan*/  uint32_t ;

/* Variables and functions */

__attribute__((used)) static __inline uint32_t
be32dec(const void *pp)
{
	unsigned char const *p = (unsigned char const *)pp;

	return (uint32_t) ((((uint64_t) p[0]) << 24) | 
		(((uint64_t) p[1]) << 16) | (((uint64_t) p[2]) << 8) |
			((uint64_t) p[3]));
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
          int _len_pp0 = 1;
          const void * pp = (const void *) malloc(_len_pp0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
            pp[_i0] = 0;
          }
          int benchRet = be32dec(pp);
          printf("%d\n", benchRet); 
          free(pp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pp0 = 65025;
          const void * pp = (const void *) malloc(_len_pp0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
            pp[_i0] = 0;
          }
          int benchRet = be32dec(pp);
          printf("%d\n", benchRet); 
          free(pp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pp0 = 100;
          const void * pp = (const void *) malloc(_len_pp0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
            pp[_i0] = 0;
          }
          int benchRet = be32dec(pp);
          printf("%d\n", benchRet); 
          free(pp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
