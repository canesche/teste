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
typedef  int byte ;
struct TYPE_2__ {int* buf; int CIN_WIDTH; int CIN_HEIGHT; } ;

/* Variables and functions */
 TYPE_1__* cinTable ; 

void CIN_ResampleCinematic(int handle, int *buf2) {
	int ix, iy, *buf3, xm, ym, ll;
	byte	*buf;

	buf = cinTable[handle].buf;

	xm = cinTable[handle].CIN_WIDTH/256;
	ym = cinTable[handle].CIN_HEIGHT/256;
	ll = 8;
	if (cinTable[handle].CIN_WIDTH==512) {
		ll = 9;
	}

	buf3 = (int*)buf;
	if (xm==2 && ym==2) {
		byte *bc2, *bc3;
		int	ic, iiy;

		bc2 = (byte *)buf2;
		bc3 = (byte *)buf3;
		for (iy = 0; iy<256; iy++) {
			iiy = iy<<12;
			for (ix = 0; ix<2048; ix+=8) {
				for(ic = ix;ic<(ix+4);ic++) {
					*bc2=(bc3[iiy+ic]+bc3[iiy+4+ic]+bc3[iiy+2048+ic]+bc3[iiy+2048+4+ic])>>2;
					bc2++;
				}
			}
		}
	} else if (xm==2 && ym==1) {
		byte *bc2, *bc3;
		int	ic, iiy;

		bc2 = (byte *)buf2;
		bc3 = (byte *)buf3;
		for (iy = 0; iy<256; iy++) {
			iiy = iy<<11;
			for (ix = 0; ix<2048; ix+=8) {
				for(ic = ix;ic<(ix+4);ic++) {
					*bc2=(bc3[iiy+ic]+bc3[iiy+4+ic])>>1;
					bc2++;
				}
			}
		}
	} else {
		for (iy = 0; iy<256; iy++) {
			for (ix = 0; ix<256; ix++) {
					buf2[(iy<<8)+ix] = buf3[((iy*ym)<<ll) + (ix*xm)];
			}
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
          int handle = 100;
          int _len_buf20 = 1;
          int * buf2 = (int *) malloc(_len_buf20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf20; _i0++) {
            buf2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CIN_ResampleCinematic(handle,buf2);
          free(buf2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int handle = 255;
          int _len_buf20 = 65025;
          int * buf2 = (int *) malloc(_len_buf20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf20; _i0++) {
            buf2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CIN_ResampleCinematic(handle,buf2);
          free(buf2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int handle = 10;
          int _len_buf20 = 100;
          int * buf2 = (int *) malloc(_len_buf20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf20; _i0++) {
            buf2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CIN_ResampleCinematic(handle,buf2);
          free(buf2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
