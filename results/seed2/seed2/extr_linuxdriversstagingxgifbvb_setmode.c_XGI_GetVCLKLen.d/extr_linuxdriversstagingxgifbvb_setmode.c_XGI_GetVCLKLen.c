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
struct vb_device_info {int VBType; int VBInfo; int SetFlag; } ;
struct TYPE_4__ {unsigned char Part4_A; unsigned char Part4_B; } ;
struct TYPE_3__ {unsigned char SR2B; unsigned char SR2C; } ;

/* Variables and functions */
 int ProgrammingCRT2 ; 
 int VB_SIS301 ; 
 int VB_SIS301B ; 
 int VB_SIS301LV ; 
 int VB_SIS302B ; 
 int VB_SIS302LV ; 
 int VB_XGI301C ; 
 int XGI_SetCRT2ToLCDA ; 
 TYPE_2__* XGI_VBVCLKData ; 
 TYPE_1__* XGI_VCLKData ; 

__attribute__((used)) static void XGI_GetVCLKLen(unsigned char tempal, unsigned char *di_0,
			   unsigned char *di_1, struct vb_device_info *pVBInfo)
{
	if (pVBInfo->VBType & (VB_SIS301 | VB_SIS301B | VB_SIS302B
			| VB_SIS301LV | VB_SIS302LV | VB_XGI301C)) {
		if (!(pVBInfo->VBInfo & XGI_SetCRT2ToLCDA) &&
		    (pVBInfo->SetFlag & ProgrammingCRT2)) {
			*di_0 = XGI_VBVCLKData[tempal].Part4_A;
			*di_1 = XGI_VBVCLKData[tempal].Part4_B;
		}
	} else {
		*di_0 = XGI_VCLKData[tempal].SR2B;
		*di_1 = XGI_VCLKData[tempal].SR2C;
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
          unsigned char tempal = 100;
          int _len_di_00 = 1;
          unsigned char * di_0 = (unsigned char *) malloc(_len_di_00*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_di_00; _i0++) {
            di_0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_di_10 = 1;
          unsigned char * di_1 = (unsigned char *) malloc(_len_di_10*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_di_10; _i0++) {
            di_1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pVBInfo0 = 1;
          struct vb_device_info * pVBInfo = (struct vb_device_info *) malloc(_len_pVBInfo0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_pVBInfo0; _i0++) {
            pVBInfo[_i0].VBType = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].SetFlag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          XGI_GetVCLKLen(tempal,di_0,di_1,pVBInfo);
          free(di_0);
          free(di_1);
          free(pVBInfo);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char tempal = 255;
          int _len_di_00 = 65025;
          unsigned char * di_0 = (unsigned char *) malloc(_len_di_00*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_di_00; _i0++) {
            di_0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_di_10 = 65025;
          unsigned char * di_1 = (unsigned char *) malloc(_len_di_10*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_di_10; _i0++) {
            di_1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pVBInfo0 = 65025;
          struct vb_device_info * pVBInfo = (struct vb_device_info *) malloc(_len_pVBInfo0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_pVBInfo0; _i0++) {
            pVBInfo[_i0].VBType = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].SetFlag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          XGI_GetVCLKLen(tempal,di_0,di_1,pVBInfo);
          free(di_0);
          free(di_1);
          free(pVBInfo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char tempal = 10;
          int _len_di_00 = 100;
          unsigned char * di_0 = (unsigned char *) malloc(_len_di_00*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_di_00; _i0++) {
            di_0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_di_10 = 100;
          unsigned char * di_1 = (unsigned char *) malloc(_len_di_10*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_di_10; _i0++) {
            di_1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pVBInfo0 = 100;
          struct vb_device_info * pVBInfo = (struct vb_device_info *) malloc(_len_pVBInfo0*sizeof(struct vb_device_info));
          for(int _i0 = 0; _i0 < _len_pVBInfo0; _i0++) {
            pVBInfo[_i0].VBType = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].VBInfo = ((-2 * (next_i()%2)) + 1) * next_i();
        pVBInfo[_i0].SetFlag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          XGI_GetVCLKLen(tempal,di_0,di_1,pVBInfo);
          free(di_0);
          free(di_1);
          free(pVBInfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
