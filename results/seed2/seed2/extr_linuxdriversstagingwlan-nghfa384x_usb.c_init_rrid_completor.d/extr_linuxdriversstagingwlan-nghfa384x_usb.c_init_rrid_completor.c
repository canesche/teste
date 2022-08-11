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
struct usbctlx_completor {int /*<<< orphan*/  complete; } ;
struct usbctlx_rrid_completor {unsigned int riddatalen; struct usbctlx_completor head; void* riddata; struct hfa384x_usb_rridresp const* rridresp; } ;
struct hfa384x_usb_rridresp {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  usbctlx_rrid_completor_fn ; 

__attribute__((used)) static inline struct usbctlx_completor *
init_rrid_completor(struct usbctlx_rrid_completor *completor,
		    const struct hfa384x_usb_rridresp *rridresp,
		    void *riddata,
		    unsigned int riddatalen)
{
	completor->head.complete = usbctlx_rrid_completor_fn;
	completor->rridresp = rridresp;
	completor->riddata = riddata;
	completor->riddatalen = riddatalen;
	return &completor->head;
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
          unsigned int riddatalen = 100;
          int _len_completor0 = 1;
          struct usbctlx_rrid_completor * completor = (struct usbctlx_rrid_completor *) malloc(_len_completor0*sizeof(struct usbctlx_rrid_completor));
          for(int _i0 = 0; _i0 < _len_completor0; _i0++) {
            completor[_i0].riddatalen = ((-2 * (next_i()%2)) + 1) * next_i();
        completor[_i0].head.complete = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_completor__i0__rridresp0 = 1;
          completor[_i0].rridresp = (const struct hfa384x_usb_rridresp *) malloc(_len_completor__i0__rridresp0*sizeof(const struct hfa384x_usb_rridresp));
          for(int _j0 = 0; _j0 < _len_completor__i0__rridresp0; _j0++) {
              }
          }
          int _len_rridresp0 = 1;
          const struct hfa384x_usb_rridresp * rridresp = (const struct hfa384x_usb_rridresp *) malloc(_len_rridresp0*sizeof(const struct hfa384x_usb_rridresp));
          for(int _i0 = 0; _i0 < _len_rridresp0; _i0++) {
              }
          void * riddata;
          struct usbctlx_completor * benchRet = init_rrid_completor(completor,rridresp,riddata,riddatalen);
          printf("%d\n", (*benchRet).complete);
          for(int _aux = 0; _aux < _len_completor0; _aux++) {
          free(completor[_aux].rridresp);
          }
          free(completor);
          free(rridresp);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int riddatalen = 255;
          int _len_completor0 = 65025;
          struct usbctlx_rrid_completor * completor = (struct usbctlx_rrid_completor *) malloc(_len_completor0*sizeof(struct usbctlx_rrid_completor));
          for(int _i0 = 0; _i0 < _len_completor0; _i0++) {
            completor[_i0].riddatalen = ((-2 * (next_i()%2)) + 1) * next_i();
        completor[_i0].head.complete = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_completor__i0__rridresp0 = 1;
          completor[_i0].rridresp = (const struct hfa384x_usb_rridresp *) malloc(_len_completor__i0__rridresp0*sizeof(const struct hfa384x_usb_rridresp));
          for(int _j0 = 0; _j0 < _len_completor__i0__rridresp0; _j0++) {
              }
          }
          int _len_rridresp0 = 65025;
          const struct hfa384x_usb_rridresp * rridresp = (const struct hfa384x_usb_rridresp *) malloc(_len_rridresp0*sizeof(const struct hfa384x_usb_rridresp));
          for(int _i0 = 0; _i0 < _len_rridresp0; _i0++) {
              }
          void * riddata;
          struct usbctlx_completor * benchRet = init_rrid_completor(completor,rridresp,riddata,riddatalen);
          printf("%d\n", (*benchRet).complete);
          for(int _aux = 0; _aux < _len_completor0; _aux++) {
          free(completor[_aux].rridresp);
          }
          free(completor);
          free(rridresp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int riddatalen = 10;
          int _len_completor0 = 100;
          struct usbctlx_rrid_completor * completor = (struct usbctlx_rrid_completor *) malloc(_len_completor0*sizeof(struct usbctlx_rrid_completor));
          for(int _i0 = 0; _i0 < _len_completor0; _i0++) {
            completor[_i0].riddatalen = ((-2 * (next_i()%2)) + 1) * next_i();
        completor[_i0].head.complete = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_completor__i0__rridresp0 = 1;
          completor[_i0].rridresp = (const struct hfa384x_usb_rridresp *) malloc(_len_completor__i0__rridresp0*sizeof(const struct hfa384x_usb_rridresp));
          for(int _j0 = 0; _j0 < _len_completor__i0__rridresp0; _j0++) {
              }
          }
          int _len_rridresp0 = 100;
          const struct hfa384x_usb_rridresp * rridresp = (const struct hfa384x_usb_rridresp *) malloc(_len_rridresp0*sizeof(const struct hfa384x_usb_rridresp));
          for(int _i0 = 0; _i0 < _len_rridresp0; _i0++) {
              }
          void * riddata;
          struct usbctlx_completor * benchRet = init_rrid_completor(completor,rridresp,riddata,riddatalen);
          printf("%d\n", (*benchRet).complete);
          for(int _aux = 0; _aux < _len_completor0; _aux++) {
          free(completor[_aux].rridresp);
          }
          free(completor);
          free(rridresp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
