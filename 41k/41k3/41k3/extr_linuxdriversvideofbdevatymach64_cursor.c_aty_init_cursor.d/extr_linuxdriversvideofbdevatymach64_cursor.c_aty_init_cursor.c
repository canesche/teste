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
typedef  int /*<<< orphan*/  u8 ;
struct TYPE_4__ {int scan_align; int buf_align; int /*<<< orphan*/  flags; scalar_t__ size; int /*<<< orphan*/ * addr; } ;
struct TYPE_6__ {unsigned long smem_len; } ;
struct fb_info {TYPE_2__* fbops; TYPE_1__ sprite; TYPE_3__ fix; scalar_t__ screen_base; } ;
struct TYPE_5__ {int /*<<< orphan*/  fb_cursor; } ;

/* Variables and functions */
 int ENXIO ; 
 int /*<<< orphan*/  FB_PIXMAP_IO ; 
 scalar_t__ PAGE_SIZE ; 
 int /*<<< orphan*/  atyfb_cursor ; 

int aty_init_cursor(struct fb_info *info)
{
	unsigned long addr;

	info->fix.smem_len -= PAGE_SIZE;

#ifdef __sparc__
	addr = (unsigned long) info->screen_base - 0x800000 + info->fix.smem_len;
	info->sprite.addr = (u8 *) addr;
#else
#ifdef __BIG_ENDIAN
	addr = info->fix.smem_start - 0x800000 + info->fix.smem_len;
	info->sprite.addr = (u8 *) ioremap(addr, 1024);
#else
	addr = (unsigned long) info->screen_base + info->fix.smem_len;
	info->sprite.addr = (u8 *) addr;
#endif
#endif
	if (!info->sprite.addr)
		return -ENXIO;
	info->sprite.size = PAGE_SIZE;
	info->sprite.scan_align = 16;	/* Scratch pad 64 bytes wide */
	info->sprite.buf_align = 16; 	/* and 64 lines tall. */
	info->sprite.flags = FB_PIXMAP_IO;

	info->fbops->fb_cursor = atyfb_cursor;

	return 0;
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
              int _len_info__i0__fbops0 = 1;
          info[_i0].fbops = (struct TYPE_5__ *) malloc(_len_info__i0__fbops0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_info__i0__fbops0; _j0++) {
            info[_i0].fbops->fb_cursor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        info[_i0].sprite.scan_align = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].sprite.buf_align = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].sprite.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].sprite.size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__sprite_addr0 = 1;
          info[_i0].sprite.addr = (int *) malloc(_len_info__i0__sprite_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__sprite_addr0; _j0++) {
            info[_i0].sprite.addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        info[_i0].fix.smem_len = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].screen_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = aty_init_cursor(info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].fbops);
          }
          free(info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_info0 = 65025;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__fbops0 = 1;
          info[_i0].fbops = (struct TYPE_5__ *) malloc(_len_info__i0__fbops0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_info__i0__fbops0; _j0++) {
            info[_i0].fbops->fb_cursor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        info[_i0].sprite.scan_align = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].sprite.buf_align = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].sprite.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].sprite.size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__sprite_addr0 = 1;
          info[_i0].sprite.addr = (int *) malloc(_len_info__i0__sprite_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__sprite_addr0; _j0++) {
            info[_i0].sprite.addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        info[_i0].fix.smem_len = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].screen_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = aty_init_cursor(info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].fbops);
          }
          free(info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_info0 = 100;
          struct fb_info * info = (struct fb_info *) malloc(_len_info0*sizeof(struct fb_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__fbops0 = 1;
          info[_i0].fbops = (struct TYPE_5__ *) malloc(_len_info__i0__fbops0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_info__i0__fbops0; _j0++) {
            info[_i0].fbops->fb_cursor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        info[_i0].sprite.scan_align = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].sprite.buf_align = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].sprite.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].sprite.size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__sprite_addr0 = 1;
          info[_i0].sprite.addr = (int *) malloc(_len_info__i0__sprite_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_info__i0__sprite_addr0; _j0++) {
            info[_i0].sprite.addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        info[_i0].fix.smem_len = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].screen_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = aty_init_cursor(info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].fbops);
          }
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
