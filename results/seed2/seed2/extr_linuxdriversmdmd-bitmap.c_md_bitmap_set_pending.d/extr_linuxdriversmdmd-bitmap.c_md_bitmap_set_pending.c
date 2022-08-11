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
struct bitmap_page {int pending; } ;
struct bitmap_counts {unsigned long chunkshift; struct bitmap_page* bp; } ;
typedef  unsigned long sector_t ;

/* Variables and functions */
 unsigned long PAGE_COUNTER_SHIFT ; 

__attribute__((used)) static void md_bitmap_set_pending(struct bitmap_counts *bitmap, sector_t offset)
{
	sector_t chunk = offset >> bitmap->chunkshift;
	unsigned long page = chunk >> PAGE_COUNTER_SHIFT;
	struct bitmap_page *bp = &bitmap->bp[page];

	if (!bp->pending)
		bp->pending = 1;
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
          unsigned long offset = 100;
          int _len_bitmap0 = 1;
          struct bitmap_counts * bitmap = (struct bitmap_counts *) malloc(_len_bitmap0*sizeof(struct bitmap_counts));
          for(int _i0 = 0; _i0 < _len_bitmap0; _i0++) {
            bitmap[_i0].chunkshift = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bitmap__i0__bp0 = 1;
          bitmap[_i0].bp = (struct bitmap_page *) malloc(_len_bitmap__i0__bp0*sizeof(struct bitmap_page));
          for(int _j0 = 0; _j0 < _len_bitmap__i0__bp0; _j0++) {
            bitmap[_i0].bp->pending = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          md_bitmap_set_pending(bitmap,offset);
          for(int _aux = 0; _aux < _len_bitmap0; _aux++) {
          free(bitmap[_aux].bp);
          }
          free(bitmap);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long offset = 255;
          int _len_bitmap0 = 65025;
          struct bitmap_counts * bitmap = (struct bitmap_counts *) malloc(_len_bitmap0*sizeof(struct bitmap_counts));
          for(int _i0 = 0; _i0 < _len_bitmap0; _i0++) {
            bitmap[_i0].chunkshift = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bitmap__i0__bp0 = 1;
          bitmap[_i0].bp = (struct bitmap_page *) malloc(_len_bitmap__i0__bp0*sizeof(struct bitmap_page));
          for(int _j0 = 0; _j0 < _len_bitmap__i0__bp0; _j0++) {
            bitmap[_i0].bp->pending = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          md_bitmap_set_pending(bitmap,offset);
          for(int _aux = 0; _aux < _len_bitmap0; _aux++) {
          free(bitmap[_aux].bp);
          }
          free(bitmap);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long offset = 10;
          int _len_bitmap0 = 100;
          struct bitmap_counts * bitmap = (struct bitmap_counts *) malloc(_len_bitmap0*sizeof(struct bitmap_counts));
          for(int _i0 = 0; _i0 < _len_bitmap0; _i0++) {
            bitmap[_i0].chunkshift = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bitmap__i0__bp0 = 1;
          bitmap[_i0].bp = (struct bitmap_page *) malloc(_len_bitmap__i0__bp0*sizeof(struct bitmap_page));
          for(int _j0 = 0; _j0 < _len_bitmap__i0__bp0; _j0++) {
            bitmap[_i0].bp->pending = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          md_bitmap_set_pending(bitmap,offset);
          for(int _aux = 0; _aux < _len_bitmap0; _aux++) {
          free(bitmap[_aux].bp);
          }
          free(bitmap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
