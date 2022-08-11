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
struct xtimings {int sync; int HTotal; int HDisplay; int HSyncStart; int HSyncEnd; int VTotal; int VDisplay; int VSyncStart; int VSyncEnd; scalar_t__ dblscan; } ;
struct savagefb_par {int dummy; } ;
struct savage_reg {int MiscOutReg; int* Sequencer; int* CRTC; int* Graphics; int* Attribute; } ;
struct fb_var_screeninfo {int xres_virtual; } ;

/* Variables and functions */
 int FB_SYNC_HOR_HIGH_ACT ; 
 int FB_SYNC_VERT_HIGH_ACT ; 

__attribute__((used)) static void vgaHWInit(struct fb_var_screeninfo *var,
		      struct savagefb_par            *par,
		      struct xtimings                *timings,
		      struct savage_reg              *reg)
{
	reg->MiscOutReg = 0x23;

	if (!(timings->sync & FB_SYNC_HOR_HIGH_ACT))
		reg->MiscOutReg |= 0x40;

	if (!(timings->sync & FB_SYNC_VERT_HIGH_ACT))
		reg->MiscOutReg |= 0x80;

	/*
	 * Time Sequencer
	 */
	reg->Sequencer[0x00] = 0x00;
	reg->Sequencer[0x01] = 0x01;
	reg->Sequencer[0x02] = 0x0F;
	reg->Sequencer[0x03] = 0x00;          /* Font select */
	reg->Sequencer[0x04] = 0x0E;          /* Misc */

	/*
	 * CRTC Controller
	 */
	reg->CRTC[0x00] = (timings->HTotal >> 3) - 5;
	reg->CRTC[0x01] = (timings->HDisplay >> 3) - 1;
	reg->CRTC[0x02] = (timings->HSyncStart >> 3) - 1;
	reg->CRTC[0x03] = (((timings->HSyncEnd >> 3)  - 1) & 0x1f) | 0x80;
	reg->CRTC[0x04] = (timings->HSyncStart >> 3);
	reg->CRTC[0x05] = ((((timings->HSyncEnd >> 3) - 1) & 0x20) << 2) |
		(((timings->HSyncEnd >> 3)) & 0x1f);
	reg->CRTC[0x06] = (timings->VTotal - 2) & 0xFF;
	reg->CRTC[0x07] = (((timings->VTotal - 2) & 0x100) >> 8) |
		(((timings->VDisplay - 1) & 0x100) >> 7) |
		((timings->VSyncStart & 0x100) >> 6) |
		(((timings->VSyncStart - 1) & 0x100) >> 5) |
		0x10 |
		(((timings->VTotal - 2) & 0x200) >> 4) |
		(((timings->VDisplay - 1) & 0x200) >> 3) |
		((timings->VSyncStart & 0x200) >> 2);
	reg->CRTC[0x08] = 0x00;
	reg->CRTC[0x09] = (((timings->VSyncStart - 1) & 0x200) >> 4) | 0x40;

	if (timings->dblscan)
		reg->CRTC[0x09] |= 0x80;

	reg->CRTC[0x0a] = 0x00;
	reg->CRTC[0x0b] = 0x00;
	reg->CRTC[0x0c] = 0x00;
	reg->CRTC[0x0d] = 0x00;
	reg->CRTC[0x0e] = 0x00;
	reg->CRTC[0x0f] = 0x00;
	reg->CRTC[0x10] = timings->VSyncStart & 0xff;
	reg->CRTC[0x11] = (timings->VSyncEnd & 0x0f) | 0x20;
	reg->CRTC[0x12] = (timings->VDisplay - 1) & 0xff;
	reg->CRTC[0x13] = var->xres_virtual >> 4;
	reg->CRTC[0x14] = 0x00;
	reg->CRTC[0x15] = (timings->VSyncStart - 1) & 0xff;
	reg->CRTC[0x16] = (timings->VSyncEnd - 1) & 0xff;
	reg->CRTC[0x17] = 0xc3;
	reg->CRTC[0x18] = 0xff;

	/*
	 * are these unnecessary?
	 * vgaHWHBlankKGA(mode, regp, 0, KGA_FIX_OVERSCAN|KGA_ENABLE_ON_ZERO);
	 * vgaHWVBlankKGA(mode, regp, 0, KGA_FIX_OVERSCAN|KGA_ENABLE_ON_ZERO);
	 */

