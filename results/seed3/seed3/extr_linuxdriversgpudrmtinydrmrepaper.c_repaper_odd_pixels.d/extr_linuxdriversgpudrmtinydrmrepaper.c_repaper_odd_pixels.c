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
typedef  int u8 ;
struct repaper_epd {int width; } ;
typedef  enum repaper_stage { ____Placeholder_repaper_stage } repaper_stage ;

/* Variables and functions */
#define  REPAPER_COMPENSATE 131 
#define  REPAPER_INVERSE 130 
#define  REPAPER_NORMAL 129 
#define  REPAPER_WHITE 128 

__attribute__((used)) static void repaper_odd_pixels(struct repaper_epd *epd, u8 **pp,
			       const u8 *data, u8 fixed_value, const u8 *mask,
			       enum repaper_stage stage)
{
	unsigned int b;

	for (b = epd->width / 8; b > 0; b--) {
		if (data) {
			u8 pixels = data[b - 1] & 0x55;
			u8 pixel_mask = 0xff;

			if (mask) {
				pixel_mask = (mask[b - 1] ^ pixels) & 0x55;
				pixel_mask |= pixel_mask << 1;
			}

			switch (stage) {
			case REPAPER_COMPENSATE: /* B -> W, W -> B (Current) */
				pixels = 0xaa | (pixels ^ 0x55);
				break;
			case REPAPER_WHITE:      /* B -> N, W -> W (Current) */
				pixels = 0x55 + (pixels ^ 0x55);
				break;
			case REPAPER_INVERSE:    /* B -> N, W -> B (New) */
				pixels = 0x55 | ((pixels ^ 0x55) << 1);
				break;
			case REPAPER_NORMAL:     /* B -> B, W -> W (New) */
				pixels = 0xaa | pixels;
				break;
			}

			pixels = (pixels & pixel_mask) | (~pixel_mask & 0x55);
			*(*pp)++ = pixels;
		} else {
			*(*pp)++ = fixed_value;
		}
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
          int fixed_value = 100;
          enum repaper_stage stage = 0;
          int _len_epd0 = 1;
          struct repaper_epd * epd = (struct repaper_epd *) malloc(_len_epd0*sizeof(struct repaper_epd));
          for(int _i0 = 0; _i0 < _len_epd0; _i0++) {
            epd[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pp0 = 1;
          int ** pp = (int **) malloc(_len_pp0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
            int _len_pp1 = 1;
            pp[_i0] = (int *) malloc(_len_pp1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pp1; _i1++) {
              pp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_data0 = 1;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mask0 = 1;
          const int * mask = (const int *) malloc(_len_mask0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          repaper_odd_pixels(epd,pp,data,fixed_value,mask,stage);
          free(epd);
          for(int i1 = 0; i1 < _len_pp0; i1++) {
            int _len_pp1 = 1;
              free(pp[i1]);
          }
          free(pp);
          free(data);
          free(mask);
        
        break;
    }
    // big-arr
    case 1:
    {
          int fixed_value = 255;
          enum repaper_stage stage = 0;
          int _len_epd0 = 65025;
          struct repaper_epd * epd = (struct repaper_epd *) malloc(_len_epd0*sizeof(struct repaper_epd));
          for(int _i0 = 0; _i0 < _len_epd0; _i0++) {
            epd[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pp0 = 65025;
          int ** pp = (int **) malloc(_len_pp0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
            int _len_pp1 = 1;
            pp[_i0] = (int *) malloc(_len_pp1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pp1; _i1++) {
              pp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_data0 = 65025;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mask0 = 65025;
          const int * mask = (const int *) malloc(_len_mask0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          repaper_odd_pixels(epd,pp,data,fixed_value,mask,stage);
          free(epd);
          for(int i1 = 0; i1 < _len_pp0; i1++) {
            int _len_pp1 = 1;
              free(pp[i1]);
          }
          free(pp);
          free(data);
          free(mask);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int fixed_value = 10;
          enum repaper_stage stage = 0;
          int _len_epd0 = 100;
          struct repaper_epd * epd = (struct repaper_epd *) malloc(_len_epd0*sizeof(struct repaper_epd));
          for(int _i0 = 0; _i0 < _len_epd0; _i0++) {
            epd[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pp0 = 100;
          int ** pp = (int **) malloc(_len_pp0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
            int _len_pp1 = 1;
            pp[_i0] = (int *) malloc(_len_pp1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pp1; _i1++) {
              pp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_data0 = 100;
          const int * data = (const int *) malloc(_len_data0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mask0 = 100;
          const int * mask = (const int *) malloc(_len_mask0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          repaper_odd_pixels(epd,pp,data,fixed_value,mask,stage);
          free(epd);
          for(int i1 = 0; i1 < _len_pp0; i1++) {
            int _len_pp1 = 1;
              free(pp[i1]);
          }
          free(pp);
          free(data);
          free(mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
