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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int /*<<< orphan*/  uint16_t ;
struct TYPE_3__ {int bLength; } ;
typedef  TYPE_1__ USBH_DescHeader_t ;

/* Variables and functions */

USBH_DescHeader_t  *USBH_GetNextDesc (uint8_t   *pbuf, uint16_t  *ptr)
{
  USBH_DescHeader_t  *pnext;
 
  *ptr += ((USBH_DescHeader_t *)pbuf)->bLength;  
  pnext = (USBH_DescHeader_t *)((uint8_t *)pbuf + \
         ((USBH_DescHeader_t *)pbuf)->bLength);
 
  return(pnext);
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
          int _len_pbuf0 = 1;
          int * pbuf = (int *) malloc(_len_pbuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pbuf0; _i0++) {
            pbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ptr0 = 1;
          int * ptr = (int *) malloc(_len_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_3__ * benchRet = USBH_GetNextDesc(pbuf,ptr);
          printf("%d\n", (*benchRet).bLength);
          free(pbuf);
          free(ptr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pbuf0 = 65025;
          int * pbuf = (int *) malloc(_len_pbuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pbuf0; _i0++) {
            pbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ptr0 = 65025;
          int * ptr = (int *) malloc(_len_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_3__ * benchRet = USBH_GetNextDesc(pbuf,ptr);
          printf("%d\n", (*benchRet).bLength);
          free(pbuf);
          free(ptr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pbuf0 = 100;
          int * pbuf = (int *) malloc(_len_pbuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pbuf0; _i0++) {
            pbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ptr0 = 100;
          int * ptr = (int *) malloc(_len_ptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_3__ * benchRet = USBH_GetNextDesc(pbuf,ptr);
          printf("%d\n", (*benchRet).bLength);
          free(pbuf);
          free(ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
