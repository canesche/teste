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
typedef  size_t UInt32 ;
struct TYPE_4__ {size_t lc; size_t lp; } ;
struct TYPE_5__ {int* probs; int* reps; scalar_t__ needInitState; scalar_t__ state; TYPE_1__ prop; } ;
typedef  int CLzmaProb ;
typedef  TYPE_2__ CLzmaDec ;

/* Variables and functions */
 scalar_t__ LZMA_LIT_SIZE ; 
 size_t Literal ; 
 int kBitModelTotal ; 

__attribute__((used)) static void LzmaDec_InitStateReal(CLzmaDec *p)
{
  UInt32 numProbs = Literal + ((UInt32)LZMA_LIT_SIZE << (p->prop.lc + p->prop.lp));
  UInt32 i;
  CLzmaProb *probs = p->probs;
  for (i = 0; i < numProbs; i++)
    probs[i] = kBitModelTotal >> 1;
  p->reps[0] = p->reps[1] = p->reps[2] = p->reps[3] = 1;
  p->state = 0;
  p->needInitState = 0;
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
          int _len_p0 = 1;
          struct TYPE_5__ * p = (struct TYPE_5__ *) malloc(_len_p0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__probs0 = 1;
          p[_i0].probs = (int *) malloc(_len_p__i0__probs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__probs0; _j0++) {
            p[_i0].probs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__reps0 = 1;
          p[_i0].reps = (int *) malloc(_len_p__i0__reps0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__reps0; _j0++) {
            p[_i0].reps[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].needInitState = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].prop.lc = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].prop.lp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          LzmaDec_InitStateReal(p);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].probs);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].reps);
          }
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p0 = 65025;
          struct TYPE_5__ * p = (struct TYPE_5__ *) malloc(_len_p0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__probs0 = 1;
          p[_i0].probs = (int *) malloc(_len_p__i0__probs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__probs0; _j0++) {
            p[_i0].probs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__reps0 = 1;
          p[_i0].reps = (int *) malloc(_len_p__i0__reps0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__reps0; _j0++) {
            p[_i0].reps[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].needInitState = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].prop.lc = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].prop.lp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          LzmaDec_InitStateReal(p);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].probs);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].reps);
          }
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p0 = 100;
          struct TYPE_5__ * p = (struct TYPE_5__ *) malloc(_len_p0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__probs0 = 1;
          p[_i0].probs = (int *) malloc(_len_p__i0__probs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__probs0; _j0++) {
            p[_i0].probs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p__i0__reps0 = 1;
          p[_i0].reps = (int *) malloc(_len_p__i0__reps0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__reps0; _j0++) {
            p[_i0].reps[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].needInitState = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].prop.lc = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].prop.lp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          LzmaDec_InitStateReal(p);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].probs);
          }
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].reps);
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
