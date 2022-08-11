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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {TYPE_1__* plane; } ;
struct TYPE_4__ {int available_lines; int sliceY; int sliceH; } ;
typedef  TYPE_2__ SwsSlice ;

/* Variables and functions */

int ff_rotate_slice(SwsSlice *s, int lum, int chr)
{
    int i;
    if (lum) {
        for (i = 0; i < 4; i+=3) {
            int n = s->plane[i].available_lines;
            int l = lum - s->plane[i].sliceY;

            if (l >= n * 2) {
                s->plane[i].sliceY += n;
                s->plane[i].sliceH -= n;
            }
        }
    }
    if (chr) {
        for (i = 1; i < 3; ++i) {
            int n = s->plane[i].available_lines;
            int l = chr - s->plane[i].sliceY;

            if (l >= n * 2) {
                s->plane[i].sliceY += n;
                s->plane[i].sliceH -= n;
            }
        }
    }
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
          int lum = 100;
          int chr = 100;
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__plane0 = 1;
          s[_i0].plane = (struct TYPE_4__ *) malloc(_len_s__i0__plane0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__plane0; _j0++) {
            s[_i0].plane->available_lines = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].plane->sliceY = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].plane->sliceH = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ff_rotate_slice(s,lum,chr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].plane);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int lum = 255;
          int chr = 255;
          int _len_s0 = 65025;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__plane0 = 1;
          s[_i0].plane = (struct TYPE_4__ *) malloc(_len_s__i0__plane0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__plane0; _j0++) {
            s[_i0].plane->available_lines = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].plane->sliceY = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].plane->sliceH = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ff_rotate_slice(s,lum,chr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].plane);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int lum = 10;
          int chr = 10;
          int _len_s0 = 100;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__plane0 = 1;
          s[_i0].plane = (struct TYPE_4__ *) malloc(_len_s__i0__plane0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__plane0; _j0++) {
            s[_i0].plane->available_lines = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].plane->sliceY = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].plane->sliceH = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ff_rotate_slice(s,lum,chr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].plane);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
