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
typedef  union U0 {int dummy; } U0 ;
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int /*<<< orphan*/  uint32_t ;
typedef  int /*<<< orphan*/  int32_t ;

/* Variables and functions */

__attribute__((used)) static uint8_t  func_33(union U2 * p_34, uint32_t  p_35, union U0  p_36, uint8_t  p_37, union U2 * p_38)
{ /* block id: 319 */
    int32_t *l_676 = (void*)0;
    int32_t **l_677 = &l_676;
    (*l_677) = l_676;
    return p_37;
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
          int p_35 = 100;
          union U0 p_36 = 0;
          int p_37 = 100;
          int _len_p_340 = 1;
          union U2 * p_34 = (union U2 *) malloc(_len_p_340*sizeof(union U2));
          for(int _i0 = 0; _i0 < _len_p_340; _i0++) {
            p_34[_i0] = 0;
          }
          int _len_p_380 = 1;
          union U2 * p_38 = (union U2 *) malloc(_len_p_380*sizeof(union U2));
          for(int _i0 = 0; _i0 < _len_p_380; _i0++) {
            p_38[_i0] = 0;
          }
          int benchRet = func_33(p_34,p_35,p_36,p_37,p_38);
          printf("%d\n", benchRet); 
          free(p_34);
          free(p_38);
        
        break;
    }
    // big-arr
    case 1:
    {
          int p_35 = 255;
          union U0 p_36 = 0;
          int p_37 = 255;
          int _len_p_340 = 65025;
          union U2 * p_34 = (union U2 *) malloc(_len_p_340*sizeof(union U2));
          for(int _i0 = 0; _i0 < _len_p_340; _i0++) {
            p_34[_i0] = 0;
          }
          int _len_p_380 = 65025;
          union U2 * p_38 = (union U2 *) malloc(_len_p_380*sizeof(union U2));
          for(int _i0 = 0; _i0 < _len_p_380; _i0++) {
            p_38[_i0] = 0;
          }
          int benchRet = func_33(p_34,p_35,p_36,p_37,p_38);
          printf("%d\n", benchRet); 
          free(p_34);
          free(p_38);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int p_35 = 10;
          union U0 p_36 = 0;
          int p_37 = 10;
          int _len_p_340 = 100;
          union U2 * p_34 = (union U2 *) malloc(_len_p_340*sizeof(union U2));
          for(int _i0 = 0; _i0 < _len_p_340; _i0++) {
            p_34[_i0] = 0;
          }
          int _len_p_380 = 100;
          union U2 * p_38 = (union U2 *) malloc(_len_p_380*sizeof(union U2));
          for(int _i0 = 0; _i0 < _len_p_380; _i0++) {
            p_38[_i0] = 0;
          }
          int benchRet = func_33(p_34,p_35,p_36,p_37,p_38);
          printf("%d\n", benchRet); 
          free(p_34);
          free(p_38);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
