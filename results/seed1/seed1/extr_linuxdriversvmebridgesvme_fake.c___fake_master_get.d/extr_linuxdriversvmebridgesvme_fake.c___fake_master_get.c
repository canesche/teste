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
typedef  int /*<<< orphan*/  u32 ;
struct vme_master_resource {unsigned int number; TYPE_1__* parent; } ;
struct fake_driver {TYPE_2__* masters; } ;
struct TYPE_4__ {int enabled; unsigned long long vme_base; unsigned long long size; int /*<<< orphan*/  dwidth; int /*<<< orphan*/  cycle; int /*<<< orphan*/  aspace; } ;
struct TYPE_3__ {struct fake_driver* driver_priv; } ;

/* Variables and functions */

__attribute__((used)) static int __fake_master_get(struct vme_master_resource *image, int *enabled,
		unsigned long long *vme_base, unsigned long long *size,
		u32 *aspace, u32 *cycle, u32 *dwidth)
{
	unsigned int i;
	struct fake_driver *bridge;

	bridge = image->parent->driver_priv;

	i = image->number;

	*enabled = bridge->masters[i].enabled;
	*vme_base = bridge->masters[i].vme_base;
	*size = bridge->masters[i].size;
	*aspace = bridge->masters[i].aspace;
	*cycle = bridge->masters[i].cycle;
	*dwidth = bridge->masters[i].dwidth;

	return 0;
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
          int _len_image0 = 1;
          struct vme_master_resource * image = (struct vme_master_resource *) malloc(_len_image0*sizeof(struct vme_master_resource));
          for(int _i0 = 0; _i0 < _len_image0; _i0++) {
            image[_i0].number = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_image__i0__parent0 = 1;
          image[_i0].parent = (struct TYPE_3__ *) malloc(_len_image__i0__parent0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_image__i0__parent0; _j0++) {
              int _len_image__i0__parent_driver_priv0 = 1;
          image[_i0].parent->driver_priv = (struct fake_driver *) malloc(_len_image__i0__parent_driver_priv0*sizeof(struct fake_driver));
          for(int _j0 = 0; _j0 < _len_image__i0__parent_driver_priv0; _j0++) {
              int _len_image__i0__parent_driver_priv_masters0 = 1;
          image[_i0].parent->driver_priv->masters = (struct TYPE_4__ *) malloc(_len_image__i0__parent_driver_priv_masters0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_image__i0__parent_driver_priv_masters0; _j0++) {
            image[_i0].parent->driver_priv->masters->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].parent->driver_priv->masters->vme_base = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].parent->driver_priv->masters->size = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].parent->driver_priv->masters->dwidth = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].parent->driver_priv->masters->cycle = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].parent->driver_priv->masters->aspace = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_enabled0 = 1;
          int * enabled = (int *) malloc(_len_enabled0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_enabled0; _i0++) {
            enabled[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vme_base0 = 1;
          unsigned long long * vme_base = (unsigned long long *) malloc(_len_vme_base0*sizeof(unsigned long long));
          for(int _i0 = 0; _i0 < _len_vme_base0; _i0++) {
            vme_base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_size0 = 1;
          unsigned long long * size = (unsigned long long *) malloc(_len_size0*sizeof(unsigned long long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aspace0 = 1;
          int * aspace = (int *) malloc(_len_aspace0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_aspace0; _i0++) {
            aspace[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cycle0 = 1;
          int * cycle = (int *) malloc(_len_cycle0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cycle0; _i0++) {
            cycle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dwidth0 = 1;
          int * dwidth = (int *) malloc(_len_dwidth0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dwidth0; _i0++) {
            dwidth[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __fake_master_get(image,enabled,vme_base,size,aspace,cycle,dwidth);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_image0; _aux++) {
          free(image[_aux].parent);
          }
          free(image);
          free(enabled);
          free(vme_base);
          free(size);
          free(aspace);
          free(cycle);
          free(dwidth);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_image0 = 65025;
          struct vme_master_resource * image = (struct vme_master_resource *) malloc(_len_image0*sizeof(struct vme_master_resource));
          for(int _i0 = 0; _i0 < _len_image0; _i0++) {
            image[_i0].number = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_image__i0__parent0 = 1;
          image[_i0].parent = (struct TYPE_3__ *) malloc(_len_image__i0__parent0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_image__i0__parent0; _j0++) {
              int _len_image__i0__parent_driver_priv0 = 1;
          image[_i0].parent->driver_priv = (struct fake_driver *) malloc(_len_image__i0__parent_driver_priv0*sizeof(struct fake_driver));
          for(int _j0 = 0; _j0 < _len_image__i0__parent_driver_priv0; _j0++) {
              int _len_image__i0__parent_driver_priv_masters0 = 1;
          image[_i0].parent->driver_priv->masters = (struct TYPE_4__ *) malloc(_len_image__i0__parent_driver_priv_masters0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_image__i0__parent_driver_priv_masters0; _j0++) {
            image[_i0].parent->driver_priv->masters->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].parent->driver_priv->masters->vme_base = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].parent->driver_priv->masters->size = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].parent->driver_priv->masters->dwidth = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].parent->driver_priv->masters->cycle = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].parent->driver_priv->masters->aspace = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_enabled0 = 65025;
          int * enabled = (int *) malloc(_len_enabled0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_enabled0; _i0++) {
            enabled[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vme_base0 = 65025;
          unsigned long long * vme_base = (unsigned long long *) malloc(_len_vme_base0*sizeof(unsigned long long));
          for(int _i0 = 0; _i0 < _len_vme_base0; _i0++) {
            vme_base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_size0 = 65025;
          unsigned long long * size = (unsigned long long *) malloc(_len_size0*sizeof(unsigned long long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aspace0 = 65025;
          int * aspace = (int *) malloc(_len_aspace0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_aspace0; _i0++) {
            aspace[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cycle0 = 65025;
          int * cycle = (int *) malloc(_len_cycle0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cycle0; _i0++) {
            cycle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dwidth0 = 65025;
          int * dwidth = (int *) malloc(_len_dwidth0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dwidth0; _i0++) {
            dwidth[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __fake_master_get(image,enabled,vme_base,size,aspace,cycle,dwidth);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_image0; _aux++) {
          free(image[_aux].parent);
          }
          free(image);
          free(enabled);
          free(vme_base);
          free(size);
          free(aspace);
          free(cycle);
          free(dwidth);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_image0 = 100;
          struct vme_master_resource * image = (struct vme_master_resource *) malloc(_len_image0*sizeof(struct vme_master_resource));
          for(int _i0 = 0; _i0 < _len_image0; _i0++) {
            image[_i0].number = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_image__i0__parent0 = 1;
          image[_i0].parent = (struct TYPE_3__ *) malloc(_len_image__i0__parent0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_image__i0__parent0; _j0++) {
              int _len_image__i0__parent_driver_priv0 = 1;
          image[_i0].parent->driver_priv = (struct fake_driver *) malloc(_len_image__i0__parent_driver_priv0*sizeof(struct fake_driver));
          for(int _j0 = 0; _j0 < _len_image__i0__parent_driver_priv0; _j0++) {
              int _len_image__i0__parent_driver_priv_masters0 = 1;
          image[_i0].parent->driver_priv->masters = (struct TYPE_4__ *) malloc(_len_image__i0__parent_driver_priv_masters0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_image__i0__parent_driver_priv_masters0; _j0++) {
            image[_i0].parent->driver_priv->masters->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].parent->driver_priv->masters->vme_base = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].parent->driver_priv->masters->size = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].parent->driver_priv->masters->dwidth = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].parent->driver_priv->masters->cycle = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].parent->driver_priv->masters->aspace = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_enabled0 = 100;
          int * enabled = (int *) malloc(_len_enabled0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_enabled0; _i0++) {
            enabled[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vme_base0 = 100;
          unsigned long long * vme_base = (unsigned long long *) malloc(_len_vme_base0*sizeof(unsigned long long));
          for(int _i0 = 0; _i0 < _len_vme_base0; _i0++) {
            vme_base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_size0 = 100;
          unsigned long long * size = (unsigned long long *) malloc(_len_size0*sizeof(unsigned long long));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aspace0 = 100;
          int * aspace = (int *) malloc(_len_aspace0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_aspace0; _i0++) {
            aspace[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cycle0 = 100;
          int * cycle = (int *) malloc(_len_cycle0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cycle0; _i0++) {
            cycle[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dwidth0 = 100;
          int * dwidth = (int *) malloc(_len_dwidth0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dwidth0; _i0++) {
            dwidth[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __fake_master_get(image,enabled,vme_base,size,aspace,cycle,dwidth);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_image0; _aux++) {
          free(image[_aux].parent);
          }
          free(image);
          free(enabled);
          free(vme_base);
          free(size);
          free(aspace);
          free(cycle);
          free(dwidth);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
