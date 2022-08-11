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
typedef  int /*<<< orphan*/  u8 ;
typedef  int /*<<< orphan*/  u16 ;
struct rio_mport {int dummy; } ;

/* Variables and functions */

int rio_enable_rx_tx_port(struct rio_mport *port,
			  int local, u16 destid,
			  u8 hopcount, u8 port_num)
{
#ifdef CONFIG_RAPIDIO_ENABLE_RX_TX_PORTS
	u32 regval;
	u32 ext_ftr_ptr;
	u32 rmap;

	/*
	* enable rx input tx output port
	*/
	pr_debug("rio_enable_rx_tx_port(local = %d, destid = %d, hopcount = "
		 "%d, port_num = %d)\n", local, destid, hopcount, port_num);

	ext_ftr_ptr = rio_mport_get_physefb(port, local, destid,
					    hopcount, &rmap);

	if (local) {
		rio_local_read_config_32(port,
				ext_ftr_ptr + RIO_PORT_N_CTL_CSR(0, rmap),
				&regval);
	} else {
		if (rio_mport_read_config_32(port, destid, hopcount,
			ext_ftr_ptr + RIO_PORT_N_CTL_CSR(port_num, rmap),
				&regval) < 0)
			return -EIO;
	}

	regval = regval | RIO_PORT_N_CTL_EN_RX | RIO_PORT_N_CTL_EN_TX;

	if (local) {
		rio_local_write_config_32(port,
			ext_ftr_ptr + RIO_PORT_N_CTL_CSR(0, rmap), regval);
	} else {
		if (rio_mport_write_config_32(port, destid, hopcount,
			ext_ftr_ptr + RIO_PORT_N_CTL_CSR(port_num, rmap),
				regval) < 0)
			return -EIO;
	}
#endif
	return 0;
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
          int local = 100;
          int destid = 100;
          int hopcount = 100;
          int port_num = 100;
          int _len_port0 = 1;
          struct rio_mport * port = (struct rio_mport *) malloc(_len_port0*sizeof(struct rio_mport));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rio_enable_rx_tx_port(port,local,destid,hopcount,port_num);
          printf("%d\n", benchRet); 
          free(port);
        
        break;
    }
    // big-arr
    case 1:
    {
          int local = 255;
          int destid = 255;
          int hopcount = 255;
          int port_num = 255;
          int _len_port0 = 65025;
          struct rio_mport * port = (struct rio_mport *) malloc(_len_port0*sizeof(struct rio_mport));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rio_enable_rx_tx_port(port,local,destid,hopcount,port_num);
          printf("%d\n", benchRet); 
          free(port);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int local = 10;
          int destid = 10;
          int hopcount = 10;
          int port_num = 10;
          int _len_port0 = 100;
          struct rio_mport * port = (struct rio_mport *) malloc(_len_port0*sizeof(struct rio_mport));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rio_enable_rx_tx_port(port,local,destid,hopcount,port_num);
          printf("%d\n", benchRet); 
          free(port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
