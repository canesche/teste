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
struct vb_device_info {unsigned short VGAHDE; unsigned short HDE; unsigned short VGAVDE; unsigned short VDE; } ;
struct TYPE_4__ {unsigned short Ext_RESINFO; } ;
struct TYPE_3__ {unsigned short HTotal; unsigned short VTotal; } ;

/* Variables and functions */
 unsigned short DoubleScanMode ; 
 unsigned short HalfDCLK ; 
 TYPE_2__* XGI330_EModeIDTable ; 
 TYPE_1__* XGI330_ModeResInfo ; 

__attribute__((used)) static void XGI_GetLVDSResInfo(unsigned short ModeIdIndex,
			       struct vb_device_info *pVBInfo)
{
	unsigned short resindex, xres, yres, modeflag;

	/* si+Ext_ResInfo */
	modeflag = XGI330_EModeIDTable[ModeIdIndex].Ext_RESINFO;

	/* si+Ext_ResInfo */
	resindex = XGI330_EModeIDTable[ModeIdIndex].Ext_RESINFO;

	xres = XGI330_ModeResInfo[resindex].HTotal;
	yres = XGI330_ModeResInfo[resindex].VTotal;

	if (modeflag & HalfDCLK)
		xres <<= 1;

	if (modeflag & DoubleScanMode)
		yres <<= 1;

	if (xres == 720)
		xres = 640;

	pVBInfo->VGAHDE = xres;
	pVBInfo->HDE = xres;
	pVBInfo->VGAVDE = yres;
	pVBInfo->VDE = yres;
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
          int _len_pVBInfo0 = 1;
          struct vb_device_info * pVBInfo = (struct vb_device_info *) malloc(_len_pVBInfo0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_pVBInfo0; _i0++) {
            pVBInfo[_i0].VGAHDE = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].HDE = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VGAVDE = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VDE = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          XGI_GetLVDSResInfo(ModeIdIndex,pVBInfo);
          free(pVBInfo);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned short ModeIdIndex = 255;
          int _len_pVBInfo0 = 65025;
          struct vb_device_info * pVBInfo = (struct vb_device_info *) malloc(_len_pVBInfo0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_pVBInfo0; _i0++) {
            pVBInfo[_i0].VGAHDE = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].HDE = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VGAVDE = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VDE = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          XGI_GetLVDSResInfo(ModeIdIndex,pVBInfo);
          free(pVBInfo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned short ModeIdIndex = 10;
          int _len_pVBInfo0 = 100;
          struct vb_device_info * pVBInfo = (struct vb_device_info *) malloc(_len_pVBInfo0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_pVBInfo0; _i0++) {
            pVBInfo[_i0].VGAHDE = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].HDE = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VGAVDE = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VDE = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          XGI_GetLVDSResInfo(ModeIdIndex,pVBInfo);
          free(pVBInfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
