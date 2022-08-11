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
typedef  scalar_t__ u16 ;
struct qede_dev {scalar_t__ vxlan_dst_port; scalar_t__ geneve_dst_port; } ;

/* Variables and functions */

void qede_udp_ports_update(void *dev, u16 vxlan_port, u16 geneve_port)
{
	struct qede_dev *edev = dev;

	if (edev->vxlan_dst_port != vxlan_port)
		edev->vxlan_dst_port = 0;

	if (edev->geneve_dst_port != geneve_port)
		edev->geneve_dst_port = 0;
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
          long vxlan_port = 100;
          long geneve_port = 100;
          void * dev;
          qede_udp_ports_update(dev,vxlan_port,geneve_port);
        
        break;
    }
    // big-arr
    case 1:
    {
          long vxlan_port = 255;
          long geneve_port = 255;
          void * dev;
          qede_udp_ports_update(dev,vxlan_port,geneve_port);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long vxlan_port = 10;
          long geneve_port = 10;
          void * dev;
          qede_udp_ports_update(dev,vxlan_port,geneve_port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
