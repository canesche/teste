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
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_11__ {int nr_of_srpts; TYPE_3__* title; } ;
typedef  TYPE_4__ tt_srpt_t ;
struct TYPE_12__ {TYPE_2__* vts_ptt_srpt; } ;
typedef  TYPE_5__ ifo_handle_t ;
struct TYPE_10__ {int vts_ttn; } ;
struct TYPE_9__ {int nr_of_srpts; TYPE_1__* title; } ;
struct TYPE_8__ {int nr_of_ptts; } ;

/* Variables and functions */

__attribute__((used)) static int get_num_chapter(ifo_handle_t *vts_file, tt_srpt_t *tt_srpt, int title_no)
{
    if(!vts_file || !tt_srpt)
       return 0;

    if(title_no < 0 || title_no >= tt_srpt->nr_of_srpts)
       return 0;

    // map global title to vts title
    title_no = tt_srpt->title[title_no].vts_ttn - 1;

    if(title_no < 0 || title_no >= vts_file->vts_ptt_srpt->nr_of_srpts)
       return 0;

    return vts_file->vts_ptt_srpt->title[title_no].nr_of_ptts;
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
          int title_no = 100;
          int _len_vts_file0 = 1;
          struct TYPE_12__ * vts_file = (struct TYPE_12__ *) malloc(_len_vts_file0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_vts_file0; _i0++) {
              int _len_vts_file__i0__vts_ptt_srpt0 = 1;
          vts_file[_i0].vts_ptt_srpt = (struct TYPE_9__ *) malloc(_len_vts_file__i0__vts_ptt_srpt0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_vts_file__i0__vts_ptt_srpt0; _j0++) {
            vts_file[_i0].vts_ptt_srpt->nr_of_srpts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vts_file__i0__vts_ptt_srpt_title0 = 1;
          vts_file[_i0].vts_ptt_srpt->title = (struct TYPE_8__ *) malloc(_len_vts_file__i0__vts_ptt_srpt_title0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_vts_file__i0__vts_ptt_srpt_title0; _j0++) {
            vts_file[_i0].vts_ptt_srpt->title->nr_of_ptts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_tt_srpt0 = 1;
          struct TYPE_11__ * tt_srpt = (struct TYPE_11__ *) malloc(_len_tt_srpt0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_tt_srpt0; _i0++) {
            tt_srpt[_i0].nr_of_srpts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tt_srpt__i0__title0 = 1;
          tt_srpt[_i0].title = (struct TYPE_10__ *) malloc(_len_tt_srpt__i0__title0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_tt_srpt__i0__title0; _j0++) {
            tt_srpt[_i0].title->vts_ttn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_num_chapter(vts_file,tt_srpt,title_no);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vts_file0; _aux++) {
          free(vts_file[_aux].vts_ptt_srpt);
          }
          free(vts_file);
          for(int _aux = 0; _aux < _len_tt_srpt0; _aux++) {
          free(tt_srpt[_aux].title);
          }
          free(tt_srpt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int title_no = 255;
          int _len_vts_file0 = 65025;
          struct TYPE_12__ * vts_file = (struct TYPE_12__ *) malloc(_len_vts_file0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_vts_file0; _i0++) {
              int _len_vts_file__i0__vts_ptt_srpt0 = 1;
          vts_file[_i0].vts_ptt_srpt = (struct TYPE_9__ *) malloc(_len_vts_file__i0__vts_ptt_srpt0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_vts_file__i0__vts_ptt_srpt0; _j0++) {
            vts_file[_i0].vts_ptt_srpt->nr_of_srpts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vts_file__i0__vts_ptt_srpt_title0 = 1;
          vts_file[_i0].vts_ptt_srpt->title = (struct TYPE_8__ *) malloc(_len_vts_file__i0__vts_ptt_srpt_title0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_vts_file__i0__vts_ptt_srpt_title0; _j0++) {
            vts_file[_i0].vts_ptt_srpt->title->nr_of_ptts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_tt_srpt0 = 65025;
          struct TYPE_11__ * tt_srpt = (struct TYPE_11__ *) malloc(_len_tt_srpt0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_tt_srpt0; _i0++) {
            tt_srpt[_i0].nr_of_srpts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tt_srpt__i0__title0 = 1;
          tt_srpt[_i0].title = (struct TYPE_10__ *) malloc(_len_tt_srpt__i0__title0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_tt_srpt__i0__title0; _j0++) {
            tt_srpt[_i0].title->vts_ttn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_num_chapter(vts_file,tt_srpt,title_no);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vts_file0; _aux++) {
          free(vts_file[_aux].vts_ptt_srpt);
          }
          free(vts_file);
          for(int _aux = 0; _aux < _len_tt_srpt0; _aux++) {
          free(tt_srpt[_aux].title);
          }
          free(tt_srpt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int title_no = 10;
          int _len_vts_file0 = 100;
          struct TYPE_12__ * vts_file = (struct TYPE_12__ *) malloc(_len_vts_file0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_vts_file0; _i0++) {
              int _len_vts_file__i0__vts_ptt_srpt0 = 1;
          vts_file[_i0].vts_ptt_srpt = (struct TYPE_9__ *) malloc(_len_vts_file__i0__vts_ptt_srpt0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_vts_file__i0__vts_ptt_srpt0; _j0++) {
            vts_file[_i0].vts_ptt_srpt->nr_of_srpts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vts_file__i0__vts_ptt_srpt_title0 = 1;
          vts_file[_i0].vts_ptt_srpt->title = (struct TYPE_8__ *) malloc(_len_vts_file__i0__vts_ptt_srpt_title0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_vts_file__i0__vts_ptt_srpt_title0; _j0++) {
            vts_file[_i0].vts_ptt_srpt->title->nr_of_ptts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_tt_srpt0 = 100;
          struct TYPE_11__ * tt_srpt = (struct TYPE_11__ *) malloc(_len_tt_srpt0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_tt_srpt0; _i0++) {
            tt_srpt[_i0].nr_of_srpts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tt_srpt__i0__title0 = 1;
          tt_srpt[_i0].title = (struct TYPE_10__ *) malloc(_len_tt_srpt__i0__title0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_tt_srpt__i0__title0; _j0++) {
            tt_srpt[_i0].title->vts_ttn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_num_chapter(vts_file,tt_srpt,title_no);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vts_file0; _aux++) {
          free(vts_file[_aux].vts_ptt_srpt);
          }
          free(vts_file);
          for(int _aux = 0; _aux < _len_tt_srpt0; _aux++) {
          free(tt_srpt[_aux].title);
          }
          free(tt_srpt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
