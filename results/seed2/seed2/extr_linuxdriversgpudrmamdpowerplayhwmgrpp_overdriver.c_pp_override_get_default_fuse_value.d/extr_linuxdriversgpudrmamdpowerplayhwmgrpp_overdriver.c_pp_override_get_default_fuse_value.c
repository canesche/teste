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
typedef  scalar_t__ uint64_t ;
typedef  size_t uint32_t ;
struct phm_fuses_default {scalar_t__ key; int /*<<< orphan*/  VFT0_b; int /*<<< orphan*/  VFT0_m2; int /*<<< orphan*/  VFT0_m1; int /*<<< orphan*/  VFT1_b; int /*<<< orphan*/  VFT1_m2; int /*<<< orphan*/  VFT1_m1; int /*<<< orphan*/  VFT2_b; int /*<<< orphan*/  VFT2_m2; int /*<<< orphan*/  VFT2_m1; } ;

/* Variables and functions */
 int EINVAL ; 
 struct phm_fuses_default* vega10_fuses_default ; 

int pp_override_get_default_fuse_value(uint64_t key,
			struct phm_fuses_default *result)
{
	const struct phm_fuses_default *list = vega10_fuses_default;
	uint32_t i;

	for (i = 0; list[i].key != 0; i++) {
		if (key == list[i].key) {
			result->key =  list[i].key;
			result->VFT2_m1 = list[i].VFT2_m1;
			result->VFT2_m2 = list[i].VFT2_m2;
			result->VFT2_b  = list[i].VFT2_b;
			result->VFT1_m1 = list[i].VFT1_m1;
			result->VFT1_m2 = list[i].VFT1_m2;
			result->VFT1_b  = list[i].VFT1_b;
			result->VFT0_m1 = list[i].VFT0_m1;
			result->VFT0_m2 = list[i].VFT0_m2;
			result->VFT0_b  = list[i].VFT0_b;
			return 0;
		}
	}

	return -EINVAL;
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
          long key = 100;
          int _len_result0 = 1;
          struct phm_fuses_default * result = (struct phm_fuses_default *) malloc(_len_result0*sizeof(struct phm_fuses_default));
          for(int _i0 = 0; _i0 < _len_result0; _i0++) {
            result[_i0].key = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT0_b = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT0_m2 = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT0_m1 = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT1_b = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT1_m2 = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT1_m1 = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT2_b = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT2_m2 = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT2_m1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pp_override_get_default_fuse_value(key,result);
          printf("%d\n", benchRet); 
          free(result);
        
        break;
    }
    // big-arr
    case 1:
    {
          long key = 255;
          int _len_result0 = 65025;
          struct phm_fuses_default * result = (struct phm_fuses_default *) malloc(_len_result0*sizeof(struct phm_fuses_default));
          for(int _i0 = 0; _i0 < _len_result0; _i0++) {
            result[_i0].key = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT0_b = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT0_m2 = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT0_m1 = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT1_b = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT1_m2 = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT1_m1 = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT2_b = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT2_m2 = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT2_m1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pp_override_get_default_fuse_value(key,result);
          printf("%d\n", benchRet); 
          free(result);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long key = 10;
          int _len_result0 = 100;
          struct phm_fuses_default * result = (struct phm_fuses_default *) malloc(_len_result0*sizeof(struct phm_fuses_default));
          for(int _i0 = 0; _i0 < _len_result0; _i0++) {
            result[_i0].key = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT0_b = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT0_m2 = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT0_m1 = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT1_b = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT1_m2 = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT1_m1 = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT2_b = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT2_m2 = ((-2 * (next_i()%2)) + 1) * next_i();
        result[_i0].VFT2_m1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pp_override_get_default_fuse_value(key,result);
          printf("%d\n", benchRet); 
          free(result);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
