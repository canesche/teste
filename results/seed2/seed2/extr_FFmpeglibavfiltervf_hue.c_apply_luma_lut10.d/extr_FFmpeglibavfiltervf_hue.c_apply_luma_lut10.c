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
typedef  size_t uint16_t ;
struct TYPE_3__ {size_t* lut_l16; } ;
typedef  TYPE_1__ HueContext ;

/* Variables and functions */

__attribute__((used)) static void apply_luma_lut10(HueContext *s,
                             uint16_t *ldst, const int dst_linesize,
                             uint16_t *lsrc, const int src_linesize,
                             int w, int h)
{
    int i;

    while (h--) {
        for (i = 0; i < w; i++)
            ldst[i] = s->lut_l16[lsrc[i]];

        lsrc += src_linesize;
        ldst += dst_linesize;
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
          const int dst_linesize = 100;
          const int src_linesize = 100;
          int w = 100;
          int h = 100;
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__lut_l160 = 1;
          s[_i0].lut_l16 = (unsigned long *) malloc(_len_s__i0__lut_l160*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_s__i0__lut_l160; _j0++) {
            s[_i0].lut_l16[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ldst0 = 1;
          unsigned long * ldst = (unsigned long *) malloc(_len_ldst0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ldst0; _i0++) {
            ldst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lsrc0 = 1;
          unsigned long * lsrc = (unsigned long *) malloc(_len_lsrc0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_lsrc0; _i0++) {
            lsrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          apply_luma_lut10(s,ldst,dst_linesize,lsrc,src_linesize,w,h);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].lut_l16);
          }
          free(s);
          free(ldst);
          free(lsrc);
        
        break;
    }
    // big-arr
    case 1:
    {
          const int dst_linesize = 255;
          const int src_linesize = 255;
          int w = 255;
          int h = 255;
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__lut_l160 = 1;
          s[_i0].lut_l16 = (unsigned long *) malloc(_len_s__i0__lut_l160*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_s__i0__lut_l160; _j0++) {
            s[_i0].lut_l16[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ldst0 = 65025;
          unsigned long * ldst = (unsigned long *) malloc(_len_ldst0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ldst0; _i0++) {
            ldst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lsrc0 = 65025;
          unsigned long * lsrc = (unsigned long *) malloc(_len_lsrc0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_lsrc0; _i0++) {
            lsrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          apply_luma_lut10(s,ldst,dst_linesize,lsrc,src_linesize,w,h);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].lut_l16);
          }
          free(s);
          free(ldst);
          free(lsrc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int dst_linesize = 10;
          const int src_linesize = 10;
          int w = 10;
          int h = 10;
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__lut_l160 = 1;
          s[_i0].lut_l16 = (unsigned long *) malloc(_len_s__i0__lut_l160*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_s__i0__lut_l160; _j0++) {
            s[_i0].lut_l16[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ldst0 = 100;
          unsigned long * ldst = (unsigned long *) malloc(_len_ldst0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_ldst0; _i0++) {
            ldst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lsrc0 = 100;
          unsigned long * lsrc = (unsigned long *) malloc(_len_lsrc0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_lsrc0; _i0++) {
            lsrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          apply_luma_lut10(s,ldst,dst_linesize,lsrc,src_linesize,w,h);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].lut_l16);
          }
          free(s);
          free(ldst);
          free(lsrc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
