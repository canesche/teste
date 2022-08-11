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
typedef  int u32 ;
struct sci_user_parameters {TYPE_1__* phys; } ;
struct isci_port {int physical_port_index; scalar_t__* phy_table; struct isci_host* owning_controller; } ;
struct isci_host {struct sci_user_parameters user_parameters; } ;
struct TYPE_2__ {scalar_t__ max_speed_generation; } ;

/* Variables and functions */
 int SCI_MAX_PHYS ; 

bool sci_port_is_valid_phy_assignment(struct isci_port *iport, u32 phy_index)
{
	struct isci_host *ihost = iport->owning_controller;
	struct sci_user_parameters *user = &ihost->user_parameters;

	/* Initialize to invalid value. */
	u32 existing_phy_index = SCI_MAX_PHYS;
	u32 index;

	if ((iport->physical_port_index == 1) && (phy_index != 1))
		return false;

	if (iport->physical_port_index == 3 && phy_index != 3)
		return false;

	if (iport->physical_port_index == 2 &&
	    (phy_index == 0 || phy_index == 1))
		return false;

	for (index = 0; index < SCI_MAX_PHYS; index++)
		if (iport->phy_table[index] && index != phy_index)
			existing_phy_index = index;

	/* Ensure that all of the phys in the port are capable of
	 * operating at the same maximum link rate.
	 */
	if (existing_phy_index < SCI_MAX_PHYS &&
	    user->phys[phy_index].max_speed_generation !=
	    user->phys[existing_phy_index].max_speed_generation)
		return false;

	return true;
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
          int phy_index = 100;
          int _len_iport0 = 1;
          struct isci_port * iport = (struct isci_port *) malloc(_len_iport0*sizeof(struct isci_port));
          for(int _i0 = 0; _i0 < _len_iport0; _i0++) {
            iport[_i0].physical_port_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iport__i0__phy_table0 = 1;
          iport[_i0].phy_table = (long *) malloc(_len_iport__i0__phy_table0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_iport__i0__phy_table0; _j0++) {
            iport[_i0].phy_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iport__i0__owning_controller0 = 1;
          iport[_i0].owning_controller = (struct isci_host *) malloc(_len_iport__i0__owning_controller0*sizeof(struct isci_host));
          for(int _j0 = 0; _j0 < _len_iport__i0__owning_controller0; _j0++) {
              int _len_iport__i0__owning_controller_user_parameters_phys0 = 1;
          iport[_i0].owning_controller->user_parameters.phys = (struct TYPE_2__ *) malloc(_len_iport__i0__owning_controller_user_parameters_phys0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_iport__i0__owning_controller_user_parameters_phys0; _j0++) {
            iport[_i0].owning_controller->user_parameters.phys->max_speed_generation = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = sci_port_is_valid_phy_assignment(iport,phy_index);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_iport0; _aux++) {
          free(iport[_aux].phy_table);
          }
          for(int _aux = 0; _aux < _len_iport0; _aux++) {
          free(iport[_aux].owning_controller);
          }
          free(iport);
        
        break;
    }
    // big-arr
    case 1:
    {
          int phy_index = 255;
          int _len_iport0 = 65025;
          struct isci_port * iport = (struct isci_port *) malloc(_len_iport0*sizeof(struct isci_port));
          for(int _i0 = 0; _i0 < _len_iport0; _i0++) {
            iport[_i0].physical_port_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iport__i0__phy_table0 = 1;
          iport[_i0].phy_table = (long *) malloc(_len_iport__i0__phy_table0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_iport__i0__phy_table0; _j0++) {
            iport[_i0].phy_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iport__i0__owning_controller0 = 1;
          iport[_i0].owning_controller = (struct isci_host *) malloc(_len_iport__i0__owning_controller0*sizeof(struct isci_host));
          for(int _j0 = 0; _j0 < _len_iport__i0__owning_controller0; _j0++) {
              int _len_iport__i0__owning_controller_user_parameters_phys0 = 1;
          iport[_i0].owning_controller->user_parameters.phys = (struct TYPE_2__ *) malloc(_len_iport__i0__owning_controller_user_parameters_phys0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_iport__i0__owning_controller_user_parameters_phys0; _j0++) {
            iport[_i0].owning_controller->user_parameters.phys->max_speed_generation = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = sci_port_is_valid_phy_assignment(iport,phy_index);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_iport0; _aux++) {
          free(iport[_aux].phy_table);
          }
          for(int _aux = 0; _aux < _len_iport0; _aux++) {
          free(iport[_aux].owning_controller);
          }
          free(iport);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int phy_index = 10;
          int _len_iport0 = 100;
          struct isci_port * iport = (struct isci_port *) malloc(_len_iport0*sizeof(struct isci_port));
          for(int _i0 = 0; _i0 < _len_iport0; _i0++) {
            iport[_i0].physical_port_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iport__i0__phy_table0 = 1;
          iport[_i0].phy_table = (long *) malloc(_len_iport__i0__phy_table0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_iport__i0__phy_table0; _j0++) {
            iport[_i0].phy_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iport__i0__owning_controller0 = 1;
          iport[_i0].owning_controller = (struct isci_host *) malloc(_len_iport__i0__owning_controller0*sizeof(struct isci_host));
          for(int _j0 = 0; _j0 < _len_iport__i0__owning_controller0; _j0++) {
              int _len_iport__i0__owning_controller_user_parameters_phys0 = 1;
          iport[_i0].owning_controller->user_parameters.phys = (struct TYPE_2__ *) malloc(_len_iport__i0__owning_controller_user_parameters_phys0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_iport__i0__owning_controller_user_parameters_phys0; _j0++) {
            iport[_i0].owning_controller->user_parameters.phys->max_speed_generation = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = sci_port_is_valid_phy_assignment(iport,phy_index);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_iport0; _aux++) {
          free(iport[_aux].phy_table);
          }
          for(int _aux = 0; _aux < _len_iport0; _aux++) {
          free(iport[_aux].owning_controller);
          }
          free(iport);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
