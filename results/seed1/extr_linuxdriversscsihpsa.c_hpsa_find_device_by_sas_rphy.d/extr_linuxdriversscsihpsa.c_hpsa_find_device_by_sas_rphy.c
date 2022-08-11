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
struct sas_rphy {int dummy; } ;
struct hpsa_scsi_dev_t {TYPE_1__* sas_port; } ;
struct ctlr_info {int ndevices; struct hpsa_scsi_dev_t** dev; } ;
struct TYPE_2__ {struct sas_rphy* rphy; } ;

/* Variables and functions */

__attribute__((used)) static struct hpsa_scsi_dev_t
	*hpsa_find_device_by_sas_rphy(struct ctlr_info *h,
					struct sas_rphy *rphy)
{
	int i;
	struct hpsa_scsi_dev_t *device;

	for (i = 0; i < h->ndevices; i++) {
		device = h->dev[i];
		if (!device->sas_port)
			continue;
		if (device->sas_port->rphy == rphy)
			return device;
	}

	return NULL;
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
          int _len_h0 = 1;
          struct ctlr_info * h = (struct ctlr_info *) malloc(_len_h0*sizeof(struct ctlr_info));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].ndevices = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_h__i0__dev0 = 1;
          h[_i0].dev = (struct hpsa_scsi_dev_t **) malloc(_len_h__i0__dev0*sizeof(struct hpsa_scsi_dev_t *));
          for(int _j0 = 0; _j0 < _len_h__i0__dev0; _j0++) {
            int _len_h__i0__dev1 = 1;
            h[_i0].dev[_j0] = (struct hpsa_scsi_dev_t *) malloc(_len_h__i0__dev1*sizeof(struct hpsa_scsi_dev_t));
            for(int _j1 = 0; _j1 < _len_h__i0__dev1; _j1++) {
                int _len_h__i0__dev__j0__sas_port0 = 1;
          h[_i0].dev[_j0]->sas_port = (struct TYPE_2__ *) malloc(_len_h__i0__dev__j0__sas_port0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_h__i0__dev__j0__sas_port0; _j0++) {
              int _len_h__i0__dev__j0__sas_port_rphy0 = 1;
          h[_i0].dev[_j0]->sas_port->rphy = (struct sas_rphy *) malloc(_len_h__i0__dev__j0__sas_port_rphy0*sizeof(struct sas_rphy));
          for(int _j0 = 0; _j0 < _len_h__i0__dev__j0__sas_port_rphy0; _j0++) {
            h[_i0].dev[_j0]->sas_port->rphy->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
            }
          }
          }
          int _len_rphy0 = 1;
          struct sas_rphy * rphy = (struct sas_rphy *) malloc(_len_rphy0*sizeof(struct sas_rphy));
          for(int _i0 = 0; _i0 < _len_rphy0; _i0++) {
            rphy[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct hpsa_scsi_dev_t * benchRet = hpsa_find_device_by_sas_rphy(h,rphy);
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(*(h[_aux].dev));
        free(h[_aux].dev);
          }
          free(h);
          free(rphy);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_h0 = 65025;
          struct ctlr_info * h = (struct ctlr_info *) malloc(_len_h0*sizeof(struct ctlr_info));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].ndevices = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_h__i0__dev0 = 1;
          h[_i0].dev = (struct hpsa_scsi_dev_t **) malloc(_len_h__i0__dev0*sizeof(struct hpsa_scsi_dev_t *));
          for(int _j0 = 0; _j0 < _len_h__i0__dev0; _j0++) {
            int _len_h__i0__dev1 = 1;
            h[_i0].dev[_j0] = (struct hpsa_scsi_dev_t *) malloc(_len_h__i0__dev1*sizeof(struct hpsa_scsi_dev_t));
            for(int _j1 = 0; _j1 < _len_h__i0__dev1; _j1++) {
                int _len_h__i0__dev__j0__sas_port0 = 1;
          h[_i0].dev[_j0]->sas_port = (struct TYPE_2__ *) malloc(_len_h__i0__dev__j0__sas_port0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_h__i0__dev__j0__sas_port0; _j0++) {
              int _len_h__i0__dev__j0__sas_port_rphy0 = 1;
          h[_i0].dev[_j0]->sas_port->rphy = (struct sas_rphy *) malloc(_len_h__i0__dev__j0__sas_port_rphy0*sizeof(struct sas_rphy));
          for(int _j0 = 0; _j0 < _len_h__i0__dev__j0__sas_port_rphy0; _j0++) {
            h[_i0].dev[_j0]->sas_port->rphy->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
            }
          }
          }
          int _len_rphy0 = 65025;
          struct sas_rphy * rphy = (struct sas_rphy *) malloc(_len_rphy0*sizeof(struct sas_rphy));
          for(int _i0 = 0; _i0 < _len_rphy0; _i0++) {
            rphy[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct hpsa_scsi_dev_t * benchRet = hpsa_find_device_by_sas_rphy(h,rphy);
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(*(h[_aux].dev));
        free(h[_aux].dev);
          }
          free(h);
          free(rphy);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_h0 = 100;
          struct ctlr_info * h = (struct ctlr_info *) malloc(_len_h0*sizeof(struct ctlr_info));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h[_i0].ndevices = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_h__i0__dev0 = 1;
          h[_i0].dev = (struct hpsa_scsi_dev_t **) malloc(_len_h__i0__dev0*sizeof(struct hpsa_scsi_dev_t *));
          for(int _j0 = 0; _j0 < _len_h__i0__dev0; _j0++) {
            int _len_h__i0__dev1 = 1;
            h[_i0].dev[_j0] = (struct hpsa_scsi_dev_t *) malloc(_len_h__i0__dev1*sizeof(struct hpsa_scsi_dev_t));
            for(int _j1 = 0; _j1 < _len_h__i0__dev1; _j1++) {
                int _len_h__i0__dev__j0__sas_port0 = 1;
          h[_i0].dev[_j0]->sas_port = (struct TYPE_2__ *) malloc(_len_h__i0__dev__j0__sas_port0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_h__i0__dev__j0__sas_port0; _j0++) {
              int _len_h__i0__dev__j0__sas_port_rphy0 = 1;
          h[_i0].dev[_j0]->sas_port->rphy = (struct sas_rphy *) malloc(_len_h__i0__dev__j0__sas_port_rphy0*sizeof(struct sas_rphy));
          for(int _j0 = 0; _j0 < _len_h__i0__dev__j0__sas_port_rphy0; _j0++) {
            h[_i0].dev[_j0]->sas_port->rphy->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
            }
          }
          }
          int _len_rphy0 = 100;
          struct sas_rphy * rphy = (struct sas_rphy *) malloc(_len_rphy0*sizeof(struct sas_rphy));
          for(int _i0 = 0; _i0 < _len_rphy0; _i0++) {
            rphy[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct hpsa_scsi_dev_t * benchRet = hpsa_find_device_by_sas_rphy(h,rphy);
          for(int _aux = 0; _aux < _len_h0; _aux++) {
          free(*(h[_aux].dev));
        free(h[_aux].dev);
          }
          free(h);
          free(rphy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
