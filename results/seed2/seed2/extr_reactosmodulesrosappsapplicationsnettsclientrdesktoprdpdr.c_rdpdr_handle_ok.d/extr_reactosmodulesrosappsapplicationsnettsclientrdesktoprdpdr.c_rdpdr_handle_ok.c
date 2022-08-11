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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {TYPE_2__* fileinfo; TYPE_1__* rdpdr_device; } ;
struct TYPE_6__ {int device_id; } ;
struct TYPE_5__ {int device_type; int handle; } ;
typedef  TYPE_3__ RDPCLIENT ;
typedef  int /*<<< orphan*/  BOOL ;

/* Variables and functions */
#define  DEVICE_TYPE_DISK 132 
#define  DEVICE_TYPE_PARALLEL 131 
#define  DEVICE_TYPE_PRINTER 130 
#define  DEVICE_TYPE_SCARD 129 
#define  DEVICE_TYPE_SERIAL 128 
 int /*<<< orphan*/  False ; 
 int /*<<< orphan*/  True ; 

__attribute__((used)) static BOOL
rdpdr_handle_ok(RDPCLIENT * This, int device, int handle)
{
	switch (This->rdpdr_device[device].device_type)
	{
		case DEVICE_TYPE_PARALLEL:
		case DEVICE_TYPE_SERIAL:
		case DEVICE_TYPE_PRINTER:
		case DEVICE_TYPE_SCARD:
			if (This->rdpdr_device[device].handle != handle)
				return False;
			break;
		case DEVICE_TYPE_DISK:
			if (This->fileinfo[handle].device_id != device)
				return False;
			break;
	}
	return True;
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
          int device = 100;
          int handle = 100;
          int _len_This0 = 1;
          struct TYPE_7__ * This = (struct TYPE_7__ *) malloc(_len_This0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__fileinfo0 = 1;
          This[_i0].fileinfo = (struct TYPE_6__ *) malloc(_len_This__i0__fileinfo0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_This__i0__fileinfo0; _j0++) {
            This[_i0].fileinfo->device_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__rdpdr_device0 = 1;
          This[_i0].rdpdr_device = (struct TYPE_5__ *) malloc(_len_This__i0__rdpdr_device0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_This__i0__rdpdr_device0; _j0++) {
            This[_i0].rdpdr_device->device_type = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].rdpdr_device->handle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rdpdr_handle_ok(This,device,handle);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].fileinfo);
          }
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].rdpdr_device);
          }
          free(This);
        
        break;
    }
    // big-arr
    case 1:
    {
          int device = 255;
          int handle = 255;
          int _len_This0 = 65025;
          struct TYPE_7__ * This = (struct TYPE_7__ *) malloc(_len_This0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__fileinfo0 = 1;
          This[_i0].fileinfo = (struct TYPE_6__ *) malloc(_len_This__i0__fileinfo0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_This__i0__fileinfo0; _j0++) {
            This[_i0].fileinfo->device_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__rdpdr_device0 = 1;
          This[_i0].rdpdr_device = (struct TYPE_5__ *) malloc(_len_This__i0__rdpdr_device0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_This__i0__rdpdr_device0; _j0++) {
            This[_i0].rdpdr_device->device_type = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].rdpdr_device->handle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rdpdr_handle_ok(This,device,handle);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].fileinfo);
          }
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].rdpdr_device);
          }
          free(This);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int device = 10;
          int handle = 10;
          int _len_This0 = 100;
          struct TYPE_7__ * This = (struct TYPE_7__ *) malloc(_len_This0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
              int _len_This__i0__fileinfo0 = 1;
          This[_i0].fileinfo = (struct TYPE_6__ *) malloc(_len_This__i0__fileinfo0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_This__i0__fileinfo0; _j0++) {
            This[_i0].fileinfo->device_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_This__i0__rdpdr_device0 = 1;
          This[_i0].rdpdr_device = (struct TYPE_5__ *) malloc(_len_This__i0__rdpdr_device0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_This__i0__rdpdr_device0; _j0++) {
            This[_i0].rdpdr_device->device_type = ((-2 * (next_i()%2)) + 1) * next_i();
        This[_i0].rdpdr_device->handle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = rdpdr_handle_ok(This,device,handle);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].fileinfo);
          }
          for(int _aux = 0; _aux < _len_This0; _aux++) {
          free(This[_aux].rdpdr_device);
          }
          free(This);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
