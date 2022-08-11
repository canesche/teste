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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct mma9553_data {int num_events; TYPE_2__* events; } ;
typedef  enum iio_chan_type { ____Placeholder_iio_chan_type } iio_chan_type ;
struct TYPE_4__ {scalar_t__ enabled; TYPE_1__* info; } ;
struct TYPE_3__ {int type; } ;

/* Variables and functions */

__attribute__((used)) static bool mma9553_is_any_event_enabled(struct mma9553_data *data,
					 bool check_type,
					 enum iio_chan_type type)
{
	int i;

	for (i = 0; i < data->num_events; i++)
		if ((check_type && data->events[i].info->type == type &&
		     data->events[i].enabled) ||
		     (!check_type && data->events[i].enabled))
			return true;

	return false;
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
          int check_type = 100;
          enum iio_chan_type type = 0;
          int _len_data0 = 1;
          struct mma9553_data * data = (struct mma9553_data *) malloc(_len_data0*sizeof(struct mma9553_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].num_events = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__events0 = 1;
          data[_i0].events = (struct TYPE_4__ *) malloc(_len_data__i0__events0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_data__i0__events0; _j0++) {
            data[_i0].events->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__events_info0 = 1;
          data[_i0].events->info = (struct TYPE_3__ *) malloc(_len_data__i0__events_info0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_data__i0__events_info0; _j0++) {
            data[_i0].events->info->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = mma9553_is_any_event_enabled(data,check_type,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].events);
          }
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int check_type = 255;
          enum iio_chan_type type = 0;
          int _len_data0 = 65025;
          struct mma9553_data * data = (struct mma9553_data *) malloc(_len_data0*sizeof(struct mma9553_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].num_events = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__events0 = 1;
          data[_i0].events = (struct TYPE_4__ *) malloc(_len_data__i0__events0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_data__i0__events0; _j0++) {
            data[_i0].events->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__events_info0 = 1;
          data[_i0].events->info = (struct TYPE_3__ *) malloc(_len_data__i0__events_info0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_data__i0__events_info0; _j0++) {
            data[_i0].events->info->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = mma9553_is_any_event_enabled(data,check_type,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].events);
          }
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int check_type = 10;
          enum iio_chan_type type = 0;
          int _len_data0 = 100;
          struct mma9553_data * data = (struct mma9553_data *) malloc(_len_data0*sizeof(struct mma9553_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].num_events = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__events0 = 1;
          data[_i0].events = (struct TYPE_4__ *) malloc(_len_data__i0__events0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_data__i0__events0; _j0++) {
            data[_i0].events->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__events_info0 = 1;
          data[_i0].events->info = (struct TYPE_3__ *) malloc(_len_data__i0__events_info0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_data__i0__events_info0; _j0++) {
            data[_i0].events->info->type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = mma9553_is_any_event_enabled(data,check_type,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].events);
          }
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
