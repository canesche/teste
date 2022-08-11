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
typedef  union U2 {int dummy; } U2 ;
typedef  union U1 {int dummy; } U1 ;
typedef  union U0 {int dummy; } U0 ;
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int /*<<< orphan*/  int32_t ;

/* Variables and functions */
 int /*<<< orphan*/  const g_11 ; 

__attribute__((used)) static const int32_t * func_2(uint8_t  p_3, union U2  p_4, int32_t * p_5, union U0  p_6, const union U1  p_7)
{ /* block id: 1 */
    return &g_11;
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
          int p_3 = 100;
          union U2 p_4 = 0;
          union U0 p_6 = 0;
          const union U1 p_7 = 0;
          int _len_p_50 = 1;
          int * p_5 = (int *) malloc(_len_p_50*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_50; _i0++) {
            p_5[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = func_2(p_3,p_4,p_5,p_6,p_7);
          printf("%d\n", (*benchRet)); 
          free(p_5);
        
        break;
    }
    // big-arr
    case 1:
    {
          int p_3 = 255;
          union U2 p_4 = 0;
          union U0 p_6 = 0;
          const union U1 p_7 = 0;
          int _len_p_50 = 65025;
          int * p_5 = (int *) malloc(_len_p_50*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_50; _i0++) {
            p_5[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = func_2(p_3,p_4,p_5,p_6,p_7);
          printf("%d\n", (*benchRet)); 
          free(p_5);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int p_3 = 10;
          union U2 p_4 = 0;
          union U0 p_6 = 0;
          const union U1 p_7 = 0;
          int _len_p_50 = 100;
          int * p_5 = (int *) malloc(_len_p_50*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_50; _i0++) {
            p_5[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = func_2(p_3,p_4,p_5,p_6,p_7);
          printf("%d\n", (*benchRet)); 
          free(p_5);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
