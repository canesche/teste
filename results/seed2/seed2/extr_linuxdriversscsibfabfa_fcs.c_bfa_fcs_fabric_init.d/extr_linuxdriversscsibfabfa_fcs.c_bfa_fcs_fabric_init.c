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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct bfa_lport_cfg_s {int /*<<< orphan*/  pwwn; int /*<<< orphan*/  nwwn; int /*<<< orphan*/  roles; } ;
struct TYPE_6__ {struct bfa_lport_cfg_s port_cfg; } ;
struct bfa_fcs_fabric_s {TYPE_5__* fcs; TYPE_1__ bport; } ;
struct TYPE_10__ {TYPE_4__* bfa; } ;
struct TYPE_8__ {TYPE_2__* attr; } ;
struct TYPE_9__ {TYPE_3__ ioc; } ;
struct TYPE_7__ {int /*<<< orphan*/  pwwn; int /*<<< orphan*/  nwwn; } ;

/* Variables and functions */
 int /*<<< orphan*/  BFA_LPORT_ROLE_FCP_IM ; 

__attribute__((used)) static void
bfa_fcs_fabric_init(struct bfa_fcs_fabric_s *fabric)
{
	struct bfa_lport_cfg_s *port_cfg = &fabric->bport.port_cfg;

	port_cfg->roles = BFA_LPORT_ROLE_FCP_IM;
	port_cfg->nwwn = fabric->fcs->bfa->ioc.attr->nwwn;
	port_cfg->pwwn = fabric->fcs->bfa->ioc.attr->pwwn;
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
          int _len_fabric0 = 1;
          struct bfa_fcs_fabric_s * fabric = (struct bfa_fcs_fabric_s *) malloc(_len_fabric0*sizeof(struct bfa_fcs_fabric_s));
          for(int _i0 = 0; _i0 < _len_fabric0; _i0++) {
              int _len_fabric__i0__fcs0 = 1;
          fabric[_i0].fcs = (struct TYPE_10__ *) malloc(_len_fabric__i0__fcs0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_fabric__i0__fcs0; _j0++) {
              int _len_fabric__i0__fcs_bfa0 = 1;
          fabric[_i0].fcs->bfa = (struct TYPE_9__ *) malloc(_len_fabric__i0__fcs_bfa0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_fabric__i0__fcs_bfa0; _j0++) {
              int _len_fabric__i0__fcs_bfa_ioc_attr0 = 1;
          fabric[_i0].fcs->bfa->ioc.attr = (struct TYPE_7__ *) malloc(_len_fabric__i0__fcs_bfa_ioc_attr0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_fabric__i0__fcs_bfa_ioc_attr0; _j0++) {
            fabric[_i0].fcs->bfa->ioc.attr->pwwn = ((-2 * (next_i()%2)) + 1) * next_i();
        fabric[_i0].fcs->bfa->ioc.attr->nwwn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
        fabric[_i0].bport.port_cfg.pwwn = ((-2 * (next_i()%2)) + 1) * next_i();
        fabric[_i0].bport.port_cfg.nwwn = ((-2 * (next_i()%2)) + 1) * next_i();
        fabric[_i0].bport.port_cfg.roles = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bfa_fcs_fabric_init(fabric);
          for(int _aux = 0; _aux < _len_fabric0; _aux++) {
          free(fabric[_aux].fcs);
          }
          free(fabric);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fabric0 = 65025;
          struct bfa_fcs_fabric_s * fabric = (struct bfa_fcs_fabric_s *) malloc(_len_fabric0*sizeof(struct bfa_fcs_fabric_s));
          for(int _i0 = 0; _i0 < _len_fabric0; _i0++) {
              int _len_fabric__i0__fcs0 = 1;
          fabric[_i0].fcs = (struct TYPE_10__ *) malloc(_len_fabric__i0__fcs0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_fabric__i0__fcs0; _j0++) {
              int _len_fabric__i0__fcs_bfa0 = 1;
          fabric[_i0].fcs->bfa = (struct TYPE_9__ *) malloc(_len_fabric__i0__fcs_bfa0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_fabric__i0__fcs_bfa0; _j0++) {
              int _len_fabric__i0__fcs_bfa_ioc_attr0 = 1;
          fabric[_i0].fcs->bfa->ioc.attr = (struct TYPE_7__ *) malloc(_len_fabric__i0__fcs_bfa_ioc_attr0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_fabric__i0__fcs_bfa_ioc_attr0; _j0++) {
            fabric[_i0].fcs->bfa->ioc.attr->pwwn = ((-2 * (next_i()%2)) + 1) * next_i();
        fabric[_i0].fcs->bfa->ioc.attr->nwwn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
        fabric[_i0].bport.port_cfg.pwwn = ((-2 * (next_i()%2)) + 1) * next_i();
        fabric[_i0].bport.port_cfg.nwwn = ((-2 * (next_i()%2)) + 1) * next_i();
        fabric[_i0].bport.port_cfg.roles = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bfa_fcs_fabric_init(fabric);
          for(int _aux = 0; _aux < _len_fabric0; _aux++) {
          free(fabric[_aux].fcs);
          }
          free(fabric);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fabric0 = 100;
          struct bfa_fcs_fabric_s * fabric = (struct bfa_fcs_fabric_s *) malloc(_len_fabric0*sizeof(struct bfa_fcs_fabric_s));
          for(int _i0 = 0; _i0 < _len_fabric0; _i0++) {
              int _len_fabric__i0__fcs0 = 1;
          fabric[_i0].fcs = (struct TYPE_10__ *) malloc(_len_fabric__i0__fcs0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_fabric__i0__fcs0; _j0++) {
              int _len_fabric__i0__fcs_bfa0 = 1;
          fabric[_i0].fcs->bfa = (struct TYPE_9__ *) malloc(_len_fabric__i0__fcs_bfa0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_fabric__i0__fcs_bfa0; _j0++) {
              int _len_fabric__i0__fcs_bfa_ioc_attr0 = 1;
          fabric[_i0].fcs->bfa->ioc.attr = (struct TYPE_7__ *) malloc(_len_fabric__i0__fcs_bfa_ioc_attr0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_fabric__i0__fcs_bfa_ioc_attr0; _j0++) {
            fabric[_i0].fcs->bfa->ioc.attr->pwwn = ((-2 * (next_i()%2)) + 1) * next_i();
        fabric[_i0].fcs->bfa->ioc.attr->nwwn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
        fabric[_i0].bport.port_cfg.pwwn = ((-2 * (next_i()%2)) + 1) * next_i();
        fabric[_i0].bport.port_cfg.nwwn = ((-2 * (next_i()%2)) + 1) * next_i();
        fabric[_i0].bport.port_cfg.roles = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bfa_fcs_fabric_init(fabric);
          for(int _aux = 0; _aux < _len_fabric0; _aux++) {
          free(fabric[_aux].fcs);
          }
          free(fabric);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
