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
typedef  scalar_t__ u32 ;
struct icom_port {int port; void* status; void* imbed_modem; } ;
struct icom_adapter {scalar_t__ subsystem_id; scalar_t__ version; int numb_ports; struct icom_port* port_info; } ;

/* Variables and functions */
 scalar_t__ ADAPTER_V1 ; 
 void* ICOM_IMBED_MODEM ; 
 void* ICOM_PORT_ACTIVE ; 
 void* ICOM_PORT_OFF ; 
 void* ICOM_RVX ; 
 void* ICOM_UNKNOWN ; 
 scalar_t__ PCI_DEVICE_ID_IBM_ICOM_FOUR_PORT_MODEL ; 
 scalar_t__ PCI_DEVICE_ID_IBM_ICOM_V2_ONE_PORT_RVX_ONE_PORT_MDM ; 

__attribute__((used)) static int icom_init_ports(struct icom_adapter *icom_adapter)
{
	u32 subsystem_id = icom_adapter->subsystem_id;
	int i;
	struct icom_port *icom_port;

	if (icom_adapter->version == ADAPTER_V1) {
		icom_adapter->numb_ports = 2;

		for (i = 0; i < 2; i++) {
			icom_port = &icom_adapter->port_info[i];
			icom_port->port = i;
			icom_port->status = ICOM_PORT_ACTIVE;
			icom_port->imbed_modem = ICOM_UNKNOWN;
		}
	} else {
		if (subsystem_id == PCI_DEVICE_ID_IBM_ICOM_FOUR_PORT_MODEL) {
			icom_adapter->numb_ports = 4;

			for (i = 0; i < 4; i++) {
				icom_port = &icom_adapter->port_info[i];

				icom_port->port = i;
				icom_port->status = ICOM_PORT_ACTIVE;
				icom_port->imbed_modem = ICOM_IMBED_MODEM;
			}
		} else {
			icom_adapter->numb_ports = 4;

			icom_adapter->port_info[0].port = 0;
			icom_adapter->port_info[0].status = ICOM_PORT_ACTIVE;

			if (subsystem_id ==
			    PCI_DEVICE_ID_IBM_ICOM_V2_ONE_PORT_RVX_ONE_PORT_MDM) {
				icom_adapter->port_info[0].imbed_modem = ICOM_IMBED_MODEM;
			} else {
				icom_adapter->port_info[0].imbed_modem = ICOM_RVX;
			}

			icom_adapter->port_info[1].status = ICOM_PORT_OFF;

			icom_adapter->port_info[2].port = 2;
			icom_adapter->port_info[2].status = ICOM_PORT_ACTIVE;
			icom_adapter->port_info[2].imbed_modem = ICOM_RVX;
			icom_adapter->port_info[3].status = ICOM_PORT_OFF;
		}
	}

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
          int _len_icom_adapter0 = 1;
          struct icom_adapter * icom_adapter = (struct icom_adapter *) malloc(_len_icom_adapter0*sizeof(struct icom_adapter));
          for(int _i0 = 0; _i0 < _len_icom_adapter0; _i0++) {
            icom_adapter[_i0].subsystem_id = ((-2 * (next_i()%2)) + 1) * next_i();
        icom_adapter[_i0].version = ((-2 * (next_i()%2)) + 1) * next_i();
        icom_adapter[_i0].numb_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_icom_adapter__i0__port_info0 = 1;
          icom_adapter[_i0].port_info = (struct icom_port *) malloc(_len_icom_adapter__i0__port_info0*sizeof(struct icom_port));
          for(int _j0 = 0; _j0 < _len_icom_adapter__i0__port_info0; _j0++) {
            icom_adapter[_i0].port_info->port = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = icom_init_ports(icom_adapter);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_icom_adapter0; _aux++) {
          free(icom_adapter[_aux].port_info);
          }
          free(icom_adapter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_icom_adapter0 = 65025;
          struct icom_adapter * icom_adapter = (struct icom_adapter *) malloc(_len_icom_adapter0*sizeof(struct icom_adapter));
          for(int _i0 = 0; _i0 < _len_icom_adapter0; _i0++) {
            icom_adapter[_i0].subsystem_id = ((-2 * (next_i()%2)) + 1) * next_i();
        icom_adapter[_i0].version = ((-2 * (next_i()%2)) + 1) * next_i();
        icom_adapter[_i0].numb_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_icom_adapter__i0__port_info0 = 1;
          icom_adapter[_i0].port_info = (struct icom_port *) malloc(_len_icom_adapter__i0__port_info0*sizeof(struct icom_port));
          for(int _j0 = 0; _j0 < _len_icom_adapter__i0__port_info0; _j0++) {
            icom_adapter[_i0].port_info->port = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = icom_init_ports(icom_adapter);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_icom_adapter0; _aux++) {
          free(icom_adapter[_aux].port_info);
          }
          free(icom_adapter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_icom_adapter0 = 100;
          struct icom_adapter * icom_adapter = (struct icom_adapter *) malloc(_len_icom_adapter0*sizeof(struct icom_adapter));
          for(int _i0 = 0; _i0 < _len_icom_adapter0; _i0++) {
            icom_adapter[_i0].subsystem_id = ((-2 * (next_i()%2)) + 1) * next_i();
        icom_adapter[_i0].version = ((-2 * (next_i()%2)) + 1) * next_i();
        icom_adapter[_i0].numb_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_icom_adapter__i0__port_info0 = 1;
          icom_adapter[_i0].port_info = (struct icom_port *) malloc(_len_icom_adapter__i0__port_info0*sizeof(struct icom_port));
          for(int _j0 = 0; _j0 < _len_icom_adapter__i0__port_info0; _j0++) {
            icom_adapter[_i0].port_info->port = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = icom_init_ports(icom_adapter);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_icom_adapter0; _aux++) {
          free(icom_adapter[_aux].port_info);
          }
          free(icom_adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
