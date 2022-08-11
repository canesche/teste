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
typedef  int u8 ;
struct sas_phy {int /*<<< orphan*/  minimum_linkrate; int /*<<< orphan*/  maximum_linkrate; void* minimum_linkrate_hw; void* maximum_linkrate_hw; void* negotiated_linkrate; } ;
struct TYPE_4__ {int /*<<< orphan*/  oob_mode; void* linkrate; struct sas_phy* phy; } ;
struct asd_phy {TYPE_2__ sas_phy; TYPE_1__* phy_desc; } ;
struct TYPE_3__ {int /*<<< orphan*/  min_sas_lrate; int /*<<< orphan*/  max_sas_lrate; } ;

/* Variables and functions */
#define  PHY_SPEED_15 130 
#define  PHY_SPEED_30 129 
#define  PHY_SPEED_60 128 
 void* SAS_LINK_RATE_1_5_GBPS ; 
 void* SAS_LINK_RATE_3_0_GBPS ; 
 void* SAS_LINK_RATE_6_0_GBPS ; 
 int SAS_MODE ; 
 int /*<<< orphan*/  SAS_OOB_MODE ; 
 int SATA_MODE ; 
 int /*<<< orphan*/  SATA_OOB_MODE ; 

__attribute__((used)) static void get_lrate_mode(struct asd_phy *phy, u8 oob_mode)
{
	struct sas_phy *sas_phy = phy->sas_phy.phy;

	switch (oob_mode & 7) {
	case PHY_SPEED_60:
		/* FIXME: sas transport class doesn't have this */
		phy->sas_phy.linkrate = SAS_LINK_RATE_6_0_GBPS;
		phy->sas_phy.phy->negotiated_linkrate = SAS_LINK_RATE_6_0_GBPS;
		break;
	case PHY_SPEED_30:
		phy->sas_phy.linkrate = SAS_LINK_RATE_3_0_GBPS;
		phy->sas_phy.phy->negotiated_linkrate = SAS_LINK_RATE_3_0_GBPS;
		break;
	case PHY_SPEED_15:
		phy->sas_phy.linkrate = SAS_LINK_RATE_1_5_GBPS;
		phy->sas_phy.phy->negotiated_linkrate = SAS_LINK_RATE_1_5_GBPS;
		break;
	}
	sas_phy->negotiated_linkrate = phy->sas_phy.linkrate;
	sas_phy->maximum_linkrate_hw = SAS_LINK_RATE_3_0_GBPS;
	sas_phy->minimum_linkrate_hw = SAS_LINK_RATE_1_5_GBPS;
	sas_phy->maximum_linkrate = phy->phy_desc->max_sas_lrate;
	sas_phy->minimum_linkrate = phy->phy_desc->min_sas_lrate;

	if (oob_mode & SAS_MODE)
		phy->sas_phy.oob_mode = SAS_OOB_MODE;
	else if (oob_mode & SATA_MODE)
		phy->sas_phy.oob_mode = SATA_OOB_MODE;
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
          int oob_mode = 100;
          int _len_phy0 = 1;
          struct asd_phy * phy = (struct asd_phy *) malloc(_len_phy0*sizeof(struct asd_phy));
          for(int _i0 = 0; _i0 < _len_phy0; _i0++) {
            phy[_i0].sas_phy.oob_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy__i0__sas_phy_phy0 = 1;
          phy[_i0].sas_phy.phy = (struct sas_phy *) malloc(_len_phy__i0__sas_phy_phy0*sizeof(struct sas_phy));
          for(int _j0 = 0; _j0 < _len_phy__i0__sas_phy_phy0; _j0++) {
            phy[_i0].sas_phy.phy->minimum_linkrate = ((-2 * (next_i()%2)) + 1) * next_i();
        phy[_i0].sas_phy.phy->maximum_linkrate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phy__i0__phy_desc0 = 1;
          phy[_i0].phy_desc = (struct TYPE_3__ *) malloc(_len_phy__i0__phy_desc0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_phy__i0__phy_desc0; _j0++) {
            phy[_i0].phy_desc->min_sas_lrate = ((-2 * (next_i()%2)) + 1) * next_i();
        phy[_i0].phy_desc->max_sas_lrate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          get_lrate_mode(phy,oob_mode);
          for(int _aux = 0; _aux < _len_phy0; _aux++) {
          free(phy[_aux].phy_desc);
          }
          free(phy);
        
        break;
    }
    // big-arr
    case 1:
    {
          int oob_mode = 255;
          int _len_phy0 = 65025;
          struct asd_phy * phy = (struct asd_phy *) malloc(_len_phy0*sizeof(struct asd_phy));
          for(int _i0 = 0; _i0 < _len_phy0; _i0++) {
            phy[_i0].sas_phy.oob_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy__i0__sas_phy_phy0 = 1;
          phy[_i0].sas_phy.phy = (struct sas_phy *) malloc(_len_phy__i0__sas_phy_phy0*sizeof(struct sas_phy));
          for(int _j0 = 0; _j0 < _len_phy__i0__sas_phy_phy0; _j0++) {
            phy[_i0].sas_phy.phy->minimum_linkrate = ((-2 * (next_i()%2)) + 1) * next_i();
        phy[_i0].sas_phy.phy->maximum_linkrate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phy__i0__phy_desc0 = 1;
          phy[_i0].phy_desc = (struct TYPE_3__ *) malloc(_len_phy__i0__phy_desc0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_phy__i0__phy_desc0; _j0++) {
            phy[_i0].phy_desc->min_sas_lrate = ((-2 * (next_i()%2)) + 1) * next_i();
        phy[_i0].phy_desc->max_sas_lrate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          get_lrate_mode(phy,oob_mode);
          for(int _aux = 0; _aux < _len_phy0; _aux++) {
          free(phy[_aux].phy_desc);
          }
          free(phy);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int oob_mode = 10;
          int _len_phy0 = 100;
          struct asd_phy * phy = (struct asd_phy *) malloc(_len_phy0*sizeof(struct asd_phy));
          for(int _i0 = 0; _i0 < _len_phy0; _i0++) {
            phy[_i0].sas_phy.oob_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy__i0__sas_phy_phy0 = 1;
          phy[_i0].sas_phy.phy = (struct sas_phy *) malloc(_len_phy__i0__sas_phy_phy0*sizeof(struct sas_phy));
          for(int _j0 = 0; _j0 < _len_phy__i0__sas_phy_phy0; _j0++) {
            phy[_i0].sas_phy.phy->minimum_linkrate = ((-2 * (next_i()%2)) + 1) * next_i();
        phy[_i0].sas_phy.phy->maximum_linkrate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phy__i0__phy_desc0 = 1;
          phy[_i0].phy_desc = (struct TYPE_3__ *) malloc(_len_phy__i0__phy_desc0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_phy__i0__phy_desc0; _j0++) {
            phy[_i0].phy_desc->min_sas_lrate = ((-2 * (next_i()%2)) + 1) * next_i();
        phy[_i0].phy_desc->max_sas_lrate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          get_lrate_mode(phy,oob_mode);
          for(int _aux = 0; _aux < _len_phy0; _aux++) {
          free(phy[_aux].phy_desc);
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
