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
       3            linked\n\
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
struct domain_device {struct domain_device* parent; TYPE_1__* port; } ;
struct TYPE_2__ {int id; } ;

/* Variables and functions */

__attribute__((used)) static int sas_find_local_port_id(struct domain_device *dev)
{
	struct domain_device *pdev = dev->parent;

	/* Directly attached device */
	if (!pdev)
		return dev->port->id;
	while (pdev) {
		struct domain_device *pdev_p = pdev->parent;
		if (!pdev_p)
			return pdev->port->id;
		pdev = pdev->parent;
	}
	return 0;
}


// ------------------------------------------------------------------------- //

struct domain_device *_allocate_dev(int length, struct domain_device *aux_dev[]) {
  struct domain_device *walker = (struct domain_device *)malloc(sizeof(struct domain_device));

  aux_dev[0] = walker;
  walker->parent = NULL;
  int _len_walker_port0 = 1;
  walker->port = (struct TYPE_2__ *) malloc(_len_walker_port0*sizeof(struct TYPE_2__));
  for(int _i0 = 0; _i0 < _len_walker_port0; _i0++) {
    walker->port.id = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  struct domain_device *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct domain_device *)malloc(sizeof(struct domain_device));
    walker = walker->parent;
    aux_dev[i] = walker;
    walker->parent = NULL;
  int _len_walker_port0 = 1;
  walker->port = (struct TYPE_2__ *) malloc(_len_walker_port0*sizeof(struct TYPE_2__));
  for(int _i0 = 0; _i0 < _len_walker_port0; _i0++) {
    walker->port.id = ((-2 * (next_i()%2)) + 1) * next_i();
  }
  }

  return head;
}

void _delete_dev(struct domain_device *aux_dev[], int aux_dev_size) {
  for(int i = 0; i < aux_dev_size; i++) 
    if(aux_dev[i])
      free(aux_dev[i]);
}

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
          struct domain_device * aux_dev[1];
          struct domain_device * dev = _allocate_dev(1, aux_dev);
          int benchRet = sas_find_local_port_id(dev);
          printf("%d\n", benchRet); 
          _delete_dev(aux_dev, 1);
        
        break;
    }
    // linked
    case 3:
    {
          struct domain_device * aux_dev[10000];
          struct domain_device * dev = _allocate_dev(10000, aux_dev);
          int benchRet = sas_find_local_port_id(dev);
          printf("%d\n", benchRet); 
          _delete_dev(aux_dev, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
