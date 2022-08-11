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
struct vb_device_info {unsigned short LCDResInfo; unsigned short LCDTypeInfo; TYPE_1__* LCDCapList; } ;
struct TYPE_2__ {unsigned short LCD_ID; } ;

/* Variables and functions */
 unsigned short Panel_1024x768 ; 

__attribute__((used)) static unsigned short XGI_GetLCDCapPtr1(struct vb_device_info *pVBInfo)
{
	unsigned short tempah, tempal, tempbl, i;

	tempal = pVBInfo->LCDResInfo;
	tempah = pVBInfo->LCDTypeInfo;

	i = 0;
	tempbl = pVBInfo->LCDCapList[i].LCD_ID;

	while (tempbl != 0xFF) {
		if ((tempbl & 0x80) && (tempbl != 0x80)) {
			tempal = tempah;
			tempbl &= ~0x80;
		}

		if (tempal == tempbl)
			break;

		i++;
		tempbl = pVBInfo->LCDCapList[i].LCD_ID;
	}

	if (tempbl == 0xFF) {
		pVBInfo->LCDResInfo = Panel_1024x768;
		pVBInfo->LCDTypeInfo = 0;
		i = 0;
	}

	return i;
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
          int _len_pVBInfo0 = 1;
          struct vb_device_info * pVBInfo = (struct vb_device_info *) malloc(_len_pVBInfo0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_pVBInfo0; _i0++) {
            pVBInfo[_i0].LCDResInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].LCDTypeInfo = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pVBInfo__i0__LCDCapList0 = 1;
          pVBInfo[_i0].LCDCapList = (struct TYPE_2__ *) malloc(_len_pVBInfo__i0__LCDCapList0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pVBInfo__i0__LCDCapList0; _j0++) {
            pVBInfo[_i0].LCDCapList->LCD_ID = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned short benchRet = XGI_GetLCDCapPtr1(pVBInfo);
          printf("%hu\n", benchRet); 
          for(int _aux = 0; _aux < _len_pVBInfo0; _aux++) {
          free(pVBInfo[_aux].LCDCapList);
          }
          free(pVBInfo);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pVBInfo0 = 65025;
          struct vb_device_info * pVBInfo = (struct vb_device_info *) malloc(_len_pVBInfo0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_pVBInfo0; _i0++) {
            pVBInfo[_i0].LCDResInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].LCDTypeInfo = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pVBInfo__i0__LCDCapList0 = 1;
          pVBInfo[_i0].LCDCapList = (struct TYPE_2__ *) malloc(_len_pVBInfo__i0__LCDCapList0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pVBInfo__i0__LCDCapList0; _j0++) {
            pVBInfo[_i0].LCDCapList->LCD_ID = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned short benchRet = XGI_GetLCDCapPtr1(pVBInfo);
          printf("%hu\n", benchRet); 
          for(int _aux = 0; _aux < _len_pVBInfo0; _aux++) {
          free(pVBInfo[_aux].LCDCapList);
          }
          free(pVBInfo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pVBInfo0 = 100;
          struct vb_device_info * pVBInfo = (struct vb_device_info *) malloc(_len_pVBInfo0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_pVBInfo0; _i0++) {
            pVBInfo[_i0].LCDResInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].LCDTypeInfo = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pVBInfo__i0__LCDCapList0 = 1;
          pVBInfo[_i0].LCDCapList = (struct TYPE_2__ *) malloc(_len_pVBInfo__i0__LCDCapList0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pVBInfo__i0__LCDCapList0; _j0++) {
            pVBInfo[_i0].LCDCapList->LCD_ID = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned short benchRet = XGI_GetLCDCapPtr1(pVBInfo);
          printf("%hu\n", benchRet); 
          for(int _aux = 0; _aux < _len_pVBInfo0; _aux++) {
          free(pVBInfo[_aux].LCDCapList);
          }
          free(pVBInfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
