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
struct TYPE_8__ {TYPE_3__* blli; } ;
struct atm_vcc {TYPE_4__ sap; } ;
struct TYPE_5__ {scalar_t__* snap; } ;
struct TYPE_6__ {TYPE_1__ tr9577; } ;
struct TYPE_7__ {TYPE_2__ l3; } ;

/* Variables and functions */
 scalar_t__ LEC_DATA_DIRECT_8023 ; 
 scalar_t__ LEC_DATA_DIRECT_8025 ; 

__attribute__((used)) static int lec_is_data_direct(struct atm_vcc *vcc)
{
	return ((vcc->sap.blli[0].l3.tr9577.snap[4] == LEC_DATA_DIRECT_8023) ||
		(vcc->sap.blli[0].l3.tr9577.snap[4] == LEC_DATA_DIRECT_8025));
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
          int _len_vcc0 = 1;
          struct atm_vcc * vcc = (struct atm_vcc *) malloc(_len_vcc0*sizeof(struct atm_vcc));
          for(int _i0 = 0; _i0 < _len_vcc0; _i0++) {
              int _len_vcc__i0__sap_blli0 = 1;
          vcc[_i0].sap.blli = (struct TYPE_7__ *) malloc(_len_vcc__i0__sap_blli0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_vcc__i0__sap_blli0; _j0++) {
              int _len_vcc__i0__sap_blli_l3_tr9577_snap0 = 1;
          vcc[_i0].sap.blli->l3.tr9577.snap = (long *) malloc(_len_vcc__i0__sap_blli_l3_tr9577_snap0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_vcc__i0__sap_blli_l3_tr9577_snap0; _j0++) {
            vcc[_i0].sap.blli->l3.tr9577.snap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = lec_is_data_direct(vcc);
          printf("%d\n", benchRet); 
          free(vcc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vcc0 = 65025;
          struct atm_vcc * vcc = (struct atm_vcc *) malloc(_len_vcc0*sizeof(struct atm_vcc));
          for(int _i0 = 0; _i0 < _len_vcc0; _i0++) {
              int _len_vcc__i0__sap_blli0 = 1;
          vcc[_i0].sap.blli = (struct TYPE_7__ *) malloc(_len_vcc__i0__sap_blli0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_vcc__i0__sap_blli0; _j0++) {
              int _len_vcc__i0__sap_blli_l3_tr9577_snap0 = 1;
          vcc[_i0].sap.blli->l3.tr9577.snap = (long *) malloc(_len_vcc__i0__sap_blli_l3_tr9577_snap0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_vcc__i0__sap_blli_l3_tr9577_snap0; _j0++) {
            vcc[_i0].sap.blli->l3.tr9577.snap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = lec_is_data_direct(vcc);
          printf("%d\n", benchRet); 
          free(vcc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vcc0 = 100;
          struct atm_vcc * vcc = (struct atm_vcc *) malloc(_len_vcc0*sizeof(struct atm_vcc));
          for(int _i0 = 0; _i0 < _len_vcc0; _i0++) {
              int _len_vcc__i0__sap_blli0 = 1;
          vcc[_i0].sap.blli = (struct TYPE_7__ *) malloc(_len_vcc__i0__sap_blli0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_vcc__i0__sap_blli0; _j0++) {
              int _len_vcc__i0__sap_blli_l3_tr9577_snap0 = 1;
          vcc[_i0].sap.blli->l3.tr9577.snap = (long *) malloc(_len_vcc__i0__sap_blli_l3_tr9577_snap0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_vcc__i0__sap_blli_l3_tr9577_snap0; _j0++) {
            vcc[_i0].sap.blli->l3.tr9577.snap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = lec_is_data_direct(vcc);
          printf("%d\n", benchRet); 
          free(vcc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
