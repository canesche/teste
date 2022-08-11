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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  scalar_t__ uint32_t ;
struct dc_bios {scalar_t__ bios_size; int /*<<< orphan*/ * bios; } ;

/* Variables and functions */

uint8_t *bios_get_image(struct dc_bios *bp,
	uint32_t offset,
	uint32_t size)
{
	if (bp->bios && offset + size < bp->bios_size)
		return bp->bios + offset;
	else
		return NULL;
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
          long offset = 100;
          long size = 100;
          int _len_bp0 = 1;
          struct dc_bios * bp = (struct dc_bios *) malloc(_len_bp0*sizeof(struct dc_bios));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].bios_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bp__i0__bios0 = 1;
          bp[_i0].bios = (int *) malloc(_len_bp__i0__bios0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bp__i0__bios0; _j0++) {
            bp[_i0].bios[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = bios_get_image(bp,offset,size);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_bp0; _aux++) {
          free(bp[_aux].bios);
          }
          free(bp);
        
        break;
    }
    // big-arr
    case 1:
    {
          long offset = 255;
          long size = 255;
          int _len_bp0 = 65025;
          struct dc_bios * bp = (struct dc_bios *) malloc(_len_bp0*sizeof(struct dc_bios));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].bios_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bp__i0__bios0 = 1;
          bp[_i0].bios = (int *) malloc(_len_bp__i0__bios0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bp__i0__bios0; _j0++) {
            bp[_i0].bios[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = bios_get_image(bp,offset,size);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_bp0; _aux++) {
          free(bp[_aux].bios);
          }
          free(bp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long offset = 10;
          long size = 10;
          int _len_bp0 = 100;
          struct dc_bios * bp = (struct dc_bios *) malloc(_len_bp0*sizeof(struct dc_bios));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].bios_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bp__i0__bios0 = 1;
          bp[_i0].bios = (int *) malloc(_len_bp__i0__bios0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bp__i0__bios0; _j0++) {
            bp[_i0].bios[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = bios_get_image(bp,offset,size);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_bp0; _aux++) {
          free(bp[_aux].bios);
          }
          free(bp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
