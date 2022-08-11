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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct vb_device_info {int VBInfo; int VBType; scalar_t__ LCDResInfo; int LCDInfo; int SetFlag; } ;
struct TYPE_4__ {unsigned short Ext_ModeFlag; unsigned short Ext_RESINFO; } ;
struct TYPE_3__ {unsigned short ModeID; unsigned short Ext_InfoFlag; } ;

/* Variables and functions */
 int LCDNonExpanding ; 
 unsigned short NoSupportSimuTV ; 
 scalar_t__ Panel_1280x1024 ; 
 scalar_t__ Panel_1280x960 ; 
 int SetCRT2ToAVIDEO ; 
 int SetCRT2ToHiVision ; 
 int SetCRT2ToLCD ; 
 int SetCRT2ToRAMDAC ; 
 int SetCRT2ToSCART ; 
 int SetCRT2ToSVIDEO ; 
 int SetCRT2ToYPbPr525750 ; 
 int SetInSlaveMode ; 
 int SetNotSimuMode ; 
 unsigned short SupportCRT2in301C ; 
 unsigned short SupportHiVision ; 
 unsigned short SupportLCD ; 
 unsigned short SupportRAMDAC2 ; 
 unsigned short SupportTV ; 
 unsigned short SupportTV1024 ; 
 int TVSetPAL ; 
 int TVSimuMode ; 
 int VB_SIS301B ; 
 int VB_SIS301LV ; 
 int VB_SIS302B ; 
 int VB_SIS302LV ; 
 int VB_XGI301C ; 
 TYPE_2__* XGI330_EModeIDTable ; 
 TYPE_1__* XGI330_RefIndex ; 
 int XGI_SetCRT2ToLCDA ; 

__attribute__((used)) static unsigned char XGI_AjustCRT2Rate(unsigned short ModeIdIndex,
				       unsigned short RefreshRateTableIndex,
				       unsigned short *i,
		struct vb_device_info *pVBInfo)
{
	unsigned short tempax, tempbx, resinfo, modeflag, infoflag;

	modeflag = XGI330_EModeIDTable[ModeIdIndex].Ext_ModeFlag;
	resinfo = XGI330_EModeIDTable[ModeIdIndex].Ext_RESINFO;
	tempbx = XGI330_RefIndex[RefreshRateTableIndex + (*i)].ModeID;
	tempax = 0;

	if (pVBInfo->VBInfo & SetCRT2ToRAMDAC) {
		tempax |= SupportRAMDAC2;

		if (pVBInfo->VBType & VB_XGI301C)
			tempax |= SupportCRT2in301C;
	}

	/* 301b */
	if (pVBInfo->VBInfo & (SetCRT2ToLCD | XGI_SetCRT2ToLCDA)) {
		tempax |= SupportLCD;

		if (pVBInfo->LCDResInfo != Panel_1280x1024 &&
		    pVBInfo->LCDResInfo != Panel_1280x960 &&
		    (pVBInfo->LCDInfo & LCDNonExpanding) &&
		    resinfo >= 9)
			return 0;
	}

	if (pVBInfo->VBInfo & SetCRT2ToHiVision) { /* for HiTV */
		tempax |= SupportHiVision;
		if ((pVBInfo->VBInfo & SetInSlaveMode) &&
		    ((resinfo == 4) ||
		     (resinfo == 3 && (pVBInfo->SetFlag & TVSimuMode)) ||
		     (resinfo > 7)))
			return 0;
	} else if (pVBInfo->VBInfo & (SetCRT2ToAVIDEO | SetCRT2ToSVIDEO |
				      SetCRT2ToSCART | SetCRT2ToYPbPr525750 |
				      SetCRT2ToHiVision)) {
		tempax |= SupportTV;

		if (pVBInfo->VBType & (VB_SIS301B | VB_SIS302B | VB_SIS301LV |
				       VB_SIS302LV | VB_XGI301C))
			tempax |= SupportTV1024;

		if (!(pVBInfo->VBInfo & TVSetPAL) &&
		    (modeflag & NoSupportSimuTV) &&
		    (pVBInfo->VBInfo & SetInSlaveMode) &&
		    !(pVBInfo->VBInfo & SetNotSimuMode))
			return 0;
	}

	for (; XGI330_RefIndex[RefreshRateTableIndex + (*i)].ModeID ==
	       tempbx; (*i)--) {
		infoflag = XGI330_RefIndex[RefreshRateTableIndex + (*i)].Ext_InfoFlag;
		if (infoflag & tempax)
			return 1;

		if ((*i) == 0)
			break;
	}

	for ((*i) = 0;; (*i)++) {
		infoflag = XGI330_RefIndex[RefreshRateTableIndex + (*i)].Ext_InfoFlag;
		if (XGI330_RefIndex[RefreshRateTableIndex + (*i)].ModeID
				!= tempbx) {
			return 0;
		}

		if (infoflag & tempax)
			return 1;
	}
	return 1;
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
          int _len_i0 = 1;
          unsigned short * i = (unsigned short *) malloc(_len_i0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_i0; _i0++) {
            i[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pVBInfo0 = 1;
          struct vb_device_info * pVBInfo = (struct vb_device_info *) malloc(_len_pVBInfo0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_pVBInfo0; _i0++) {
            pVBInfo[_i0].VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VBType = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].LCDResInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].LCDInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].SetFlag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char benchRet = XGI_AjustCRT2Rate(ModeIdIndex,RefreshRateTableIndex,i,pVBInfo);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(i);
          free(pVBInfo);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned short ModeIdIndex = 255;
          unsigned short RefreshRateTableIndex = 255;
          int _len_i0 = 65025;
          unsigned short * i = (unsigned short *) malloc(_len_i0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_i0; _i0++) {
            i[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pVBInfo0 = 65025;
          struct vb_device_info * pVBInfo = (struct vb_device_info *) malloc(_len_pVBInfo0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_pVBInfo0; _i0++) {
            pVBInfo[_i0].VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VBType = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].LCDResInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].LCDInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].SetFlag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char benchRet = XGI_AjustCRT2Rate(ModeIdIndex,RefreshRateTableIndex,i,pVBInfo);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(i);
          free(pVBInfo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned short ModeIdIndex = 10;
          unsigned short RefreshRateTableIndex = 10;
          int _len_i0 = 100;
          unsigned short * i = (unsigned short *) malloc(_len_i0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_i0; _i0++) {
            i[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pVBInfo0 = 100;
          struct vb_device_info * pVBInfo = (struct vb_device_info *) malloc(_len_pVBInfo0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_pVBInfo0; _i0++) {
            pVBInfo[_i0].VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VBType = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].LCDResInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].LCDInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].SetFlag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char benchRet = XGI_AjustCRT2Rate(ModeIdIndex,RefreshRateTableIndex,i,pVBInfo);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(i);
          free(pVBInfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
