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
struct ccw_device_id {scalar_t__ driver_info; } ;
typedef  enum ctcm_channel_types { ____Placeholder_ctcm_channel_types } ctcm_channel_types ;

/* Variables and functions */
 int ctcm_channel_type_escon ; 
 int ctcm_channel_type_ficon ; 

__attribute__((used)) static enum ctcm_channel_types get_channel_type(struct ccw_device_id *id)
{
	enum ctcm_channel_types type;
	type = (enum ctcm_channel_types)id->driver_info;

	if (type == ctcm_channel_type_ficon)
		type = ctcm_channel_type_escon;

	return type;
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
          int _len_id0 = 1;
          struct ccw_device_id * id = (struct ccw_device_id *) malloc(_len_id0*sizeof(struct ccw_device_id));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0].driver_info = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum ctcm_channel_types benchRet = get_channel_type(id);
          free(id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_id0 = 65025;
          struct ccw_device_id * id = (struct ccw_device_id *) malloc(_len_id0*sizeof(struct ccw_device_id));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0].driver_info = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum ctcm_channel_types benchRet = get_channel_type(id);
          free(id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_id0 = 100;
          struct ccw_device_id * id = (struct ccw_device_id *) malloc(_len_id0*sizeof(struct ccw_device_id));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0].driver_info = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum ctcm_channel_types benchRet = get_channel_type(id);
          free(id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
