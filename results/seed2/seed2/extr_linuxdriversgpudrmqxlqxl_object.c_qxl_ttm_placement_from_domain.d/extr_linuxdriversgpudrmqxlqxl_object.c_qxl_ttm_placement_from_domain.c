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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ num_busy_placement; scalar_t__ num_placement; TYPE_2__* busy_placement; TYPE_2__* placement; } ;
struct qxl_bo {TYPE_2__* placements; TYPE_1__ placement; } ;
struct TYPE_4__ {scalar_t__ lpfn; scalar_t__ fpfn; scalar_t__ flags; } ;

/* Variables and functions */
 scalar_t__ QXL_GEM_DOMAIN_CPU ; 
 scalar_t__ QXL_GEM_DOMAIN_SURFACE ; 
 scalar_t__ QXL_GEM_DOMAIN_VRAM ; 
 scalar_t__ TTM_PL_FLAG_CACHED ; 
 scalar_t__ TTM_PL_FLAG_NO_EVICT ; 
 scalar_t__ TTM_PL_FLAG_PRIV ; 
 scalar_t__ TTM_PL_FLAG_SYSTEM ; 
 scalar_t__ TTM_PL_FLAG_VRAM ; 
 scalar_t__ TTM_PL_MASK_CACHING ; 

void qxl_ttm_placement_from_domain(struct qxl_bo *qbo, u32 domain, bool pinned)
{
	u32 c = 0;
	u32 pflag = pinned ? TTM_PL_FLAG_NO_EVICT : 0;
	unsigned i;

	qbo->placement.placement = qbo->placements;
	qbo->placement.busy_placement = qbo->placements;
	if (domain == QXL_GEM_DOMAIN_VRAM)
		qbo->placements[c++].flags = TTM_PL_FLAG_CACHED | TTM_PL_FLAG_VRAM | pflag;
	if (domain == QXL_GEM_DOMAIN_SURFACE)
		qbo->placements[c++].flags = TTM_PL_FLAG_CACHED | TTM_PL_FLAG_PRIV | pflag;
	if (domain == QXL_GEM_DOMAIN_CPU)
		qbo->placements[c++].flags = TTM_PL_MASK_CACHING | TTM_PL_FLAG_SYSTEM | pflag;
	if (!c)
		qbo->placements[c++].flags = TTM_PL_MASK_CACHING | TTM_PL_FLAG_SYSTEM;
	qbo->placement.num_placement = c;
	qbo->placement.num_busy_placement = c;
	for (i = 0; i < c; ++i) {
		qbo->placements[i].fpfn = 0;
		qbo->placements[i].lpfn = 0;
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
          long domain = 100;
          int pinned = 100;
          int _len_qbo0 = 1;
          struct qxl_bo * qbo = (struct qxl_bo *) malloc(_len_qbo0*sizeof(struct qxl_bo));
          for(int _i0 = 0; _i0 < _len_qbo0; _i0++) {
              int _len_qbo__i0__placements0 = 1;
          qbo[_i0].placements = (struct TYPE_4__ *) malloc(_len_qbo__i0__placements0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_qbo__i0__placements0; _j0++) {
            qbo[_i0].placements->lpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        qbo[_i0].placements->fpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        qbo[_i0].placements->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        qbo[_i0].placement.num_busy_placement = ((-2 * (next_i()%2)) + 1) * next_i();
        qbo[_i0].placement.num_placement = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qbo__i0__placement_busy_placement0 = 1;
          qbo[_i0].placement.busy_placement = (struct TYPE_4__ *) malloc(_len_qbo__i0__placement_busy_placement0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_qbo__i0__placement_busy_placement0; _j0++) {
            qbo[_i0].placement.busy_placement->lpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        qbo[_i0].placement.busy_placement->fpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        qbo[_i0].placement.busy_placement->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qbo__i0__placement_placement0 = 1;
          qbo[_i0].placement.placement = (struct TYPE_4__ *) malloc(_len_qbo__i0__placement_placement0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_qbo__i0__placement_placement0; _j0++) {
            qbo[_i0].placement.placement->lpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        qbo[_i0].placement.placement->fpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        qbo[_i0].placement.placement->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qxl_ttm_placement_from_domain(qbo,domain,pinned);
          for(int _aux = 0; _aux < _len_qbo0; _aux++) {
          free(qbo[_aux].placements);
          }
          free(qbo);
        
        break;
    }
    // big-arr
    case 1:
    {
          long domain = 255;
          int pinned = 255;
          int _len_qbo0 = 65025;
          struct qxl_bo * qbo = (struct qxl_bo *) malloc(_len_qbo0*sizeof(struct qxl_bo));
          for(int _i0 = 0; _i0 < _len_qbo0; _i0++) {
              int _len_qbo__i0__placements0 = 1;
          qbo[_i0].placements = (struct TYPE_4__ *) malloc(_len_qbo__i0__placements0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_qbo__i0__placements0; _j0++) {
            qbo[_i0].placements->lpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        qbo[_i0].placements->fpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        qbo[_i0].placements->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        qbo[_i0].placement.num_busy_placement = ((-2 * (next_i()%2)) + 1) * next_i();
        qbo[_i0].placement.num_placement = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qbo__i0__placement_busy_placement0 = 1;
          qbo[_i0].placement.busy_placement = (struct TYPE_4__ *) malloc(_len_qbo__i0__placement_busy_placement0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_qbo__i0__placement_busy_placement0; _j0++) {
            qbo[_i0].placement.busy_placement->lpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        qbo[_i0].placement.busy_placement->fpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        qbo[_i0].placement.busy_placement->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qbo__i0__placement_placement0 = 1;
          qbo[_i0].placement.placement = (struct TYPE_4__ *) malloc(_len_qbo__i0__placement_placement0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_qbo__i0__placement_placement0; _j0++) {
            qbo[_i0].placement.placement->lpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        qbo[_i0].placement.placement->fpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        qbo[_i0].placement.placement->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qxl_ttm_placement_from_domain(qbo,domain,pinned);
          for(int _aux = 0; _aux < _len_qbo0; _aux++) {
          free(qbo[_aux].placements);
          }
          free(qbo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long domain = 10;
          int pinned = 10;
          int _len_qbo0 = 100;
          struct qxl_bo * qbo = (struct qxl_bo *) malloc(_len_qbo0*sizeof(struct qxl_bo));
          for(int _i0 = 0; _i0 < _len_qbo0; _i0++) {
              int _len_qbo__i0__placements0 = 1;
          qbo[_i0].placements = (struct TYPE_4__ *) malloc(_len_qbo__i0__placements0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_qbo__i0__placements0; _j0++) {
            qbo[_i0].placements->lpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        qbo[_i0].placements->fpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        qbo[_i0].placements->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        qbo[_i0].placement.num_busy_placement = ((-2 * (next_i()%2)) + 1) * next_i();
        qbo[_i0].placement.num_placement = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_qbo__i0__placement_busy_placement0 = 1;
          qbo[_i0].placement.busy_placement = (struct TYPE_4__ *) malloc(_len_qbo__i0__placement_busy_placement0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_qbo__i0__placement_busy_placement0; _j0++) {
            qbo[_i0].placement.busy_placement->lpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        qbo[_i0].placement.busy_placement->fpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        qbo[_i0].placement.busy_placement->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qbo__i0__placement_placement0 = 1;
          qbo[_i0].placement.placement = (struct TYPE_4__ *) malloc(_len_qbo__i0__placement_placement0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_qbo__i0__placement_placement0; _j0++) {
            qbo[_i0].placement.placement->lpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        qbo[_i0].placement.placement->fpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        qbo[_i0].placement.placement->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qxl_ttm_placement_from_domain(qbo,domain,pinned);
          for(int _aux = 0; _aux < _len_qbo0; _aux++) {
          free(qbo[_aux].placements);
          }
          free(qbo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
