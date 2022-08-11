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
typedef  int u8 ;
struct net_device {int dummy; } ;
struct cmpk_query_cfg {int cfg_action; int cfg_type; int cfg_size; int cfg_page; int cfg_offset; int value; int mask; } ;

/* Variables and functions */

__attribute__((used)) static void cmpk_handle_query_config_rx(struct net_device *dev, u8 *pmsg)
{
	struct cmpk_query_cfg	rx_query_cfg;

	/* 1. Extract TX feedback info from RFD to temp structure buffer. */
	/* It seems that FW use big endian(MIPS) and DRV use little endian in
	 * windows OS. So we have to read the content byte by byte or transfer
	 * endian type before copy the message copy.
	 */
	rx_query_cfg.cfg_action		= (pmsg[4] & 0x80) >> 7;
	rx_query_cfg.cfg_type		= (pmsg[4] & 0x60) >> 5;
	rx_query_cfg.cfg_size		= (pmsg[4] & 0x18) >> 3;
	rx_query_cfg.cfg_page		= (pmsg[6] & 0x0F) >> 0;
	rx_query_cfg.cfg_offset		= pmsg[7];
	rx_query_cfg.value		= (pmsg[8]  << 24) | (pmsg[9]  << 16) |
					  (pmsg[10] <<  8) | (pmsg[11] <<  0);
	rx_query_cfg.mask		= (pmsg[12] << 24) | (pmsg[13] << 16) |
					  (pmsg[14] <<  8) | (pmsg[15] <<  0);
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
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pmsg0 = 1;
          int * pmsg = (int *) malloc(_len_pmsg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pmsg0; _i0++) {
            pmsg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cmpk_handle_query_config_rx(dev,pmsg);
          free(dev);
          free(pmsg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pmsg0 = 65025;
          int * pmsg = (int *) malloc(_len_pmsg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pmsg0; _i0++) {
            pmsg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cmpk_handle_query_config_rx(dev,pmsg);
          free(dev);
          free(pmsg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pmsg0 = 100;
          int * pmsg = (int *) malloc(_len_pmsg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pmsg0; _i0++) {
            pmsg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cmpk_handle_query_config_rx(dev,pmsg);
          free(dev);
          free(pmsg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
