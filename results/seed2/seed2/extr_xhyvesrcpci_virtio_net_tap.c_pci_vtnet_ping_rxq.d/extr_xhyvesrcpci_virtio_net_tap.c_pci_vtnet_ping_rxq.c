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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct vqueue_info {TYPE_1__* vq_used; } ;
struct pci_vtnet_softc {int vsc_rx_ready; } ;
struct TYPE_2__ {int /*<<< orphan*/  vu_flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  VRING_USED_F_NO_NOTIFY ; 

__attribute__((used)) static void
pci_vtnet_ping_rxq(void *vsc, struct vqueue_info *vq)
{
	struct pci_vtnet_softc *sc = vsc;

	/*
	 * A qnotify means that the rx process can now begin
	 */
	if (sc->vsc_rx_ready == 0) {
		sc->vsc_rx_ready = 1;
		vq->vq_used->vu_flags |= VRING_USED_F_NO_NOTIFY;
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
          void * vsc;
          int _len_vq0 = 1;
          struct vqueue_info * vq = (struct vqueue_info *) malloc(_len_vq0*sizeof(struct vqueue_info));
          for(int _i0 = 0; _i0 < _len_vq0; _i0++) {
              int _len_vq__i0__vq_used0 = 1;
          vq[_i0].vq_used = (struct TYPE_2__ *) malloc(_len_vq__i0__vq_used0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vq__i0__vq_used0; _j0++) {
            vq[_i0].vq_used->vu_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          pci_vtnet_ping_rxq(vsc,vq);
          for(int _aux = 0; _aux < _len_vq0; _aux++) {
          free(vq[_aux].vq_used);
          }
          free(vq);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * vsc;
          int _len_vq0 = 65025;
          struct vqueue_info * vq = (struct vqueue_info *) malloc(_len_vq0*sizeof(struct vqueue_info));
          for(int _i0 = 0; _i0 < _len_vq0; _i0++) {
              int _len_vq__i0__vq_used0 = 1;
          vq[_i0].vq_used = (struct TYPE_2__ *) malloc(_len_vq__i0__vq_used0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vq__i0__vq_used0; _j0++) {
            vq[_i0].vq_used->vu_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          pci_vtnet_ping_rxq(vsc,vq);
          for(int _aux = 0; _aux < _len_vq0; _aux++) {
          free(vq[_aux].vq_used);
          }
          free(vq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * vsc;
          int _len_vq0 = 100;
          struct vqueue_info * vq = (struct vqueue_info *) malloc(_len_vq0*sizeof(struct vqueue_info));
          for(int _i0 = 0; _i0 < _len_vq0; _i0++) {
              int _len_vq__i0__vq_used0 = 1;
          vq[_i0].vq_used = (struct TYPE_2__ *) malloc(_len_vq__i0__vq_used0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vq__i0__vq_used0; _j0++) {
            vq[_i0].vq_used->vu_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          pci_vtnet_ping_rxq(vsc,vq);
          for(int _aux = 0; _aux < _len_vq0; _aux++) {
          free(vq[_aux].vq_used);
          }
          free(vq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
