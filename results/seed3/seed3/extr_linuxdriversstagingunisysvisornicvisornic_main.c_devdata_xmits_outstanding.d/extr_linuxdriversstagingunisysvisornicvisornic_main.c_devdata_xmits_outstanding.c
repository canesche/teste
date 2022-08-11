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
struct TYPE_2__ {scalar_t__ sent_xmit; scalar_t__ got_xmit_done; } ;
struct visornic_devdata {TYPE_1__ chstat; } ;

/* Variables and functions */
 unsigned long ULONG_MAX ; 

__attribute__((used)) static unsigned long devdata_xmits_outstanding(struct visornic_devdata *devdata)
{
	if (devdata->chstat.sent_xmit >= devdata->chstat.got_xmit_done)
		return devdata->chstat.sent_xmit -
			devdata->chstat.got_xmit_done;
	return (ULONG_MAX - devdata->chstat.got_xmit_done
		+ devdata->chstat.sent_xmit + 1);
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
          int _len_devdata0 = 1;
          struct visornic_devdata * devdata = (struct visornic_devdata *) malloc(_len_devdata0*sizeof(struct visornic_devdata));
          for(int _i0 = 0; _i0 < _len_devdata0; _i0++) {
            devdata[_i0].chstat.sent_xmit = ((-2 * (next_i()%2)) + 1) * next_i();
        devdata[_i0].chstat.got_xmit_done = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = devdata_xmits_outstanding(devdata);
          printf("%lu\n", benchRet); 
          free(devdata);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_devdata0 = 65025;
          struct visornic_devdata * devdata = (struct visornic_devdata *) malloc(_len_devdata0*sizeof(struct visornic_devdata));
          for(int _i0 = 0; _i0 < _len_devdata0; _i0++) {
            devdata[_i0].chstat.sent_xmit = ((-2 * (next_i()%2)) + 1) * next_i();
        devdata[_i0].chstat.got_xmit_done = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = devdata_xmits_outstanding(devdata);
          printf("%lu\n", benchRet); 
          free(devdata);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_devdata0 = 100;
          struct visornic_devdata * devdata = (struct visornic_devdata *) malloc(_len_devdata0*sizeof(struct visornic_devdata));
          for(int _i0 = 0; _i0 < _len_devdata0; _i0++) {
            devdata[_i0].chstat.sent_xmit = ((-2 * (next_i()%2)) + 1) * next_i();
        devdata[_i0].chstat.got_xmit_done = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = devdata_xmits_outstanding(devdata);
          printf("%lu\n", benchRet); 
          free(devdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
