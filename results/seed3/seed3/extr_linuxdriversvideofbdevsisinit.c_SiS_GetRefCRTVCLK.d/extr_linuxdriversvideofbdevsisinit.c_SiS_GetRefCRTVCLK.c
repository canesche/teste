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
struct SiS_Private {TYPE_1__* SiS_RefIndex; } ;
struct TYPE_2__ {int Ext_InfoFlag; unsigned short Ext_CRTVCLK_WIDE; unsigned short Ext_CRTVCLK_NORM; unsigned short Ext_CRTVCLK; } ;

/* Variables and functions */
 int HaveWideTiming ; 

unsigned short
SiS_GetRefCRTVCLK(struct SiS_Private *SiS_Pr, unsigned short Index, int UseWide)
{
   if(SiS_Pr->SiS_RefIndex[Index].Ext_InfoFlag & HaveWideTiming) {
      if(UseWide == 1) {
         return SiS_Pr->SiS_RefIndex[Index].Ext_CRTVCLK_WIDE;
      } else {
         return SiS_Pr->SiS_RefIndex[Index].Ext_CRTVCLK_NORM;
      }
   } else {
      return SiS_Pr->SiS_RefIndex[Index].Ext_CRTVCLK;
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
          unsigned short Index = 100;
          int UseWide = 100;
          int _len_SiS_Pr0 = 1;
          struct SiS_Private * SiS_Pr = (struct SiS_Private *) malloc(_len_SiS_Pr0*sizeof(struct SiS_Private));
          for(int _i0 = 0; _i0 < _len_SiS_Pr0; _i0++) {
              int _len_SiS_Pr__i0__SiS_RefIndex0 = 1;
          SiS_Pr[_i0].SiS_RefIndex = (struct TYPE_2__ *) malloc(_len_SiS_Pr__i0__SiS_RefIndex0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_RefIndex0; _j0++) {
            SiS_Pr[_i0].SiS_RefIndex->Ext_InfoFlag = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_RefIndex->Ext_CRTVCLK_WIDE = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_RefIndex->Ext_CRTVCLK_NORM = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_RefIndex->Ext_CRTVCLK = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned short benchRet = SiS_GetRefCRTVCLK(SiS_Pr,Index,UseWide);
          printf("%hu\n", benchRet); 
          for(int _aux = 0; _aux < _len_SiS_Pr0; _aux++) {
          free(SiS_Pr[_aux].SiS_RefIndex);
          }
          free(SiS_Pr);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned short Index = 255;
          int UseWide = 255;
          int _len_SiS_Pr0 = 65025;
          struct SiS_Private * SiS_Pr = (struct SiS_Private *) malloc(_len_SiS_Pr0*sizeof(struct SiS_Private));
          for(int _i0 = 0; _i0 < _len_SiS_Pr0; _i0++) {
              int _len_SiS_Pr__i0__SiS_RefIndex0 = 1;
          SiS_Pr[_i0].SiS_RefIndex = (struct TYPE_2__ *) malloc(_len_SiS_Pr__i0__SiS_RefIndex0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_RefIndex0; _j0++) {
            SiS_Pr[_i0].SiS_RefIndex->Ext_InfoFlag = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_RefIndex->Ext_CRTVCLK_WIDE = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_RefIndex->Ext_CRTVCLK_NORM = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_RefIndex->Ext_CRTVCLK = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned short benchRet = SiS_GetRefCRTVCLK(SiS_Pr,Index,UseWide);
          printf("%hu\n", benchRet); 
          for(int _aux = 0; _aux < _len_SiS_Pr0; _aux++) {
          free(SiS_Pr[_aux].SiS_RefIndex);
          }
          free(SiS_Pr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned short Index = 10;
          int UseWide = 10;
          int _len_SiS_Pr0 = 100;
          struct SiS_Private * SiS_Pr = (struct SiS_Private *) malloc(_len_SiS_Pr0*sizeof(struct SiS_Private));
          for(int _i0 = 0; _i0 < _len_SiS_Pr0; _i0++) {
              int _len_SiS_Pr__i0__SiS_RefIndex0 = 1;
          SiS_Pr[_i0].SiS_RefIndex = (struct TYPE_2__ *) malloc(_len_SiS_Pr__i0__SiS_RefIndex0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_SiS_Pr__i0__SiS_RefIndex0; _j0++) {
            SiS_Pr[_i0].SiS_RefIndex->Ext_InfoFlag = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_RefIndex->Ext_CRTVCLK_WIDE = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_RefIndex->Ext_CRTVCLK_NORM = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_RefIndex->Ext_CRTVCLK = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned short benchRet = SiS_GetRefCRTVCLK(SiS_Pr,Index,UseWide);
          printf("%hu\n", benchRet); 
          for(int _aux = 0; _aux < _len_SiS_Pr0; _aux++) {
          free(SiS_Pr[_aux].SiS_RefIndex);
          }
          free(SiS_Pr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
