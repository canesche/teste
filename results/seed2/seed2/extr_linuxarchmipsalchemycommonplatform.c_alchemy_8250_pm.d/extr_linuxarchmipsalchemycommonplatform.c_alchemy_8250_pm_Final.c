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
struct uart_port {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void alchemy_8250_pm(struct uart_port *port, unsigned int state,
			    unsigned int old_state)
{
#ifdef CONFIG_SERIAL_8250
	switch (state) {
	case 0:
		alchemy_uart_enable(CPHYSADDR(port->membase));
		serial8250_do_pm(port, state, old_state);
		break;
	case 3:		/* power off */
		serial8250_do_pm(port, state, old_state);
		alchemy_uart_disable(CPHYSADDR(port->membase));
		break;
	default:
		serial8250_do_pm(port, state, old_state);
		break;
	}
#endif
}


// ------------------------------------------------------------------------- //




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
          unsigned int state = 100;
          unsigned int old_state = 100;
          int _len_port0 = 1;
          struct uart_port * port = (struct uart_port *) malloc(_len_port0*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          alchemy_8250_pm(port,state,old_state);
          free(port);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int state = 255;
          unsigned int old_state = 255;
          int _len_port0 = 65025;
          struct uart_port * port = (struct uart_port *) malloc(_len_port0*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          alchemy_8250_pm(port,state,old_state);
          free(port);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int state = 10;
          unsigned int old_state = 10;
          int _len_port0 = 100;
          struct uart_port * port = (struct uart_port *) malloc(_len_port0*sizeof(struct uart_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          alchemy_8250_pm(port,state,old_state);
          free(port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
