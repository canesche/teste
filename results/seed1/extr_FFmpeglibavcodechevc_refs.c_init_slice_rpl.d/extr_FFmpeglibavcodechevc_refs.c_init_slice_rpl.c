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
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {size_t slice_segment_addr; } ;
struct TYPE_9__ {TYPE_1__* pps; } ;
struct TYPE_13__ {int slice_idx; TYPE_3__ sh; TYPE_2__ ps; TYPE_5__* ref; } ;
struct TYPE_12__ {int ctb_count; int /*<<< orphan*/ ** rpl_tab; int /*<<< orphan*/ * refPicList; TYPE_4__* rpl_buf; } ;
struct TYPE_11__ {int size; scalar_t__ data; } ;
struct TYPE_8__ {int* ctb_addr_rs_to_ts; } ;
typedef  int /*<<< orphan*/  RefPicListTab ;
typedef  int /*<<< orphan*/  RefPicList ;
typedef  TYPE_5__ HEVCFrame ;
typedef  TYPE_6__ HEVCContext ;

/* Variables and functions */
 int AVERROR_INVALIDDATA ; 

__attribute__((used)) static int init_slice_rpl(HEVCContext *s)
{
    HEVCFrame *frame = s->ref;
    int ctb_count    = frame->ctb_count;
    int ctb_addr_ts  = s->ps.pps->ctb_addr_rs_to_ts[s->sh.slice_segment_addr];
    int i;

    if (s->slice_idx >= frame->rpl_buf->size / sizeof(RefPicListTab))
        return AVERROR_INVALIDDATA;

    for (i = ctb_addr_ts; i < ctb_count; i++)
        frame->rpl_tab[i] = (RefPicListTab *)frame->rpl_buf->data + s->slice_idx;

    frame->refPicList = (RefPicList *)frame->rpl_tab[ctb_addr_ts];

    return 0;
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
          int _len_s0 = 1;
          struct TYPE_13__ * s = (struct TYPE_13__ *) malloc(_len_s0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].slice_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].sh.slice_segment_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__ps_pps0 = 1;
          s[_i0].ps.pps = (struct TYPE_8__ *) malloc(_len_s__i0__ps_pps0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_s__i0__ps_pps0; _j0++) {
              int _len_s__i0__ps_pps_ctb_addr_rs_to_ts0 = 1;
          s[_i0].ps.pps->ctb_addr_rs_to_ts = (int *) malloc(_len_s__i0__ps_pps_ctb_addr_rs_to_ts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__ps_pps_ctb_addr_rs_to_ts0; _j0++) {
            s[_i0].ps.pps->ctb_addr_rs_to_ts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s__i0__ref0 = 1;
          s[_i0].ref = (struct TYPE_12__ *) malloc(_len_s__i0__ref0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_s__i0__ref0; _j0++) {
            s[_i0].ref->ctb_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__ref_rpl_tab0 = 1;
          s[_i0].ref->rpl_tab = (int **) malloc(_len_s__i0__ref_rpl_tab0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__ref_rpl_tab0; _j0++) {
            int _len_s__i0__ref_rpl_tab1 = 1;
            s[_i0].ref->rpl_tab[_j0] = (int *) malloc(_len_s__i0__ref_rpl_tab1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__ref_rpl_tab1; _j1++) {
              s[_i0].ref->rpl_tab[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__ref_refPicList0 = 1;
          s[_i0].ref->refPicList = (int *) malloc(_len_s__i0__ref_refPicList0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__ref_refPicList0; _j0++) {
            s[_i0].ref->refPicList[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__ref_rpl_buf0 = 1;
          s[_i0].ref->rpl_buf = (struct TYPE_11__ *) malloc(_len_s__i0__ref_rpl_buf0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_s__i0__ref_rpl_buf0; _j0++) {
            s[_i0].ref->rpl_buf->size = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ref->rpl_buf->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = init_slice_rpl(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].ref);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_13__ * s = (struct TYPE_13__ *) malloc(_len_s0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].slice_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].sh.slice_segment_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__ps_pps0 = 1;
          s[_i0].ps.pps = (struct TYPE_8__ *) malloc(_len_s__i0__ps_pps0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_s__i0__ps_pps0; _j0++) {
              int _len_s__i0__ps_pps_ctb_addr_rs_to_ts0 = 1;
          s[_i0].ps.pps->ctb_addr_rs_to_ts = (int *) malloc(_len_s__i0__ps_pps_ctb_addr_rs_to_ts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__ps_pps_ctb_addr_rs_to_ts0; _j0++) {
            s[_i0].ps.pps->ctb_addr_rs_to_ts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s__i0__ref0 = 1;
          s[_i0].ref = (struct TYPE_12__ *) malloc(_len_s__i0__ref0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_s__i0__ref0; _j0++) {
            s[_i0].ref->ctb_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__ref_rpl_tab0 = 1;
          s[_i0].ref->rpl_tab = (int **) malloc(_len_s__i0__ref_rpl_tab0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__ref_rpl_tab0; _j0++) {
            int _len_s__i0__ref_rpl_tab1 = 1;
            s[_i0].ref->rpl_tab[_j0] = (int *) malloc(_len_s__i0__ref_rpl_tab1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__ref_rpl_tab1; _j1++) {
              s[_i0].ref->rpl_tab[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__ref_refPicList0 = 1;
          s[_i0].ref->refPicList = (int *) malloc(_len_s__i0__ref_refPicList0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__ref_refPicList0; _j0++) {
            s[_i0].ref->refPicList[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__ref_rpl_buf0 = 1;
          s[_i0].ref->rpl_buf = (struct TYPE_11__ *) malloc(_len_s__i0__ref_rpl_buf0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_s__i0__ref_rpl_buf0; _j0++) {
            s[_i0].ref->rpl_buf->size = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ref->rpl_buf->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = init_slice_rpl(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].ref);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_13__ * s = (struct TYPE_13__ *) malloc(_len_s0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].slice_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].sh.slice_segment_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__ps_pps0 = 1;
          s[_i0].ps.pps = (struct TYPE_8__ *) malloc(_len_s__i0__ps_pps0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_s__i0__ps_pps0; _j0++) {
              int _len_s__i0__ps_pps_ctb_addr_rs_to_ts0 = 1;
          s[_i0].ps.pps->ctb_addr_rs_to_ts = (int *) malloc(_len_s__i0__ps_pps_ctb_addr_rs_to_ts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__ps_pps_ctb_addr_rs_to_ts0; _j0++) {
            s[_i0].ps.pps->ctb_addr_rs_to_ts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s__i0__ref0 = 1;
          s[_i0].ref = (struct TYPE_12__ *) malloc(_len_s__i0__ref0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_s__i0__ref0; _j0++) {
            s[_i0].ref->ctb_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__ref_rpl_tab0 = 1;
          s[_i0].ref->rpl_tab = (int **) malloc(_len_s__i0__ref_rpl_tab0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__ref_rpl_tab0; _j0++) {
            int _len_s__i0__ref_rpl_tab1 = 1;
            s[_i0].ref->rpl_tab[_j0] = (int *) malloc(_len_s__i0__ref_rpl_tab1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__ref_rpl_tab1; _j1++) {
              s[_i0].ref->rpl_tab[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__ref_refPicList0 = 1;
          s[_i0].ref->refPicList = (int *) malloc(_len_s__i0__ref_refPicList0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__ref_refPicList0; _j0++) {
            s[_i0].ref->refPicList[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__ref_rpl_buf0 = 1;
          s[_i0].ref->rpl_buf = (struct TYPE_11__ *) malloc(_len_s__i0__ref_rpl_buf0*sizeof(struct TYPE_11__));
          for(int _j0 = 0; _j0 < _len_s__i0__ref_rpl_buf0; _j0++) {
            s[_i0].ref->rpl_buf->size = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ref->rpl_buf->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = init_slice_rpl(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].ref);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
