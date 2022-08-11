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
struct amdgpu_ring {TYPE_1__* funcs; } ;
struct amdgpu_ib {int length_dw; int /*<<< orphan*/ * ptr; } ;
struct TYPE_2__ {int align_mask; int /*<<< orphan*/  nop; } ;

/* Variables and functions */

void amdgpu_ring_generic_pad_ib(struct amdgpu_ring *ring, struct amdgpu_ib *ib)
{
	while (ib->length_dw & ring->funcs->align_mask)
		ib->ptr[ib->length_dw++] = ring->funcs->nop;
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
          int _len_ring0 = 1;
          struct amdgpu_ring * ring = (struct amdgpu_ring *) malloc(_len_ring0*sizeof(struct amdgpu_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              int _len_ring__i0__funcs0 = 1;
          ring[_i0].funcs = (struct TYPE_2__ *) malloc(_len_ring__i0__funcs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ring__i0__funcs0; _j0++) {
            ring[_i0].funcs->align_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].funcs->nop = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ib0 = 1;
          struct amdgpu_ib * ib = (struct amdgpu_ib *) malloc(_len_ib0*sizeof(struct amdgpu_ib));
          for(int _i0 = 0; _i0 < _len_ib0; _i0++) {
            ib[_i0].length_dw = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ib__i0__ptr0 = 1;
          ib[_i0].ptr = (int *) malloc(_len_ib__i0__ptr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ib__i0__ptr0; _j0++) {
            ib[_i0].ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          amdgpu_ring_generic_pad_ib(ring,ib);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].funcs);
          }
          free(ring);
          for(int _aux = 0; _aux < _len_ib0; _aux++) {
          free(ib[_aux].ptr);
          }
          free(ib);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ring0 = 65025;
          struct amdgpu_ring * ring = (struct amdgpu_ring *) malloc(_len_ring0*sizeof(struct amdgpu_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              int _len_ring__i0__funcs0 = 1;
          ring[_i0].funcs = (struct TYPE_2__ *) malloc(_len_ring__i0__funcs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ring__i0__funcs0; _j0++) {
            ring[_i0].funcs->align_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].funcs->nop = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ib0 = 65025;
          struct amdgpu_ib * ib = (struct amdgpu_ib *) malloc(_len_ib0*sizeof(struct amdgpu_ib));
          for(int _i0 = 0; _i0 < _len_ib0; _i0++) {
            ib[_i0].length_dw = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ib__i0__ptr0 = 1;
          ib[_i0].ptr = (int *) malloc(_len_ib__i0__ptr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ib__i0__ptr0; _j0++) {
            ib[_i0].ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          amdgpu_ring_generic_pad_ib(ring,ib);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].funcs);
          }
          free(ring);
          for(int _aux = 0; _aux < _len_ib0; _aux++) {
          free(ib[_aux].ptr);
          }
          free(ib);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ring0 = 100;
          struct amdgpu_ring * ring = (struct amdgpu_ring *) malloc(_len_ring0*sizeof(struct amdgpu_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              int _len_ring__i0__funcs0 = 1;
          ring[_i0].funcs = (struct TYPE_2__ *) malloc(_len_ring__i0__funcs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ring__i0__funcs0; _j0++) {
            ring[_i0].funcs->align_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].funcs->nop = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ib0 = 100;
          struct amdgpu_ib * ib = (struct amdgpu_ib *) malloc(_len_ib0*sizeof(struct amdgpu_ib));
          for(int _i0 = 0; _i0 < _len_ib0; _i0++) {
            ib[_i0].length_dw = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ib__i0__ptr0 = 1;
          ib[_i0].ptr = (int *) malloc(_len_ib__i0__ptr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ib__i0__ptr0; _j0++) {
            ib[_i0].ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          amdgpu_ring_generic_pad_ib(ring,ib);
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].funcs);
          }
          free(ring);
          for(int _aux = 0; _aux < _len_ib0; _aux++) {
          free(ib[_aux].ptr);
          }
          free(ib);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
