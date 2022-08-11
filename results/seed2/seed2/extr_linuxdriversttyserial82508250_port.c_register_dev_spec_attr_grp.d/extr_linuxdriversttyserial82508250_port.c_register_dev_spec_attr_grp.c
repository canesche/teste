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
struct TYPE_2__ {size_t type; int /*<<< orphan*/ * attr_group; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct serial8250_config {scalar_t__* rxtrig_bytes; } ;

/* Variables and functions */
 int /*<<< orphan*/  serial8250_dev_attr_group ; 
 struct serial8250_config* uart_config ; 

__attribute__((used)) static void register_dev_spec_attr_grp(struct uart_8250_port *up)
{
	const struct serial8250_config *conf_type = &uart_config[up->port.type];

	if (conf_type->rxtrig_bytes[0])
		up->port.attr_group = &serial8250_dev_attr_group;
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
          int _len_up0 = 1;
          struct uart_8250_port * up = (struct uart_8250_port *) malloc(_len_up0*sizeof(struct uart_8250_port));
          for(int _i0 = 0; _i0 < _len_up0; _i0++) {
            up[_i0].port.type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_up__i0__port_attr_group0 = 1;
          up[_i0].port.attr_group = (int *) malloc(_len_up__i0__port_attr_group0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_up__i0__port_attr_group0; _j0++) {
            up[_i0].port.attr_group[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          register_dev_spec_attr_grp(up);
          free(up);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_up0 = 65025;
          struct uart_8250_port * up = (struct uart_8250_port *) malloc(_len_up0*sizeof(struct uart_8250_port));
          for(int _i0 = 0; _i0 < _len_up0; _i0++) {
            up[_i0].port.type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_up__i0__port_attr_group0 = 1;
          up[_i0].port.attr_group = (int *) malloc(_len_up__i0__port_attr_group0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_up__i0__port_attr_group0; _j0++) {
            up[_i0].port.attr_group[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          register_dev_spec_attr_grp(up);
          free(up);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_up0 = 100;
          struct uart_8250_port * up = (struct uart_8250_port *) malloc(_len_up0*sizeof(struct uart_8250_port));
          for(int _i0 = 0; _i0 < _len_up0; _i0++) {
            up[_i0].port.type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_up__i0__port_attr_group0 = 1;
          up[_i0].port.attr_group = (int *) malloc(_len_up__i0__port_attr_group0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_up__i0__port_attr_group0; _j0++) {
            up[_i0].port.attr_group[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          register_dev_spec_attr_grp(up);
          free(up);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
