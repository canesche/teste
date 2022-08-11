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
struct SiS_Private {int SiS_VBType; scalar_t__ SiS_IF_DEF_LVDS; int SiS_VBInfo; unsigned short SiS_LCDResInfo; int SiS_SetFlag; int SiS_LCDInfo; int SiS_TVMode; scalar_t__ SiS_ModeType; scalar_t__ SiS_CHSOverScan; scalar_t__ SiS_IF_DEF_CH70xx; TYPE_3__* SiS_RefIndex; TYPE_2__* SiS_EModeIDTable; TYPE_1__* SiS_SModeIDTable; } ;
struct TYPE_6__ {unsigned short Ext_CRT2CRTC; unsigned short Ext_CRT2CRTC_NS; } ;
struct TYPE_5__ {unsigned short Ext_RESINFO; } ;
struct TYPE_4__ {unsigned short St_CRT2CRTC; } ;

/* Variables and functions */
 int DontExpandLCD ; 
 int LCDPass11 ; 
 int LCDVESATiming ; 
 scalar_t__ ModeVGA ; 
#define  Panel_1024x600 147 
#define  Panel_1024x768 146 
#define  Panel_1152x768 145 
#define  Panel_1280x1024 144 
#define  Panel_1280x768 143 
 unsigned short Panel_1280x800 ; 
 unsigned short Panel_1280x800_2 ; 
 unsigned short Panel_1280x854 ; 
#define  Panel_1400x1050 142 
#define  Panel_1600x1200 141 
 unsigned short Panel_1680x1050 ; 
#define  Panel_320x240_1 140 
#define  Panel_320x240_2 139 
#define  Panel_320x240_3 138 
#define  Panel_640x480 137 
#define  Panel_800x600 136 
#define  SIS_RI_1024x576 135 
#define  SIS_RI_1024x768 134 
#define  SIS_RI_1280x720 133 
 unsigned short SIS_RI_1280x768 ; 
 unsigned short SIS_RI_1280x800 ; 
 unsigned short SIS_RI_1400x1050 ; 
#define  SIS_RI_512x384 132 
#define  SIS_RI_720x480 131 
#define  SIS_RI_720x576 130 
#define  SIS_RI_768x576 129 
#define  SIS_RI_800x480 128 
 int SetCRT2ToHiVision ; 
 int SetCRT2ToLCD ; 
 int SetCRT2ToTV ; 
 int SetCRT2ToTVNoHiVision ; 
 int SetCRT2ToYPbPr525750 ; 
 int SetInSlaveMode ; 
 int TVSetCHOverScan ; 
 int TVSetPAL ; 
 int TVSetPALM ; 
 int TVSetPALN ; 
 int TVSetTVSimuMode ; 
 int TVSetYPbPr525p ; 
 int TVSetYPbPr750p ; 
 int VB_SISVB ; 

