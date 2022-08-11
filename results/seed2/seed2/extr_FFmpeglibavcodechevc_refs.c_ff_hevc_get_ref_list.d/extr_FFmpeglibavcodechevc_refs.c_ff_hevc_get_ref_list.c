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
struct TYPE_9__ {TYPE_1__* pps; TYPE_3__* sps; } ;
struct TYPE_12__ {TYPE_2__ ps; } ;
struct TYPE_11__ {scalar_t__* rpl_tab; } ;
struct TYPE_10__ {int log2_ctb_size; int ctb_width; } ;
struct TYPE_8__ {int* ctb_addr_rs_to_ts; } ;
typedef  int /*<<< orphan*/  RefPicList ;
typedef  TYPE_4__ HEVCFrame ;
typedef  TYPE_5__ HEVCContext ;

/* Variables and functions */

RefPicList *ff_hevc_get_ref_list(HEVCContext *s, HEVCFrame *ref, int x0, int y0)
{
    int x_cb         = x0 >> s->ps.sps->log2_ctb_size;
    int y_cb         = y0 >> s->ps.sps->log2_ctb_size;
    int pic_width_cb = s->ps.sps->ctb_width;
    int ctb_addr_ts  = s->ps.pps->ctb_addr_rs_to_ts[y_cb * pic_width_cb + x_cb];
    return (RefPicList *)ref->rpl_tab[ctb_addr_ts];
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
          int x0 = 100;
          int y0 = 100;
          int _len_s0 = 1;
          struct TYPE_12__ * s = (struct TYPE_12__ *) malloc(_len_s0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__ps_pps0 = 1;
          s[_i0].ps.pps = (struct TYPE_8__ *) malloc(_len_s__i0__ps_pps0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_s__i0__ps_pps0; _j0++) {
              int _len_s__i0__ps_pps_ctb_addr_rs_to_ts0 = 1;
          s[_i0].ps.pps->ctb_addr_rs_to_ts = (int *) malloc(_len_s__i0__ps_pps_ctb_addr_rs_to_ts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__ps_pps_ctb_addr_rs_to_ts0; _j0++) {
            s[_i0].ps.pps->ctb_addr_rs_to_ts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s__i0__ps_sps0 = 1;
          s[_i0].ps.sps = (struct TYPE_10__ *) malloc(_len_s__i0__ps_sps0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_s__i0__ps_sps0; _j0++) {
            s[_i0].ps.sps->log2_ctb_size = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ps.sps->ctb_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ref0 = 1;
          struct TYPE_11__ * ref = (struct TYPE_11__ *) malloc(_len_ref0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_ref0; _i0++) {
              int _len_ref__i0__rpl_tab0 = 1;
          ref[_i0].rpl_tab = (long *) malloc(_len_ref__i0__rpl_tab0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ref__i0__rpl_tab0; _j0++) {
            ref[_i0].rpl_tab[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = ff_hevc_get_ref_list(s,ref,x0,y0);
          printf("%d\n", (*benchRet)); 
          free(s);
          for(int _aux = 0; _aux < _len_ref0; _aux++) {
          free(ref[_aux].rpl_tab);
          }
          free(ref);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x0 = 255;
          int y0 = 255;
          int _len_s0 = 65025;
          struct TYPE_12__ * s = (struct TYPE_12__ *) malloc(_len_s0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__ps_pps0 = 1;
          s[_i0].ps.pps = (struct TYPE_8__ *) malloc(_len_s__i0__ps_pps0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_s__i0__ps_pps0; _j0++) {
              int _len_s__i0__ps_pps_ctb_addr_rs_to_ts0 = 1;
          s[_i0].ps.pps->ctb_addr_rs_to_ts = (int *) malloc(_len_s__i0__ps_pps_ctb_addr_rs_to_ts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__ps_pps_ctb_addr_rs_to_ts0; _j0++) {
            s[_i0].ps.pps->ctb_addr_rs_to_ts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s__i0__ps_sps0 = 1;
          s[_i0].ps.sps = (struct TYPE_10__ *) malloc(_len_s__i0__ps_sps0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_s__i0__ps_sps0; _j0++) {
            s[_i0].ps.sps->log2_ctb_size = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ps.sps->ctb_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ref0 = 65025;
          struct TYPE_11__ * ref = (struct TYPE_11__ *) malloc(_len_ref0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_ref0; _i0++) {
              int _len_ref__i0__rpl_tab0 = 1;
          ref[_i0].rpl_tab = (long *) malloc(_len_ref__i0__rpl_tab0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ref__i0__rpl_tab0; _j0++) {
            ref[_i0].rpl_tab[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = ff_hevc_get_ref_list(s,ref,x0,y0);
          printf("%d\n", (*benchRet)); 
          free(s);
          for(int _aux = 0; _aux < _len_ref0; _aux++) {
          free(ref[_aux].rpl_tab);
          }
          free(ref);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x0 = 10;
          int y0 = 10;
          int _len_s0 = 100;
          struct TYPE_12__ * s = (struct TYPE_12__ *) malloc(_len_s0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__ps_pps0 = 1;
          s[_i0].ps.pps = (struct TYPE_8__ *) malloc(_len_s__i0__ps_pps0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_s__i0__ps_pps0; _j0++) {
              int _len_s__i0__ps_pps_ctb_addr_rs_to_ts0 = 1;
          s[_i0].ps.pps->ctb_addr_rs_to_ts = (int *) malloc(_len_s__i0__ps_pps_ctb_addr_rs_to_ts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__ps_pps_ctb_addr_rs_to_ts0; _j0++) {
            s[_i0].ps.pps->ctb_addr_rs_to_ts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s__i0__ps_sps0 = 1;
          s[_i0].ps.sps = (struct TYPE_10__ *) malloc(_len_s__i0__ps_sps0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_s__i0__ps_sps0; _j0++) {
            s[_i0].ps.sps->log2_ctb_size = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ps.sps->ctb_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ref0 = 100;
          struct TYPE_11__ * ref = (struct TYPE_11__ *) malloc(_len_ref0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_ref0; _i0++) {
              int _len_ref__i0__rpl_tab0 = 1;
          ref[_i0].rpl_tab = (long *) malloc(_len_ref__i0__rpl_tab0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ref__i0__rpl_tab0; _j0++) {
            ref[_i0].rpl_tab[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = ff_hevc_get_ref_list(s,ref,x0,y0);
          printf("%d\n", (*benchRet)); 
          free(s);
          for(int _aux = 0; _aux < _len_ref0; _aux++) {
          free(ref[_aux].rpl_tab);
          }
          free(ref);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
