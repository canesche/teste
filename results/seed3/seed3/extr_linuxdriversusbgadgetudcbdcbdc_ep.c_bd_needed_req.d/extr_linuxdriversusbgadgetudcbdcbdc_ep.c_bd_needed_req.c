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
struct TYPE_2__ {int length; } ;
struct bdc_req {TYPE_1__ usb_req; } ;

/* Variables and functions */
 int BD_MAX_BUFF_SIZE ; 

__attribute__((used)) static inline int bd_needed_req(struct bdc_req *req)
{
	int bd_needed = 0;
	int remaining;

	/* 1 bd needed for 0 byte transfer */
	if (req->usb_req.length == 0)
		return 1;

	/* remaining bytes after tranfering all max BD size BD's */
	remaining = req->usb_req.length % BD_MAX_BUFF_SIZE;
	if (remaining)
		bd_needed++;

	/* How many maximum BUFF size BD's ? */
	remaining = req->usb_req.length / BD_MAX_BUFF_SIZE;
	bd_needed += remaining;

	return bd_needed;
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
          int _len_req0 = 1;
          struct bdc_req * req = (struct bdc_req *) malloc(_len_req0*sizeof(struct bdc_req));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].usb_req.length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bd_needed_req(req);
          printf("%d\n", benchRet); 
          free(req);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_req0 = 65025;
          struct bdc_req * req = (struct bdc_req *) malloc(_len_req0*sizeof(struct bdc_req));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].usb_req.length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bd_needed_req(req);
          printf("%d\n", benchRet); 
          free(req);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_req0 = 100;
          struct bdc_req * req = (struct bdc_req *) malloc(_len_req0*sizeof(struct bdc_req));
          for(int _i0 = 0; _i0 < _len_req0; _i0++) {
            req[_i0].usb_req.length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bd_needed_req(req);
          printf("%d\n", benchRet); 
          free(req);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
