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
typedef  int /*<<< orphan*/  u16 ;
struct ice_vsi {int type; int /*<<< orphan*/  vsi_num; TYPE_2__* port_info; TYPE_1__* back; } ;
struct ice_tlan_ctx {int base; void* legacy_int; int /*<<< orphan*/  tso_qnum; void* tso_ena; int /*<<< orphan*/  src_vsi; int /*<<< orphan*/  vmvf_type; int /*<<< orphan*/  pf_num; int /*<<< orphan*/  qlen; int /*<<< orphan*/  port_num; } ;
struct ice_ring {int dma; int /*<<< orphan*/  count; struct ice_vsi* vsi; } ;
struct ice_hw {int /*<<< orphan*/  pf_id; } ;
struct TYPE_4__ {int /*<<< orphan*/  lport; } ;
struct TYPE_3__ {struct ice_hw hw; } ;

/* Variables and functions */
 int ICE_TLAN_CTX_BASE_S ; 
 int /*<<< orphan*/  ICE_TLAN_CTX_VMVF_TYPE_PF ; 
 void* ICE_TX_LEGACY ; 
#define  ICE_VSI_PF 128 

__attribute__((used)) static void
ice_setup_tx_ctx(struct ice_ring *ring, struct ice_tlan_ctx *tlan_ctx, u16 pf_q)
{
	struct ice_vsi *vsi = ring->vsi;
	struct ice_hw *hw = &vsi->back->hw;

	tlan_ctx->base = ring->dma >> ICE_TLAN_CTX_BASE_S;

	tlan_ctx->port_num = vsi->port_info->lport;

	/* Transmit Queue Length */
	tlan_ctx->qlen = ring->count;

	/* PF number */
	tlan_ctx->pf_num = hw->pf_id;

	/* queue belongs to a specific VSI type
	 * VF / VM index should be programmed per vmvf_type setting:
	 * for vmvf_type = VF, it is VF number between 0-256
	 * for vmvf_type = VM, it is VM number between 0-767
	 * for PF or EMP this field should be set to zero
	 */
	switch (vsi->type) {
	case ICE_VSI_PF:
		tlan_ctx->vmvf_type = ICE_TLAN_CTX_VMVF_TYPE_PF;
		break;
	default:
		return;
	}

	/* make sure the context is associated with the right VSI */
	tlan_ctx->src_vsi = vsi->vsi_num;

	tlan_ctx->tso_ena = ICE_TX_LEGACY;
	tlan_ctx->tso_qnum = pf_q;

	/* Legacy or Advanced Host Interface:
	 * 0: Advanced Host Interface
	 * 1: Legacy Host Interface
	 */
	tlan_ctx->legacy_int = ICE_TX_LEGACY;
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
          int pf_q = 100;
          int _len_ring0 = 1;
          struct ice_ring * ring = (struct ice_ring *) malloc(_len_ring0*sizeof(struct ice_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].dma = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ring__i0__vsi0 = 1;
          ring[_i0].vsi = (struct ice_vsi *) malloc(_len_ring__i0__vsi0*sizeof(struct ice_vsi));
          for(int _j0 = 0; _j0 < _len_ring__i0__vsi0; _j0++) {
            ring[_i0].vsi->type = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].vsi->vsi_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ring__i0__vsi_port_info0 = 1;
          ring[_i0].vsi->port_info = (struct TYPE_4__ *) malloc(_len_ring__i0__vsi_port_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ring__i0__vsi_port_info0; _j0++) {
            ring[_i0].vsi->port_info->lport = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring__i0__vsi_back0 = 1;
          ring[_i0].vsi->back = (struct TYPE_3__ *) malloc(_len_ring__i0__vsi_back0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ring__i0__vsi_back0; _j0++) {
            ring[_i0].vsi->back->hw.pf_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_tlan_ctx0 = 1;
          struct ice_tlan_ctx * tlan_ctx = (struct ice_tlan_ctx *) malloc(_len_tlan_ctx0*sizeof(struct ice_tlan_ctx));
          for(int _i0 = 0; _i0 < _len_tlan_ctx0; _i0++) {
            tlan_ctx[_i0].base = ((-2 * (next_i()%2)) + 1) * next_i();
        tlan_ctx[_i0].tso_qnum = ((-2 * (next_i()%2)) + 1) * next_i();
        tlan_ctx[_i0].src_vsi = ((-2 * (next_i()%2)) + 1) * next_i();
        tlan_ctx[_i0].vmvf_type = ((-2 * (next_i()%2)) + 1) * next_i();
        tlan_ctx[_i0].pf_num = ((-2 * (next_i()%2)) + 1) * next_i();
        tlan_ctx[_i0].qlen = ((-2 * (next_i()%2)) + 1) * next_i();
        tlan_ctx[_i0].port_num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ice_setup_tx_ctx(ring,tlan_ctx,pf_q);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].vsi);
          }
          free(ring);
          free(tlan_ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pf_q = 255;
          int _len_ring0 = 65025;
          struct ice_ring * ring = (struct ice_ring *) malloc(_len_ring0*sizeof(struct ice_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].dma = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ring__i0__vsi0 = 1;
          ring[_i0].vsi = (struct ice_vsi *) malloc(_len_ring__i0__vsi0*sizeof(struct ice_vsi));
          for(int _j0 = 0; _j0 < _len_ring__i0__vsi0; _j0++) {
            ring[_i0].vsi->type = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].vsi->vsi_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ring__i0__vsi_port_info0 = 1;
          ring[_i0].vsi->port_info = (struct TYPE_4__ *) malloc(_len_ring__i0__vsi_port_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ring__i0__vsi_port_info0; _j0++) {
            ring[_i0].vsi->port_info->lport = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring__i0__vsi_back0 = 1;
          ring[_i0].vsi->back = (struct TYPE_3__ *) malloc(_len_ring__i0__vsi_back0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ring__i0__vsi_back0; _j0++) {
            ring[_i0].vsi->back->hw.pf_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_tlan_ctx0 = 65025;
          struct ice_tlan_ctx * tlan_ctx = (struct ice_tlan_ctx *) malloc(_len_tlan_ctx0*sizeof(struct ice_tlan_ctx));
          for(int _i0 = 0; _i0 < _len_tlan_ctx0; _i0++) {
            tlan_ctx[_i0].base = ((-2 * (next_i()%2)) + 1) * next_i();
        tlan_ctx[_i0].tso_qnum = ((-2 * (next_i()%2)) + 1) * next_i();
        tlan_ctx[_i0].src_vsi = ((-2 * (next_i()%2)) + 1) * next_i();
        tlan_ctx[_i0].vmvf_type = ((-2 * (next_i()%2)) + 1) * next_i();
        tlan_ctx[_i0].pf_num = ((-2 * (next_i()%2)) + 1) * next_i();
        tlan_ctx[_i0].qlen = ((-2 * (next_i()%2)) + 1) * next_i();
        tlan_ctx[_i0].port_num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ice_setup_tx_ctx(ring,tlan_ctx,pf_q);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].vsi);
          }
          free(ring);
          free(tlan_ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pf_q = 10;
          int _len_ring0 = 100;
          struct ice_ring * ring = (struct ice_ring *) malloc(_len_ring0*sizeof(struct ice_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].dma = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ring__i0__vsi0 = 1;
          ring[_i0].vsi = (struct ice_vsi *) malloc(_len_ring__i0__vsi0*sizeof(struct ice_vsi));
          for(int _j0 = 0; _j0 < _len_ring__i0__vsi0; _j0++) {
            ring[_i0].vsi->type = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].vsi->vsi_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ring__i0__vsi_port_info0 = 1;
          ring[_i0].vsi->port_info = (struct TYPE_4__ *) malloc(_len_ring__i0__vsi_port_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ring__i0__vsi_port_info0; _j0++) {
            ring[_i0].vsi->port_info->lport = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ring__i0__vsi_back0 = 1;
          ring[_i0].vsi->back = (struct TYPE_3__ *) malloc(_len_ring__i0__vsi_back0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ring__i0__vsi_back0; _j0++) {
            ring[_i0].vsi->back->hw.pf_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_tlan_ctx0 = 100;
          struct ice_tlan_ctx * tlan_ctx = (struct ice_tlan_ctx *) malloc(_len_tlan_ctx0*sizeof(struct ice_tlan_ctx));
          for(int _i0 = 0; _i0 < _len_tlan_ctx0; _i0++) {
            tlan_ctx[_i0].base = ((-2 * (next_i()%2)) + 1) * next_i();
        tlan_ctx[_i0].tso_qnum = ((-2 * (next_i()%2)) + 1) * next_i();
        tlan_ctx[_i0].src_vsi = ((-2 * (next_i()%2)) + 1) * next_i();
        tlan_ctx[_i0].vmvf_type = ((-2 * (next_i()%2)) + 1) * next_i();
        tlan_ctx[_i0].pf_num = ((-2 * (next_i()%2)) + 1) * next_i();
        tlan_ctx[_i0].qlen = ((-2 * (next_i()%2)) + 1) * next_i();
        tlan_ctx[_i0].port_num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ice_setup_tx_ctx(ring,tlan_ctx,pf_q);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].vsi);
          }
          free(ring);
          free(tlan_ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
