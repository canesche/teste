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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {TYPE_1__* sps; } ;
struct TYPE_7__ {int* is_pcm; TYPE_2__ ps; } ;
struct TYPE_5__ {int log2_min_pu_size; int min_pu_width; int min_pu_height; } ;
typedef  TYPE_3__ HEVCContext ;

/* Variables and functions */

__attribute__((used)) static int get_pcm(HEVCContext *s, int x, int y)
{
    int log2_min_pu_size = s->ps.sps->log2_min_pu_size;
    int x_pu, y_pu;

    if (x < 0 || y < 0)
        return 2;

    x_pu = x >> log2_min_pu_size;
    y_pu = y >> log2_min_pu_size;

    if (x_pu >= s->ps.sps->min_pu_width || y_pu >= s->ps.sps->min_pu_height)
        return 2;
    return s->is_pcm[y_pu * s->ps.sps->min_pu_width + x_pu];
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
          int _len_s0 = 1;
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__is_pcm0 = 1;
          s[_i0].is_pcm = (int *) malloc(_len_s__i0__is_pcm0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__is_pcm0; _j0++) {
            s[_i0].is_pcm[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__ps_sps0 = 1;
          s[_i0].ps.sps = (struct TYPE_5__ *) malloc(_len_s__i0__ps_sps0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_s__i0__ps_sps0; _j0++) {
            s[_i0].ps.sps->log2_min_pu_size = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ps.sps->min_pu_width = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ps.sps->min_pu_height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_pcm(s,x,y);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].is_pcm);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          int y = 255;
          int _len_s0 = 65025;
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__is_pcm0 = 1;
          s[_i0].is_pcm = (int *) malloc(_len_s__i0__is_pcm0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__is_pcm0; _j0++) {
            s[_i0].is_pcm[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__ps_sps0 = 1;
          s[_i0].ps.sps = (struct TYPE_5__ *) malloc(_len_s__i0__ps_sps0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_s__i0__ps_sps0; _j0++) {
            s[_i0].ps.sps->log2_min_pu_size = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ps.sps->min_pu_width = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ps.sps->min_pu_height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_pcm(s,x,y);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].is_pcm);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          int y = 10;
          int _len_s0 = 100;
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__is_pcm0 = 1;
          s[_i0].is_pcm = (int *) malloc(_len_s__i0__is_pcm0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__is_pcm0; _j0++) {
            s[_i0].is_pcm[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__ps_sps0 = 1;
          s[_i0].ps.sps = (struct TYPE_5__ *) malloc(_len_s__i0__ps_sps0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_s__i0__ps_sps0; _j0++) {
            s[_i0].ps.sps->log2_min_pu_size = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ps.sps->min_pu_width = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].ps.sps->min_pu_height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_pcm(s,x,y);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].is_pcm);
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
