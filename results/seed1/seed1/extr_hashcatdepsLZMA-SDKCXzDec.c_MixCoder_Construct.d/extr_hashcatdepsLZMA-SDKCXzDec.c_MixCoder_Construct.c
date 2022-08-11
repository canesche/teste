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
struct TYPE_5__ {TYPE_1__* coders; int /*<<< orphan*/ * outBuf; scalar_t__ outBufSize; scalar_t__ numCoders; int /*<<< orphan*/ * buf; int /*<<< orphan*/  alloc; } ;
struct TYPE_4__ {int /*<<< orphan*/ * p; } ;
typedef  int /*<<< orphan*/  ISzAllocPtr ;
typedef  TYPE_2__ CMixCoder ;

/* Variables and functions */
 unsigned int MIXCODER_NUM_FILTERS_MAX ; 

__attribute__((used)) static void MixCoder_Construct(CMixCoder *p, ISzAllocPtr alloc)
{
  unsigned i;
  p->alloc = alloc;
  p->buf = NULL;
  p->numCoders = 0;
  
  p->outBufSize = 0;
  p->outBuf = NULL;
  // p->SingleBufMode = False;

  for (i = 0; i < MIXCODER_NUM_FILTERS_MAX; i++)
    p->coders[i].p = NULL;
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
          int alloc = 100;
          int _len_p0 = 1;
          struct TYPE_5__ * p = (struct TYPE_5__ *) malloc(_len_p0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__coders0 = 1;
          p[_i0].coders = (struct TYPE_4__ *) malloc(_len_p__i0__coders0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p__i0__coders0; _j0++) {
              int _len_p__i0__coders_p0 = 1;
          p[_i0].coders->p = (int *) malloc(_len_p__i0__coders_p0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__coders_p0; _j0++) {
            p[_i0].coders->p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_p__i0__outBuf0 = 1;
          p[_i0].outBuf = (int *) malloc(_len_p__i0__outBuf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__outBuf0; _j0++) {
            p[_i0].outBuf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].outBufSize = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].numCoders = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__buf0 = 1;
          p[_i0].buf = (int *) malloc(_len_p__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__buf0; _j0++) {
            p[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].alloc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          MixCoder_Construct(p,alloc);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].coders);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].outBuf);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].buf);
          }
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int alloc = 255;
          int _len_p0 = 65025;
          struct TYPE_5__ * p = (struct TYPE_5__ *) malloc(_len_p0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__coders0 = 1;
          p[_i0].coders = (struct TYPE_4__ *) malloc(_len_p__i0__coders0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p__i0__coders0; _j0++) {
              int _len_p__i0__coders_p0 = 1;
          p[_i0].coders->p = (int *) malloc(_len_p__i0__coders_p0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__coders_p0; _j0++) {
            p[_i0].coders->p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_p__i0__outBuf0 = 1;
          p[_i0].outBuf = (int *) malloc(_len_p__i0__outBuf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__outBuf0; _j0++) {
            p[_i0].outBuf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].outBufSize = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].numCoders = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__buf0 = 1;
          p[_i0].buf = (int *) malloc(_len_p__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__buf0; _j0++) {
            p[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].alloc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          MixCoder_Construct(p,alloc);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].coders);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].outBuf);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].buf);
          }
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int alloc = 10;
          int _len_p0 = 100;
          struct TYPE_5__ * p = (struct TYPE_5__ *) malloc(_len_p0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__coders0 = 1;
          p[_i0].coders = (struct TYPE_4__ *) malloc(_len_p__i0__coders0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p__i0__coders0; _j0++) {
              int _len_p__i0__coders_p0 = 1;
          p[_i0].coders->p = (int *) malloc(_len_p__i0__coders_p0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__coders_p0; _j0++) {
            p[_i0].coders->p[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_p__i0__outBuf0 = 1;
          p[_i0].outBuf = (int *) malloc(_len_p__i0__outBuf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__outBuf0; _j0++) {
            p[_i0].outBuf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].outBufSize = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].numCoders = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__buf0 = 1;
          p[_i0].buf = (int *) malloc(_len_p__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__buf0; _j0++) {
            p[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].alloc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          MixCoder_Construct(p,alloc);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].coders);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].outBuf);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].buf);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
