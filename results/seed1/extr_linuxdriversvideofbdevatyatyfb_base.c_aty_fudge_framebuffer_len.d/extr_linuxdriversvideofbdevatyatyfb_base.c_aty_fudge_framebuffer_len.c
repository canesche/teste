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
struct TYPE_2__ {int smem_len; } ;
struct fb_info {TYPE_1__ fix; scalar_t__ par; } ;
struct atyfb_par {scalar_t__ bus_type; int /*<<< orphan*/  aux_start; } ;

/* Variables and functions */
 scalar_t__ GUI_RESERVE ; 
 scalar_t__ ISA ; 

__attribute__((used)) static void aty_fudge_framebuffer_len(struct fb_info *info)
{
	struct atyfb_par *par = (struct atyfb_par *) info->par;

	if (!par->aux_start &&
	    (info->fix.smem_len == 0x800000 ||
	     (par->bus_type == ISA && info->fix.smem_len == 0x400000)))
		info->fix.smem_len -= GUI_RESERVE;
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
          int _len_info0 = 1;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].fix.smem_len = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].par = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          aty_fudge_framebuffer_len(info);
          free(info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_info0 = 65025;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].fix.smem_len = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].par = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          aty_fudge_framebuffer_len(info);
          free(info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_info0 = 100;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].fix.smem_len = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].par = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          aty_fudge_framebuffer_len(info);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
