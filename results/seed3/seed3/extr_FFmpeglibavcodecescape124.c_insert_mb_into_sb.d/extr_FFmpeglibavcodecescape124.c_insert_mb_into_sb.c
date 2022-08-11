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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint32_t ;
struct TYPE_6__ {int /*<<< orphan*/ * pixels32; } ;
struct TYPE_5__ {int /*<<< orphan*/ * pixels32; } ;
typedef  TYPE_1__ SuperBlock ;
typedef  TYPE_2__ MacroBlock ;

/* Variables and functions */

__attribute__((used)) static void insert_mb_into_sb(SuperBlock* sb, MacroBlock mb, unsigned index) {
   // Formula: ((index / 4) * 16 + (index % 4) * 2) / 2
   uint32_t *dst = sb->pixels32 + index + (index & -4);

   // This technically violates C99 aliasing rules, but it should be safe.
   dst[0] = mb.pixels32[0];
   dst[4] = mb.pixels32[1];
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
          unsigned int index = 100;
          int _len_sb0 = 1;
          struct TYPE_5__ * sb = (struct TYPE_5__ *) malloc(_len_sb0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
              int _len_sb__i0__pixels320 = 1;
          sb[_i0].pixels32 = (int *) malloc(_len_sb__i0__pixels320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sb__i0__pixels320; _j0++) {
            sb[_i0].pixels32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct TYPE_6__ mb;
          int _len_mb_pixels320 = 1;
          mb.pixels32 = (int *) malloc(_len_mb_pixels320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mb_pixels320; _j0++) {
            mb.pixels32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          insert_mb_into_sb(sb,mb,index);
          for(int _aux = 0; _aux < _len_sb0; _aux++) {
          free(sb[_aux].pixels32);
          }
          free(sb);
          free(mb.pixels32);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int index = 255;
          int _len_sb0 = 65025;
          struct TYPE_5__ * sb = (struct TYPE_5__ *) malloc(_len_sb0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
              int _len_sb__i0__pixels320 = 1;
          sb[_i0].pixels32 = (int *) malloc(_len_sb__i0__pixels320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sb__i0__pixels320; _j0++) {
            sb[_i0].pixels32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct TYPE_6__ mb;
          int _len_mb_pixels320 = 1;
          mb.pixels32 = (int *) malloc(_len_mb_pixels320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mb_pixels320; _j0++) {
            mb.pixels32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          insert_mb_into_sb(sb,mb,index);
          for(int _aux = 0; _aux < _len_sb0; _aux++) {
          free(sb[_aux].pixels32);
          }
          free(sb);
          free(mb.pixels32);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int index = 10;
          int _len_sb0 = 100;
          struct TYPE_5__ * sb = (struct TYPE_5__ *) malloc(_len_sb0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
              int _len_sb__i0__pixels320 = 1;
          sb[_i0].pixels32 = (int *) malloc(_len_sb__i0__pixels320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sb__i0__pixels320; _j0++) {
            sb[_i0].pixels32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct TYPE_6__ mb;
          int _len_mb_pixels320 = 1;
          mb.pixels32 = (int *) malloc(_len_mb_pixels320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mb_pixels320; _j0++) {
            mb.pixels32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          insert_mb_into_sb(sb,mb,index);
          for(int _aux = 0; _aux < _len_sb0; _aux++) {
          free(sb[_aux].pixels32);
          }
          free(sb);
          free(mb.pixels32);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
