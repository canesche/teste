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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct vb_device_info {int RVBHCMAX; int RVBHCFACT; unsigned short VGAHT; unsigned short HT; unsigned short VGAVT; unsigned short VT; } ;
struct TYPE_6__ {unsigned short Ext_ModeFlag; } ;
struct TYPE_5__ {unsigned short Ext_CRT1CRTC; } ;
struct TYPE_4__ {scalar_t__* CR; } ;

/* Variables and functions */
 unsigned short Charx8Dot ; 
 unsigned short IndexMask ; 
 TYPE_3__* XGI330_EModeIDTable ; 
 TYPE_2__* XGI330_RefIndex ; 
 TYPE_1__* XGI_CRT1Table ; 

__attribute__((used)) static void XGI_GetRAMDAC2DATA(unsigned short ModeIdIndex,
			       unsigned short RefreshRateTableIndex,
			       struct vb_device_info *pVBInfo)
{
	unsigned short tempax, tempbx, temp1, temp2, modeflag = 0, tempcx,
			CRT1Index;

	pVBInfo->RVBHCMAX = 1;
	pVBInfo->RVBHCFACT = 1;
	modeflag = XGI330_EModeIDTable[ModeIdIndex].Ext_ModeFlag;
	CRT1Index = XGI330_RefIndex[RefreshRateTableIndex].Ext_CRT1CRTC;
	CRT1Index &= IndexMask;
	temp1 = (unsigned short)XGI_CRT1Table[CRT1Index].CR[0];
	temp2 = (unsigned short)XGI_CRT1Table[CRT1Index].CR[5];
	tempax = (temp1 & 0xFF) | ((temp2 & 0x03) << 8);
	tempbx = (unsigned short)XGI_CRT1Table[CRT1Index].CR[8];
	tempcx = (unsigned short)XGI_CRT1Table[CRT1Index].CR[14] << 8;
	tempcx &= 0x0100;
	tempcx <<= 2;
	tempbx |= tempcx;
	temp1 = (unsigned short)XGI_CRT1Table[CRT1Index].CR[9];

	if (temp1 & 0x01)
		tempbx |= 0x0100;

	if (temp1 & 0x20)
		tempbx |= 0x0200;
	tempax += 5;

	if (modeflag & Charx8Dot)
		tempax *= 8;
	else
		tempax *= 9;

	pVBInfo->VGAHT = tempax;
	pVBInfo->HT = tempax;
	tempbx++;
	pVBInfo->VGAVT = tempbx;
	pVBInfo->VT = tempbx;
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
          unsigned short ModeIdIndex = 100;
          unsigned short RefreshRateTableIndex = 100;
          int _len_pVBInfo0 = 1;
          struct vb_device_info * pVBInfo = (struct vb_device_info *) malloc(_len_pVBInfo0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_pVBInfo0; _i0++) {
            pVBInfo[_i0].RVBHCMAX = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].RVBHCFACT = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VGAHT = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].HT = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VGAVT = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VT = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          XGI_GetRAMDAC2DATA(ModeIdIndex,RefreshRateTableIndex,pVBInfo);
          free(pVBInfo);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned short ModeIdIndex = 255;
          unsigned short RefreshRateTableIndex = 255;
          int _len_pVBInfo0 = 65025;
          struct vb_device_info * pVBInfo = (struct vb_device_info *) malloc(_len_pVBInfo0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_pVBInfo0; _i0++) {
            pVBInfo[_i0].RVBHCMAX = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].RVBHCFACT = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VGAHT = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].HT = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VGAVT = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VT = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          XGI_GetRAMDAC2DATA(ModeIdIndex,RefreshRateTableIndex,pVBInfo);
          free(pVBInfo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned short ModeIdIndex = 10;
          unsigned short RefreshRateTableIndex = 10;
          int _len_pVBInfo0 = 100;
          struct vb_device_info * pVBInfo = (struct vb_device_info *) malloc(_len_pVBInfo0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_pVBInfo0; _i0++) {
            pVBInfo[_i0].RVBHCMAX = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].RVBHCFACT = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VGAHT = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].HT = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VGAVT = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VT = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          XGI_GetRAMDAC2DATA(ModeIdIndex,RefreshRateTableIndex,pVBInfo);
          free(pVBInfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