	/*
	 * Graphics Display Controller
	 */
	reg->Graphics[0x00] = 0x00;
	reg->Graphics[0x01] = 0x00;
	reg->Graphics[0x02] = 0x00;
	reg->Graphics[0x03] = 0x00;
	reg->Graphics[0x04] = 0x00;
	reg->Graphics[0x05] = 0x40;
	reg->Graphics[0x06] = 0x05;   /* only map 64k VGA memory !!!! */
	reg->Graphics[0x07] = 0x0F;
	reg->Graphics[0x08] = 0xFF;


	reg->Attribute[0x00]  = 0x00; /* standard colormap translation */
	reg->Attribute[0x01]  = 0x01;
	reg->Attribute[0x02]  = 0x02;
	reg->Attribute[0x03]  = 0x03;
	reg->Attribute[0x04]  = 0x04;
	reg->Attribute[0x05]  = 0x05;
	reg->Attribute[0x06]  = 0x06;
	reg->Attribute[0x07]  = 0x07;
	reg->Attribute[0x08]  = 0x08;
	reg->Attribute[0x09]  = 0x09;
	reg->Attribute[0x0a] = 0x0A;
	reg->Attribute[0x0b] = 0x0B;
	reg->Attribute[0x0c] = 0x0C;
	reg->Attribute[0x0d] = 0x0D;
	reg->Attribute[0x0e] = 0x0E;
	reg->Attribute[0x0f] = 0x0F;
	reg->Attribute[0x10] = 0x41;
	reg->Attribute[0x11] = 0xFF;
	reg->Attribute[0x12] = 0x0F;
	reg->Attribute[0x13] = 0x00;
	reg->Attribute[0x14] = 0x00;
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
          int _len_var0 = 1;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_par0 = 1;
          struct savagefb_par * par = (struct savagefb_par *) malloc(_len_par0*sizeof(struct savagefb_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_timings0 = 1;
          struct xtimings * timings = (struct xtimings *) malloc(_len_timings0*sizeof(struct xtimings));
          for(int _i0 = 0; _i0 < _len_timings0; _i0++) {
            timings[_i0].sync = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].HTotal = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].HDisplay = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].HSyncStart = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].HSyncEnd = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].VTotal = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].VDisplay = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].VSyncStart = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].VSyncEnd = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].dblscan = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg0 = 1;
          struct savage_reg * reg = (struct savage_reg *) malloc(_len_reg0*sizeof(struct savage_reg));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0].MiscOutReg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_reg__i0__Sequencer0 = 1;
          reg[_i0].Sequencer = (int *) malloc(_len_reg__i0__Sequencer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_reg__i0__Sequencer0; _j0++) {
            reg[_i0].Sequencer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg__i0__CRTC0 = 1;
          reg[_i0].CRTC = (int *) malloc(_len_reg__i0__CRTC0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_reg__i0__CRTC0; _j0++) {
            reg[_i0].CRTC[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg__i0__Graphics0 = 1;
          reg[_i0].Graphics = (int *) malloc(_len_reg__i0__Graphics0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_reg__i0__Graphics0; _j0++) {
            reg[_i0].Graphics[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg__i0__Attribute0 = 1;
          reg[_i0].Attribute = (int *) malloc(_len_reg__i0__Attribute0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_reg__i0__Attribute0; _j0++) {
            reg[_i0].Attribute[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vgaHWInit(var,par,timings,reg);
          free(var);
          free(par);
          free(timings);
          for(int _aux = 0; _aux < _len_reg0; _aux++) {
          free(reg[_aux].Sequencer);
          }
          for(int _aux = 0; _aux < _len_reg0; _aux++) {
          free(reg[_aux].CRTC);
          }
          for(int _aux = 0; _aux < _len_reg0; _aux++) {
          free(reg[_aux].Graphics);
          }
          for(int _aux = 0; _aux < _len_reg0; _aux++) {
          free(reg[_aux].Attribute);
          }
          free(reg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_var0 = 65025;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_par0 = 65025;
          struct savagefb_par * par = (struct savagefb_par *) malloc(_len_par0*sizeof(struct savagefb_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_timings0 = 65025;
          struct xtimings * timings = (struct xtimings *) malloc(_len_timings0*sizeof(struct xtimings));
          for(int _i0 = 0; _i0 < _len_timings0; _i0++) {
            timings[_i0].sync = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].HTotal = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].HDisplay = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].HSyncStart = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].HSyncEnd = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].VTotal = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].VDisplay = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].VSyncStart = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].VSyncEnd = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].dblscan = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg0 = 65025;
          struct savage_reg * reg = (struct savage_reg *) malloc(_len_reg0*sizeof(struct savage_reg));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0].MiscOutReg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_reg__i0__Sequencer0 = 1;
          reg[_i0].Sequencer = (int *) malloc(_len_reg__i0__Sequencer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_reg__i0__Sequencer0; _j0++) {
            reg[_i0].Sequencer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg__i0__CRTC0 = 1;
          reg[_i0].CRTC = (int *) malloc(_len_reg__i0__CRTC0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_reg__i0__CRTC0; _j0++) {
            reg[_i0].CRTC[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg__i0__Graphics0 = 1;
          reg[_i0].Graphics = (int *) malloc(_len_reg__i0__Graphics0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_reg__i0__Graphics0; _j0++) {
            reg[_i0].Graphics[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg__i0__Attribute0 = 1;
          reg[_i0].Attribute = (int *) malloc(_len_reg__i0__Attribute0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_reg__i0__Attribute0; _j0++) {
            reg[_i0].Attribute[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vgaHWInit(var,par,timings,reg);
          free(var);
          free(par);
          free(timings);
          for(int _aux = 0; _aux < _len_reg0; _aux++) {
          free(reg[_aux].Sequencer);
          }
          for(int _aux = 0; _aux < _len_reg0; _aux++) {
          free(reg[_aux].CRTC);
          }
          for(int _aux = 0; _aux < _len_reg0; _aux++) {
          free(reg[_aux].Graphics);
          }
          for(int _aux = 0; _aux < _len_reg0; _aux++) {
          free(reg[_aux].Attribute);
          }
          free(reg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_var0 = 100;
          struct fb_var_screeninfo * var = (struct fb_var_screeninfo *) malloc(_len_var0*sizeof(struct fb_var_screeninfo));
          for(int _i0 = 0; _i0 < _len_var0; _i0++) {
            var[_i0].xres_virtual = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_par0 = 100;
          struct savagefb_par * par = (struct savagefb_par *) malloc(_len_par0*sizeof(struct savagefb_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_timings0 = 100;
          struct xtimings * timings = (struct xtimings *) malloc(_len_timings0*sizeof(struct xtimings));
          for(int _i0 = 0; _i0 < _len_timings0; _i0++) {
            timings[_i0].sync = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].HTotal = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].HDisplay = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].HSyncStart = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].HSyncEnd = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].VTotal = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].VDisplay = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].VSyncStart = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].VSyncEnd = ((-2 * (next_i()%2)) + 1) * next_i();
        timings[_i0].dblscan = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg0 = 100;
          struct savage_reg * reg = (struct savage_reg *) malloc(_len_reg0*sizeof(struct savage_reg));
          for(int _i0 = 0; _i0 < _len_reg0; _i0++) {
            reg[_i0].MiscOutReg = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_reg__i0__Sequencer0 = 1;
          reg[_i0].Sequencer = (int *) malloc(_len_reg__i0__Sequencer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_reg__i0__Sequencer0; _j0++) {
            reg[_i0].Sequencer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg__i0__CRTC0 = 1;
          reg[_i0].CRTC = (int *) malloc(_len_reg__i0__CRTC0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_reg__i0__CRTC0; _j0++) {
            reg[_i0].CRTC[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg__i0__Graphics0 = 1;
          reg[_i0].Graphics = (int *) malloc(_len_reg__i0__Graphics0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_reg__i0__Graphics0; _j0++) {
            reg[_i0].Graphics[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_reg__i0__Attribute0 = 1;
          reg[_i0].Attribute = (int *) malloc(_len_reg__i0__Attribute0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_reg__i0__Attribute0; _j0++) {
            reg[_i0].Attribute[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vgaHWInit(var,par,timings,reg);
          free(var);
          free(par);
          free(timings);
          for(int _aux = 0; _aux < _len_reg0; _aux++) {
          free(reg[_aux].Sequencer);
          }
          for(int _aux = 0; _aux < _len_reg0; _aux++) {
          free(reg[_aux].CRTC);
          }
          for(int _aux = 0; _aux < _len_reg0; _aux++) {
          free(reg[_aux].Graphics);
          }
          for(int _aux = 0; _aux < _len_reg0; _aux++) {
          free(reg[_aux].Attribute);
          }
          free(reg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
