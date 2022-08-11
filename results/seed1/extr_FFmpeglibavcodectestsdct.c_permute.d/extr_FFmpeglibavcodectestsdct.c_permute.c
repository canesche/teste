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
typedef  int /*<<< orphan*/  int16_t ;
typedef  enum idct_permutation_type { ____Placeholder_idct_permutation_type } idct_permutation_type ;

/* Variables and functions */
#define  FF_IDCT_PERM_LIBMPEG2 130 
#define  FF_IDCT_PERM_PARTTRANS 129 
#define  FF_IDCT_PERM_TRANSPOSE 128 

__attribute__((used)) static void permute(int16_t dst[64], const int16_t src[64],
                    enum idct_permutation_type perm_type)
{
    int i;

#if ARCH_X86
    if (permute_x86(dst, src, perm_type))
        return;
#endif

    switch (perm_type) {
    case FF_IDCT_PERM_LIBMPEG2:
        for (i = 0; i < 64; i++)
            dst[(i & 0x38) | ((i & 6) >> 1) | ((i & 1) << 2)] = src[i];
        break;
    case FF_IDCT_PERM_PARTTRANS:
        for (i = 0; i < 64; i++)
            dst[(i & 0x24) | ((i & 3) << 3) | ((i >> 3) & 3)] = src[i];
        break;
    case FF_IDCT_PERM_TRANSPOSE:
        for (i = 0; i < 64; i++)
            dst[(i>>3) | ((i<<3)&0x38)] = src[i];
        break;
    default:
        for (i = 0; i < 64; i++)
            dst[i] = src[i];
        break;
    }
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
          enum idct_permutation_type perm_type = 0;
          int _len_dst0 = 64;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 64;
          int const* src = (int const*) malloc(_len_src0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          permute(dst,src,perm_type);
          free(dst);
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum idct_permutation_type perm_type = 0;
          int _len_dst0 = 65025;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 65025;
          int const* src = (int const*) malloc(_len_src0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          permute(dst,src,perm_type);
          free(dst);
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum idct_permutation_type perm_type = 0;
          int _len_dst0 = 100;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 100;
          int const* src = (int const*) malloc(_len_src0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          permute(dst,src,perm_type);
          free(dst);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