__attribute__((used)) static void
SiS_GetCRT2Ptr(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
	       unsigned short RefreshRateTableIndex, unsigned short *CRT2Index,
	       unsigned short *ResIndex)
{
  unsigned short tempbx=0, tempal=0, resinfo=0;

  if(ModeNo <= 0x13) {
     tempal = SiS_Pr->SiS_SModeIDTable[ModeIdIndex].St_CRT2CRTC;
  } else {
     tempal = SiS_Pr->SiS_RefIndex[RefreshRateTableIndex].Ext_CRT2CRTC;
     resinfo = SiS_Pr->SiS_EModeIDTable[ModeIdIndex].Ext_RESINFO;
  }

  if((SiS_Pr->SiS_VBType & VB_SISVB) && (SiS_Pr->SiS_IF_DEF_LVDS == 0)) {

     if(SiS_Pr->SiS_VBInfo & SetCRT2ToLCD) {                            /* LCD */

	tempbx = SiS_Pr->SiS_LCDResInfo;
	if(!(SiS_Pr->SiS_SetFlag & LCDVESATiming)) tempbx += 32;

	/* patch index */
	if(SiS_Pr->SiS_LCDResInfo == Panel_1680x1050) {
	   if     (resinfo == SIS_RI_1280x800)  tempal =  9;
	   else if(resinfo == SIS_RI_1400x1050) tempal = 11;
	} else if((SiS_Pr->SiS_LCDResInfo == Panel_1280x800) ||
		  (SiS_Pr->SiS_LCDResInfo == Panel_1280x800_2) ||
		  (SiS_Pr->SiS_LCDResInfo == Panel_1280x854)) {
	   if     (resinfo == SIS_RI_1280x768)  tempal =  9;
	}

	if(SiS_Pr->SiS_LCDInfo & DontExpandLCD) {
	   /* Pass 1:1 only (center-screen handled outside) */
	   /* This is never called for the panel's native resolution */
	   /* since Pass1:1 will not be set in this case */
	   tempbx = 100;
	   if(ModeNo >= 0x13) {
	      tempal = SiS_Pr->SiS_RefIndex[RefreshRateTableIndex].Ext_CRT2CRTC_NS;
	   }
	}

#ifdef CONFIG_FB_SIS_315
	if(SiS_Pr->SiS_CustomT == CUT_COMPAQ1280) {
	   if(SiS_Pr->SiS_LCDResInfo == Panel_1280x1024) {
	      if(!(SiS_Pr->SiS_LCDInfo & DontExpandLCD)) {
		 tempbx = 200;
		 if(!(SiS_Pr->SiS_SetFlag & LCDVESATiming)) tempbx++;
	      }
	   }
	}
#endif

     } else {						  	/* TV */

	if(SiS_Pr->SiS_VBInfo & SetCRT2ToHiVision) {
	   /* if(SiS_Pr->SiS_VGAVDE > 480) SiS_Pr->SiS_TVMode &= (~TVSetTVSimuMode); */
	   tempbx = 2;
	   if(SiS_Pr->SiS_VBInfo & SetInSlaveMode) {
	      tempbx = 13;
	      if(!(SiS_Pr->SiS_TVMode & TVSetTVSimuMode)) tempbx = 14;
	   }
	} else if(SiS_Pr->SiS_VBInfo & SetCRT2ToYPbPr525750) {
	   if(SiS_Pr->SiS_TVMode & TVSetYPbPr750p)	tempbx = 7;
	   else if(SiS_Pr->SiS_TVMode & TVSetYPbPr525p)	tempbx = 6;
	   else						tempbx = 5;
	   if(SiS_Pr->SiS_TVMode & TVSetTVSimuMode)	tempbx += 5;
	} else {
	   if(SiS_Pr->SiS_TVMode & TVSetPAL)		tempbx = 3;
	   else						tempbx = 4;
	   if(SiS_Pr->SiS_TVMode & TVSetTVSimuMode)	tempbx += 5;
	}

     }

     tempal &= 0x3F;

     if(ModeNo > 0x13) {
        if(SiS_Pr->SiS_VBInfo & SetCRT2ToTVNoHiVision) {
	   switch(resinfo) {
	   case SIS_RI_720x480:
	      tempal = 6;
	      if(SiS_Pr->SiS_TVMode & (TVSetPAL | TVSetPALN))	tempal = 9;
	      break;
	   case SIS_RI_720x576:
	   case SIS_RI_768x576:
	   case SIS_RI_1024x576: /* Not in NTSC or YPBPR mode (except 1080i)! */
	      tempal = 6;
	      if(SiS_Pr->SiS_VBInfo & SetCRT2ToYPbPr525750) {
		 if(SiS_Pr->SiS_TVMode & TVSetYPbPr750p)	tempal = 8;
	      }
	      break;
	   case SIS_RI_800x480:
	      tempal = 4;
	      break;
	   case SIS_RI_512x384:
	   case SIS_RI_1024x768:
	      tempal = 7;
	      if(SiS_Pr->SiS_VBInfo & SetCRT2ToYPbPr525750) {
		 if(SiS_Pr->SiS_TVMode & TVSetYPbPr525p)	tempal = 8;
	      }
	      break;
	   case SIS_RI_1280x720:
	      if(SiS_Pr->SiS_VBInfo & SetCRT2ToYPbPr525750) {
		 if(SiS_Pr->SiS_TVMode & TVSetYPbPr750p)	tempal = 9;
	      }
	      break;
	   }
	}
     }

     *CRT2Index = tempbx;
     *ResIndex = tempal;

  } else {   /* LVDS, 301B-DH (if running on LCD) */

     tempbx = 0;
     if((SiS_Pr->SiS_IF_DEF_CH70xx) && (SiS_Pr->SiS_VBInfo & SetCRT2ToTV)) {

	tempbx = 90;
	if(SiS_Pr->SiS_TVMode & TVSetPAL) {
	   tempbx = 92;
	   if(SiS_Pr->SiS_ModeType > ModeVGA) {
	      if(SiS_Pr->SiS_CHSOverScan) tempbx = 99;
	   }
	   if(SiS_Pr->SiS_TVMode & TVSetPALM)      tempbx = 94;
	   else if(SiS_Pr->SiS_TVMode & TVSetPALN) tempbx = 96;
	}
	if(tempbx != 99) {
	   if(SiS_Pr->SiS_TVMode & TVSetCHOverScan) tempbx++;
	}

     } else {

	switch(SiS_Pr->SiS_LCDResInfo) {
	case Panel_640x480:   tempbx = 12; break;
	case Panel_320x240_1: tempbx = 10; break;
	case Panel_320x240_2:
	case Panel_320x240_3: tempbx = 14; break;
	case Panel_800x600:   tempbx = 16; break;
	case Panel_1024x600:  tempbx = 18; break;
	case Panel_1152x768:
	case Panel_1024x768:  tempbx = 20; break;
	case Panel_1280x768:  tempbx = 22; break;
	case Panel_1280x1024: tempbx = 24; break;
	case Panel_1400x1050: tempbx = 26; break;
	case Panel_1600x1200: tempbx = 28; break;
#ifdef CONFIG_FB_SIS_300
	case Panel_Barco1366: tempbx = 80; break;
#endif
	}

	switch(SiS_Pr->SiS_LCDResInfo) {
	case Panel_320x240_1:
	case Panel_320x240_2:
	case Panel_320x240_3:
	case Panel_640x480:
	   break;
	default:
	   if(SiS_Pr->SiS_LCDInfo & DontExpandLCD) tempbx++;
	}

	if(SiS_Pr->SiS_LCDInfo & LCDPass11) tempbx = 30;

#ifdef CONFIG_FB_SIS_300
	if(SiS_Pr->SiS_CustomT == CUT_BARCO1024) {
	   tempbx = 82;
	   if(SiS_Pr->SiS_LCDInfo & DontExpandLCD) tempbx++;
	} else if(SiS_Pr->SiS_CustomT == CUT_PANEL848 || SiS_Pr->SiS_CustomT == CUT_PANEL856) {
	   tempbx = 84;
	   if(SiS_Pr->SiS_LCDInfo & DontExpandLCD) tempbx++;
	}
#endif

     }

     (*CRT2Index) = tempbx;
     (*ResIndex) = tempal & 0x1F;
  }
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
          unsigned short ModeNo = 100;
          unsigned short ModeIdIndex = 100;
          unsigned short RefreshRateTableIndex = 100;
          int _len_SiS_Pr0 = 1;
          struct SiS_Private * SiS_Pr = (struct SiS_Private *) malloc(_len_SiS_Pr0*sizeof(struct SiS_Private));
          for(int _i0 = 0; _i0 < _len_SiS_Pr0; _i0++) {
            SiS_Pr[_i0].SiS_VBType = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_IF_DEF_LVDS = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_LCDResInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_SetFlag = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_LCDInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_TVMode = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_ModeType = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_CHSOverScan = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_IF_DEF_CH70xx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_SiS_Pr__i0__SiS_RefIndex0 = 1;
          SiS_Pr[_i0].SiS_RefIndex = (struct TYPE_6__ *) malloc(_len_SiS_Pr__i0__SiS_RefIndex0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_RefIndex0; _j0++) {
            SiS_Pr[_i0].SiS_RefIndex->Ext_CRT2CRTC = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_RefIndex->Ext_CRT2CRTC_NS = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SiS_Pr__i0__SiS_EModeIDTable0 = 1;
          SiS_Pr[_i0].SiS_EModeIDTable = (struct TYPE_5__ *) malloc(_len_SiS_Pr__i0__SiS_EModeIDTable0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_EModeIDTable0; _j0++) {
            SiS_Pr[_i0].SiS_EModeIDTable->Ext_RESINFO = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SiS_Pr__i0__SiS_SModeIDTable0 = 1;
          SiS_Pr[_i0].SiS_SModeIDTable = (struct TYPE_4__ *) malloc(_len_SiS_Pr__i0__SiS_SModeIDTable0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_SModeIDTable0; _j0++) {
            SiS_Pr[_i0].SiS_SModeIDTable->St_CRT2CRTC = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_CRT2Index0 = 1;
          unsigned short * CRT2Index = (unsigned short *) malloc(_len_CRT2Index0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_CRT2Index0; _i0++) {
            CRT2Index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ResIndex0 = 1;
          unsigned short * ResIndex = (unsigned short *) malloc(_len_ResIndex0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_ResIndex0; _i0++) {
            ResIndex[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SiS_GetCRT2Ptr(SiS_Pr,ModeNo,ModeIdIndex,RefreshRateTableIndex,CRT2Index,ResIndex);
          for(int _aux = 0; _aux < _len_SiS_Pr0; _aux++) {
          free(SiS_Pr[_aux].SiS_RefIndex);
          }
          for(int _aux = 0; _aux < _len_SiS_Pr0; _aux++) {
          free(SiS_Pr[_aux].SiS_EModeIDTable);
          }
          for(int _aux = 0; _aux < _len_SiS_Pr0; _aux++) {
          free(SiS_Pr[_aux].SiS_SModeIDTable);
          }
          free(SiS_Pr);
          free(CRT2Index);
          free(ResIndex);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned short ModeNo = 255;
          unsigned short ModeIdIndex = 255;
          unsigned short RefreshRateTableIndex = 255;
          int _len_SiS_Pr0 = 65025;
          struct SiS_Private * SiS_Pr = (struct SiS_Private *) malloc(_len_SiS_Pr0*sizeof(struct SiS_Private));
          for(int _i0 = 0; _i0 < _len_SiS_Pr0; _i0++) {
            SiS_Pr[_i0].SiS_VBType = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_IF_DEF_LVDS = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_LCDResInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_SetFlag = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_LCDInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_TVMode = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_ModeType = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_CHSOverScan = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_IF_DEF_CH70xx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_SiS_Pr__i0__SiS_RefIndex0 = 1;
          SiS_Pr[_i0].SiS_RefIndex = (struct TYPE_6__ *) malloc(_len_SiS_Pr__i0__SiS_RefIndex0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_RefIndex0; _j0++) {
            SiS_Pr[_i0].SiS_RefIndex->Ext_CRT2CRTC = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_RefIndex->Ext_CRT2CRTC_NS = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SiS_Pr__i0__SiS_EModeIDTable0 = 1;
          SiS_Pr[_i0].SiS_EModeIDTable = (struct TYPE_5__ *) malloc(_len_SiS_Pr__i0__SiS_EModeIDTable0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_EModeIDTable0; _j0++) {
            SiS_Pr[_i0].SiS_EModeIDTable->Ext_RESINFO = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SiS_Pr__i0__SiS_SModeIDTable0 = 1;
          SiS_Pr[_i0].SiS_SModeIDTable = (struct TYPE_4__ *) malloc(_len_SiS_Pr__i0__SiS_SModeIDTable0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_SModeIDTable0; _j0++) {
            SiS_Pr[_i0].SiS_SModeIDTable->St_CRT2CRTC = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_CRT2Index0 = 65025;
          unsigned short * CRT2Index = (unsigned short *) malloc(_len_CRT2Index0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_CRT2Index0; _i0++) {
            CRT2Index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ResIndex0 = 65025;
          unsigned short * ResIndex = (unsigned short *) malloc(_len_ResIndex0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_ResIndex0; _i0++) {
            ResIndex[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SiS_GetCRT2Ptr(SiS_Pr,ModeNo,ModeIdIndex,RefreshRateTableIndex,CRT2Index,ResIndex);
          for(int _aux = 0; _aux < _len_SiS_Pr0; _aux++) {
          free(SiS_Pr[_aux].SiS_RefIndex);
          }
          for(int _aux = 0; _aux < _len_SiS_Pr0; _aux++) {
          free(SiS_Pr[_aux].SiS_EModeIDTable);
          }
          for(int _aux = 0; _aux < _len_SiS_Pr0; _aux++) {
          free(SiS_Pr[_aux].SiS_SModeIDTable);
          }
          free(SiS_Pr);
          free(CRT2Index);
          free(ResIndex);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned short ModeNo = 10;
          unsigned short ModeIdIndex = 10;
          unsigned short RefreshRateTableIndex = 10;
          int _len_SiS_Pr0 = 100;
          struct SiS_Private * SiS_Pr = (struct SiS_Private *) malloc(_len_SiS_Pr0*sizeof(struct SiS_Private));
          for(int _i0 = 0; _i0 < _len_SiS_Pr0; _i0++) {
            SiS_Pr[_i0].SiS_VBType = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_IF_DEF_LVDS = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_LCDResInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_SetFlag = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_LCDInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_TVMode = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_ModeType = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_CHSOverScan = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_IF_DEF_CH70xx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_SiS_Pr__i0__SiS_RefIndex0 = 1;
          SiS_Pr[_i0].SiS_RefIndex = (struct TYPE_6__ *) malloc(_len_SiS_Pr__i0__SiS_RefIndex0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_RefIndex0; _j0++) {
            SiS_Pr[_i0].SiS_RefIndex->Ext_CRT2CRTC = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_RefIndex->Ext_CRT2CRTC_NS = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SiS_Pr__i0__SiS_EModeIDTable0 = 1;
          SiS_Pr[_i0].SiS_EModeIDTable = (struct TYPE_5__ *) malloc(_len_SiS_Pr__i0__SiS_EModeIDTable0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_EModeIDTable0; _j0++) {
            SiS_Pr[_i0].SiS_EModeIDTable->Ext_RESINFO = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SiS_Pr__i0__SiS_SModeIDTable0 = 1;
          SiS_Pr[_i0].SiS_SModeIDTable = (struct TYPE_4__ *) malloc(_len_SiS_Pr__i0__SiS_SModeIDTable0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_SModeIDTable0; _j0++) {
            SiS_Pr[_i0].SiS_SModeIDTable->St_CRT2CRTC = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_CRT2Index0 = 100;
          unsigned short * CRT2Index = (unsigned short *) malloc(_len_CRT2Index0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_CRT2Index0; _i0++) {
            CRT2Index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ResIndex0 = 100;
          unsigned short * ResIndex = (unsigned short *) malloc(_len_ResIndex0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_ResIndex0; _i0++) {
            ResIndex[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SiS_GetCRT2Ptr(SiS_Pr,ModeNo,ModeIdIndex,RefreshRateTableIndex,CRT2Index,ResIndex);
          for(int _aux = 0; _aux < _len_SiS_Pr0; _aux++) {
          free(SiS_Pr[_aux].SiS_RefIndex);
          }
          for(int _aux = 0; _aux < _len_SiS_Pr0; _aux++) {
          free(SiS_Pr[_aux].SiS_EModeIDTable);
          }
          for(int _aux = 0; _aux < _len_SiS_Pr0; _aux++) {
          free(SiS_Pr[_aux].SiS_SModeIDTable);
          }
          free(SiS_Pr);
          free(CRT2Index);
          free(ResIndex);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
