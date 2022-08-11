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
typedef  int /*<<< orphan*/  uint16_t ;
typedef  int /*<<< orphan*/  const int8_t ;
typedef  int /*<<< orphan*/  int32_t ;
typedef  int /*<<< orphan*/  int16_t ;
struct TYPE_2__ {int f4; } ;

/* Variables and functions */
 TYPE_1__ g_18 ; 
 int /*<<< orphan*/ * g_36 ; 

__attribute__((used)) static const int8_t * func_56(int32_t * p_57, int16_t  p_58, uint16_t * p_59, int8_t * p_60)
{ /* block id: 16 */
    for (g_18.f4 = 27; (g_18.f4 >= 55); g_18.f4++)
    { /* block id: 19 */
        (*p_57) ^= g_36[3];
    }
    return p_60;
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
          int p_58 = 100;
          int _len_p_570 = 1;
          int * p_57 = (int *) malloc(_len_p_570*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_570; _i0++) {
            p_57[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_590 = 1;
          int * p_59 = (int *) malloc(_len_p_590*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_590; _i0++) {
            p_59[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_600 = 1;
          const int * p_60 = (const int *) malloc(_len_p_600*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_p_600; _i0++) {
            p_60[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = func_56(p_57,p_58,p_59,p_60);
          printf("%d\n", (*benchRet)); 
          free(p_57);
          free(p_59);
          free(p_60);
        
        break;
    }
    // big-arr
    case 1:
    {
          int p_58 = 255;
          int _len_p_570 = 65025;
          int * p_57 = (int *) malloc(_len_p_570*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_570; _i0++) {
            p_57[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_590 = 65025;
          int * p_59 = (int *) malloc(_len_p_590*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_590; _i0++) {
            p_59[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_600 = 65025;
          const int * p_60 = (const int *) malloc(_len_p_600*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_p_600; _i0++) {
            p_60[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = func_56(p_57,p_58,p_59,p_60);
          printf("%d\n", (*benchRet)); 
          free(p_57);
          free(p_59);
          free(p_60);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int p_58 = 10;
          int _len_p_570 = 100;
          int * p_57 = (int *) malloc(_len_p_570*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_570; _i0++) {
            p_57[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_590 = 100;
          int * p_59 = (int *) malloc(_len_p_590*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_590; _i0++) {
            p_59[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_600 = 100;
          const int * p_60 = (const int *) malloc(_len_p_600*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_p_600; _i0++) {
            p_60[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const int * benchRet = func_56(p_57,p_58,p_59,p_60);
          printf("%d\n", (*benchRet)); 
          free(p_57);
          free(p_59);
          free(p_60);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
