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
struct htc_target {TYPE_2__* dev; } ;
typedef  enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;
struct TYPE_4__ {TYPE_1__* ar; } ;
struct TYPE_3__ {int ctrl_ep; } ;

/* Variables and functions */
 int ATH6KL_AMSDU_BUFFER_SIZE ; 
 int ATH6KL_BUFFER_SIZE ; 

__attribute__((used)) static inline bool htc_valid_rx_frame_len(struct htc_target *target,
					  enum htc_endpoint_id eid, int len)
{
	return (eid == target->dev->ar->ctrl_ep) ?
		len <= ATH6KL_BUFFER_SIZE : len <= ATH6KL_AMSDU_BUFFER_SIZE;
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
          enum htc_endpoint_id eid = 100;
          int len = 100;
          int _len_target0 = 1;
          struct htc_target * target = (struct htc_target *) malloc(_len_target0*sizeof(struct htc_target));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
              int _len_target__i0__dev0 = 1;
          target[_i0].dev = (struct TYPE_4__ *) malloc(_len_target__i0__dev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_target__i0__dev0; _j0++) {
              int _len_target__i0__dev_ar0 = 1;
          target[_i0].dev->ar = (struct TYPE_3__ *) malloc(_len_target__i0__dev_ar0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_target__i0__dev_ar0; _j0++) {
            target[_i0].dev->ar->ctrl_ep = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = htc_valid_rx_frame_len(target,eid,len);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_target0; _aux++) {
          free(target[_aux].dev);
          }
          free(target);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum htc_endpoint_id eid = 255;
          int len = 255;
          int _len_target0 = 65025;
          struct htc_target * target = (struct htc_target *) malloc(_len_target0*sizeof(struct htc_target));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
              int _len_target__i0__dev0 = 1;
          target[_i0].dev = (struct TYPE_4__ *) malloc(_len_target__i0__dev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_target__i0__dev0; _j0++) {
              int _len_target__i0__dev_ar0 = 1;
          target[_i0].dev->ar = (struct TYPE_3__ *) malloc(_len_target__i0__dev_ar0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_target__i0__dev_ar0; _j0++) {
            target[_i0].dev->ar->ctrl_ep = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = htc_valid_rx_frame_len(target,eid,len);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_target0; _aux++) {
          free(target[_aux].dev);
          }
          free(target);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum htc_endpoint_id eid = 10;
          int len = 10;
          int _len_target0 = 100;
          struct htc_target * target = (struct htc_target *) malloc(_len_target0*sizeof(struct htc_target));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
              int _len_target__i0__dev0 = 1;
          target[_i0].dev = (struct TYPE_4__ *) malloc(_len_target__i0__dev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_target__i0__dev0; _j0++) {
              int _len_target__i0__dev_ar0 = 1;
          target[_i0].dev->ar = (struct TYPE_3__ *) malloc(_len_target__i0__dev_ar0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_target__i0__dev_ar0; _j0++) {
            target[_i0].dev->ar->ctrl_ep = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = htc_valid_rx_frame_len(target,eid,len);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_target0; _aux++) {
          free(target[_aux].dev);
          }
          free(target);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
