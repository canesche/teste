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
typedef  scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ bank_count; TYPE_2__* bank_bitmap; } ;
typedef  TYPE_1__ hibernate_page_list_t ;
struct TYPE_6__ {scalar_t__ first_page; scalar_t__ last_page; size_t bitmapwords; int /*<<< orphan*/ * bitmap; } ;
typedef  TYPE_2__ hibernate_bitmap_t ;

/* Variables and functions */

__attribute__((used)) static hibernate_bitmap_t *
hibernate_page_bitmap(hibernate_page_list_t * list, uint32_t page)
{
    uint32_t             bank;
    hibernate_bitmap_t * bitmap = &list->bank_bitmap[0];

    for (bank = 0; bank < list->bank_count; bank++)
    {
	if ((page >= bitmap->first_page) && (page <= bitmap->last_page))
	    break;
	bitmap = (hibernate_bitmap_t *) &bitmap->bitmap[bitmap->bitmapwords];
    }
    if (bank == list->bank_count)
	bitmap = NULL;
	
    return (bitmap);
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
          long page = 100;
          int _len_list0 = 1;
          struct TYPE_5__ * list = (struct TYPE_5__ *) malloc(_len_list0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0].bank_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_list__i0__bank_bitmap0 = 1;
          list[_i0].bank_bitmap = (struct TYPE_6__ *) malloc(_len_list__i0__bank_bitmap0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_list__i0__bank_bitmap0; _j0++) {
            list[_i0].bank_bitmap->first_page = ((-2 * (next_i()%2)) + 1) * next_i();
        list[_i0].bank_bitmap->last_page = ((-2 * (next_i()%2)) + 1) * next_i();
        list[_i0].bank_bitmap->bitmapwords = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_list__i0__bank_bitmap_bitmap0 = 1;
          list[_i0].bank_bitmap->bitmap = (int *) malloc(_len_list__i0__bank_bitmap_bitmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_list__i0__bank_bitmap_bitmap0; _j0++) {
            list[_i0].bank_bitmap->bitmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct TYPE_6__ * benchRet = hibernate_page_bitmap(list,page);
          printf("%ld\n", (*benchRet).first_page);
          printf("%ld\n", (*benchRet).last_page);
          printf("%lu\n", (*benchRet).bitmapwords);
          for(int _aux = 0; _aux < _len_list0; _aux++) {
          free(list[_aux].bank_bitmap);
          }
          free(list);
        
        break;
    }
    // big-arr
    case 1:
    {
          long page = 255;
          int _len_list0 = 65025;
          struct TYPE_5__ * list = (struct TYPE_5__ *) malloc(_len_list0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0].bank_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_list__i0__bank_bitmap0 = 1;
          list[_i0].bank_bitmap = (struct TYPE_6__ *) malloc(_len_list__i0__bank_bitmap0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_list__i0__bank_bitmap0; _j0++) {
            list[_i0].bank_bitmap->first_page = ((-2 * (next_i()%2)) + 1) * next_i();
        list[_i0].bank_bitmap->last_page = ((-2 * (next_i()%2)) + 1) * next_i();
        list[_i0].bank_bitmap->bitmapwords = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_list__i0__bank_bitmap_bitmap0 = 1;
          list[_i0].bank_bitmap->bitmap = (int *) malloc(_len_list__i0__bank_bitmap_bitmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_list__i0__bank_bitmap_bitmap0; _j0++) {
            list[_i0].bank_bitmap->bitmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct TYPE_6__ * benchRet = hibernate_page_bitmap(list,page);
          printf("%ld\n", (*benchRet).first_page);
          printf("%ld\n", (*benchRet).last_page);
          printf("%lu\n", (*benchRet).bitmapwords);
          for(int _aux = 0; _aux < _len_list0; _aux++) {
          free(list[_aux].bank_bitmap);
          }
          free(list);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long page = 10;
          int _len_list0 = 100;
          struct TYPE_5__ * list = (struct TYPE_5__ *) malloc(_len_list0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
            list[_i0].bank_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_list__i0__bank_bitmap0 = 1;
          list[_i0].bank_bitmap = (struct TYPE_6__ *) malloc(_len_list__i0__bank_bitmap0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_list__i0__bank_bitmap0; _j0++) {
            list[_i0].bank_bitmap->first_page = ((-2 * (next_i()%2)) + 1) * next_i();
        list[_i0].bank_bitmap->last_page = ((-2 * (next_i()%2)) + 1) * next_i();
        list[_i0].bank_bitmap->bitmapwords = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_list__i0__bank_bitmap_bitmap0 = 1;
          list[_i0].bank_bitmap->bitmap = (int *) malloc(_len_list__i0__bank_bitmap_bitmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_list__i0__bank_bitmap_bitmap0; _j0++) {
            list[_i0].bank_bitmap->bitmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct TYPE_6__ * benchRet = hibernate_page_bitmap(list,page);
          printf("%ld\n", (*benchRet).first_page);
          printf("%ld\n", (*benchRet).last_page);
          printf("%lu\n", (*benchRet).bitmapwords);
          for(int _aux = 0; _aux < _len_list0; _aux++) {
          free(list[_aux].bank_bitmap);
          }
          free(list);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
