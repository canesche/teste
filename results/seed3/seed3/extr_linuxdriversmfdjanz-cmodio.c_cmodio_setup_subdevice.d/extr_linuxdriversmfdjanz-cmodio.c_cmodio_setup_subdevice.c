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
struct resource {scalar_t__ end; scalar_t__ start; TYPE_1__* parent; void* flags; } ;
struct pci_dev {TYPE_1__* resource; } ;
struct mfd_cell {char* name; int num_resources; int pdata_size; struct janz_platform_data* platform_data; scalar_t__ id; struct resource* resources; } ;
struct janz_platform_data {unsigned int modno; } ;
struct cmodio_device {struct janz_platform_data* pdata; struct resource* resources; struct mfd_cell* cells; struct pci_dev* pdev; } ;
struct TYPE_2__ {scalar_t__ end; scalar_t__ start; } ;

/* Variables and functions */
 unsigned int CMODIO_MODULBUS_SIZE ; 
 void* IORESOURCE_IRQ ; 
 void* IORESOURCE_MEM ; 
 int /*<<< orphan*/  cmodio_id ; 

__attribute__((used)) static int cmodio_setup_subdevice(struct cmodio_device *priv,
					    char *name, unsigned int devno,
					    unsigned int modno)
{
	struct janz_platform_data *pdata;
	struct mfd_cell *cell;
	struct resource *res;
	struct pci_dev *pci;

	pci = priv->pdev;
	cell = &priv->cells[devno];
	res = &priv->resources[devno * 3];
	pdata = &priv->pdata[devno];

	cell->name = name;
	cell->resources = res;
	cell->num_resources = 3;

	/* Setup the subdevice ID -- must be unique */
	cell->id = cmodio_id++;

	/* Add platform data */
	pdata->modno = modno;
	cell->platform_data = pdata;
	cell->pdata_size = sizeof(*pdata);

	/* MODULbus registers -- PCI BAR3 is big-endian MODULbus access */
	res->flags = IORESOURCE_MEM;
	res->parent = &pci->resource[3];
	res->start = pci->resource[3].start + (CMODIO_MODULBUS_SIZE * modno);
	res->end = res->start + CMODIO_MODULBUS_SIZE - 1;
	res++;

	/* PLX Control Registers -- PCI BAR4 is interrupt and other registers */
	res->flags = IORESOURCE_MEM;
	res->parent = &pci->resource[4];
	res->start = pci->resource[4].start;
	res->end = pci->resource[4].end;
	res++;

	/*
	 * IRQ
	 *
	 * The start and end fields are used as an offset to the irq_base
	 * parameter passed into the mfd_add_devices() function call. All
	 * devices share the same IRQ.
	 */
	res->flags = IORESOURCE_IRQ;
	res->parent = NULL;
	res->start = 0;
	res->end = 0;
	res++;

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
          unsigned int devno = 100;
          unsigned int modno = 100;
          int _len_priv0 = 1;
          struct cmodio_device * priv = (struct cmodio_device *) malloc(_len_priv0*sizeof(struct cmodio_device));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__pdata0 = 1;
          priv[_i0].pdata = (struct janz_platform_data *) malloc(_len_priv__i0__pdata0*sizeof(struct janz_platform_data));
          for(int _j0 = 0; _j0 < _len_priv__i0__pdata0; _j0++) {
            priv[_i0].pdata->modno = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__resources0 = 1;
          priv[_i0].resources = (struct resource *) malloc(_len_priv__i0__resources0*sizeof(struct resource));
          for(int _j0 = 0; _j0 < _len_priv__i0__resources0; _j0++) {
            priv[_i0].resources->end = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].resources->start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__resources_parent0 = 1;
          priv[_i0].resources->parent = (struct TYPE_2__ *) malloc(_len_priv__i0__resources_parent0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__resources_parent0; _j0++) {
            priv[_i0].resources->parent->end = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].resources->parent->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_priv__i0__cells0 = 1;
          priv[_i0].cells = (struct mfd_cell *) malloc(_len_priv__i0__cells0*sizeof(struct mfd_cell));
          for(int _j0 = 0; _j0 < _len_priv__i0__cells0; _j0++) {
              int _len_priv__i0__cells_name0 = 1;
          priv[_i0].cells->name = (char *) malloc(_len_priv__i0__cells_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_priv__i0__cells_name0; _j0++) {
            priv[_i0].cells->name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].cells->num_resources = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].cells->pdata_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__cells_platform_data0 = 1;
          priv[_i0].cells->platform_data = (struct janz_platform_data *) malloc(_len_priv__i0__cells_platform_data0*sizeof(struct janz_platform_data));
          for(int _j0 = 0; _j0 < _len_priv__i0__cells_platform_data0; _j0++) {
            priv[_i0].cells->platform_data->modno = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].cells->id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__cells_resources0 = 1;
          priv[_i0].cells->resources = (struct resource *) malloc(_len_priv__i0__cells_resources0*sizeof(struct resource));
          for(int _j0 = 0; _j0 < _len_priv__i0__cells_resources0; _j0++) {
            priv[_i0].cells->resources->end = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].cells->resources->start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__cells_resources_parent0 = 1;
          priv[_i0].cells->resources->parent = (struct TYPE_2__ *) malloc(_len_priv__i0__cells_resources_parent0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__cells_resources_parent0; _j0++) {
            priv[_i0].cells->resources->parent->end = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].cells->resources->parent->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_priv__i0__pdev0 = 1;
          priv[_i0].pdev = (struct pci_dev *) malloc(_len_priv__i0__pdev0*sizeof(struct pci_dev));
          for(int _j0 = 0; _j0 < _len_priv__i0__pdev0; _j0++) {
              int _len_priv__i0__pdev_resource0 = 1;
          priv[_i0].pdev->resource = (struct TYPE_2__ *) malloc(_len_priv__i0__pdev_resource0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__pdev_resource0; _j0++) {
            priv[_i0].pdev->resource->end = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].pdev->resource->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_name0 = 1;
          char * name = (char *) malloc(_len_name0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cmodio_setup_subdevice(priv,name,devno,modno);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].pdata);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].resources);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].cells);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].pdev);
          }
          free(priv);
          free(name);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int devno = 255;
          unsigned int modno = 255;
          int _len_priv0 = 65025;
          struct cmodio_device * priv = (struct cmodio_device *) malloc(_len_priv0*sizeof(struct cmodio_device));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__pdata0 = 1;
          priv[_i0].pdata = (struct janz_platform_data *) malloc(_len_priv__i0__pdata0*sizeof(struct janz_platform_data));
          for(int _j0 = 0; _j0 < _len_priv__i0__pdata0; _j0++) {
            priv[_i0].pdata->modno = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__resources0 = 1;
          priv[_i0].resources = (struct resource *) malloc(_len_priv__i0__resources0*sizeof(struct resource));
          for(int _j0 = 0; _j0 < _len_priv__i0__resources0; _j0++) {
            priv[_i0].resources->end = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].resources->start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__resources_parent0 = 1;
          priv[_i0].resources->parent = (struct TYPE_2__ *) malloc(_len_priv__i0__resources_parent0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__resources_parent0; _j0++) {
            priv[_i0].resources->parent->end = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].resources->parent->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_priv__i0__cells0 = 1;
          priv[_i0].cells = (struct mfd_cell *) malloc(_len_priv__i0__cells0*sizeof(struct mfd_cell));
          for(int _j0 = 0; _j0 < _len_priv__i0__cells0; _j0++) {
              int _len_priv__i0__cells_name0 = 1;
          priv[_i0].cells->name = (char *) malloc(_len_priv__i0__cells_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_priv__i0__cells_name0; _j0++) {
            priv[_i0].cells->name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].cells->num_resources = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].cells->pdata_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__cells_platform_data0 = 1;
          priv[_i0].cells->platform_data = (struct janz_platform_data *) malloc(_len_priv__i0__cells_platform_data0*sizeof(struct janz_platform_data));
          for(int _j0 = 0; _j0 < _len_priv__i0__cells_platform_data0; _j0++) {
            priv[_i0].cells->platform_data->modno = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].cells->id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__cells_resources0 = 1;
          priv[_i0].cells->resources = (struct resource *) malloc(_len_priv__i0__cells_resources0*sizeof(struct resource));
          for(int _j0 = 0; _j0 < _len_priv__i0__cells_resources0; _j0++) {
            priv[_i0].cells->resources->end = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].cells->resources->start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__cells_resources_parent0 = 1;
          priv[_i0].cells->resources->parent = (struct TYPE_2__ *) malloc(_len_priv__i0__cells_resources_parent0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__cells_resources_parent0; _j0++) {
            priv[_i0].cells->resources->parent->end = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].cells->resources->parent->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_priv__i0__pdev0 = 1;
          priv[_i0].pdev = (struct pci_dev *) malloc(_len_priv__i0__pdev0*sizeof(struct pci_dev));
          for(int _j0 = 0; _j0 < _len_priv__i0__pdev0; _j0++) {
              int _len_priv__i0__pdev_resource0 = 1;
          priv[_i0].pdev->resource = (struct TYPE_2__ *) malloc(_len_priv__i0__pdev_resource0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__pdev_resource0; _j0++) {
            priv[_i0].pdev->resource->end = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].pdev->resource->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_name0 = 65025;
          char * name = (char *) malloc(_len_name0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cmodio_setup_subdevice(priv,name,devno,modno);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].pdata);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].resources);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].cells);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].pdev);
          }
          free(priv);
          free(name);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int devno = 10;
          unsigned int modno = 10;
          int _len_priv0 = 100;
          struct cmodio_device * priv = (struct cmodio_device *) malloc(_len_priv0*sizeof(struct cmodio_device));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__pdata0 = 1;
          priv[_i0].pdata = (struct janz_platform_data *) malloc(_len_priv__i0__pdata0*sizeof(struct janz_platform_data));
          for(int _j0 = 0; _j0 < _len_priv__i0__pdata0; _j0++) {
            priv[_i0].pdata->modno = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_priv__i0__resources0 = 1;
          priv[_i0].resources = (struct resource *) malloc(_len_priv__i0__resources0*sizeof(struct resource));
          for(int _j0 = 0; _j0 < _len_priv__i0__resources0; _j0++) {
            priv[_i0].resources->end = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].resources->start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__resources_parent0 = 1;
          priv[_i0].resources->parent = (struct TYPE_2__ *) malloc(_len_priv__i0__resources_parent0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__resources_parent0; _j0++) {
            priv[_i0].resources->parent->end = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].resources->parent->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_priv__i0__cells0 = 1;
          priv[_i0].cells = (struct mfd_cell *) malloc(_len_priv__i0__cells0*sizeof(struct mfd_cell));
          for(int _j0 = 0; _j0 < _len_priv__i0__cells0; _j0++) {
              int _len_priv__i0__cells_name0 = 1;
          priv[_i0].cells->name = (char *) malloc(_len_priv__i0__cells_name0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_priv__i0__cells_name0; _j0++) {
            priv[_i0].cells->name[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].cells->num_resources = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].cells->pdata_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__cells_platform_data0 = 1;
          priv[_i0].cells->platform_data = (struct janz_platform_data *) malloc(_len_priv__i0__cells_platform_data0*sizeof(struct janz_platform_data));
          for(int _j0 = 0; _j0 < _len_priv__i0__cells_platform_data0; _j0++) {
            priv[_i0].cells->platform_data->modno = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].cells->id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__cells_resources0 = 1;
          priv[_i0].cells->resources = (struct resource *) malloc(_len_priv__i0__cells_resources0*sizeof(struct resource));
          for(int _j0 = 0; _j0 < _len_priv__i0__cells_resources0; _j0++) {
            priv[_i0].cells->resources->end = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].cells->resources->start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__cells_resources_parent0 = 1;
          priv[_i0].cells->resources->parent = (struct TYPE_2__ *) malloc(_len_priv__i0__cells_resources_parent0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__cells_resources_parent0; _j0++) {
            priv[_i0].cells->resources->parent->end = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].cells->resources->parent->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_priv__i0__pdev0 = 1;
          priv[_i0].pdev = (struct pci_dev *) malloc(_len_priv__i0__pdev0*sizeof(struct pci_dev));
          for(int _j0 = 0; _j0 < _len_priv__i0__pdev0; _j0++) {
              int _len_priv__i0__pdev_resource0 = 1;
          priv[_i0].pdev->resource = (struct TYPE_2__ *) malloc(_len_priv__i0__pdev_resource0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__pdev_resource0; _j0++) {
            priv[_i0].pdev->resource->end = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].pdev->resource->start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_name0 = 100;
          char * name = (char *) malloc(_len_name0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cmodio_setup_subdevice(priv,name,devno,modno);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].pdata);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].resources);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].cells);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].pdev);
          }
          free(priv);
          free(name);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
