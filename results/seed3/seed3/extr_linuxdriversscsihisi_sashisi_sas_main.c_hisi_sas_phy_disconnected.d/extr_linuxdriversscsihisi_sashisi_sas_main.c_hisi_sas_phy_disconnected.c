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
struct sas_phy_data {scalar_t__ enable; } ;
struct sas_phy {int /*<<< orphan*/  negotiated_linkrate; struct sas_phy_data* hostdata; } ;
struct asd_sas_phy {struct sas_phy* phy; } ;
struct hisi_sas_phy {int /*<<< orphan*/ * port; scalar_t__ phy_type; scalar_t__ phy_attached; struct asd_sas_phy sas_phy; } ;

/* Variables and functions */
 int /*<<< orphan*/  SAS_LINK_RATE_UNKNOWN ; 
 int /*<<< orphan*/  SAS_PHY_DISABLED ; 

__attribute__((used)) static void hisi_sas_phy_disconnected(struct hisi_sas_phy *phy)
{
	struct asd_sas_phy *sas_phy = &phy->sas_phy;
	struct sas_phy *sphy = sas_phy->phy;
	struct sas_phy_data *d = sphy->hostdata;

	phy->phy_attached = 0;
	phy->phy_type = 0;
	phy->port = NULL;

	if (d->enable)
		sphy->negotiated_linkrate = SAS_LINK_RATE_UNKNOWN;
	else
		sphy->negotiated_linkrate = SAS_PHY_DISABLED;
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
          int _len_phy0 = 1;
          struct hisi_sas_phy * phy = (struct hisi_sas_phy *) malloc(_len_phy0*sizeof(struct hisi_sas_phy));
          for(int _i0 = 0; _i0 < _len_phy0; _i0++) {
              int _len_phy__i0__port0 = 1;
          phy[_i0].port = (int *) malloc(_len_phy__i0__port0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_phy__i0__port0; _j0++) {
            phy[_i0].port[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phy[_i0].phy_type = ((-2 * (next_i()%2)) + 1) * next_i();
        phy[_i0].phy_attached = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy__i0__sas_phy_phy0 = 1;
          phy[_i0].sas_phy.phy = (struct sas_phy *) malloc(_len_phy__i0__sas_phy_phy0*sizeof(struct sas_phy));
          for(int _j0 = 0; _j0 < _len_phy__i0__sas_phy_phy0; _j0++) {
            phy[_i0].sas_phy.phy->negotiated_linkrate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy__i0__sas_phy_phy_hostdata0 = 1;
          phy[_i0].sas_phy.phy->hostdata = (struct sas_phy_data *) malloc(_len_phy__i0__sas_phy_phy_hostdata0*sizeof(struct sas_phy_data));
          for(int _j0 = 0; _j0 < _len_phy__i0__sas_phy_phy_hostdata0; _j0++) {
            phy[_i0].sas_phy.phy->hostdata->enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          hisi_sas_phy_disconnected(phy);
          for(int _aux = 0; _aux < _len_phy0; _aux++) {
          free(phy[_aux].port);
          }
          free(phy);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_phy0 = 65025;
          struct hisi_sas_phy * phy = (struct hisi_sas_phy *) malloc(_len_phy0*sizeof(struct hisi_sas_phy));
          for(int _i0 = 0; _i0 < _len_phy0; _i0++) {
              int _len_phy__i0__port0 = 1;
          phy[_i0].port = (int *) malloc(_len_phy__i0__port0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_phy__i0__port0; _j0++) {
            phy[_i0].port[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phy[_i0].phy_type = ((-2 * (next_i()%2)) + 1) * next_i();
        phy[_i0].phy_attached = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy__i0__sas_phy_phy0 = 1;
          phy[_i0].sas_phy.phy = (struct sas_phy *) malloc(_len_phy__i0__sas_phy_phy0*sizeof(struct sas_phy));
          for(int _j0 = 0; _j0 < _len_phy__i0__sas_phy_phy0; _j0++) {
            phy[_i0].sas_phy.phy->negotiated_linkrate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy__i0__sas_phy_phy_hostdata0 = 1;
          phy[_i0].sas_phy.phy->hostdata = (struct sas_phy_data *) malloc(_len_phy__i0__sas_phy_phy_hostdata0*sizeof(struct sas_phy_data));
          for(int _j0 = 0; _j0 < _len_phy__i0__sas_phy_phy_hostdata0; _j0++) {
            phy[_i0].sas_phy.phy->hostdata->enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          hisi_sas_phy_disconnected(phy);
          for(int _aux = 0; _aux < _len_phy0; _aux++) {
          free(phy[_aux].port);
          }
          free(phy);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_phy0 = 100;
          struct hisi_sas_phy * phy = (struct hisi_sas_phy *) malloc(_len_phy0*sizeof(struct hisi_sas_phy));
          for(int _i0 = 0; _i0 < _len_phy0; _i0++) {
              int _len_phy__i0__port0 = 1;
          phy[_i0].port = (int *) malloc(_len_phy__i0__port0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_phy__i0__port0; _j0++) {
            phy[_i0].port[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phy[_i0].phy_type = ((-2 * (next_i()%2)) + 1) * next_i();
        phy[_i0].phy_attached = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy__i0__sas_phy_phy0 = 1;
          phy[_i0].sas_phy.phy = (struct sas_phy *) malloc(_len_phy__i0__sas_phy_phy0*sizeof(struct sas_phy));
          for(int _j0 = 0; _j0 < _len_phy__i0__sas_phy_phy0; _j0++) {
            phy[_i0].sas_phy.phy->negotiated_linkrate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy__i0__sas_phy_phy_hostdata0 = 1;
          phy[_i0].sas_phy.phy->hostdata = (struct sas_phy_data *) malloc(_len_phy__i0__sas_phy_phy_hostdata0*sizeof(struct sas_phy_data));
          for(int _j0 = 0; _j0 < _len_phy__i0__sas_phy_phy_hostdata0; _j0++) {
            phy[_i0].sas_phy.phy->hostdata->enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          hisi_sas_phy_disconnected(phy);
          for(int _aux = 0; _aux < _len_phy0; _aux++) {
          free(phy[_aux].port);
          }
          free(phy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
