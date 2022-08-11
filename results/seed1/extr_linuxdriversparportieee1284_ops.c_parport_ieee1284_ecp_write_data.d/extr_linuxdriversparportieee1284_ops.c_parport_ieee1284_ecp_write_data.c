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
struct parport {int dummy; } ;

/* Variables and functions */

size_t parport_ieee1284_ecp_write_data (struct parport *port,
					const void *buffer, size_t len,
					int flags)
{
#ifndef CONFIG_PARPORT_1284
	return 0;
#else
	const unsigned char *buf = buffer;
	size_t written;
	int retry;

	port = port->physport;

	if (port->ieee1284.phase != IEEE1284_PH_FWD_IDLE)
		if (ecp_reverse_to_forward (port))
			return 0;

	port->ieee1284.phase = IEEE1284_PH_FWD_DATA;

	/* HostAck high (data, not command) */
	parport_frob_control (port,
			      PARPORT_CONTROL_AUTOFD
			      | PARPORT_CONTROL_STROBE
			      | PARPORT_CONTROL_INIT,
			      PARPORT_CONTROL_INIT);
	for (written = 0; written < len; written++, buf++) {
		unsigned long expire = jiffies + port->cad->timeout;
		unsigned char byte;

		byte = *buf;
	try_again:
		parport_write_data (port, byte);
		parport_frob_control (port, PARPORT_CONTROL_STROBE,
				      PARPORT_CONTROL_STROBE);
		udelay (5);
		for (retry = 0; retry < 100; retry++) {
			if (!parport_wait_peripheral (port,
						      PARPORT_STATUS_BUSY, 0))
				goto success;

			if (signal_pending (current)) {
				parport_frob_control (port,
						      PARPORT_CONTROL_STROBE,
						      0);
				break;
			}
		}

		/* Time for Host Transfer Recovery (page 41 of IEEE1284) */
		DPRINTK (KERN_DEBUG "%s: ECP transfer stalled!\n", port->name);

		parport_frob_control (port, PARPORT_CONTROL_INIT,
				      PARPORT_CONTROL_INIT);
		udelay (50);
		if (parport_read_status (port) & PARPORT_STATUS_PAPEROUT) {
			/* It's buggered. */
			parport_frob_control (port, PARPORT_CONTROL_INIT, 0);
			break;
		}

		parport_frob_control (port, PARPORT_CONTROL_INIT, 0);
		udelay (50);
		if (!(parport_read_status (port) & PARPORT_STATUS_PAPEROUT))
			break;

		DPRINTK (KERN_DEBUG "%s: Host transfer recovered\n",
			 port->name);

		if (time_after_eq (jiffies, expire)) break;
		goto try_again;
	success:
		parport_frob_control (port, PARPORT_CONTROL_STROBE, 0);
		udelay (5);
		if (parport_wait_peripheral (port,
					     PARPORT_STATUS_BUSY,
					     PARPORT_STATUS_BUSY))
			/* Peripheral hasn't accepted the data. */
			break;
	}

	port->ieee1284.phase = IEEE1284_PH_FWD_IDLE;

	return written;
#endif /* IEEE1284 support */
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
          unsigned long len = 100;
          int flags = 100;
          int _len_port0 = 1;
          struct parport * port = (struct parport *) malloc(_len_port0*sizeof(struct parport));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer0 = 1;
          const void * buffer = (const void *) malloc(_len_buffer0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = 0;
          }
          unsigned long benchRet = parport_ieee1284_ecp_write_data(port,buffer,len,flags);
          printf("%lu\n", benchRet); 
          free(port);
          free(buffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long len = 255;
          int flags = 255;
          int _len_port0 = 65025;
          struct parport * port = (struct parport *) malloc(_len_port0*sizeof(struct parport));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer0 = 65025;
          const void * buffer = (const void *) malloc(_len_buffer0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = 0;
          }
          unsigned long benchRet = parport_ieee1284_ecp_write_data(port,buffer,len,flags);
          printf("%lu\n", benchRet); 
          free(port);
          free(buffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long len = 10;
          int flags = 10;
          int _len_port0 = 100;
          struct parport * port = (struct parport *) malloc(_len_port0*sizeof(struct parport));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer0 = 100;
          const void * buffer = (const void *) malloc(_len_buffer0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = 0;
          }
          unsigned long benchRet = parport_ieee1284_ecp_write_data(port,buffer,len,flags);
          printf("%lu\n", benchRet); 
          free(port);
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
