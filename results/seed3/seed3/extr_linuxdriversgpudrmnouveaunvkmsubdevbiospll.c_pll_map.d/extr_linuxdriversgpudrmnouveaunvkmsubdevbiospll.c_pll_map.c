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
struct pll_mapping {int dummy; } ;
struct nvkm_device {int card_type; int chipset; } ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_bios {TYPE_1__ subdev; } ;

/* Variables and functions */
#define  NV_04 134 
#define  NV_10 133 
#define  NV_11 132 
#define  NV_20 131 
#define  NV_30 130 
#define  NV_40 129 
#define  NV_50 128 
 struct pll_mapping* g84_pll_mapping ; 
 struct pll_mapping* nv04_pll_mapping ; 
 struct pll_mapping* nv40_pll_mapping ; 
 struct pll_mapping* nv50_pll_mapping ; 

__attribute__((used)) static struct pll_mapping *
pll_map(struct nvkm_bios *bios)
{
	struct nvkm_device *device = bios->subdev.device;
	switch (device->card_type) {
	case NV_04:
	case NV_10:
	case NV_11:
	case NV_20:
	case NV_30:
		return nv04_pll_mapping;
		break;
	case NV_40:
		return nv40_pll_mapping;
	case NV_50:
		if (device->chipset == 0x50)
			return nv50_pll_mapping;
		else
		if (device->chipset <  0xa3 ||
		    device->chipset == 0xaa ||
		    device->chipset == 0xac)
			return g84_pll_mapping;
	default:
		return NULL;
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
          int _len_bios0 = 1;
          struct nvkm_bios * bios = (struct nvkm_bios *) malloc(_len_bios0*sizeof(struct nvkm_bios));
          for(int _i0 = 0; _i0 < _len_bios0; _i0++) {
              int _len_bios__i0__subdev_device0 = 1;
          bios[_i0].subdev.device = (struct nvkm_device *) malloc(_len_bios__i0__subdev_device0*sizeof(struct nvkm_device));
          for(int _j0 = 0; _j0 < _len_bios__i0__subdev_device0; _j0++) {
            bios[_i0].subdev.device->card_type = ((-2 * (next_i()%2)) + 1) * next_i();
        bios[_i0].subdev.device->chipset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct pll_mapping * benchRet = pll_map(bios);
          printf("%d\n", (*benchRet).dummy);
          free(bios);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bios0 = 65025;
          struct nvkm_bios * bios = (struct nvkm_bios *) malloc(_len_bios0*sizeof(struct nvkm_bios));
          for(int _i0 = 0; _i0 < _len_bios0; _i0++) {
              int _len_bios__i0__subdev_device0 = 1;
          bios[_i0].subdev.device = (struct nvkm_device *) malloc(_len_bios__i0__subdev_device0*sizeof(struct nvkm_device));
          for(int _j0 = 0; _j0 < _len_bios__i0__subdev_device0; _j0++) {
            bios[_i0].subdev.device->card_type = ((-2 * (next_i()%2)) + 1) * next_i();
        bios[_i0].subdev.device->chipset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct pll_mapping * benchRet = pll_map(bios);
          printf("%d\n", (*benchRet).dummy);
          free(bios);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bios0 = 100;
          struct nvkm_bios * bios = (struct nvkm_bios *) malloc(_len_bios0*sizeof(struct nvkm_bios));
          for(int _i0 = 0; _i0 < _len_bios0; _i0++) {
              int _len_bios__i0__subdev_device0 = 1;
          bios[_i0].subdev.device = (struct nvkm_device *) malloc(_len_bios__i0__subdev_device0*sizeof(struct nvkm_device));
          for(int _j0 = 0; _j0 < _len_bios__i0__subdev_device0; _j0++) {
            bios[_i0].subdev.device->card_type = ((-2 * (next_i()%2)) + 1) * next_i();
        bios[_i0].subdev.device->chipset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct pll_mapping * benchRet = pll_map(bios);
          printf("%d\n", (*benchRet).dummy);
          free(bios);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
