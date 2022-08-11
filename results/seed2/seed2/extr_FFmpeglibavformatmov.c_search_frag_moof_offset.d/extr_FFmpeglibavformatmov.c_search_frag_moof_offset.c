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
typedef  scalar_t__ int64_t ;
struct TYPE_5__ {int nb_items; TYPE_1__* item; } ;
struct TYPE_4__ {scalar_t__ moof_offset; } ;
typedef  TYPE_2__ MOVFragmentIndex ;

/* Variables and functions */

__attribute__((used)) static int search_frag_moof_offset(MOVFragmentIndex *frag_index, int64_t offset)
{
    int a, b, m;
    int64_t moof_offset;

    // Optimize for appending new entries
    if (!frag_index->nb_items ||
        frag_index->item[frag_index->nb_items - 1].moof_offset < offset)
        return frag_index->nb_items;

    a = -1;
    b = frag_index->nb_items;

    while (b - a > 1) {
        m = (a + b) >> 1;
        moof_offset = frag_index->item[m].moof_offset;
        if (moof_offset >= offset)
            b = m;
        if (moof_offset <= offset)
            a = m;
    }
    return b;
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
          int _len_frag_index0 = 1;
          struct TYPE_5__ * frag_index = (struct TYPE_5__ *) malloc(_len_frag_index0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_frag_index0; _i0++) {
            frag_index[_i0].nb_items = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_frag_index__i0__item0 = 1;
          frag_index[_i0].item = (struct TYPE_4__ *) malloc(_len_frag_index__i0__item0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_frag_index__i0__item0; _j0++) {
            frag_index[_i0].item->moof_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = search_frag_moof_offset(frag_index,offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_frag_index0; _aux++) {
          free(frag_index[_aux].item);
          }
          free(frag_index);
        
        break;
    }
    // big-arr
    case 1:
    {
          long offset = 255;
          int _len_frag_index0 = 65025;
          struct TYPE_5__ * frag_index = (struct TYPE_5__ *) malloc(_len_frag_index0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_frag_index0; _i0++) {
            frag_index[_i0].nb_items = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_frag_index__i0__item0 = 1;
          frag_index[_i0].item = (struct TYPE_4__ *) malloc(_len_frag_index__i0__item0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_frag_index__i0__item0; _j0++) {
            frag_index[_i0].item->moof_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = search_frag_moof_offset(frag_index,offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_frag_index0; _aux++) {
          free(frag_index[_aux].item);
          }
          free(frag_index);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long offset = 10;
          int _len_frag_index0 = 100;
          struct TYPE_5__ * frag_index = (struct TYPE_5__ *) malloc(_len_frag_index0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_frag_index0; _i0++) {
            frag_index[_i0].nb_items = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_frag_index__i0__item0 = 1;
          frag_index[_i0].item = (struct TYPE_4__ *) malloc(_len_frag_index__i0__item0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_frag_index__i0__item0; _j0++) {
            frag_index[_i0].item->moof_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = search_frag_moof_offset(frag_index,offset);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_frag_index0; _aux++) {
          free(frag_index[_aux].item);
          }
          free(frag_index);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
