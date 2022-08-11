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
typedef  union U1 {int dummy; } U1 ;
typedef  union U0 {int dummy; } U0 ;
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int /*<<< orphan*/  int8_t ;
typedef  int /*<<< orphan*/  int64_t ;
struct TYPE_2__ {int /*<<< orphan*/  f0; } ;

/* Variables and functions */
 TYPE_1__ g_1428 ; 

__attribute__((used)) static int8_t * func_36(const union U0  p_37, int64_t  p_38, int8_t * p_39, int8_t * p_40, uint8_t  p_41)
{ /* block id: 788 */
    union U1 *l_1591 = NULL;
    int8_t *l_1592 = &g_1428.f0;
    l_1591 = l_1591;
    return l_1592;
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
          const union U0 p_37 = 0;
          int p_38 = 100;
          int p_41 = 100;
          int _len_p_390 = 1;
          int * p_39 = (int *) malloc(_len_p_390*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_390; _i0++) {
            p_39[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_400 = 1;
          int * p_40 = (int *) malloc(_len_p_400*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_400; _i0++) {
            p_40[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = func_36(p_37,p_38,p_39,p_40,p_41);
          printf("%d\n", (*benchRet)); 
          free(p_39);
          free(p_40);
        
        break;
    }
    // big-arr
    case 1:
    {
          const union U0 p_37 = 0;
          int p_38 = 255;
          int p_41 = 255;
          int _len_p_390 = 65025;
          int * p_39 = (int *) malloc(_len_p_390*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_390; _i0++) {
            p_39[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_400 = 65025;
          int * p_40 = (int *) malloc(_len_p_400*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_400; _i0++) {
            p_40[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = func_36(p_37,p_38,p_39,p_40,p_41);
          printf("%d\n", (*benchRet)); 
          free(p_39);
          free(p_40);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const union U0 p_37 = 0;
          int p_38 = 10;
          int p_41 = 10;
          int _len_p_390 = 100;
          int * p_39 = (int *) malloc(_len_p_390*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_390; _i0++) {
            p_39[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_400 = 100;
          int * p_40 = (int *) malloc(_len_p_400*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_400; _i0++) {
            p_40[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = func_36(p_37,p_38,p_39,p_40,p_41);
          printf("%d\n", (*benchRet)); 
          free(p_39);
          free(p_40);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
