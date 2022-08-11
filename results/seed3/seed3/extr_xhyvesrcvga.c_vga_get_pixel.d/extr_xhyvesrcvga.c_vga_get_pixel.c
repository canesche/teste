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
typedef  size_t uint8_t ;
typedef  int /*<<< orphan*/  uint32_t ;
typedef  int uint16_t ;
struct TYPE_4__ {int /*<<< orphan*/ * dac_palette_rgb; } ;
struct TYPE_3__ {size_t atc_color_plane_enb; int atc_mode; int* atc_palette; size_t atc_color_select_45; size_t atc_color_select_67; } ;
struct vga_softc {int gc_width; int* vga_ram; TYPE_2__ vga_dac; TYPE_1__ vga_atc; } ;

/* Variables and functions */
 int ATC_MC_IPS ; 
 int KB ; 

__attribute__((used)) static uint32_t
vga_get_pixel(struct vga_softc *sc, uint16_t x, uint16_t y)
{
	unsigned int offset;
	int bit;
	uint8_t data;
	uint8_t idx;

	offset = (y * sc->gc_width / 8) + (x / 8);
	bit = 7 - (x % 8);

	data = (uint8_t)(((sc->vga_ram[offset + 0 * 64*KB] >> bit) & 0x1) << 0) |
		(uint8_t)(((sc->vga_ram[offset + 1 * 64*KB] >> bit) & 0x1) << 1) |
		(uint8_t)(((sc->vga_ram[offset + 2 * 64*KB] >> bit) & 0x1) << 2) |
		(uint8_t)(((sc->vga_ram[offset + 3 * 64*KB] >> bit) & 0x1) << 3);

	data &= sc->vga_atc.atc_color_plane_enb;

	if (sc->vga_atc.atc_mode & ATC_MC_IPS) {
		idx = sc->vga_atc.atc_palette[data] & 0x0f;
		idx |= sc->vga_atc.atc_color_select_45;
	} else {
		idx = sc->vga_atc.atc_palette[data];
	}
	idx |= sc->vga_atc.atc_color_select_67;

	return (sc->vga_dac.dac_palette_rgb[idx]);
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
          int x = 100;
          int y = 100;
          int _len_sc0 = 1;
          struct vga_softc * sc = (struct vga_softc *) malloc(_len_sc0*sizeof(struct vga_softc));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].gc_width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sc__i0__vga_ram0 = 1;
          sc[_i0].vga_ram = (int *) malloc(_len_sc__i0__vga_ram0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sc__i0__vga_ram0; _j0++) {
            sc[_i0].vga_ram[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sc__i0__vga_dac_dac_palette_rgb0 = 1;
          sc[_i0].vga_dac.dac_palette_rgb = (int *) malloc(_len_sc__i0__vga_dac_dac_palette_rgb0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sc__i0__vga_dac_dac_palette_rgb0; _j0++) {
            sc[_i0].vga_dac.dac_palette_rgb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sc[_i0].vga_atc.atc_color_plane_enb = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].vga_atc.atc_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sc__i0__vga_atc_atc_palette0 = 1;
          sc[_i0].vga_atc.atc_palette = (int *) malloc(_len_sc__i0__vga_atc_atc_palette0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sc__i0__vga_atc_atc_palette0; _j0++) {
            sc[_i0].vga_atc.atc_palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sc[_i0].vga_atc.atc_color_select_45 = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].vga_atc.atc_color_select_67 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vga_get_pixel(sc,x,y);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].vga_ram);
          }
          free(sc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          int y = 255;
          int _len_sc0 = 65025;
          struct vga_softc * sc = (struct vga_softc *) malloc(_len_sc0*sizeof(struct vga_softc));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].gc_width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sc__i0__vga_ram0 = 1;
          sc[_i0].vga_ram = (int *) malloc(_len_sc__i0__vga_ram0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sc__i0__vga_ram0; _j0++) {
            sc[_i0].vga_ram[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sc__i0__vga_dac_dac_palette_rgb0 = 1;
          sc[_i0].vga_dac.dac_palette_rgb = (int *) malloc(_len_sc__i0__vga_dac_dac_palette_rgb0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sc__i0__vga_dac_dac_palette_rgb0; _j0++) {
            sc[_i0].vga_dac.dac_palette_rgb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sc[_i0].vga_atc.atc_color_plane_enb = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].vga_atc.atc_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sc__i0__vga_atc_atc_palette0 = 1;
          sc[_i0].vga_atc.atc_palette = (int *) malloc(_len_sc__i0__vga_atc_atc_palette0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sc__i0__vga_atc_atc_palette0; _j0++) {
            sc[_i0].vga_atc.atc_palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sc[_i0].vga_atc.atc_color_select_45 = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].vga_atc.atc_color_select_67 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vga_get_pixel(sc,x,y);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].vga_ram);
          }
          free(sc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          int y = 10;
          int _len_sc0 = 100;
          struct vga_softc * sc = (struct vga_softc *) malloc(_len_sc0*sizeof(struct vga_softc));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].gc_width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sc__i0__vga_ram0 = 1;
          sc[_i0].vga_ram = (int *) malloc(_len_sc__i0__vga_ram0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sc__i0__vga_ram0; _j0++) {
            sc[_i0].vga_ram[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sc__i0__vga_dac_dac_palette_rgb0 = 1;
          sc[_i0].vga_dac.dac_palette_rgb = (int *) malloc(_len_sc__i0__vga_dac_dac_palette_rgb0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sc__i0__vga_dac_dac_palette_rgb0; _j0++) {
            sc[_i0].vga_dac.dac_palette_rgb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sc[_i0].vga_atc.atc_color_plane_enb = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].vga_atc.atc_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sc__i0__vga_atc_atc_palette0 = 1;
          sc[_i0].vga_atc.atc_palette = (int *) malloc(_len_sc__i0__vga_atc_atc_palette0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sc__i0__vga_atc_atc_palette0; _j0++) {
            sc[_i0].vga_atc.atc_palette[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sc[_i0].vga_atc.atc_color_select_45 = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].vga_atc.atc_color_select_67 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vga_get_pixel(sc,x,y);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].vga_ram);
          }
          free(sc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
