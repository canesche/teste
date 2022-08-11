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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint16 ;
struct TYPE_3__ {int* redcmap; int* greencmap; int* bluecmap; long bitspersample; } ;
typedef  TYPE_1__ TIFFRGBAImage ;

/* Variables and functions */

__attribute__((used)) static void
cvtcmap(TIFFRGBAImage* img)
{
    uint16* r = img->redcmap;
    uint16* g = img->greencmap;
    uint16* b = img->bluecmap;
    long i;

    for (i = (1L<<img->bitspersample)-1; i >= 0; i--) {
#define	CVT(x)		((uint16)((x)>>8))
	r[i] = CVT(r[i]);
	g[i] = CVT(g[i]);
	b[i] = CVT(b[i]);
#undef	CVT
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
          int _len_img0 = 1;
          struct TYPE_3__ * img = (struct TYPE_3__ *) malloc(_len_img0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_img0; _i0++) {
              int _len_img__i0__redcmap0 = 1;
          img[_i0].redcmap = (int *) malloc(_len_img__i0__redcmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_img__i0__redcmap0; _j0++) {
            img[_i0].redcmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_img__i0__greencmap0 = 1;
          img[_i0].greencmap = (int *) malloc(_len_img__i0__greencmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_img__i0__greencmap0; _j0++) {
            img[_i0].greencmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_img__i0__bluecmap0 = 1;
          img[_i0].bluecmap = (int *) malloc(_len_img__i0__bluecmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_img__i0__bluecmap0; _j0++) {
            img[_i0].bluecmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        img[_i0].bitspersample = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cvtcmap(img);
          for(int _aux = 0; _aux < _len_img0; _aux++) {
          free(img[_aux].redcmap);
          }
          for(int _aux = 0; _aux < _len_img0; _aux++) {
          free(img[_aux].greencmap);
          }
          for(int _aux = 0; _aux < _len_img0; _aux++) {
          free(img[_aux].bluecmap);
          }
          free(img);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_img0 = 65025;
          struct TYPE_3__ * img = (struct TYPE_3__ *) malloc(_len_img0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_img0; _i0++) {
              int _len_img__i0__redcmap0 = 1;
          img[_i0].redcmap = (int *) malloc(_len_img__i0__redcmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_img__i0__redcmap0; _j0++) {
            img[_i0].redcmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_img__i0__greencmap0 = 1;
          img[_i0].greencmap = (int *) malloc(_len_img__i0__greencmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_img__i0__greencmap0; _j0++) {
            img[_i0].greencmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_img__i0__bluecmap0 = 1;
          img[_i0].bluecmap = (int *) malloc(_len_img__i0__bluecmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_img__i0__bluecmap0; _j0++) {
            img[_i0].bluecmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        img[_i0].bitspersample = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cvtcmap(img);
          for(int _aux = 0; _aux < _len_img0; _aux++) {
          free(img[_aux].redcmap);
          }
          for(int _aux = 0; _aux < _len_img0; _aux++) {
          free(img[_aux].greencmap);
          }
          for(int _aux = 0; _aux < _len_img0; _aux++) {
          free(img[_aux].bluecmap);
          }
          free(img);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_img0 = 100;
          struct TYPE_3__ * img = (struct TYPE_3__ *) malloc(_len_img0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_img0; _i0++) {
              int _len_img__i0__redcmap0 = 1;
          img[_i0].redcmap = (int *) malloc(_len_img__i0__redcmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_img__i0__redcmap0; _j0++) {
            img[_i0].redcmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_img__i0__greencmap0 = 1;
          img[_i0].greencmap = (int *) malloc(_len_img__i0__greencmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_img__i0__greencmap0; _j0++) {
            img[_i0].greencmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_img__i0__bluecmap0 = 1;
          img[_i0].bluecmap = (int *) malloc(_len_img__i0__bluecmap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_img__i0__bluecmap0; _j0++) {
            img[_i0].bluecmap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        img[_i0].bitspersample = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cvtcmap(img);
          for(int _aux = 0; _aux < _len_img0; _aux++) {
          free(img[_aux].redcmap);
          }
          for(int _aux = 0; _aux < _len_img0; _aux++) {
          free(img[_aux].greencmap);
          }
          for(int _aux = 0; _aux < _len_img0; _aux++) {
          free(img[_aux].bluecmap);
          }
          free(img);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
