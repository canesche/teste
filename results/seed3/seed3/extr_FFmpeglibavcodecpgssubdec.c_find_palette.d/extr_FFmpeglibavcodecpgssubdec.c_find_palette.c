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
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {int count; TYPE_2__* palette; } ;
typedef  TYPE_1__ PGSSubPalettes ;
typedef  TYPE_2__ PGSSubPalette ;

/* Variables and functions */

__attribute__((used)) static PGSSubPalette * find_palette(int id, PGSSubPalettes *palettes)
{
    int i;

    for (i = 0; i < palettes->count; i++) {
        if (palettes->palette[i].id == id)
            return &palettes->palette[i];
    }
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
          int id = 100;
          int _len_palettes0 = 1;
          struct TYPE_5__ * palettes = (struct TYPE_5__ *) malloc(_len_palettes0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_palettes0; _i0++) {
            palettes[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_palettes__i0__palette0 = 1;
          palettes[_i0].palette = (struct TYPE_6__ *) malloc(_len_palettes__i0__palette0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_palettes__i0__palette0; _j0++) {
            palettes[_i0].palette->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct TYPE_6__ * benchRet = find_palette(id,palettes);
          printf("%d\n", (*benchRet).id);
          for(int _aux = 0; _aux < _len_palettes0; _aux++) {
          free(palettes[_aux].palette);
          }
          free(palettes);
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          int _len_palettes0 = 65025;
          struct TYPE_5__ * palettes = (struct TYPE_5__ *) malloc(_len_palettes0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_palettes0; _i0++) {
            palettes[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_palettes__i0__palette0 = 1;
          palettes[_i0].palette = (struct TYPE_6__ *) malloc(_len_palettes__i0__palette0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_palettes__i0__palette0; _j0++) {
            palettes[_i0].palette->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct TYPE_6__ * benchRet = find_palette(id,palettes);
          printf("%d\n", (*benchRet).id);
          for(int _aux = 0; _aux < _len_palettes0; _aux++) {
          free(palettes[_aux].palette);
          }
          free(palettes);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          int _len_palettes0 = 100;
          struct TYPE_5__ * palettes = (struct TYPE_5__ *) malloc(_len_palettes0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_palettes0; _i0++) {
            palettes[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_palettes__i0__palette0 = 1;
          palettes[_i0].palette = (struct TYPE_6__ *) malloc(_len_palettes__i0__palette0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_palettes__i0__palette0; _j0++) {
            palettes[_i0].palette->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct TYPE_6__ * benchRet = find_palette(id,palettes);
          printf("%d\n", (*benchRet).id);
          for(int _aux = 0; _aux < _len_palettes0; _aux++) {
          free(palettes[_aux].palette);
          }
          free(palettes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
