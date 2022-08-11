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
struct usbctlx_rmem_completor {unsigned int len; struct usbctlx_completor head; void* data; struct hfa384x_usb_rmemresp* rmemresp; } ;
struct hfa384x_usb_rmemresp {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  usbctlx_rmem_completor_fn ; 

__attribute__((used)) static inline struct usbctlx_completor *
init_rmem_completor(struct usbctlx_rmem_completor *completor,
		    struct hfa384x_usb_rmemresp *rmemresp,
		    void *data,
		    unsigned int len)
{
	completor->head.complete = usbctlx_rmem_completor_fn;
	completor->rmemresp = rmemresp;
	completor->data = data;
	completor->len = len;
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
          unsigned int len = 100;
          int _len_completor0 = 1;
          struct usbctlx_rmem_completor * completor = (struct usbctlx_rmem_completor *) malloc(_len_completor0*sizeof(struct usbctlx_rmem_completor));
          for(int _i0 = 0; _i0 < _len_completor0; _i0++) {
            completor[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        completor[_i0].head.complete = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_completor__i0__rmemresp0 = 1;
          completor[_i0].rmemresp = (struct hfa384x_usb_rmemresp *) malloc(_len_completor__i0__rmemresp0*sizeof(struct hfa384x_usb_rmemresp));
          for(int _j0 = 0; _j0 < _len_completor__i0__rmemresp0; _j0++) {
            completor[_i0].rmemresp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rmemresp0 = 1;
          struct hfa384x_usb_rmemresp * rmemresp = (struct hfa384x_usb_rmemresp *) malloc(_len_rmemresp0*sizeof(struct hfa384x_usb_rmemresp));
          for(int _i0 = 0; _i0 < _len_rmemresp0; _i0++) {
            rmemresp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          struct usbctlx_completor * benchRet = init_rmem_completor(completor,rmemresp,data,len);
          printf("%d\n", (*benchRet).complete);
          for(int _aux = 0; _aux < _len_completor0; _aux++) {
          free(completor[_aux].rmemresp);
          }
          free(completor);
          free(rmemresp);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int len = 255;
          int _len_completor0 = 65025;
          struct usbctlx_rmem_completor * completor = (struct usbctlx_rmem_completor *) malloc(_len_completor0*sizeof(struct usbctlx_rmem_completor));
          for(int _i0 = 0; _i0 < _len_completor0; _i0++) {
            completor[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        completor[_i0].head.complete = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_completor__i0__rmemresp0 = 1;
          completor[_i0].rmemresp = (struct hfa384x_usb_rmemresp *) malloc(_len_completor__i0__rmemresp0*sizeof(struct hfa384x_usb_rmemresp));
          for(int _j0 = 0; _j0 < _len_completor__i0__rmemresp0; _j0++) {
            completor[_i0].rmemresp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rmemresp0 = 65025;
          struct hfa384x_usb_rmemresp * rmemresp = (struct hfa384x_usb_rmemresp *) malloc(_len_rmemresp0*sizeof(struct hfa384x_usb_rmemresp));
          for(int _i0 = 0; _i0 < _len_rmemresp0; _i0++) {
            rmemresp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          struct usbctlx_completor * benchRet = init_rmem_completor(completor,rmemresp,data,len);
          printf("%d\n", (*benchRet).complete);
          for(int _aux = 0; _aux < _len_completor0; _aux++) {
          free(completor[_aux].rmemresp);
          }
          free(completor);
          free(rmemresp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int len = 10;
          int _len_completor0 = 100;
          struct usbctlx_rmem_completor * completor = (struct usbctlx_rmem_completor *) malloc(_len_completor0*sizeof(struct usbctlx_rmem_completor));
          for(int _i0 = 0; _i0 < _len_completor0; _i0++) {
            completor[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        completor[_i0].head.complete = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_completor__i0__rmemresp0 = 1;
          completor[_i0].rmemresp = (struct hfa384x_usb_rmemresp *) malloc(_len_completor__i0__rmemresp0*sizeof(struct hfa384x_usb_rmemresp));
          for(int _j0 = 0; _j0 < _len_completor__i0__rmemresp0; _j0++) {
            completor[_i0].rmemresp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rmemresp0 = 100;
          struct hfa384x_usb_rmemresp * rmemresp = (struct hfa384x_usb_rmemresp *) malloc(_len_rmemresp0*sizeof(struct hfa384x_usb_rmemresp));
          for(int _i0 = 0; _i0 < _len_rmemresp0; _i0++) {
            rmemresp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          struct usbctlx_completor * benchRet = init_rmem_completor(completor,rmemresp,data,len);
          printf("%d\n", (*benchRet).complete);
          for(int _aux = 0; _aux < _len_completor0; _aux++) {
          free(completor[_aux].rmemresp);
          }
          free(completor);
          free(rmemresp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
