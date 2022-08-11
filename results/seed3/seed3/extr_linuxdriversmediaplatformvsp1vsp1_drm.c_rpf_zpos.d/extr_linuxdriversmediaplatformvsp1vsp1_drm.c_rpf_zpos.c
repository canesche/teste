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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {size_t index; } ;
struct vsp1_rwpf {TYPE_3__ entity; } ;
struct vsp1_device {TYPE_2__* drm; } ;
struct TYPE_5__ {TYPE_1__* inputs; } ;
struct TYPE_4__ {unsigned int zpos; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int rpf_zpos(struct vsp1_device *vsp1, struct vsp1_rwpf *rpf)
{
	return vsp1->drm->inputs[rpf->entity.index].zpos;
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
          int _len_vsp10 = 1;
          struct vsp1_device * vsp1 = (struct vsp1_device *) malloc(_len_vsp10*sizeof(struct vsp1_device));
          for(int _i0 = 0; _i0 < _len_vsp10; _i0++) {
              int _len_vsp1__i0__drm0 = 1;
          vsp1[_i0].drm = (struct TYPE_5__ *) malloc(_len_vsp1__i0__drm0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_vsp1__i0__drm0; _j0++) {
              int _len_vsp1__i0__drm_inputs0 = 1;
          vsp1[_i0].drm->inputs = (struct TYPE_4__ *) malloc(_len_vsp1__i0__drm_inputs0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_vsp1__i0__drm_inputs0; _j0++) {
            vsp1[_i0].drm->inputs->zpos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_rpf0 = 1;
          struct vsp1_rwpf * rpf = (struct vsp1_rwpf *) malloc(_len_rpf0*sizeof(struct vsp1_rwpf));
          for(int _i0 = 0; _i0 < _len_rpf0; _i0++) {
            rpf[_i0].entity.index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = rpf_zpos(vsp1,rpf);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_vsp10; _aux++) {
          free(vsp1[_aux].drm);
          }
          free(vsp1);
          free(rpf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vsp10 = 65025;
          struct vsp1_device * vsp1 = (struct vsp1_device *) malloc(_len_vsp10*sizeof(struct vsp1_device));
          for(int _i0 = 0; _i0 < _len_vsp10; _i0++) {
              int _len_vsp1__i0__drm0 = 1;
          vsp1[_i0].drm = (struct TYPE_5__ *) malloc(_len_vsp1__i0__drm0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_vsp1__i0__drm0; _j0++) {
              int _len_vsp1__i0__drm_inputs0 = 1;
          vsp1[_i0].drm->inputs = (struct TYPE_4__ *) malloc(_len_vsp1__i0__drm_inputs0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_vsp1__i0__drm_inputs0; _j0++) {
            vsp1[_i0].drm->inputs->zpos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_rpf0 = 65025;
          struct vsp1_rwpf * rpf = (struct vsp1_rwpf *) malloc(_len_rpf0*sizeof(struct vsp1_rwpf));
          for(int _i0 = 0; _i0 < _len_rpf0; _i0++) {
            rpf[_i0].entity.index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = rpf_zpos(vsp1,rpf);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_vsp10; _aux++) {
          free(vsp1[_aux].drm);
          }
          free(vsp1);
          free(rpf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vsp10 = 100;
          struct vsp1_device * vsp1 = (struct vsp1_device *) malloc(_len_vsp10*sizeof(struct vsp1_device));
          for(int _i0 = 0; _i0 < _len_vsp10; _i0++) {
              int _len_vsp1__i0__drm0 = 1;
          vsp1[_i0].drm = (struct TYPE_5__ *) malloc(_len_vsp1__i0__drm0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_vsp1__i0__drm0; _j0++) {
              int _len_vsp1__i0__drm_inputs0 = 1;
          vsp1[_i0].drm->inputs = (struct TYPE_4__ *) malloc(_len_vsp1__i0__drm_inputs0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_vsp1__i0__drm_inputs0; _j0++) {
            vsp1[_i0].drm->inputs->zpos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_rpf0 = 100;
          struct vsp1_rwpf * rpf = (struct vsp1_rwpf *) malloc(_len_rpf0*sizeof(struct vsp1_rwpf));
          for(int _i0 = 0; _i0 < _len_rpf0; _i0++) {
            rpf[_i0].entity.index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = rpf_zpos(vsp1,rpf);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_vsp10; _aux++) {
          free(vsp1[_aux].drm);
          }
          free(vsp1);
          free(rpf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
