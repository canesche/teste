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
typedef  int /*<<< orphan*/  u8 ;
struct vc4_rcl_setup {scalar_t__ next_offset; TYPE_1__* rcl; } ;
struct TYPE_2__ {scalar_t__ vaddr; } ;

/* Variables and functions */

__attribute__((used)) static inline void rcl_u8(struct vc4_rcl_setup *setup, u8 val)
{
	*(u8 *)(setup->rcl->vaddr + setup->next_offset) = val;
	setup->next_offset += 1;
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
          int val = 100;
          int _len_setup0 = 1;
          struct vc4_rcl_setup * setup = (struct vc4_rcl_setup *) malloc(_len_setup0*sizeof(struct vc4_rcl_setup));
          for(int _i0 = 0; _i0 < _len_setup0; _i0++) {
            setup[_i0].next_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_setup__i0__rcl0 = 1;
          setup[_i0].rcl = (struct TYPE_2__ *) malloc(_len_setup__i0__rcl0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_setup__i0__rcl0; _j0++) {
            setup[_i0].rcl->vaddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rcl_u8(setup,val);
          for(int _aux = 0; _aux < _len_setup0; _aux++) {
          free(setup[_aux].rcl);
          }
          free(setup);
        
        break;
    }
    // big-arr
    case 1:
    {
          int val = 255;
          int _len_setup0 = 65025;
          struct vc4_rcl_setup * setup = (struct vc4_rcl_setup *) malloc(_len_setup0*sizeof(struct vc4_rcl_setup));
          for(int _i0 = 0; _i0 < _len_setup0; _i0++) {
            setup[_i0].next_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_setup__i0__rcl0 = 1;
          setup[_i0].rcl = (struct TYPE_2__ *) malloc(_len_setup__i0__rcl0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_setup__i0__rcl0; _j0++) {
            setup[_i0].rcl->vaddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rcl_u8(setup,val);
          for(int _aux = 0; _aux < _len_setup0; _aux++) {
          free(setup[_aux].rcl);
          }
          free(setup);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int val = 10;
          int _len_setup0 = 100;
          struct vc4_rcl_setup * setup = (struct vc4_rcl_setup *) malloc(_len_setup0*sizeof(struct vc4_rcl_setup));
          for(int _i0 = 0; _i0 < _len_setup0; _i0++) {
            setup[_i0].next_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_setup__i0__rcl0 = 1;
          setup[_i0].rcl = (struct TYPE_2__ *) malloc(_len_setup__i0__rcl0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_setup__i0__rcl0; _j0++) {
            setup[_i0].rcl->vaddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rcl_u8(setup,val);
          for(int _aux = 0; _aux < _len_setup0; _aux++) {
          free(setup[_aux].rcl);
          }
          free(setup);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
