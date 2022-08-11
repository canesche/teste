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
typedef  int uint32_t ;
typedef  int /*<<< orphan*/  uint16_t ;
struct S1 {int dummy; } ;
typedef  int int32_t ;

/* Variables and functions */
 int* g_285 ; 

__attribute__((used)) static struct S1 * func_39(int32_t  p_40, uint16_t  p_41, struct S1 * p_42, struct S1 * p_43)
{ /* block id: 185 */
    uint32_t l_283 = 0x3C929064L;
    int32_t *l_284 = &g_285[0];
    struct S1 *l_286 = (void*)0;
    (*l_284) |= l_283;
    return l_286;
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
          int p_40 = 100;
          int p_41 = 100;
          int _len_p_420 = 1;
          struct S1 * p_42 = (struct S1 *) malloc(_len_p_420*sizeof(struct S1));
          for(int _i0 = 0; _i0 < _len_p_420; _i0++) {
            p_42[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_430 = 1;
          struct S1 * p_43 = (struct S1 *) malloc(_len_p_430*sizeof(struct S1));
          for(int _i0 = 0; _i0 < _len_p_430; _i0++) {
            p_43[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct S1 * benchRet = func_39(p_40,p_41,p_42,p_43);
          printf("%d\n", (*benchRet).dummy);
          free(p_42);
          free(p_43);
        
        break;
    }
    // big-arr
    case 1:
    {
          int p_40 = 255;
          int p_41 = 255;
          int _len_p_420 = 65025;
          struct S1 * p_42 = (struct S1 *) malloc(_len_p_420*sizeof(struct S1));
          for(int _i0 = 0; _i0 < _len_p_420; _i0++) {
            p_42[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_430 = 65025;
          struct S1 * p_43 = (struct S1 *) malloc(_len_p_430*sizeof(struct S1));
          for(int _i0 = 0; _i0 < _len_p_430; _i0++) {
            p_43[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct S1 * benchRet = func_39(p_40,p_41,p_42,p_43);
          printf("%d\n", (*benchRet).dummy);
          free(p_42);
          free(p_43);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int p_40 = 10;
          int p_41 = 10;
          int _len_p_420 = 100;
          struct S1 * p_42 = (struct S1 *) malloc(_len_p_420*sizeof(struct S1));
          for(int _i0 = 0; _i0 < _len_p_420; _i0++) {
            p_42[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_430 = 100;
          struct S1 * p_43 = (struct S1 *) malloc(_len_p_430*sizeof(struct S1));
          for(int _i0 = 0; _i0 < _len_p_430; _i0++) {
            p_43[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct S1 * benchRet = func_39(p_40,p_41,p_42,p_43);
          printf("%d\n", (*benchRet).dummy);
          free(p_42);
          free(p_43);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
