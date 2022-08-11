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
struct uli_priv {unsigned int* scr_cfg_addr; } ;
struct ata_port {size_t port_no; TYPE_1__* host; } ;
struct TYPE_2__ {struct uli_priv* private_data; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int get_scr_cfg_addr(struct ata_port *ap, unsigned int sc_reg)
{
	struct uli_priv *hpriv = ap->host->private_data;
	return hpriv->scr_cfg_addr[ap->port_no] + (4 * sc_reg);
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
          unsigned int sc_reg = 100;
          int _len_ap0 = 1;
          struct ata_port * ap = (struct ata_port *) malloc(_len_ap0*sizeof(struct ata_port));
          for(int _i0 = 0; _i0 < _len_ap0; _i0++) {
            ap[_i0].port_no = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ap__i0__host0 = 1;
          ap[_i0].host = (struct TYPE_2__ *) malloc(_len_ap__i0__host0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ap__i0__host0; _j0++) {
              int _len_ap__i0__host_private_data0 = 1;
          ap[_i0].host->private_data = (struct uli_priv *) malloc(_len_ap__i0__host_private_data0*sizeof(struct uli_priv));
          for(int _j0 = 0; _j0 < _len_ap__i0__host_private_data0; _j0++) {
              int _len_ap__i0__host_private_data_scr_cfg_addr0 = 1;
          ap[_i0].host->private_data->scr_cfg_addr = (unsigned int *) malloc(_len_ap__i0__host_private_data_scr_cfg_addr0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_ap__i0__host_private_data_scr_cfg_addr0; _j0++) {
            ap[_i0].host->private_data->scr_cfg_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          unsigned int benchRet = get_scr_cfg_addr(ap,sc_reg);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_ap0; _aux++) {
          free(ap[_aux].host);
          }
          free(ap);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int sc_reg = 255;
          int _len_ap0 = 65025;
          struct ata_port * ap = (struct ata_port *) malloc(_len_ap0*sizeof(struct ata_port));
          for(int _i0 = 0; _i0 < _len_ap0; _i0++) {
            ap[_i0].port_no = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ap__i0__host0 = 1;
          ap[_i0].host = (struct TYPE_2__ *) malloc(_len_ap__i0__host0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ap__i0__host0; _j0++) {
              int _len_ap__i0__host_private_data0 = 1;
          ap[_i0].host->private_data = (struct uli_priv *) malloc(_len_ap__i0__host_private_data0*sizeof(struct uli_priv));
          for(int _j0 = 0; _j0 < _len_ap__i0__host_private_data0; _j0++) {
              int _len_ap__i0__host_private_data_scr_cfg_addr0 = 1;
          ap[_i0].host->private_data->scr_cfg_addr = (unsigned int *) malloc(_len_ap__i0__host_private_data_scr_cfg_addr0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_ap__i0__host_private_data_scr_cfg_addr0; _j0++) {
            ap[_i0].host->private_data->scr_cfg_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          unsigned int benchRet = get_scr_cfg_addr(ap,sc_reg);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_ap0; _aux++) {
          free(ap[_aux].host);
          }
          free(ap);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int sc_reg = 10;
          int _len_ap0 = 100;
          struct ata_port * ap = (struct ata_port *) malloc(_len_ap0*sizeof(struct ata_port));
          for(int _i0 = 0; _i0 < _len_ap0; _i0++) {
            ap[_i0].port_no = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ap__i0__host0 = 1;
          ap[_i0].host = (struct TYPE_2__ *) malloc(_len_ap__i0__host0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ap__i0__host0; _j0++) {
              int _len_ap__i0__host_private_data0 = 1;
          ap[_i0].host->private_data = (struct uli_priv *) malloc(_len_ap__i0__host_private_data0*sizeof(struct uli_priv));
          for(int _j0 = 0; _j0 < _len_ap__i0__host_private_data0; _j0++) {
              int _len_ap__i0__host_private_data_scr_cfg_addr0 = 1;
          ap[_i0].host->private_data->scr_cfg_addr = (unsigned int *) malloc(_len_ap__i0__host_private_data_scr_cfg_addr0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_ap__i0__host_private_data_scr_cfg_addr0; _j0++) {
            ap[_i0].host->private_data->scr_cfg_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          unsigned int benchRet = get_scr_cfg_addr(ap,sc_reg);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_ap0; _aux++) {
          free(ap[_aux].host);
          }
          free(ap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
