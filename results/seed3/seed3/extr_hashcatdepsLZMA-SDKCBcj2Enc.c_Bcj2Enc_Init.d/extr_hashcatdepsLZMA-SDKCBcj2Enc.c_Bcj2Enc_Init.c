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
struct TYPE_3__ {int range; int cacheSize; int* probs; scalar_t__ flushPos; scalar_t__ tempPos; int /*<<< orphan*/  relatLimit; scalar_t__ fileSize; scalar_t__ fileIp; scalar_t__ ip; scalar_t__ low; scalar_t__ cache; scalar_t__ prevByte; int /*<<< orphan*/  finishMode; int /*<<< orphan*/  state; } ;
typedef  TYPE_1__ CBcj2Enc ;

/* Variables and functions */
 int /*<<< orphan*/  BCJ2_ENC_FINISH_MODE_CONTINUE ; 
 int /*<<< orphan*/  BCJ2_ENC_STATE_OK ; 
 int /*<<< orphan*/  BCJ2_RELAT_LIMIT ; 
 int kBitModelTotal ; 

void Bcj2Enc_Init(CBcj2Enc *p)
{
  unsigned i;

  p->state = BCJ2_ENC_STATE_OK;
  p->finishMode = BCJ2_ENC_FINISH_MODE_CONTINUE;

  p->prevByte = 0;

  p->cache = 0;
  p->range = 0xFFFFFFFF;
  p->low = 0;
  p->cacheSize = 1;

  p->ip = 0;

  p->fileIp = 0;
  p->fileSize = 0;
  p->relatLimit = BCJ2_RELAT_LIMIT;

  p->tempPos = 0;

  p->flushPos = 0;

  for (i = 0; i < sizeof(p->probs) / sizeof(p->probs[0]); i++)
    p->probs[i] = kBitModelTotal >> 1;
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
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].range = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].cacheSize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__probs0 = 1;
          p[_i0].probs = (int *) malloc(_len_p__i0__probs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__probs0; _j0++) {
            p[_i0].probs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].flushPos = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].tempPos = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].relatLimit = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].fileSize = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].fileIp = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ip = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].low = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].cache = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].prevByte = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].finishMode = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Bcj2Enc_Init(p);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].probs);
          }
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p0 = 65025;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].range = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].cacheSize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__probs0 = 1;
          p[_i0].probs = (int *) malloc(_len_p__i0__probs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__probs0; _j0++) {
            p[_i0].probs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].flushPos = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].tempPos = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].relatLimit = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].fileSize = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].fileIp = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ip = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].low = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].cache = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].prevByte = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].finishMode = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Bcj2Enc_Init(p);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].probs);
          }
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p0 = 100;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].range = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].cacheSize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__probs0 = 1;
          p[_i0].probs = (int *) malloc(_len_p__i0__probs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__probs0; _j0++) {
            p[_i0].probs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].flushPos = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].tempPos = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].relatLimit = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].fileSize = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].fileIp = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].ip = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].low = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].cache = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].prevByte = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].finishMode = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Bcj2Enc_Init(p);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].probs);
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
