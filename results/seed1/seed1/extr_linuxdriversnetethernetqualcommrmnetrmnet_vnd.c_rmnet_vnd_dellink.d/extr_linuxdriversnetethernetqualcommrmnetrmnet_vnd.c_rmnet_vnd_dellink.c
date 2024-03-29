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
typedef  scalar_t__ u8 ;
struct rmnet_port {int /*<<< orphan*/  nr_rmnet_devs; } ;
struct rmnet_endpoint {int /*<<< orphan*/ * egress_dev; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ RMNET_MAX_LOGICAL_EP ; 

int rmnet_vnd_dellink(u8 id, struct rmnet_port *port,
		      struct rmnet_endpoint *ep)
{
	if (id >= RMNET_MAX_LOGICAL_EP || !ep->egress_dev)
		return -EINVAL;

	ep->egress_dev = NULL;
	port->nr_rmnet_devs--;
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
          long id = 100;
          int _len_port0 = 1;
          struct rmnet_port * port = (struct rmnet_port *) malloc(_len_port0*sizeof(struct rmnet_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].nr_rmnet_devs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ep0 = 1;
          struct rmnet_endpoint * ep = (struct rmnet_endpoint *) malloc(_len_ep0*sizeof(struct rmnet_endpoint));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
              int _len_ep__i0__egress_dev0 = 1;
          ep[_i0].egress_dev = (int *) malloc(_len_ep__i0__egress_dev0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ep__i0__egress_dev0; _j0++) {
            ep[_i0].egress_dev[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rmnet_vnd_dellink(id,port,ep);
          printf("%d\n", benchRet); 
          free(port);
          for(int _aux = 0; _aux < _len_ep0; _aux++) {
          free(ep[_aux].egress_dev);
          }
          free(ep);
        
        break;
    }
    // big-arr
    case 1:
    {
          long id = 255;
          int _len_port0 = 65025;
          struct rmnet_port * port = (struct rmnet_port *) malloc(_len_port0*sizeof(struct rmnet_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].nr_rmnet_devs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ep0 = 65025;
          struct rmnet_endpoint * ep = (struct rmnet_endpoint *) malloc(_len_ep0*sizeof(struct rmnet_endpoint));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
              int _len_ep__i0__egress_dev0 = 1;
          ep[_i0].egress_dev = (int *) malloc(_len_ep__i0__egress_dev0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ep__i0__egress_dev0; _j0++) {
            ep[_i0].egress_dev[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rmnet_vnd_dellink(id,port,ep);
          printf("%d\n", benchRet); 
          free(port);
          for(int _aux = 0; _aux < _len_ep0; _aux++) {
          free(ep[_aux].egress_dev);
          }
          free(ep);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long id = 10;
          int _len_port0 = 100;
          struct rmnet_port * port = (struct rmnet_port *) malloc(_len_port0*sizeof(struct rmnet_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].nr_rmnet_devs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ep0 = 100;
          struct rmnet_endpoint * ep = (struct rmnet_endpoint *) malloc(_len_ep0*sizeof(struct rmnet_endpoint));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
              int _len_ep__i0__egress_dev0 = 1;
          ep[_i0].egress_dev = (int *) malloc(_len_ep__i0__egress_dev0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ep__i0__egress_dev0; _j0++) {
            ep[_i0].egress_dev[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rmnet_vnd_dellink(id,port,ep);
          printf("%d\n", benchRet); 
          free(port);
          for(int _aux = 0; _aux < _len_ep0; _aux++) {
          free(ep[_aux].egress_dev);
          }
          free(ep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
