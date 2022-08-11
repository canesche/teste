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
struct ehea_port {int logical_port_id; } ;
struct ehea_adapter {struct ehea_port** port; } ;

/* Variables and functions */
 int EHEA_MAX_PORTS ; 

__attribute__((used)) static struct ehea_port *ehea_get_port(struct ehea_adapter *adapter,
				       int logical_port)
{
	int i;

	for (i = 0; i < EHEA_MAX_PORTS; i++)
		if (adapter->port[i])
			if (adapter->port[i]->logical_port_id == logical_port)
				return adapter->port[i];
	return NULL;
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
          int logical_port = 100;
          int _len_adapter0 = 1;
          struct ehea_adapter * adapter = (struct ehea_adapter *) malloc(_len_adapter0*sizeof(struct ehea_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__port0 = 1;
          adapter[_i0].port = (struct ehea_port **) malloc(_len_adapter__i0__port0*sizeof(struct ehea_port *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__port0; _j0++) {
            int _len_adapter__i0__port1 = 1;
            adapter[_i0].port[_j0] = (struct ehea_port *) malloc(_len_adapter__i0__port1*sizeof(struct ehea_port));
            for(int _j1 = 0; _j1 < _len_adapter__i0__port1; _j1++) {
              adapter[_i0].port[_j0]->logical_port_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct ehea_port * benchRet = ehea_get_port(adapter,logical_port);
          printf("%d\n", (*benchRet).logical_port_id);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(*(adapter[_aux].port));
        free(adapter[_aux].port);
          }
          free(adapter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int logical_port = 255;
          int _len_adapter0 = 65025;
          struct ehea_adapter * adapter = (struct ehea_adapter *) malloc(_len_adapter0*sizeof(struct ehea_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__port0 = 1;
          adapter[_i0].port = (struct ehea_port **) malloc(_len_adapter__i0__port0*sizeof(struct ehea_port *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__port0; _j0++) {
            int _len_adapter__i0__port1 = 1;
            adapter[_i0].port[_j0] = (struct ehea_port *) malloc(_len_adapter__i0__port1*sizeof(struct ehea_port));
            for(int _j1 = 0; _j1 < _len_adapter__i0__port1; _j1++) {
              adapter[_i0].port[_j0]->logical_port_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct ehea_port * benchRet = ehea_get_port(adapter,logical_port);
          printf("%d\n", (*benchRet).logical_port_id);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(*(adapter[_aux].port));
        free(adapter[_aux].port);
          }
          free(adapter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int logical_port = 10;
          int _len_adapter0 = 100;
          struct ehea_adapter * adapter = (struct ehea_adapter *) malloc(_len_adapter0*sizeof(struct ehea_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__port0 = 1;
          adapter[_i0].port = (struct ehea_port **) malloc(_len_adapter__i0__port0*sizeof(struct ehea_port *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__port0; _j0++) {
            int _len_adapter__i0__port1 = 1;
            adapter[_i0].port[_j0] = (struct ehea_port *) malloc(_len_adapter__i0__port1*sizeof(struct ehea_port));
            for(int _j1 = 0; _j1 < _len_adapter__i0__port1; _j1++) {
              adapter[_i0].port[_j0]->logical_port_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct ehea_port * benchRet = ehea_get_port(adapter,logical_port);
          printf("%d\n", (*benchRet).logical_port_id);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(*(adapter[_aux].port));
        free(adapter[_aux].port);
          }
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
