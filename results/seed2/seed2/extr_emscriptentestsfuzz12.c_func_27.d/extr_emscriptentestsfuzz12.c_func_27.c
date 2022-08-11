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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  union U3 {int dummy; } U3 ;
typedef  int /*<<< orphan*/  int8_t ;
typedef  int int32_t ;
struct TYPE_2__ {int f3; } ;

/* Variables and functions */
 int /*<<< orphan*/  g_10 ; 
 TYPE_1__ g_123 ; 
 union U3 g_62 ; 

__attribute__((used)) static int8_t * func_27(const union U3  p_28, const union U3  p_29, int8_t * p_30, int8_t * p_31, int8_t  p_32)
{ /* block id: 314 */
    union U3 *l_459 = &g_62;
    union U3 *l_461 = &g_62;
    union U3 **l_460 = &l_461;
    int32_t l_462 = 0x5FFEF395L;
    int32_t *l_463 = &g_123.f3;
    int8_t *l_464 = &g_10;
    (*l_460) = (l_459 = l_459);
    (*l_463) &= l_462;
    return l_464;
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
          const union U3 p_28 = 0;
          const union U3 p_29 = 0;
          int p_32 = 100;
          int _len_p_300 = 1;
          int * p_30 = (int *) malloc(_len_p_300*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_300; _i0++) {
            p_30[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_310 = 1;
          int * p_31 = (int *) malloc(_len_p_310*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_310; _i0++) {
            p_31[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = func_27(p_28,p_29,p_30,p_31,p_32);
          printf("%d\n", (*benchRet)); 
          free(p_30);
          free(p_31);
        
        break;
    }
    // big-arr
    case 1:
    {
          const union U3 p_28 = 0;
          const union U3 p_29 = 0;
          int p_32 = 255;
          int _len_p_300 = 65025;
          int * p_30 = (int *) malloc(_len_p_300*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_300; _i0++) {
            p_30[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_310 = 65025;
          int * p_31 = (int *) malloc(_len_p_310*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_310; _i0++) {
            p_31[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = func_27(p_28,p_29,p_30,p_31,p_32);
          printf("%d\n", (*benchRet)); 
          free(p_30);
          free(p_31);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const union U3 p_28 = 0;
          const union U3 p_29 = 0;
          int p_32 = 10;
          int _len_p_300 = 100;
          int * p_30 = (int *) malloc(_len_p_300*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_300; _i0++) {
            p_30[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_310 = 100;
          int * p_31 = (int *) malloc(_len_p_310*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_310; _i0++) {
            p_31[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = func_27(p_28,p_29,p_30,p_31,p_32);
          printf("%d\n", (*benchRet)); 
          free(p_30);
          free(p_31);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
