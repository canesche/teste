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
struct TYPE_5__ {int flags; scalar_t__** src; scalar_t__** ref; } ;
struct TYPE_4__ {scalar_t__ uvlinesize; scalar_t__ linesize; TYPE_2__ me; } ;
typedef  TYPE_1__ MpegEncContext ;
typedef  TYPE_2__ MotionEstContext ;

/* Variables and functions */
 int FLAG_CHROMA ; 

__attribute__((used)) static inline void init_interlaced_ref(MpegEncContext *s, int ref_index){
    MotionEstContext * const c= &s->me;

    c->ref[1+ref_index][0] = c->ref[0+ref_index][0] + s->linesize;
    c->src[1][0] = c->src[0][0] + s->linesize;
    if(c->flags & FLAG_CHROMA){
        c->ref[1+ref_index][1] = c->ref[0+ref_index][1] + s->uvlinesize;
        c->ref[1+ref_index][2] = c->ref[0+ref_index][2] + s->uvlinesize;
        c->src[1][1] = c->src[0][1] + s->uvlinesize;
        c->src[1][2] = c->src[0][2] + s->uvlinesize;
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
          int ref_index = 100;
          int _len_s0 = 1;
          struct TYPE_4__ * s = (struct TYPE_4__ *) malloc(_len_s0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].uvlinesize = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].linesize = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].me.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__me_src0 = 1;
          s[_i0].me.src = (long **) malloc(_len_s__i0__me_src0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_s__i0__me_src0; _j0++) {
            int _len_s__i0__me_src1 = 1;
            s[_i0].me.src[_j0] = (long *) malloc(_len_s__i0__me_src1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_s__i0__me_src1; _j1++) {
              s[_i0].me.src[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__me_ref0 = 1;
          s[_i0].me.ref = (long **) malloc(_len_s__i0__me_ref0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_s__i0__me_ref0; _j0++) {
            int _len_s__i0__me_ref1 = 1;
            s[_i0].me.ref[_j0] = (long *) malloc(_len_s__i0__me_ref1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_s__i0__me_ref1; _j1++) {
              s[_i0].me.ref[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          init_interlaced_ref(s,ref_index);
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ref_index = 255;
          int _len_s0 = 65025;
          struct TYPE_4__ * s = (struct TYPE_4__ *) malloc(_len_s0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].uvlinesize = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].linesize = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].me.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__me_src0 = 1;
          s[_i0].me.src = (long **) malloc(_len_s__i0__me_src0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_s__i0__me_src0; _j0++) {
            int _len_s__i0__me_src1 = 1;
            s[_i0].me.src[_j0] = (long *) malloc(_len_s__i0__me_src1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_s__i0__me_src1; _j1++) {
              s[_i0].me.src[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__me_ref0 = 1;
          s[_i0].me.ref = (long **) malloc(_len_s__i0__me_ref0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_s__i0__me_ref0; _j0++) {
            int _len_s__i0__me_ref1 = 1;
            s[_i0].me.ref[_j0] = (long *) malloc(_len_s__i0__me_ref1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_s__i0__me_ref1; _j1++) {
              s[_i0].me.ref[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          init_interlaced_ref(s,ref_index);
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ref_index = 10;
          int _len_s0 = 100;
          struct TYPE_4__ * s = (struct TYPE_4__ *) malloc(_len_s0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].uvlinesize = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].linesize = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].me.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__me_src0 = 1;
          s[_i0].me.src = (long **) malloc(_len_s__i0__me_src0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_s__i0__me_src0; _j0++) {
            int _len_s__i0__me_src1 = 1;
            s[_i0].me.src[_j0] = (long *) malloc(_len_s__i0__me_src1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_s__i0__me_src1; _j1++) {
              s[_i0].me.src[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__me_ref0 = 1;
          s[_i0].me.ref = (long **) malloc(_len_s__i0__me_ref0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_s__i0__me_ref0; _j0++) {
            int _len_s__i0__me_ref1 = 1;
            s[_i0].me.ref[_j0] = (long *) malloc(_len_s__i0__me_ref1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_s__i0__me_ref1; _j1++) {
              s[_i0].me.ref[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          init_interlaced_ref(s,ref_index);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
