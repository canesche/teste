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
typedef  int int32_t ;
typedef  int /*<<< orphan*/  int16_t ;

/* Variables and functions */
 int g_36 ; 
 unsigned long* g_40 ; 
 int g_46 ; 
 int*** g_51 ; 
 int g_52 ; 

__attribute__((used)) static uint32_t * func_22(int16_t  p_23, uint32_t  p_24, uint32_t * p_25)
{ /* block id: 10 */
    int32_t *l_45 = &g_46;
    int32_t *l_47 = (void*)0;
    int32_t *l_48 = &g_46;
    int32_t *l_49 = &g_46;
    int32_t *l_50[1];
    int i;
    for (i = 0; i < 1; i++)
        l_50[i] = &g_46;
    --g_52;
    g_51[0][3][1] &= (*l_48);
    for (g_52 = 0; g_52 < 2; g_52 += 1)
    {
        for (g_36 = 0; g_36 < 8; g_36 += 1)
        {
            for (p_24 = 0; p_24 < 3; p_24 += 1)
            {
                g_51[g_52][g_36][p_24] = 0x6F67A21EL;
            }
        }
    }
    for (p_24 = 0; p_24 < 7; p_24 += 1)
    {
        g_40[p_24] = 248UL;
    }
    return l_50[0];
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
          int p_23 = 100;
          int p_24 = 100;
          int _len_p_250 = 1;
          int * p_25 = (int *) malloc(_len_p_250*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_250; _i0++) {
            p_25[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = func_22(p_23,p_24,p_25);
          printf("%d\n", (*benchRet)); 
          free(p_25);
        
        break;
    }
    // big-arr
    case 1:
    {
          int p_23 = 255;
          int p_24 = 255;
          int _len_p_250 = 65025;
          int * p_25 = (int *) malloc(_len_p_250*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_250; _i0++) {
            p_25[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = func_22(p_23,p_24,p_25);
          printf("%d\n", (*benchRet)); 
          free(p_25);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int p_23 = 10;
          int p_24 = 10;
          int _len_p_250 = 100;
          int * p_25 = (int *) malloc(_len_p_250*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p_250; _i0++) {
            p_25[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = func_22(p_23,p_24,p_25);
          printf("%d\n", (*benchRet)); 
          free(p_25);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
