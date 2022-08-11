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
struct vb_device_info {unsigned short TVInfo; int VBInfo; } ;
struct SiS_TVData {int dummy; } ;
struct TYPE_6__ {unsigned short Ext_ModeFlag; } ;
struct TYPE_5__ {unsigned short Ext_CRT2CRTC; } ;
struct TYPE_4__ {int MASK; unsigned short CAP; struct SiS_TVData const* DATAPTR; } ;

/* Variables and functions */
 unsigned short HalfDCLK ; 
 int SetInSlaveMode ; 
 unsigned short SetTVLockMode ; 
 unsigned short SetTVLowResolution ; 
 TYPE_3__* XGI330_EModeIDTable ; 
 TYPE_2__* XGI330_RefIndex ; 
 TYPE_1__* XGI_TVDataTable ; 

__attribute__((used)) static struct SiS_TVData const *XGI_GetTVPtr(
	unsigned short ModeIdIndex,
	unsigned short RefreshRateTableIndex,
	struct vb_device_info *pVBInfo)
{
	unsigned short i, tempdx, tempal, modeflag;

	modeflag = XGI330_EModeIDTable[ModeIdIndex].Ext_ModeFlag;
	tempal = XGI330_RefIndex[RefreshRateTableIndex].Ext_CRT2CRTC;
	tempal = tempal & 0x3f;
	tempdx = pVBInfo->TVInfo;

	if (pVBInfo->VBInfo & SetInSlaveMode)
		tempdx = tempdx | SetTVLockMode;

	if (modeflag & HalfDCLK)
		tempdx = tempdx | SetTVLowResolution;

	i = 0;

	while (XGI_TVDataTable[i].MASK != 0xffff) {
		if ((tempdx & XGI_TVDataTable[i].MASK) ==
			XGI_TVDataTable[i].CAP)
			break;
		i++;
	}

	return &XGI_TVDataTable[i].DATAPTR[tempal];
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
            pVBInfo[_i0].TVInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct SiS_TVData * benchRet = XGI_GetTVPtr(ModeIdIndex,RefreshRateTableIndex,pVBInfo);
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
            pVBInfo[_i0].TVInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct SiS_TVData * benchRet = XGI_GetTVPtr(ModeIdIndex,RefreshRateTableIndex,pVBInfo);
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
            pVBInfo[_i0].TVInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct SiS_TVData * benchRet = XGI_GetTVPtr(ModeIdIndex,RefreshRateTableIndex,pVBInfo);
          free(pVBInfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
