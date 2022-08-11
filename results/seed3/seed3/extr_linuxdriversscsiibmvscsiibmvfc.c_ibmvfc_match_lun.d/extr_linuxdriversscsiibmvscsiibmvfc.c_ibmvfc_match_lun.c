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
struct ibmvfc_event {TYPE_1__* cmnd; } ;
struct TYPE_2__ {void* device; } ;

/* Variables and functions */

__attribute__((used)) static int ibmvfc_match_lun(struct ibmvfc_event *evt, void *device)
{
	if (evt->cmnd && evt->cmnd->device == device)
		return 1;
	return 0;
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
          int _len_evt0 = 1;
          struct ibmvfc_event * evt = (struct ibmvfc_event *) malloc(_len_evt0*sizeof(struct ibmvfc_event));
          for(int _i0 = 0; _i0 < _len_evt0; _i0++) {
              int _len_evt__i0__cmnd0 = 1;
          evt[_i0].cmnd = (struct TYPE_2__ *) malloc(_len_evt__i0__cmnd0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_evt__i0__cmnd0; _j0++) {
              }
          }
          void * device;
          int benchRet = ibmvfc_match_lun(evt,device);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_evt0; _aux++) {
          free(evt[_aux].cmnd);
          }
          free(evt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_evt0 = 65025;
          struct ibmvfc_event * evt = (struct ibmvfc_event *) malloc(_len_evt0*sizeof(struct ibmvfc_event));
          for(int _i0 = 0; _i0 < _len_evt0; _i0++) {
              int _len_evt__i0__cmnd0 = 1;
          evt[_i0].cmnd = (struct TYPE_2__ *) malloc(_len_evt__i0__cmnd0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_evt__i0__cmnd0; _j0++) {
              }
          }
          void * device;
          int benchRet = ibmvfc_match_lun(evt,device);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_evt0; _aux++) {
          free(evt[_aux].cmnd);
          }
          free(evt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_evt0 = 100;
          struct ibmvfc_event * evt = (struct ibmvfc_event *) malloc(_len_evt0*sizeof(struct ibmvfc_event));
          for(int _i0 = 0; _i0 < _len_evt0; _i0++) {
              int _len_evt__i0__cmnd0 = 1;
          evt[_i0].cmnd = (struct TYPE_2__ *) malloc(_len_evt__i0__cmnd0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_evt__i0__cmnd0; _j0++) {
              }
          }
          void * device;
          int benchRet = ibmvfc_match_lun(evt,device);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_evt0; _aux++) {
          free(evt[_aux].cmnd);
          }
          free(evt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
