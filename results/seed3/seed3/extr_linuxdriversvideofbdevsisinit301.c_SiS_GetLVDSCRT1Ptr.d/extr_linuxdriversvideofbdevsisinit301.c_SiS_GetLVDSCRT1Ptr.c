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
struct SiS_Private {int SiS_VBInfo; int SiS_TVMode; scalar_t__ SiS_ModeType; int SiS_LCDResInfo; int SiS_LCDInfo; scalar_t__ SiS_CHSOverScan; scalar_t__ SiS_IF_DEF_CH70xx; TYPE_3__* SiS_RefIndex; TYPE_2__* SiS_EModeIDTable; TYPE_1__* SiS_SModeIDTable; } ;
struct TYPE_6__ {unsigned short Ext_CRT2CRTC; } ;
struct TYPE_5__ {unsigned short Ext_ModeFlag; } ;
struct TYPE_4__ {unsigned short St_ModeFlag; unsigned short St_CRT2CRTC; } ;

/* Variables and functions */
 int DontExpandLCD ; 
 unsigned short HalfDCLK ; 
 scalar_t__ ModeVGA ; 
#define  Panel_1024x600 132 
#define  Panel_320x240_1 131 
#define  Panel_320x240_2 130 
#define  Panel_320x240_3 129 
#define  Panel_640x480 128 
 int SetCRT2ToTV ; 
 int TVSetCHOverScan ; 
 int TVSetPAL ; 
 int TVSetPALM ; 

