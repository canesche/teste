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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int offset; int size; } ;
struct TYPE_7__ {int offset; int size; } ;
struct TYPE_6__ {int size; int offset; } ;
struct TYPE_5__ {int size; } ;
struct i810fb_par {TYPE_4__ cursor_heap; TYPE_3__ iring; TYPE_2__ fb; TYPE_1__ aperture; } ;

/* Variables and functions */
 int RINGBUFFER_SIZE ; 
 int v_offset_default ; 
 int vram ; 

__attribute__((used)) static void i810_fix_offsets(struct i810fb_par *par)
{
	if (vram + 1 > par->aperture.size >> 20)
		vram = (par->aperture.size >> 20) - 1;
	if (v_offset_default > (par->aperture.size >> 20))
		v_offset_default = (par->aperture.size >> 20);
	if (vram + v_offset_default + 1 > par->aperture.size >> 20)
		v_offset_default = (par->aperture.size >> 20) - (vram + 1);

	par->fb.size = vram << 20;
	par->fb.offset = v_offset_default << 20;
	par->fb.offset >>= 12;

	par->iring.offset = par->fb.offset + (par->fb.size >> 12);
	par->iring.size = RINGBUFFER_SIZE;

	par->cursor_heap.offset = par->iring.offset + (RINGBUFFER_SIZE >> 12);
	par->cursor_heap.size = 4096;
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
          int _len_par0 = 1;
          struct i810fb_par * par = (struct i810fb_par *) malloc(_len_par0*sizeof(struct i810fb_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].cursor_heap.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].cursor_heap.size = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].iring.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].iring.size = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].fb.size = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].fb.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].aperture.size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i810_fix_offsets(par);
          free(par);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_par0 = 65025;
          struct i810fb_par * par = (struct i810fb_par *) malloc(_len_par0*sizeof(struct i810fb_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].cursor_heap.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].cursor_heap.size = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].iring.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].iring.size = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].fb.size = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].fb.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].aperture.size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i810_fix_offsets(par);
          free(par);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_par0 = 100;
          struct i810fb_par * par = (struct i810fb_par *) malloc(_len_par0*sizeof(struct i810fb_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].cursor_heap.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].cursor_heap.size = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].iring.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].iring.size = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].fb.size = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].fb.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].aperture.size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i810_fix_offsets(par);
          free(par);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
