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
struct asd_sas_port {int /*<<< orphan*/  phy_mask; TYPE_1__* ha; } ;
struct asd_ha_struct {int dummy; } ;
struct TYPE_5__ {int /*<<< orphan*/  conn_mask; int /*<<< orphan*/  nexus; } ;
struct TYPE_6__ {TYPE_2__ clear_nexus; } ;
struct TYPE_4__ {struct asd_ha_struct* lldd_ha; } ;

/* Variables and functions */
 int /*<<< orphan*/  CLEAR_NEXUS_POST ; 
 int /*<<< orphan*/  CLEAR_NEXUS_PRE ; 
 int /*<<< orphan*/  NEXUS_PORT ; 
 TYPE_3__* scb ; 

int asd_clear_nexus_port(struct asd_sas_port *port)
{
	struct asd_ha_struct *asd_ha = port->ha->lldd_ha;

	CLEAR_NEXUS_PRE;
	scb->clear_nexus.nexus = NEXUS_PORT;
	scb->clear_nexus.conn_mask = port->phy_mask;
	CLEAR_NEXUS_POST;
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
          int _len_port0 = 1;
          struct asd_sas_port * port = (struct asd_sas_port *) malloc(_len_port0*sizeof(struct asd_sas_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].phy_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_port__i0__ha0 = 1;
          port[_i0].ha = (struct TYPE_4__ *) malloc(_len_port__i0__ha0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_port__i0__ha0; _j0++) {
              int _len_port__i0__ha_lldd_ha0 = 1;
          port[_i0].ha->lldd_ha = (struct asd_ha_struct *) malloc(_len_port__i0__ha_lldd_ha0*sizeof(struct asd_ha_struct));
          for(int _j0 = 0; _j0 < _len_port__i0__ha_lldd_ha0; _j0++) {
            port[_i0].ha->lldd_ha->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = asd_clear_nexus_port(port);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].ha);
          }
          free(port);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_port0 = 65025;
          struct asd_sas_port * port = (struct asd_sas_port *) malloc(_len_port0*sizeof(struct asd_sas_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].phy_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_port__i0__ha0 = 1;
          port[_i0].ha = (struct TYPE_4__ *) malloc(_len_port__i0__ha0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_port__i0__ha0; _j0++) {
              int _len_port__i0__ha_lldd_ha0 = 1;
          port[_i0].ha->lldd_ha = (struct asd_ha_struct *) malloc(_len_port__i0__ha_lldd_ha0*sizeof(struct asd_ha_struct));
          for(int _j0 = 0; _j0 < _len_port__i0__ha_lldd_ha0; _j0++) {
            port[_i0].ha->lldd_ha->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = asd_clear_nexus_port(port);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].ha);
          }
          free(port);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_port0 = 100;
          struct asd_sas_port * port = (struct asd_sas_port *) malloc(_len_port0*sizeof(struct asd_sas_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].phy_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_port__i0__ha0 = 1;
          port[_i0].ha = (struct TYPE_4__ *) malloc(_len_port__i0__ha0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_port__i0__ha0; _j0++) {
              int _len_port__i0__ha_lldd_ha0 = 1;
          port[_i0].ha->lldd_ha = (struct asd_ha_struct *) malloc(_len_port__i0__ha_lldd_ha0*sizeof(struct asd_ha_struct));
          for(int _j0 = 0; _j0 < _len_port__i0__ha_lldd_ha0; _j0++) {
            port[_i0].ha->lldd_ha->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = asd_clear_nexus_port(port);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].ha);
          }
          free(port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
