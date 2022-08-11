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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {size_t current; size_t nb_items; TYPE_2__* item; } ;
struct TYPE_6__ {int nb_stream_info; int current; TYPE_1__* stream_info; } ;
struct TYPE_5__ {int id; } ;
typedef  TYPE_2__ MOVFragmentIndexItem ;
typedef  TYPE_3__ MOVFragmentIndex ;

/* Variables and functions */

__attribute__((used)) static void set_frag_stream(MOVFragmentIndex *frag_index, int id)
{
    int i;
    MOVFragmentIndexItem * item;

    if (frag_index->current < 0 ||
        frag_index->current >= frag_index->nb_items)
        return;

    item = &frag_index->item[frag_index->current];
    for (i = 0; i < item->nb_stream_info; i++)
        if (item->stream_info[i].id == id) {
            item->current = i;
            return;
        }

    // id not found.  This shouldn't happen.
    item->current = -1;
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
          int _len_frag_index0 = 1;
          struct TYPE_7__ * frag_index = (struct TYPE_7__ *) malloc(_len_frag_index0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_frag_index0; _i0++) {
            frag_index[_i0].current = ((-2 * (next_i()%2)) + 1) * next_i();
        frag_index[_i0].nb_items = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_frag_index__i0__item0 = 1;
          frag_index[_i0].item = (struct TYPE_6__ *) malloc(_len_frag_index__i0__item0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_frag_index__i0__item0; _j0++) {
            frag_index[_i0].item->nb_stream_info = ((-2 * (next_i()%2)) + 1) * next_i();
        frag_index[_i0].item->current = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_frag_index__i0__item_stream_info0 = 1;
          frag_index[_i0].item->stream_info = (struct TYPE_5__ *) malloc(_len_frag_index__i0__item_stream_info0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_frag_index__i0__item_stream_info0; _j0++) {
            frag_index[_i0].item->stream_info->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          set_frag_stream(frag_index,id);
          for(int _aux = 0; _aux < _len_frag_index0; _aux++) {
          free(frag_index[_aux].item);
          }
          free(frag_index);
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          int _len_frag_index0 = 65025;
          struct TYPE_7__ * frag_index = (struct TYPE_7__ *) malloc(_len_frag_index0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_frag_index0; _i0++) {
            frag_index[_i0].current = ((-2 * (next_i()%2)) + 1) * next_i();
        frag_index[_i0].nb_items = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_frag_index__i0__item0 = 1;
          frag_index[_i0].item = (struct TYPE_6__ *) malloc(_len_frag_index__i0__item0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_frag_index__i0__item0; _j0++) {
            frag_index[_i0].item->nb_stream_info = ((-2 * (next_i()%2)) + 1) * next_i();
        frag_index[_i0].item->current = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_frag_index__i0__item_stream_info0 = 1;
          frag_index[_i0].item->stream_info = (struct TYPE_5__ *) malloc(_len_frag_index__i0__item_stream_info0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_frag_index__i0__item_stream_info0; _j0++) {
            frag_index[_i0].item->stream_info->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          set_frag_stream(frag_index,id);
          for(int _aux = 0; _aux < _len_frag_index0; _aux++) {
          free(frag_index[_aux].item);
          }
          free(frag_index);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          int _len_frag_index0 = 100;
          struct TYPE_7__ * frag_index = (struct TYPE_7__ *) malloc(_len_frag_index0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_frag_index0; _i0++) {
            frag_index[_i0].current = ((-2 * (next_i()%2)) + 1) * next_i();
        frag_index[_i0].nb_items = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_frag_index__i0__item0 = 1;
          frag_index[_i0].item = (struct TYPE_6__ *) malloc(_len_frag_index__i0__item0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_frag_index__i0__item0; _j0++) {
            frag_index[_i0].item->nb_stream_info = ((-2 * (next_i()%2)) + 1) * next_i();
        frag_index[_i0].item->current = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_frag_index__i0__item_stream_info0 = 1;
          frag_index[_i0].item->stream_info = (struct TYPE_5__ *) malloc(_len_frag_index__i0__item_stream_info0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_frag_index__i0__item_stream_info0; _j0++) {
            frag_index[_i0].item->stream_info->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          set_frag_stream(frag_index,id);
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
