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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int* gradient_scale; } ;
typedef  TYPE_1__ MotionPixelsContext ;

/* Variables and functions */

__attribute__((used)) static int mp_gradient(MotionPixelsContext *mp, int component, int v)
{
    int delta;

    delta = (v - 7) * mp->gradient_scale[component];
    mp->gradient_scale[component] = (v == 0 || v == 14) ? 2 : 1;
    return delta;
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
          int component = 100;
          int v = 100;
          int _len_mp0 = 1;
          struct TYPE_3__ * mp = (struct TYPE_3__ *) malloc(_len_mp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mp0; _i0++) {
              int _len_mp__i0__gradient_scale0 = 1;
          mp[_i0].gradient_scale = (int *) malloc(_len_mp__i0__gradient_scale0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mp__i0__gradient_scale0; _j0++) {
            mp[_i0].gradient_scale[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mp_gradient(mp,component,v);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mp0; _aux++) {
          free(mp[_aux].gradient_scale);
          }
          free(mp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int component = 255;
          int v = 255;
          int _len_mp0 = 65025;
          struct TYPE_3__ * mp = (struct TYPE_3__ *) malloc(_len_mp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mp0; _i0++) {
              int _len_mp__i0__gradient_scale0 = 1;
          mp[_i0].gradient_scale = (int *) malloc(_len_mp__i0__gradient_scale0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mp__i0__gradient_scale0; _j0++) {
            mp[_i0].gradient_scale[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mp_gradient(mp,component,v);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mp0; _aux++) {
          free(mp[_aux].gradient_scale);
          }
          free(mp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int component = 10;
          int v = 10;
          int _len_mp0 = 100;
          struct TYPE_3__ * mp = (struct TYPE_3__ *) malloc(_len_mp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mp0; _i0++) {
              int _len_mp__i0__gradient_scale0 = 1;
          mp[_i0].gradient_scale = (int *) malloc(_len_mp__i0__gradient_scale0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mp__i0__gradient_scale0; _j0++) {
            mp[_i0].gradient_scale[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mp_gradient(mp,component,v);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mp0; _aux++) {
          free(mp[_aux].gradient_scale);
          }
          free(mp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
