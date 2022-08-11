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
typedef  int u8 ;
typedef  int u32 ;
struct TYPE_2__ {int* base; } ;
struct sti_cursor {unsigned int height; unsigned int width; TYPE_1__ pixmap; } ;

/* Variables and functions */

__attribute__((used)) static void sti_cursor_argb8888_to_clut8(struct sti_cursor *cursor, u32 *src)
{
	u8  *dst = cursor->pixmap.base;
	unsigned int i, j;
	u32 a, r, g, b;

	for (i = 0; i < cursor->height; i++) {
		for (j = 0; j < cursor->width; j++) {
			/* Pick the 2 higher bits of each component */
			a = (*src >> 30) & 3;
			r = (*src >> 22) & 3;
			g = (*src >> 14) & 3;
			b = (*src >> 6) & 3;
			*dst = a << 6 | r << 4 | g << 2 | b;
			src++;
			dst++;
		}
	}
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
          int _len_cursor0 = 1;
          struct sti_cursor * cursor = (struct sti_cursor *) malloc(_len_cursor0*sizeof(struct sti_cursor));
          for(int _i0 = 0; _i0 < _len_cursor0; _i0++) {
            cursor[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        cursor[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cursor__i0__pixmap_base0 = 1;
          cursor[_i0].pixmap.base = (int *) malloc(_len_cursor__i0__pixmap_base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cursor__i0__pixmap_base0; _j0++) {
            cursor[_i0].pixmap.base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_src0 = 1;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sti_cursor_argb8888_to_clut8(cursor,src);
          free(cursor);
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cursor0 = 65025;
          struct sti_cursor * cursor = (struct sti_cursor *) malloc(_len_cursor0*sizeof(struct sti_cursor));
          for(int _i0 = 0; _i0 < _len_cursor0; _i0++) {
            cursor[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        cursor[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cursor__i0__pixmap_base0 = 1;
          cursor[_i0].pixmap.base = (int *) malloc(_len_cursor__i0__pixmap_base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cursor__i0__pixmap_base0; _j0++) {
            cursor[_i0].pixmap.base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_src0 = 65025;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sti_cursor_argb8888_to_clut8(cursor,src);
          free(cursor);
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cursor0 = 100;
          struct sti_cursor * cursor = (struct sti_cursor *) malloc(_len_cursor0*sizeof(struct sti_cursor));
          for(int _i0 = 0; _i0 < _len_cursor0; _i0++) {
            cursor[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        cursor[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cursor__i0__pixmap_base0 = 1;
          cursor[_i0].pixmap.base = (int *) malloc(_len_cursor__i0__pixmap_base0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cursor__i0__pixmap_base0; _j0++) {
            cursor[_i0].pixmap.base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_src0 = 100;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sti_cursor_argb8888_to_clut8(cursor,src);
          free(cursor);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
