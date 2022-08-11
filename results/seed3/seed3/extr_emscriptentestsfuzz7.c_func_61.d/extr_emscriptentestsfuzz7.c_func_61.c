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
typedef  int /*<<< orphan*/  int32_t ;
typedef  int /*<<< orphan*/  int16_t ;

/* Variables and functions */
 int /*<<< orphan*/  g_11 ; 
 int /*<<< orphan*/ * g_66 ; 

__attribute__((used)) static int32_t * func_61(int16_t  p_62, const int32_t ** p_63)
{ /* block id: 8 */
    int32_t *l_64 = &g_11;
    int32_t *l_65[1];
    int i;
    for (i = 0; i < 1; i++)
        l_65[i] = &g_11;
    (*p_63) = l_64;
    ++g_66[0];
    return l_64;
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
          int p_62 = 100;
          int _len_p_630 = 1;
          const int ** p_63 = (const int **) malloc(_len_p_630*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_p_630; _i0++) {
            int _len_p_631 = 1;
            p_63[_i0] = (const int *) malloc(_len_p_631*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_p_631; _i1++) {
              p_63[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int * benchRet = func_61(p_62,p_63);
          printf("%d\n", (*benchRet)); 
          for(int i1 = 0; i1 < _len_p_630; i1++) {
            int _len_p_631 = 1;
              free(p_63[i1]);
          }
          free(p_63);
        
        break;
    }
    // big-arr
    case 1:
    {
          int p_62 = 255;
          int _len_p_630 = 65025;
          const int ** p_63 = (const int **) malloc(_len_p_630*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_p_630; _i0++) {
            int _len_p_631 = 1;
            p_63[_i0] = (const int *) malloc(_len_p_631*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_p_631; _i1++) {
              p_63[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int * benchRet = func_61(p_62,p_63);
          printf("%d\n", (*benchRet)); 
          for(int i1 = 0; i1 < _len_p_630; i1++) {
            int _len_p_631 = 1;
              free(p_63[i1]);
          }
          free(p_63);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int p_62 = 10;
          int _len_p_630 = 100;
          const int ** p_63 = (const int **) malloc(_len_p_630*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_p_630; _i0++) {
            int _len_p_631 = 1;
            p_63[_i0] = (const int *) malloc(_len_p_631*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_p_631; _i1++) {
              p_63[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int * benchRet = func_61(p_62,p_63);
          printf("%d\n", (*benchRet)); 
          for(int i1 = 0; i1 < _len_p_630; i1++) {
            int _len_p_631 = 1;
              free(p_63[i1]);
          }
          free(p_63);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