__attribute__((used)) static bool
SiS_GetLVDSCRT1Ptr(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
		   unsigned short RefreshRateTableIndex, unsigned short *ResIndex,
		   unsigned short *DisplayType)
 {
  unsigned short modeflag = 0;
  bool checkhd = true;

  /* Pass 1:1 not supported here */

  if(ModeNo <= 0x13) {
     modeflag = SiS_Pr->SiS_SModeIDTable[ModeIdIndex].St_ModeFlag;
     (*ResIndex) = SiS_Pr->SiS_SModeIDTable[ModeIdIndex].St_CRT2CRTC;
  } else {
     modeflag = SiS_Pr->SiS_EModeIDTable[ModeIdIndex].Ext_ModeFlag;
     (*ResIndex) = SiS_Pr->SiS_RefIndex[RefreshRateTableIndex].Ext_CRT2CRTC;
  }

  (*ResIndex) &= 0x3F;

  if((SiS_Pr->SiS_IF_DEF_CH70xx) && (SiS_Pr->SiS_VBInfo & SetCRT2ToTV)) {

     (*DisplayType) = 80;
     if((SiS_Pr->SiS_TVMode & TVSetPAL) && (!(SiS_Pr->SiS_TVMode & TVSetPALM))) {
      	(*DisplayType) = 82;
	if(SiS_Pr->SiS_ModeType > ModeVGA) {
	   if(SiS_Pr->SiS_CHSOverScan) (*DisplayType) = 84;
	}
     }
     if((*DisplayType) != 84) {
        if(SiS_Pr->SiS_TVMode & TVSetCHOverScan) (*DisplayType)++;
     }

  } else {

     (*DisplayType = 0);
     switch(SiS_Pr->SiS_LCDResInfo) {
     case Panel_320x240_1: (*DisplayType) = 50;
			   checkhd = false;
			   break;
     case Panel_320x240_2: (*DisplayType) = 14;
			   break;
     case Panel_320x240_3: (*DisplayType) = 18;
			   break;
     case Panel_640x480:   (*DisplayType) = 10;
			   break;
     case Panel_1024x600:  (*DisplayType) = 26;
			   break;
     default: return true;
     }

     if(checkhd) {
        if(modeflag & HalfDCLK) (*DisplayType)++;
     }

     if(SiS_Pr->SiS_LCDResInfo == Panel_1024x600) {
        if(SiS_Pr->SiS_LCDInfo & DontExpandLCD) (*DisplayType) += 2;
     }

  }

  return true;
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
            SiS_Pr[_i0].SiS_VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_TVMode = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_ModeType = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_LCDResInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_LCDInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_CHSOverScan = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_IF_DEF_CH70xx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_SiS_Pr__i0__SiS_RefIndex0 = 1;
          SiS_Pr[_i0].SiS_RefIndex = (struct TYPE_6__ *) malloc(_len_SiS_Pr__i0__SiS_RefIndex0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_RefIndex0; _j0++) {
            SiS_Pr[_i0].SiS_RefIndex->Ext_CRT2CRTC = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SiS_Pr__i0__SiS_EModeIDTable0 = 1;
          SiS_Pr[_i0].SiS_EModeIDTable = (struct TYPE_5__ *) malloc(_len_SiS_Pr__i0__SiS_EModeIDTable0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_EModeIDTable0; _j0++) {
            SiS_Pr[_i0].SiS_EModeIDTable->Ext_ModeFlag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SiS_Pr__i0__SiS_SModeIDTable0 = 1;
          SiS_Pr[_i0].SiS_SModeIDTable = (struct TYPE_4__ *) malloc(_len_SiS_Pr__i0__SiS_SModeIDTable0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_SModeIDTable0; _j0++) {
            SiS_Pr[_i0].SiS_SModeIDTable->St_ModeFlag = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_SModeIDTable->St_CRT2CRTC = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ResIndex0 = 1;
          unsigned short * ResIndex = (unsigned short *) malloc(_len_ResIndex0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_ResIndex0; _i0++) {
            ResIndex[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_DisplayType0 = 1;
          unsigned short * DisplayType = (unsigned short *) malloc(_len_DisplayType0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_DisplayType0; _i0++) {
            DisplayType[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SiS_GetLVDSCRT1Ptr(SiS_Pr,ModeNo,ModeIdIndex,RefreshRateTableIndex,ResIndex,DisplayType);
          printf("%d\n", benchRet); 
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
          free(ResIndex);
          free(DisplayType);
        
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
            SiS_Pr[_i0].SiS_VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_TVMode = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_ModeType = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_LCDResInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_LCDInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_CHSOverScan = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_IF_DEF_CH70xx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_SiS_Pr__i0__SiS_RefIndex0 = 1;
          SiS_Pr[_i0].SiS_RefIndex = (struct TYPE_6__ *) malloc(_len_SiS_Pr__i0__SiS_RefIndex0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_RefIndex0; _j0++) {
            SiS_Pr[_i0].SiS_RefIndex->Ext_CRT2CRTC = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SiS_Pr__i0__SiS_EModeIDTable0 = 1;
          SiS_Pr[_i0].SiS_EModeIDTable = (struct TYPE_5__ *) malloc(_len_SiS_Pr__i0__SiS_EModeIDTable0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_EModeIDTable0; _j0++) {
            SiS_Pr[_i0].SiS_EModeIDTable->Ext_ModeFlag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SiS_Pr__i0__SiS_SModeIDTable0 = 1;
          SiS_Pr[_i0].SiS_SModeIDTable = (struct TYPE_4__ *) malloc(_len_SiS_Pr__i0__SiS_SModeIDTable0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_SModeIDTable0; _j0++) {
            SiS_Pr[_i0].SiS_SModeIDTable->St_ModeFlag = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_SModeIDTable->St_CRT2CRTC = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ResIndex0 = 65025;
          unsigned short * ResIndex = (unsigned short *) malloc(_len_ResIndex0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_ResIndex0; _i0++) {
            ResIndex[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_DisplayType0 = 65025;
          unsigned short * DisplayType = (unsigned short *) malloc(_len_DisplayType0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_DisplayType0; _i0++) {
            DisplayType[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SiS_GetLVDSCRT1Ptr(SiS_Pr,ModeNo,ModeIdIndex,RefreshRateTableIndex,ResIndex,DisplayType);
          printf("%d\n", benchRet); 
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
          free(ResIndex);
          free(DisplayType);
        
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
            SiS_Pr[_i0].SiS_VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_TVMode = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_ModeType = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_LCDResInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_LCDInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_CHSOverScan = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_IF_DEF_CH70xx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_SiS_Pr__i0__SiS_RefIndex0 = 1;
          SiS_Pr[_i0].SiS_RefIndex = (struct TYPE_6__ *) malloc(_len_SiS_Pr__i0__SiS_RefIndex0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_RefIndex0; _j0++) {
            SiS_Pr[_i0].SiS_RefIndex->Ext_CRT2CRTC = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SiS_Pr__i0__SiS_EModeIDTable0 = 1;
          SiS_Pr[_i0].SiS_EModeIDTable = (struct TYPE_5__ *) malloc(_len_SiS_Pr__i0__SiS_EModeIDTable0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_EModeIDTable0; _j0++) {
            SiS_Pr[_i0].SiS_EModeIDTable->Ext_ModeFlag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SiS_Pr__i0__SiS_SModeIDTable0 = 1;
          SiS_Pr[_i0].SiS_SModeIDTable = (struct TYPE_4__ *) malloc(_len_SiS_Pr__i0__SiS_SModeIDTable0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_SModeIDTable0; _j0++) {
            SiS_Pr[_i0].SiS_SModeIDTable->St_ModeFlag = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_SModeIDTable->St_CRT2CRTC = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ResIndex0 = 100;
          unsigned short * ResIndex = (unsigned short *) malloc(_len_ResIndex0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_ResIndex0; _i0++) {
            ResIndex[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_DisplayType0 = 100;
          unsigned short * DisplayType = (unsigned short *) malloc(_len_DisplayType0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_DisplayType0; _i0++) {
            DisplayType[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SiS_GetLVDSCRT1Ptr(SiS_Pr,ModeNo,ModeIdIndex,RefreshRateTableIndex,ResIndex,DisplayType);
          printf("%d\n", benchRet); 
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
          free(ResIndex);
          free(DisplayType);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
