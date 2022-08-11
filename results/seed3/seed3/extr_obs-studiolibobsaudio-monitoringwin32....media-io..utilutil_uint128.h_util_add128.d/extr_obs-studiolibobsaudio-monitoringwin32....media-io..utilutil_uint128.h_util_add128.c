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
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int low; int high; void** i32; } ;
typedef  TYPE_1__ util_uint128_t ;
typedef  int uint64_t ;
typedef  void* uint32_t ;

/* Variables and functions */

__attribute__((used)) static inline util_uint128_t util_add128(util_uint128_t a, util_uint128_t b)
{
	util_uint128_t out;
	uint64_t val;

	val = (a.low & 0xFFFFFFFFULL) + (b.low & 0xFFFFFFFFULL);
	out.i32[0] = (uint32_t)(val & 0xFFFFFFFFULL);
	val >>= 32;

	val += (a.low >> 32) + (b.low >> 32);
	out.i32[1] = (uint32_t)val;
	val >>= 32;

	val += (a.high & 0xFFFFFFFFULL) + (b.high & 0xFFFFFFFFULL);
	out.i32[2] = (uint32_t)(val & 0xFFFFFFFFULL);
	val >>= 32;

	val += (a.high >> 32) + (b.high >> 32);
	out.i32[3] = (uint32_t)val;

	return out;
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
          struct TYPE_5__ a;
        a.low = ((-2 * (next_i()%2)) + 1) * next_i();
        a.high = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_a_i320 = 1;
          a.i32 = (void **) malloc(_len_a_i320*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_a_i320; _j0++) {
          }
          struct TYPE_5__ b;
        b.low = ((-2 * (next_i()%2)) + 1) * next_i();
        b.high = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_b_i320 = 1;
          b.i32 = (void **) malloc(_len_b_i320*sizeof(void *));
          for(int _j0 = 0; _j0 < _len_b_i320; _j0++) {
          }
          struct TYPE_5__ benchRet = util_add128(a,b);
          printf("%d\n", benchRet.low);
          printf("%d\n", benchRet.high);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
