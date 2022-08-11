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
struct vb_device_info {int VBInfo; scalar_t__ LCDResInfo; int SetFlag; int VBType; } ;
struct TYPE_4__ {unsigned short Ext_ModeFlag; } ;
struct TYPE_3__ {unsigned short Ext_CRTVCLK; } ;

/* Variables and functions */
 unsigned short Charx8Dot ; 
 unsigned short HiTVSimuVCLK ; 
 unsigned short HiTVTextVCLK ; 
 unsigned short HiTVVCLK ; 
 unsigned short HiTVVCLKDIV2 ; 
 unsigned short IndexMask ; 
 scalar_t__ Panel_1024x768 ; 
 int RPLLDIV2XO ; 
 int SetCRT2ToHiVision ; 
 int SetCRT2ToLCD ; 
 int SetCRT2ToTV ; 
 unsigned short TVCLKBASE_315_25 ; 
 int TVSimuMode ; 
 unsigned short TVVCLK ; 
 unsigned short TVVCLKDIV2 ; 
 int VB_SIS301LV ; 
 int VCLK108_2_315 ; 
 int VCLK65_315 ; 
 TYPE_2__* XGI330_EModeIDTable ; 
 TYPE_1__* XGI330_RefIndex ; 
 int XGI_SetCRT2ToLCDA ; 
 unsigned short YPbPr525iVCLK ; 
 unsigned short YPbPr525iVCLK_2 ; 

__attribute__((used)) static unsigned short XGI_GetVCLK2Ptr(unsigned short ModeIdIndex,
				      unsigned short RefreshRateTableIndex,
				      struct vb_device_info *pVBInfo)
{
	unsigned short VCLKIndex, modeflag;

	/* si+Ext_ResInfo */
	modeflag = XGI330_EModeIDTable[ModeIdIndex].Ext_ModeFlag;

	if (pVBInfo->VBInfo & (SetCRT2ToLCD | XGI_SetCRT2ToLCDA)) { /* 301b */
		if (pVBInfo->LCDResInfo != Panel_1024x768)
			/* LCDXlat2VCLK */
			VCLKIndex = VCLK108_2_315 + 5;
		else
			VCLKIndex = VCLK65_315 + 2; /* LCDXlat1VCLK */
	} else if (pVBInfo->VBInfo & SetCRT2ToHiVision) {
		if (pVBInfo->SetFlag & RPLLDIV2XO)
			VCLKIndex = TVCLKBASE_315_25 + HiTVVCLKDIV2;
		else
			VCLKIndex = TVCLKBASE_315_25 + HiTVVCLK;

		if (pVBInfo->SetFlag & TVSimuMode) {
			if (modeflag & Charx8Dot)
				VCLKIndex = TVCLKBASE_315_25 + HiTVSimuVCLK;
			else
				VCLKIndex = TVCLKBASE_315_25 + HiTVTextVCLK;
		}

		/* 301lv */
		if (pVBInfo->VBType & VB_SIS301LV) {
			if (pVBInfo->SetFlag & RPLLDIV2XO)
				VCLKIndex = YPbPr525iVCLK_2;
			else
				VCLKIndex = YPbPr525iVCLK;
		}
	} else if (pVBInfo->VBInfo & SetCRT2ToTV) {
		if (pVBInfo->SetFlag & RPLLDIV2XO)
			VCLKIndex = TVCLKBASE_315_25 + TVVCLKDIV2;
		else
			VCLKIndex = TVCLKBASE_315_25 + TVVCLK;
	} else { /* for CRT2 */
		/* di+Ext_CRTVCLK */
		VCLKIndex = XGI330_RefIndex[RefreshRateTableIndex].Ext_CRTVCLK;
		VCLKIndex &= IndexMask;
	}

	return VCLKIndex;
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
            pVBInfo[_i0].VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].LCDResInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].SetFlag = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VBType = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned short benchRet = XGI_GetVCLK2Ptr(ModeIdIndex,RefreshRateTableIndex,pVBInfo);
          printf("%hu\n", benchRet); 
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
            pVBInfo[_i0].VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].LCDResInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].SetFlag = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VBType = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned short benchRet = XGI_GetVCLK2Ptr(ModeIdIndex,RefreshRateTableIndex,pVBInfo);
          printf("%hu\n", benchRet); 
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
            pVBInfo[_i0].VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].LCDResInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].SetFlag = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VBType = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned short benchRet = XGI_GetVCLK2Ptr(ModeIdIndex,RefreshRateTableIndex,pVBInfo);
          printf("%hu\n", benchRet); 
          free(pVBInfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
