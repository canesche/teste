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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int nb_items; TYPE_2__* item; } ;
struct TYPE_7__ {int nb_stream_info; TYPE_1__* stream_info; } ;
struct TYPE_6__ {int id; } ;
typedef  TYPE_1__ MOVFragmentStreamInfo ;
typedef  TYPE_2__ MOVFragmentIndexItem ;
typedef  TYPE_3__ MOVFragmentIndex ;

/* Variables and functions */

__attribute__((used)) static MOVFragmentStreamInfo * get_frag_stream_info(
    MOVFragmentIndex *frag_index,
    int index,
    int id)
{
    int i;
    MOVFragmentIndexItem * item;

    if (index < 0 || index >= frag_index->nb_items)
        return NULL;
    item = &frag_index->item[index];
    for (i = 0; i < item->nb_stream_info; i++)
        if (item->stream_info[i].id == id)
            return &item->stream_info[i];

    // This shouldn't happen
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
          int index = 100;
          int id = 100;
          int _len_frag_index0 = 1;
          struct TYPE_8__ * frag_index = (struct TYPE_8__ *) malloc(_len_frag_index0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_frag_index0; _i0++) {
            frag_index[_i0].nb_items = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_frag_index__i0__item0 = 1;
          frag_index[_i0].item = (struct TYPE_7__ *) malloc(_len_frag_index__i0__item0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_frag_index__i0__item0; _j0++) {
            frag_index[_i0].item->nb_stream_info = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_frag_index__i0__item_stream_info0 = 1;
          frag_index[_i0].item->stream_info = (struct TYPE_6__ *) malloc(_len_frag_index__i0__item_stream_info0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_frag_index__i0__item_stream_info0; _j0++) {
            frag_index[_i0].item->stream_info->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct TYPE_6__ * benchRet = get_frag_stream_info(frag_index,index,id);
          printf("%d\n", (*benchRet).id);
          for(int _aux = 0; _aux < _len_frag_index0; _aux++) {
          free(frag_index[_aux].item);
          }
          free(frag_index);
        
        break;
    }
    // big-arr
    case 1:
    {
          int index = 255;
          int id = 255;
          int _len_frag_index0 = 65025;
          struct TYPE_8__ * frag_index = (struct TYPE_8__ *) malloc(_len_frag_index0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_frag_index0; _i0++) {
            frag_index[_i0].nb_items = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_frag_index__i0__item0 = 1;
          frag_index[_i0].item = (struct TYPE_7__ *) malloc(_len_frag_index__i0__item0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_frag_index__i0__item0; _j0++) {
            frag_index[_i0].item->nb_stream_info = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_frag_index__i0__item_stream_info0 = 1;
          frag_index[_i0].item->stream_info = (struct TYPE_6__ *) malloc(_len_frag_index__i0__item_stream_info0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_frag_index__i0__item_stream_info0; _j0++) {
            frag_index[_i0].item->stream_info->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct TYPE_6__ * benchRet = get_frag_stream_info(frag_index,index,id);
          printf("%d\n", (*benchRet).id);
          for(int _aux = 0; _aux < _len_frag_index0; _aux++) {
          free(frag_index[_aux].item);
          }
          free(frag_index);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int index = 10;
          int id = 10;
          int _len_frag_index0 = 100;
          struct TYPE_8__ * frag_index = (struct TYPE_8__ *) malloc(_len_frag_index0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_frag_index0; _i0++) {
            frag_index[_i0].nb_items = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_frag_index__i0__item0 = 1;
          frag_index[_i0].item = (struct TYPE_7__ *) malloc(_len_frag_index__i0__item0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_frag_index__i0__item0; _j0++) {
            frag_index[_i0].item->nb_stream_info = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_frag_index__i0__item_stream_info0 = 1;
          frag_index[_i0].item->stream_info = (struct TYPE_6__ *) malloc(_len_frag_index__i0__item_stream_info0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_frag_index__i0__item_stream_info0; _j0++) {
            frag_index[_i0].item->stream_info->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct TYPE_6__ * benchRet = get_frag_stream_info(frag_index,index,id);
          printf("%d\n", (*benchRet).id);
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
