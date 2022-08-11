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
struct uinput_request {int dummy; } ;
struct uinput_device {struct uinput_request** requests; } ;

/* Variables and functions */
 unsigned int UINPUT_NUM_REQUESTS ; 

__attribute__((used)) static struct uinput_request *uinput_request_find(struct uinput_device *udev,
						  unsigned int id)
{
	/* Find an input request, by ID. Returns NULL if the ID isn't valid. */
	if (id >= UINPUT_NUM_REQUESTS)
		return NULL;

	return udev->requests[id];
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
          unsigned int id = 100;
          int _len_udev0 = 1;
          struct uinput_device * udev = (struct uinput_device *) malloc(_len_udev0*sizeof(struct uinput_device));
          for(int _i0 = 0; _i0 < _len_udev0; _i0++) {
              int _len_udev__i0__requests0 = 1;
          udev[_i0].requests = (struct uinput_request **) malloc(_len_udev__i0__requests0*sizeof(struct uinput_request *));
          for(int _j0 = 0; _j0 < _len_udev__i0__requests0; _j0++) {
            int _len_udev__i0__requests1 = 1;
            udev[_i0].requests[_j0] = (struct uinput_request *) malloc(_len_udev__i0__requests1*sizeof(struct uinput_request));
            for(int _j1 = 0; _j1 < _len_udev__i0__requests1; _j1++) {
              udev[_i0].requests[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct uinput_request * benchRet = uinput_request_find(udev,id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_udev0; _aux++) {
          free(*(udev[_aux].requests));
        free(udev[_aux].requests);
          }
          free(udev);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int id = 255;
          int _len_udev0 = 65025;
          struct uinput_device * udev = (struct uinput_device *) malloc(_len_udev0*sizeof(struct uinput_device));
          for(int _i0 = 0; _i0 < _len_udev0; _i0++) {
              int _len_udev__i0__requests0 = 1;
          udev[_i0].requests = (struct uinput_request **) malloc(_len_udev__i0__requests0*sizeof(struct uinput_request *));
          for(int _j0 = 0; _j0 < _len_udev__i0__requests0; _j0++) {
            int _len_udev__i0__requests1 = 1;
            udev[_i0].requests[_j0] = (struct uinput_request *) malloc(_len_udev__i0__requests1*sizeof(struct uinput_request));
            for(int _j1 = 0; _j1 < _len_udev__i0__requests1; _j1++) {
              udev[_i0].requests[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct uinput_request * benchRet = uinput_request_find(udev,id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_udev0; _aux++) {
          free(*(udev[_aux].requests));
        free(udev[_aux].requests);
          }
          free(udev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int id = 10;
          int _len_udev0 = 100;
          struct uinput_device * udev = (struct uinput_device *) malloc(_len_udev0*sizeof(struct uinput_device));
          for(int _i0 = 0; _i0 < _len_udev0; _i0++) {
              int _len_udev__i0__requests0 = 1;
          udev[_i0].requests = (struct uinput_request **) malloc(_len_udev__i0__requests0*sizeof(struct uinput_request *));
          for(int _j0 = 0; _j0 < _len_udev__i0__requests0; _j0++) {
            int _len_udev__i0__requests1 = 1;
            udev[_i0].requests[_j0] = (struct uinput_request *) malloc(_len_udev__i0__requests1*sizeof(struct uinput_request));
            for(int _j1 = 0; _j1 < _len_udev__i0__requests1; _j1++) {
              udev[_i0].requests[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct uinput_request * benchRet = uinput_request_find(udev,id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_udev0; _aux++) {
          free(*(udev[_aux].requests));
        free(udev[_aux].requests);
          }
          free(udev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
