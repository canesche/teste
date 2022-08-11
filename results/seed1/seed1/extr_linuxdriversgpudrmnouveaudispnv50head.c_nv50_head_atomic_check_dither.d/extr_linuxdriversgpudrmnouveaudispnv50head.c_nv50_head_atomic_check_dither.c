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
typedef  struct TYPE_12__   TYPE_6__ ;
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_12__ {int dither; } ;
struct TYPE_11__ {int enable; int bits; int mode; } ;
struct TYPE_8__ {int depth; } ;
struct nv50_head_atom {TYPE_6__ set; TYPE_5__ dither; TYPE_2__ base; } ;
struct TYPE_10__ {scalar_t__ mode; int depth; } ;
struct TYPE_7__ {struct drm_connector* connector; } ;
struct nouveau_conn_atom {TYPE_4__ dither; TYPE_1__ state; } ;
struct TYPE_9__ {int bpc; } ;
struct drm_connector {TYPE_3__ display_info; } ;

/* Variables and functions */
 int DITHERING_DEPTH_8BPC ; 
 int DITHERING_DEPTH_AUTO ; 
 scalar_t__ DITHERING_MODE_AUTO ; 
 int DITHERING_MODE_DYNAMIC2X2 ; 

__attribute__((used)) static void
nv50_head_atomic_check_dither(struct nv50_head_atom *armh,
			      struct nv50_head_atom *asyh,
			      struct nouveau_conn_atom *asyc)
{
	struct drm_connector *connector = asyc->state.connector;
	u32 mode = 0x00;

	if (asyc->dither.mode == DITHERING_MODE_AUTO) {
		if (asyh->base.depth > connector->display_info.bpc * 3)
			mode = DITHERING_MODE_DYNAMIC2X2;
	} else {
		mode = asyc->dither.mode;
	}

	if (asyc->dither.depth == DITHERING_DEPTH_AUTO) {
		if (connector->display_info.bpc >= 8)
			mode |= DITHERING_DEPTH_8BPC;
	} else {
		mode |= asyc->dither.depth;
	}

	asyh->dither.enable = mode;
	asyh->dither.bits = mode >> 1;
	asyh->dither.mode = mode >> 3;
	asyh->set.dither = true;
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
          int _len_armh0 = 1;
          struct nv50_head_atom * armh = (struct nv50_head_atom *) malloc(_len_armh0*sizeof(struct nv50_head_atom));
          for(int _i0 = 0; _i0 < _len_armh0; _i0++) {
            armh[_i0].set.dither = ((-2 * (next_i()%2)) + 1) * next_i();
        armh[_i0].dither.enable = ((-2 * (next_i()%2)) + 1) * next_i();
        armh[_i0].dither.bits = ((-2 * (next_i()%2)) + 1) * next_i();
        armh[_i0].dither.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        armh[_i0].base.depth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asyh0 = 1;
          struct nv50_head_atom * asyh = (struct nv50_head_atom *) malloc(_len_asyh0*sizeof(struct nv50_head_atom));
          for(int _i0 = 0; _i0 < _len_asyh0; _i0++) {
            asyh[_i0].set.dither = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].dither.enable = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].dither.bits = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].dither.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].base.depth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asyc0 = 1;
          struct nouveau_conn_atom * asyc = (struct nouveau_conn_atom *) malloc(_len_asyc0*sizeof(struct nouveau_conn_atom));
          for(int _i0 = 0; _i0 < _len_asyc0; _i0++) {
            asyc[_i0].dither.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        asyc[_i0].dither.depth = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_asyc__i0__state_connector0 = 1;
          asyc[_i0].state.connector = (struct drm_connector *) malloc(_len_asyc__i0__state_connector0*sizeof(struct drm_connector));
          for(int _j0 = 0; _j0 < _len_asyc__i0__state_connector0; _j0++) {
            asyc[_i0].state.connector->display_info.bpc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          nv50_head_atomic_check_dither(armh,asyh,asyc);
          free(armh);
          free(asyh);
          free(asyc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_armh0 = 65025;
          struct nv50_head_atom * armh = (struct nv50_head_atom *) malloc(_len_armh0*sizeof(struct nv50_head_atom));
          for(int _i0 = 0; _i0 < _len_armh0; _i0++) {
            armh[_i0].set.dither = ((-2 * (next_i()%2)) + 1) * next_i();
        armh[_i0].dither.enable = ((-2 * (next_i()%2)) + 1) * next_i();
        armh[_i0].dither.bits = ((-2 * (next_i()%2)) + 1) * next_i();
        armh[_i0].dither.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        armh[_i0].base.depth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asyh0 = 65025;
          struct nv50_head_atom * asyh = (struct nv50_head_atom *) malloc(_len_asyh0*sizeof(struct nv50_head_atom));
          for(int _i0 = 0; _i0 < _len_asyh0; _i0++) {
            asyh[_i0].set.dither = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].dither.enable = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].dither.bits = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].dither.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].base.depth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asyc0 = 65025;
          struct nouveau_conn_atom * asyc = (struct nouveau_conn_atom *) malloc(_len_asyc0*sizeof(struct nouveau_conn_atom));
          for(int _i0 = 0; _i0 < _len_asyc0; _i0++) {
            asyc[_i0].dither.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        asyc[_i0].dither.depth = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_asyc__i0__state_connector0 = 1;
          asyc[_i0].state.connector = (struct drm_connector *) malloc(_len_asyc__i0__state_connector0*sizeof(struct drm_connector));
          for(int _j0 = 0; _j0 < _len_asyc__i0__state_connector0; _j0++) {
            asyc[_i0].state.connector->display_info.bpc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          nv50_head_atomic_check_dither(armh,asyh,asyc);
          free(armh);
          free(asyh);
          free(asyc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_armh0 = 100;
          struct nv50_head_atom * armh = (struct nv50_head_atom *) malloc(_len_armh0*sizeof(struct nv50_head_atom));
          for(int _i0 = 0; _i0 < _len_armh0; _i0++) {
            armh[_i0].set.dither = ((-2 * (next_i()%2)) + 1) * next_i();
        armh[_i0].dither.enable = ((-2 * (next_i()%2)) + 1) * next_i();
        armh[_i0].dither.bits = ((-2 * (next_i()%2)) + 1) * next_i();
        armh[_i0].dither.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        armh[_i0].base.depth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asyh0 = 100;
          struct nv50_head_atom * asyh = (struct nv50_head_atom *) malloc(_len_asyh0*sizeof(struct nv50_head_atom));
          for(int _i0 = 0; _i0 < _len_asyh0; _i0++) {
            asyh[_i0].set.dither = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].dither.enable = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].dither.bits = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].dither.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        asyh[_i0].base.depth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asyc0 = 100;
          struct nouveau_conn_atom * asyc = (struct nouveau_conn_atom *) malloc(_len_asyc0*sizeof(struct nouveau_conn_atom));
          for(int _i0 = 0; _i0 < _len_asyc0; _i0++) {
            asyc[_i0].dither.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        asyc[_i0].dither.depth = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_asyc__i0__state_connector0 = 1;
          asyc[_i0].state.connector = (struct drm_connector *) malloc(_len_asyc__i0__state_connector0*sizeof(struct drm_connector));
          for(int _j0 = 0; _j0 < _len_asyc__i0__state_connector0; _j0++) {
            asyc[_i0].state.connector->display_info.bpc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          nv50_head_atomic_check_dither(armh,asyh,asyc);
          free(armh);
          free(asyh);
          free(asyc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
