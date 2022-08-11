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
typedef  int u8 ;
struct sas_phy {void* minimum_linkrate; void* maximum_linkrate; void* minimum_linkrate_hw; void* maximum_linkrate_hw; void* negotiated_linkrate; } ;
struct TYPE_2__ {void* linkrate; struct sas_phy* phy; } ;
struct pm8001_phy {TYPE_1__ sas_phy; } ;

/* Variables and functions */
#define  PHY_SPEED_120 131 
#define  PHY_SPEED_15 130 
#define  PHY_SPEED_30 129 
#define  PHY_SPEED_60 128 
 void* SAS_LINK_RATE_12_0_GBPS ; 
 void* SAS_LINK_RATE_1_5_GBPS ; 
 void* SAS_LINK_RATE_3_0_GBPS ; 
 void* SAS_LINK_RATE_6_0_GBPS ; 

void pm8001_get_lrate_mode(struct pm8001_phy *phy, u8 link_rate)
{
	struct sas_phy *sas_phy = phy->sas_phy.phy;

	switch (link_rate) {
	case PHY_SPEED_120:
		phy->sas_phy.linkrate = SAS_LINK_RATE_12_0_GBPS;
		phy->sas_phy.phy->negotiated_linkrate = SAS_LINK_RATE_12_0_GBPS;
		break;
	case PHY_SPEED_60:
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
	sas_phy->maximum_linkrate_hw = SAS_LINK_RATE_6_0_GBPS;
	sas_phy->minimum_linkrate_hw = SAS_LINK_RATE_1_5_GBPS;
	sas_phy->maximum_linkrate = SAS_LINK_RATE_6_0_GBPS;
	sas_phy->minimum_linkrate = SAS_LINK_RATE_1_5_GBPS;
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
          int link_rate = 100;
          int _len_phy0 = 1;
          struct pm8001_phy * phy = (struct pm8001_phy *) malloc(_len_phy0*sizeof(struct pm8001_phy));
          for(int _i0 = 0; _i0 < _len_phy0; _i0++) {
              int _len_phy__i0__sas_phy_phy0 = 1;
          phy[_i0].sas_phy.phy = (struct sas_phy *) malloc(_len_phy__i0__sas_phy_phy0*sizeof(struct sas_phy));
          for(int _j0 = 0; _j0 < _len_phy__i0__sas_phy_phy0; _j0++) {
              }
          }
          pm8001_get_lrate_mode(phy,link_rate);
          free(phy);
        
        break;
    }
    // big-arr
    case 1:
    {
          int link_rate = 255;
          int _len_phy0 = 65025;
          struct pm8001_phy * phy = (struct pm8001_phy *) malloc(_len_phy0*sizeof(struct pm8001_phy));
          for(int _i0 = 0; _i0 < _len_phy0; _i0++) {
              int _len_phy__i0__sas_phy_phy0 = 1;
          phy[_i0].sas_phy.phy = (struct sas_phy *) malloc(_len_phy__i0__sas_phy_phy0*sizeof(struct sas_phy));
          for(int _j0 = 0; _j0 < _len_phy__i0__sas_phy_phy0; _j0++) {
              }
          }
          pm8001_get_lrate_mode(phy,link_rate);
          free(phy);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int link_rate = 10;
          int _len_phy0 = 100;
          struct pm8001_phy * phy = (struct pm8001_phy *) malloc(_len_phy0*sizeof(struct pm8001_phy));
          for(int _i0 = 0; _i0 < _len_phy0; _i0++) {
              int _len_phy__i0__sas_phy_phy0 = 1;
          phy[_i0].sas_phy.phy = (struct sas_phy *) malloc(_len_phy__i0__sas_phy_phy0*sizeof(struct sas_phy));
          for(int _j0 = 0; _j0 < _len_phy__i0__sas_phy_phy0; _j0++) {
              }
          }
          pm8001_get_lrate_mode(phy,link_rate);
          free(phy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
