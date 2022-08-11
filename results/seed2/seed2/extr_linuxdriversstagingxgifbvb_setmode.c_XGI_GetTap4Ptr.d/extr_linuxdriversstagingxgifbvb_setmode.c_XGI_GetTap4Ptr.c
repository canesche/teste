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
struct vb_device_info {unsigned short VGAHDE; unsigned short HDE; unsigned short VGAVDE; unsigned short VDE; int TVInfo; int VBInfo; } ;
struct XGI301C_Tap4TimingStruct {int DE; } ;

/* Variables and functions */
 struct XGI301C_Tap4TimingStruct* PALTap4Timing ; 
 int SetCRT2ToHiVision ; 
 int SetCRT2ToYPbPr525750 ; 
 int TVSetPAL ; 
 int TVSetYPbPr525i ; 
 int TVSetYPbPr525p ; 
 int TVSetYPbPr750p ; 
 struct XGI301C_Tap4TimingStruct* YPbPr750pTap4Timing ; 
 struct XGI301C_Tap4TimingStruct* xgifb_ntsc_525_tap4_timing ; 
 struct XGI301C_Tap4TimingStruct const* xgifb_tap4_timing ; 

__attribute__((used)) static struct XGI301C_Tap4TimingStruct const
*XGI_GetTap4Ptr(unsigned short tempcx, struct vb_device_info *pVBInfo)
{
	unsigned short tempax, tempbx, i;
	struct XGI301C_Tap4TimingStruct const *Tap4TimingPtr;

	if (tempcx == 0) {
		tempax = pVBInfo->VGAHDE;
		tempbx = pVBInfo->HDE;
	} else {
		tempax = pVBInfo->VGAVDE;
		tempbx = pVBInfo->VDE;
	}

	if (tempax <= tempbx)
		return &xgifb_tap4_timing[0];
	Tap4TimingPtr = xgifb_ntsc_525_tap4_timing; /* NTSC */

	if (pVBInfo->TVInfo & TVSetPAL)
		Tap4TimingPtr = PALTap4Timing;

	if (pVBInfo->VBInfo & SetCRT2ToYPbPr525750) {
		if ((pVBInfo->TVInfo & TVSetYPbPr525i) ||
		    (pVBInfo->TVInfo & TVSetYPbPr525p))
			Tap4TimingPtr = xgifb_ntsc_525_tap4_timing;
		if (pVBInfo->TVInfo & TVSetYPbPr750p)
			Tap4TimingPtr = YPbPr750pTap4Timing;
	}

	if (pVBInfo->VBInfo & SetCRT2ToHiVision)
		Tap4TimingPtr = xgifb_tap4_timing;

	i = 0;
	while (Tap4TimingPtr[i].DE != 0xFFFF) {
		if (Tap4TimingPtr[i].DE == tempax)
			break;
		i++;
	}
	return &Tap4TimingPtr[i];
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
          unsigned short tempcx = 100;
          int _len_pVBInfo0 = 1;
          struct vb_device_info * pVBInfo = (struct vb_device_info *) malloc(_len_pVBInfo0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_pVBInfo0; _i0++) {
            pVBInfo[_i0].VGAHDE = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].HDE = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VGAVDE = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VDE = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].TVInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct XGI301C_Tap4TimingStruct * benchRet = XGI_GetTap4Ptr(tempcx,pVBInfo);
          free(pVBInfo);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned short tempcx = 255;
          int _len_pVBInfo0 = 65025;
          struct vb_device_info * pVBInfo = (struct vb_device_info *) malloc(_len_pVBInfo0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_pVBInfo0; _i0++) {
            pVBInfo[_i0].VGAHDE = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].HDE = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VGAVDE = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VDE = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].TVInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct XGI301C_Tap4TimingStruct * benchRet = XGI_GetTap4Ptr(tempcx,pVBInfo);
          free(pVBInfo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned short tempcx = 10;
          int _len_pVBInfo0 = 100;
          struct vb_device_info * pVBInfo = (struct vb_device_info *) malloc(_len_pVBInfo0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_pVBInfo0; _i0++) {
            pVBInfo[_i0].VGAHDE = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].HDE = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VGAVDE = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VDE = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].TVInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct XGI301C_Tap4TimingStruct * benchRet = XGI_GetTap4Ptr(tempcx,pVBInfo);
          free(pVBInfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
