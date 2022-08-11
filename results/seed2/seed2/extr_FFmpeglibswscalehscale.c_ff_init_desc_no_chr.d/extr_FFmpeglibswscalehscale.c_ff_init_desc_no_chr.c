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
struct TYPE_3__ {int /*<<< orphan*/ * process; int /*<<< orphan*/ * instance; scalar_t__ alpha; int /*<<< orphan*/ * dst; int /*<<< orphan*/ * src; } ;
typedef  int /*<<< orphan*/  SwsSlice ;
typedef  TYPE_1__ SwsFilterDescriptor ;

/* Variables and functions */
 int /*<<< orphan*/  no_chr_scale ; 

int ff_init_desc_no_chr(SwsFilterDescriptor *desc, SwsSlice * src, SwsSlice *dst)
{
    desc->src = src;
    desc->dst = dst;
    desc->alpha = 0;
    desc->instance = NULL;
    desc->process = &no_chr_scale;
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
          int _len_desc0 = 1;
          struct TYPE_3__ * desc = (struct TYPE_3__ *) malloc(_len_desc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              int _len_desc__i0__process0 = 1;
          desc[_i0].process = (int *) malloc(_len_desc__i0__process0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__process0; _j0++) {
            desc[_i0].process[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_desc__i0__instance0 = 1;
          desc[_i0].instance = (int *) malloc(_len_desc__i0__instance0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__instance0; _j0++) {
            desc[_i0].instance[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        desc[_i0].alpha = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_desc__i0__dst0 = 1;
          desc[_i0].dst = (int *) malloc(_len_desc__i0__dst0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__dst0; _j0++) {
            desc[_i0].dst[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_desc__i0__src0 = 1;
          desc[_i0].src = (int *) malloc(_len_desc__i0__src0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__src0; _j0++) {
            desc[_i0].src[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_src0 = 1;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ff_init_desc_no_chr(desc,src,dst);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].process);
          }
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].instance);
          }
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].dst);
          }
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].src);
          }
          free(desc);
          free(src);
          free(dst);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_desc0 = 65025;
          struct TYPE_3__ * desc = (struct TYPE_3__ *) malloc(_len_desc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              int _len_desc__i0__process0 = 1;
          desc[_i0].process = (int *) malloc(_len_desc__i0__process0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__process0; _j0++) {
            desc[_i0].process[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_desc__i0__instance0 = 1;
          desc[_i0].instance = (int *) malloc(_len_desc__i0__instance0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__instance0; _j0++) {
            desc[_i0].instance[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        desc[_i0].alpha = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_desc__i0__dst0 = 1;
          desc[_i0].dst = (int *) malloc(_len_desc__i0__dst0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__dst0; _j0++) {
            desc[_i0].dst[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_desc__i0__src0 = 1;
          desc[_i0].src = (int *) malloc(_len_desc__i0__src0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__src0; _j0++) {
            desc[_i0].src[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_src0 = 65025;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 65025;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ff_init_desc_no_chr(desc,src,dst);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].process);
          }
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].instance);
          }
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].dst);
          }
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].src);
          }
          free(desc);
          free(src);
          free(dst);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_desc0 = 100;
          struct TYPE_3__ * desc = (struct TYPE_3__ *) malloc(_len_desc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
              int _len_desc__i0__process0 = 1;
          desc[_i0].process = (int *) malloc(_len_desc__i0__process0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__process0; _j0++) {
            desc[_i0].process[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_desc__i0__instance0 = 1;
          desc[_i0].instance = (int *) malloc(_len_desc__i0__instance0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__instance0; _j0++) {
            desc[_i0].instance[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        desc[_i0].alpha = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_desc__i0__dst0 = 1;
          desc[_i0].dst = (int *) malloc(_len_desc__i0__dst0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__dst0; _j0++) {
            desc[_i0].dst[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_desc__i0__src0 = 1;
          desc[_i0].src = (int *) malloc(_len_desc__i0__src0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__src0; _j0++) {
            desc[_i0].src[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_src0 = 100;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 100;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ff_init_desc_no_chr(desc,src,dst);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].process);
          }
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].instance);
          }
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].dst);
          }
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].src);
          }
          free(desc);
          free(src);
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
