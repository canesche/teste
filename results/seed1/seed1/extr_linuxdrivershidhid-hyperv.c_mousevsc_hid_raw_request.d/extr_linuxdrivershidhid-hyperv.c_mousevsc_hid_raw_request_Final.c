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
struct hid_device {int dummy; } ;
typedef  int /*<<< orphan*/  __u8 ;

/* Variables and functions */

__attribute__((used)) static int mousevsc_hid_raw_request(struct hid_device *hid,
				    unsigned char report_num,
				    __u8 *buf, size_t len,
				    unsigned char rtype,
				    int reqtype)
{
	return 0;
}


// ------------------------------------------------------------------------- //




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
          unsigned char report_num = 100;
          unsigned long len = 100;
          unsigned char rtype = 100;
          int reqtype = 100;
          int _len_hid0 = 1;
          struct hid_device * hid = (struct hid_device *) malloc(_len_hid0*sizeof(struct hid_device));
          for(int _i0 = 0; _i0 < _len_hid0; _i0++) {
            hid[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mousevsc_hid_raw_request(hid,report_num,buf,len,rtype,reqtype);
          printf("%d\n", benchRet); 
          free(hid);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char report_num = 255;
          unsigned long len = 255;
          unsigned char rtype = 255;
          int reqtype = 255;
          int _len_hid0 = 65025;
          struct hid_device * hid = (struct hid_device *) malloc(_len_hid0*sizeof(struct hid_device));
          for(int _i0 = 0; _i0 < _len_hid0; _i0++) {
            hid[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mousevsc_hid_raw_request(hid,report_num,buf,len,rtype,reqtype);
          printf("%d\n", benchRet); 
          free(hid);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char report_num = 10;
          unsigned long len = 10;
          unsigned char rtype = 10;
          int reqtype = 10;
          int _len_hid0 = 100;
          struct hid_device * hid = (struct hid_device *) malloc(_len_hid0*sizeof(struct hid_device));
          for(int _i0 = 0; _i0 < _len_hid0; _i0++) {
            hid[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mousevsc_hid_raw_request(hid,report_num,buf,len,rtype,reqtype);
          printf("%d\n", benchRet); 
          free(hid);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
