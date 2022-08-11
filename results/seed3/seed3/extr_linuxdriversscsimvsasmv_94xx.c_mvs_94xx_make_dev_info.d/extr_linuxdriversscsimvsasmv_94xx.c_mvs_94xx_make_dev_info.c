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
typedef  int u32 ;
struct sas_identify_frame {int dev_type; scalar_t__ phy_id; scalar_t__ ssp_tport; scalar_t__ smp_tport; scalar_t__ stp_tport; scalar_t__ ssp_iport; scalar_t__ smp_iport; scalar_t__ stp_iport; } ;

/* Variables and functions */
 int PORT_DEV_SMP_INIT ; 
 int PORT_DEV_SMP_TRGT ; 
 int PORT_DEV_SSP_INIT ; 
 int PORT_DEV_SSP_TRGT ; 
 int PORT_DEV_STP_INIT ; 
 int PORT_DEV_STP_TRGT ; 

__attribute__((used)) static u32 mvs_94xx_make_dev_info(struct sas_identify_frame *id)
{
	u32 att_dev_info = 0;

	att_dev_info |= id->dev_type;
	if (id->stp_iport)
		att_dev_info |= PORT_DEV_STP_INIT;
	if (id->smp_iport)
		att_dev_info |= PORT_DEV_SMP_INIT;
	if (id->ssp_iport)
		att_dev_info |= PORT_DEV_SSP_INIT;
	if (id->stp_tport)
		att_dev_info |= PORT_DEV_STP_TRGT;
	if (id->smp_tport)
		att_dev_info |= PORT_DEV_SMP_TRGT;
	if (id->ssp_tport)
		att_dev_info |= PORT_DEV_SSP_TRGT;

	att_dev_info |= (u32)id->phy_id<<24;
	return att_dev_info;
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
          int _len_id0 = 1;
          struct sas_identify_frame * id = (struct sas_identify_frame *) malloc(_len_id0*sizeof(struct sas_identify_frame));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0].dev_type = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].phy_id = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].ssp_tport = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].smp_tport = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].stp_tport = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].ssp_iport = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].smp_iport = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].stp_iport = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mvs_94xx_make_dev_info(id);
          printf("%d\n", benchRet); 
          free(id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_id0 = 65025;
          struct sas_identify_frame * id = (struct sas_identify_frame *) malloc(_len_id0*sizeof(struct sas_identify_frame));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0].dev_type = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].phy_id = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].ssp_tport = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].smp_tport = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].stp_tport = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].ssp_iport = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].smp_iport = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].stp_iport = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mvs_94xx_make_dev_info(id);
          printf("%d\n", benchRet); 
          free(id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_id0 = 100;
          struct sas_identify_frame * id = (struct sas_identify_frame *) malloc(_len_id0*sizeof(struct sas_identify_frame));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0].dev_type = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].phy_id = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].ssp_tport = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].smp_tport = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].stp_tport = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].ssp_iport = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].smp_iport = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].stp_iport = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mvs_94xx_make_dev_info(id);
          printf("%d\n", benchRet); 
          free(id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
