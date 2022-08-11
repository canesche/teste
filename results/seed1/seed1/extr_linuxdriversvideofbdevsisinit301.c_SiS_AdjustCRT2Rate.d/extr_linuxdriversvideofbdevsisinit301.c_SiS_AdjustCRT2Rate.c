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
struct SiS_Private {int SiS_VBType; int SiS_VBInfo; scalar_t__ ChipType; int SiS_LCDInfo; int SiS_TVMode; scalar_t__ SiS_IF_DEF_CH70xx; TYPE_1__* SiS_RefIndex; } ;
struct TYPE_2__ {unsigned short ModeID; unsigned short Ext_InfoFlag; } ;

/* Variables and functions */
 int DontExpandLCD ; 
 int LCDPass11 ; 
 scalar_t__ SIS_315H ; 
 int SetCRT2ToAVIDEO ; 
 int SetCRT2ToHiVision ; 
 int SetCRT2ToLCD ; 
 int SetCRT2ToLCDA ; 
 int SetCRT2ToRAMDAC ; 
 int SetCRT2ToSCART ; 
 int SetCRT2ToSVIDEO ; 
 int SetCRT2ToTV ; 
 int SetCRT2ToYPbPr525750 ; 
 unsigned short Support64048060Hz ; 
 unsigned short SupportCHTV ; 
 unsigned short SupportHiVision ; 
 unsigned short SupportLCD ; 
 unsigned short SupportRAMDAC2 ; 
 unsigned short SupportRAMDAC2_135 ; 
 unsigned short SupportRAMDAC2_162 ; 
 unsigned short SupportRAMDAC2_202 ; 
 unsigned short SupportTV ; 
 unsigned short SupportTV1024 ; 
 unsigned short SupportYPbPr750p ; 
 int TVSetYPbPr750p ; 
 int VB_SIS30xBLV ; 
 int VB_SISRAMDAC202 ; 
 int VB_SISVB ; 

