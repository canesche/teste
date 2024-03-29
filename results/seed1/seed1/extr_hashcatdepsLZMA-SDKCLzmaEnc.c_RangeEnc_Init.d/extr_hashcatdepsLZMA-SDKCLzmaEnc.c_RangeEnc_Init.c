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
struct TYPE_3__ {int range; int /*<<< orphan*/  res; scalar_t__ processed; int /*<<< orphan*/  bufBase; int /*<<< orphan*/  buf; scalar_t__ cacheSize; scalar_t__ low; scalar_t__ cache; } ;
typedef  TYPE_1__ CRangeEnc ;

/* Variables and functions */
 int /*<<< orphan*/  SZ_OK ; 

__attribute__((used)) static void RangeEnc_Init(CRangeEnc *p)
{
  /* Stream.Init(); */
  p->range = 0xFFFFFFFF;
  p->cache = 0;
  p->low = 0;
  p->cacheSize = 0;

  p->buf = p->bufBase;

  p->processed = 0;
  p->res = SZ_OK;
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
        p[_i0].res = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].processed = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].bufBase = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buf = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].cacheSize = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].low = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].cache = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          RangeEnc_Init(p);
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
        p[_i0].res = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].processed = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].bufBase = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buf = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].cacheSize = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].low = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].cache = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          RangeEnc_Init(p);
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
        p[_i0].res = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].processed = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].bufBase = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].buf = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].cacheSize = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].low = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].cache = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          RangeEnc_Init(p);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
