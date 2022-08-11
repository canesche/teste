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
struct nfp_port {scalar_t__ type; struct nfp_eth_table_port* eth_port; } ;
struct nfp_eth_table_port {int dummy; } ;

/* Variables and functions */
 scalar_t__ NFP_PORT_PHYS_PORT ; 

struct nfp_eth_table_port *__nfp_port_get_eth_port(struct nfp_port *port)
{
	if (!port)
		return NULL;
	if (port->type != NFP_PORT_PHYS_PORT)
		return NULL;

	return port->eth_port;
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
          struct nfp_port * port = (struct nfp_port *) malloc(_len_port0*sizeof(struct nfp_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_port__i0__eth_port0 = 1;
          port[_i0].eth_port = (struct nfp_eth_table_port *) malloc(_len_port__i0__eth_port0*sizeof(struct nfp_eth_table_port));
          for(int _j0 = 0; _j0 < _len_port__i0__eth_port0; _j0++) {
            port[_i0].eth_port->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct nfp_eth_table_port * benchRet = __nfp_port_get_eth_port(port);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].eth_port);
          }
          free(port);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_port0 = 65025;
          struct nfp_port * port = (struct nfp_port *) malloc(_len_port0*sizeof(struct nfp_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_port__i0__eth_port0 = 1;
          port[_i0].eth_port = (struct nfp_eth_table_port *) malloc(_len_port__i0__eth_port0*sizeof(struct nfp_eth_table_port));
          for(int _j0 = 0; _j0 < _len_port__i0__eth_port0; _j0++) {
            port[_i0].eth_port->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct nfp_eth_table_port * benchRet = __nfp_port_get_eth_port(port);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].eth_port);
          }
          free(port);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_port0 = 100;
          struct nfp_port * port = (struct nfp_port *) malloc(_len_port0*sizeof(struct nfp_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_port__i0__eth_port0 = 1;
          port[_i0].eth_port = (struct nfp_eth_table_port *) malloc(_len_port__i0__eth_port0*sizeof(struct nfp_eth_table_port));
          for(int _j0 = 0; _j0 < _len_port__i0__eth_port0; _j0++) {
            port[_i0].eth_port->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct nfp_eth_table_port * benchRet = __nfp_port_get_eth_port(port);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_port0; _aux++) {
          free(port[_aux].eth_port);
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
