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

/* Type definitions */
typedef  int /*<<< orphan*/  uint32_t ;
typedef  size_t uint16_t ;
struct vring_used {size_t vu_idx; struct virtio_used* vu_ring; } ;
struct vqueue_info {size_t vq_qsize; struct vring_used* vq_used; } ;
struct virtio_used {size_t vu_idx; int /*<<< orphan*/  vu_tlen; } ;

/* Variables and functions */

void
vq_relchain(struct vqueue_info *vq, uint16_t idx, uint32_t iolen)
{
	uint16_t uidx, mask;
	volatile struct vring_used *vuh;
	volatile struct virtio_used *vue;

	/*
	 * Notes:
	 *  - mask is N-1 where N is a power of 2 so computes x % N
	 *  - vuh points to the "used" data shared with guest
	 *  - vue points to the "used" ring entry we want to update
	 *  - head is the same value we compute in vq_iovecs().
	 *
	 * (I apologize for the two fields named vu_idx; the
	 * virtio spec calls the one that vue points to, "id"...)
	 */
	mask = vq->vq_qsize - 1;
	vuh = vq->vq_used;

	uidx = vuh->vu_idx;
	vue = &vuh->vu_ring[uidx++ & mask];
	vue->vu_idx = idx;
	vue->vu_tlen = iolen;
	vuh->vu_idx = uidx;
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
          unsigned long idx = 100;
          int iolen = 100;
          int _len_vq0 = 1;
          struct vqueue_info * vq = (struct vqueue_info *) malloc(_len_vq0*sizeof(struct vqueue_info));
          for(int _i0 = 0; _i0 < _len_vq0; _i0++) {
            vq[_i0].vq_qsize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vq__i0__vq_used0 = 1;
          vq[_i0].vq_used = (struct vring_used *) malloc(_len_vq__i0__vq_used0*sizeof(struct vring_used));
          for(int _j0 = 0; _j0 < _len_vq__i0__vq_used0; _j0++) {
            vq[_i0].vq_used->vu_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vq__i0__vq_used_vu_ring0 = 1;
          vq[_i0].vq_used->vu_ring = (struct virtio_used *) malloc(_len_vq__i0__vq_used_vu_ring0*sizeof(struct virtio_used));
          for(int _j0 = 0; _j0 < _len_vq__i0__vq_used_vu_ring0; _j0++) {
            vq[_i0].vq_used->vu_ring->vu_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        vq[_i0].vq_used->vu_ring->vu_tlen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          vq_relchain(vq,idx,iolen);
          for(int _aux = 0; _aux < _len_vq0; _aux++) {
          free(vq[_aux].vq_used);
          }
          free(vq);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long idx = 255;
          int iolen = 255;
          int _len_vq0 = 65025;
          struct vqueue_info * vq = (struct vqueue_info *) malloc(_len_vq0*sizeof(struct vqueue_info));
          for(int _i0 = 0; _i0 < _len_vq0; _i0++) {
            vq[_i0].vq_qsize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vq__i0__vq_used0 = 1;
          vq[_i0].vq_used = (struct vring_used *) malloc(_len_vq__i0__vq_used0*sizeof(struct vring_used));
          for(int _j0 = 0; _j0 < _len_vq__i0__vq_used0; _j0++) {
            vq[_i0].vq_used->vu_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vq__i0__vq_used_vu_ring0 = 1;
          vq[_i0].vq_used->vu_ring = (struct virtio_used *) malloc(_len_vq__i0__vq_used_vu_ring0*sizeof(struct virtio_used));
          for(int _j0 = 0; _j0 < _len_vq__i0__vq_used_vu_ring0; _j0++) {
            vq[_i0].vq_used->vu_ring->vu_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        vq[_i0].vq_used->vu_ring->vu_tlen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          vq_relchain(vq,idx,iolen);
          for(int _aux = 0; _aux < _len_vq0; _aux++) {
          free(vq[_aux].vq_used);
          }
          free(vq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long idx = 10;
          int iolen = 10;
          int _len_vq0 = 100;
          struct vqueue_info * vq = (struct vqueue_info *) malloc(_len_vq0*sizeof(struct vqueue_info));
          for(int _i0 = 0; _i0 < _len_vq0; _i0++) {
            vq[_i0].vq_qsize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vq__i0__vq_used0 = 1;
          vq[_i0].vq_used = (struct vring_used *) malloc(_len_vq__i0__vq_used0*sizeof(struct vring_used));
          for(int _j0 = 0; _j0 < _len_vq__i0__vq_used0; _j0++) {
            vq[_i0].vq_used->vu_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vq__i0__vq_used_vu_ring0 = 1;
          vq[_i0].vq_used->vu_ring = (struct virtio_used *) malloc(_len_vq__i0__vq_used_vu_ring0*sizeof(struct virtio_used));
          for(int _j0 = 0; _j0 < _len_vq__i0__vq_used_vu_ring0; _j0++) {
            vq[_i0].vq_used->vu_ring->vu_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        vq[_i0].vq_used->vu_ring->vu_tlen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          vq_relchain(vq,idx,iolen);
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