__attribute__((used)) static bool
SiS_AdjustCRT2Rate(struct SiS_Private *SiS_Pr, unsigned short ModeNo, unsigned short ModeIdIndex,
		unsigned short RRTI, unsigned short *i)
{
   unsigned short checkmask=0, modeid, infoflag;

   modeid = SiS_Pr->SiS_RefIndex[RRTI + (*i)].ModeID;

   if(SiS_Pr->SiS_VBType & VB_SISVB) {

      if(SiS_Pr->SiS_VBInfo & SetCRT2ToRAMDAC) {

	 checkmask |= SupportRAMDAC2;
	 if(SiS_Pr->ChipType >= SIS_315H) {
	    checkmask |= SupportRAMDAC2_135;
	    if(SiS_Pr->SiS_VBType & VB_SIS30xBLV) {
	       checkmask |= SupportRAMDAC2_162;
	       if(SiS_Pr->SiS_VBType & VB_SISRAMDAC202) {
		  checkmask |= SupportRAMDAC2_202;
	       }
	    }
	 }

      } else if(SiS_Pr->SiS_VBInfo & (SetCRT2ToLCD | SetCRT2ToLCDA)) {

	 checkmask |= SupportLCD;
	 if(SiS_Pr->ChipType >= SIS_315H) {
	    if(SiS_Pr->SiS_VBType & VB_SISVB) {
	       if((SiS_Pr->SiS_LCDInfo & DontExpandLCD) && (SiS_Pr->SiS_LCDInfo & LCDPass11)) {
	          if(modeid == 0x2e) checkmask |= Support64048060Hz;
	       }
	    }
	 }

      } else if(SiS_Pr->SiS_VBInfo & SetCRT2ToHiVision) {

	 checkmask |= SupportHiVision;

      } else if(SiS_Pr->SiS_VBInfo & (SetCRT2ToYPbPr525750|SetCRT2ToAVIDEO|SetCRT2ToSVIDEO|SetCRT2ToSCART)) {

	 checkmask |= SupportTV;
	 if(SiS_Pr->SiS_VBType & VB_SIS30xBLV) {
	    checkmask |= SupportTV1024;
	    if(SiS_Pr->SiS_VBInfo & SetCRT2ToYPbPr525750) {
	       if(SiS_Pr->SiS_TVMode & TVSetYPbPr750p) {
	          checkmask |= SupportYPbPr750p;
	       }
	    }
	 }

      }

   } else {	/* LVDS */

      if(SiS_Pr->SiS_IF_DEF_CH70xx != 0) {
	 if(SiS_Pr->SiS_VBInfo & SetCRT2ToTV) {
	    checkmask |= SupportCHTV;
	 }
      }

      if(SiS_Pr->SiS_VBInfo & SetCRT2ToLCD) {
	 checkmask |= SupportLCD;
      }

   }

   /* Look backwards in table for matching CRT2 mode */
   for(; SiS_Pr->SiS_RefIndex[RRTI + (*i)].ModeID == modeid; (*i)--) {
      infoflag = SiS_Pr->SiS_RefIndex[RRTI + (*i)].Ext_InfoFlag;
      if(infoflag & checkmask) return true;
      if((*i) == 0) break;
   }

   /* Look through the whole mode-section of the table from the beginning
    * for a matching CRT2 mode if no mode was found yet.
    */
   for((*i) = 0; ; (*i)++) {
      if(SiS_Pr->SiS_RefIndex[RRTI + (*i)].ModeID != modeid) break;
      infoflag = SiS_Pr->SiS_RefIndex[RRTI + (*i)].Ext_InfoFlag;
      if(infoflag & checkmask) return true;
   }
   return false;
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
          unsigned short RRTI = 100;
          int _len_SiS_Pr0 = 1;
          struct SiS_Private * SiS_Pr = (struct SiS_Private *) malloc(_len_SiS_Pr0*sizeof(struct SiS_Private));
          for(int _i0 = 0; _i0 < _len_SiS_Pr0; _i0++) {
            SiS_Pr[_i0].SiS_VBType = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].ChipType = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_LCDInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_TVMode = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_IF_DEF_CH70xx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_SiS_Pr__i0__SiS_RefIndex0 = 1;
          SiS_Pr[_i0].SiS_RefIndex = (struct TYPE_2__ *) malloc(_len_SiS_Pr__i0__SiS_RefIndex0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_RefIndex0; _j0++) {
            SiS_Pr[_i0].SiS_RefIndex->ModeID = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_RefIndex->Ext_InfoFlag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_i0 = 1;
          unsigned short * i = (unsigned short *) malloc(_len_i0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_i0; _i0++) {
            i[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SiS_AdjustCRT2Rate(SiS_Pr,ModeNo,ModeIdIndex,RRTI,i);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_SiS_Pr0; _aux++) {
          free(SiS_Pr[_aux].SiS_RefIndex);
          }
          free(SiS_Pr);
          free(i);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned short ModeNo = 255;
          unsigned short ModeIdIndex = 255;
          unsigned short RRTI = 255;
          int _len_SiS_Pr0 = 65025;
          struct SiS_Private * SiS_Pr = (struct SiS_Private *) malloc(_len_SiS_Pr0*sizeof(struct SiS_Private));
          for(int _i0 = 0; _i0 < _len_SiS_Pr0; _i0++) {
            SiS_Pr[_i0].SiS_VBType = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].ChipType = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_LCDInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_TVMode = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_IF_DEF_CH70xx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_SiS_Pr__i0__SiS_RefIndex0 = 1;
          SiS_Pr[_i0].SiS_RefIndex = (struct TYPE_2__ *) malloc(_len_SiS_Pr__i0__SiS_RefIndex0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_RefIndex0; _j0++) {
            SiS_Pr[_i0].SiS_RefIndex->ModeID = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_RefIndex->Ext_InfoFlag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_i0 = 65025;
          unsigned short * i = (unsigned short *) malloc(_len_i0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_i0; _i0++) {
            i[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SiS_AdjustCRT2Rate(SiS_Pr,ModeNo,ModeIdIndex,RRTI,i);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_SiS_Pr0; _aux++) {
          free(SiS_Pr[_aux].SiS_RefIndex);
          }
          free(SiS_Pr);
          free(i);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned short ModeNo = 10;
          unsigned short ModeIdIndex = 10;
          unsigned short RRTI = 10;
          int _len_SiS_Pr0 = 100;
          struct SiS_Private * SiS_Pr = (struct SiS_Private *) malloc(_len_SiS_Pr0*sizeof(struct SiS_Private));
          for(int _i0 = 0; _i0 < _len_SiS_Pr0; _i0++) {
            SiS_Pr[_i0].SiS_VBType = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].ChipType = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_LCDInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_TVMode = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_IF_DEF_CH70xx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_SiS_Pr__i0__SiS_RefIndex0 = 1;
          SiS_Pr[_i0].SiS_RefIndex = (struct TYPE_2__ *) malloc(_len_SiS_Pr__i0__SiS_RefIndex0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_RefIndex0; _j0++) {
            SiS_Pr[_i0].SiS_RefIndex->ModeID = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_RefIndex->Ext_InfoFlag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_i0 = 100;
          unsigned short * i = (unsigned short *) malloc(_len_i0*sizeof(unsigned short));
          for(int _i0 = 0; _i0 < _len_i0; _i0++) {
            i[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SiS_AdjustCRT2Rate(SiS_Pr,ModeNo,ModeIdIndex,RRTI,i);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_SiS_Pr0; _aux++) {
          free(SiS_Pr[_aux].SiS_RefIndex);
          }
          free(SiS_Pr);
          free(i);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
