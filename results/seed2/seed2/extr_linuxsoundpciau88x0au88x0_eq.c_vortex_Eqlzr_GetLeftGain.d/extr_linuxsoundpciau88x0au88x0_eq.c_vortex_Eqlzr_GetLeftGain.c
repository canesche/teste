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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {size_t* this130; scalar_t__ this28; } ;
struct TYPE_4__ {TYPE_2__ eq; } ;
typedef  TYPE_1__ vortex_t ;
typedef  size_t u16 ;
typedef  TYPE_2__ eqlzr_t ;

/* Variables and functions */

__attribute__((used)) static int vortex_Eqlzr_GetLeftGain(vortex_t * vortex, u16 index, u16 * gain)
{
	eqlzr_t *eq = &(vortex->eq);

	if (eq->this28) {
		*gain = eq->this130[index];
		return 0;
	}
	return 1;
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
          unsigned long index = 100;
          int _len_vortex0 = 1;
          struct TYPE_4__ * vortex = (struct TYPE_4__ *) malloc(_len_vortex0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_vortex0; _i0++) {
              int _len_vortex__i0__eq_this1300 = 1;
          vortex[_i0].eq.this130 = (unsigned long *) malloc(_len_vortex__i0__eq_this1300*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_vortex__i0__eq_this1300; _j0++) {
            vortex[_i0].eq.this130[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vortex[_i0].eq.this28 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gain0 = 1;
          unsigned long * gain = (unsigned long *) malloc(_len_gain0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_gain0; _i0++) {
            gain[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vortex_Eqlzr_GetLeftGain(vortex,index,gain);
          printf("%d\n", benchRet); 
          free(vortex);
          free(gain);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long index = 255;
          int _len_vortex0 = 65025;
          struct TYPE_4__ * vortex = (struct TYPE_4__ *) malloc(_len_vortex0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_vortex0; _i0++) {
              int _len_vortex__i0__eq_this1300 = 1;
          vortex[_i0].eq.this130 = (unsigned long *) malloc(_len_vortex__i0__eq_this1300*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_vortex__i0__eq_this1300; _j0++) {
            vortex[_i0].eq.this130[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vortex[_i0].eq.this28 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gain0 = 65025;
          unsigned long * gain = (unsigned long *) malloc(_len_gain0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_gain0; _i0++) {
            gain[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vortex_Eqlzr_GetLeftGain(vortex,index,gain);
          printf("%d\n", benchRet); 
          free(vortex);
          free(gain);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long index = 10;
          int _len_vortex0 = 100;
          struct TYPE_4__ * vortex = (struct TYPE_4__ *) malloc(_len_vortex0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_vortex0; _i0++) {
              int _len_vortex__i0__eq_this1300 = 1;
          vortex[_i0].eq.this130 = (unsigned long *) malloc(_len_vortex__i0__eq_this1300*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_vortex__i0__eq_this1300; _j0++) {
            vortex[_i0].eq.this130[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vortex[_i0].eq.this28 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gain0 = 100;
          unsigned long * gain = (unsigned long *) malloc(_len_gain0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_gain0; _i0++) {
            gain[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vortex_Eqlzr_GetLeftGain(vortex,index,gain);
          printf("%d\n", benchRet); 
          free(vortex);
          free(gain);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
