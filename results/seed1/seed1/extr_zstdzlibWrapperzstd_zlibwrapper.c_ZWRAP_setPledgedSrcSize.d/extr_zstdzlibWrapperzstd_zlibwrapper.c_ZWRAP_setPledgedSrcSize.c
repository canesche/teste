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
typedef  TYPE_1__* z_streamp ;
struct TYPE_5__ {unsigned long long pledgedSrcSize; int /*<<< orphan*/  comprState; } ;
typedef  TYPE_2__ ZWRAP_CCtx ;
struct TYPE_4__ {scalar_t__ state; } ;

/* Variables and functions */
 int /*<<< orphan*/  ZWRAP_useInit ; 
 int Z_OK ; 
 int Z_STREAM_ERROR ; 

int ZWRAP_setPledgedSrcSize(z_streamp strm, unsigned long long pledgedSrcSize)
{
    ZWRAP_CCtx* zwc = (ZWRAP_CCtx*) strm->state;
    if (zwc == NULL) return Z_STREAM_ERROR;

    zwc->pledgedSrcSize = pledgedSrcSize;
    zwc->comprState = ZWRAP_useInit;
    return Z_OK;
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
          unsigned long long pledgedSrcSize = 100;
          int _len_strm0 = 1;
          struct TYPE_4__ * strm = (struct TYPE_4__ *) malloc(_len_strm0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_strm0; _i0++) {
            strm[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ZWRAP_setPledgedSrcSize(strm,pledgedSrcSize);
          printf("%d\n", benchRet); 
          free(strm);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long long pledgedSrcSize = 255;
          int _len_strm0 = 65025;
          struct TYPE_4__ * strm = (struct TYPE_4__ *) malloc(_len_strm0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_strm0; _i0++) {
            strm[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ZWRAP_setPledgedSrcSize(strm,pledgedSrcSize);
          printf("%d\n", benchRet); 
          free(strm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long long pledgedSrcSize = 10;
          int _len_strm0 = 100;
          struct TYPE_4__ * strm = (struct TYPE_4__ *) malloc(_len_strm0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_strm0; _i0++) {
            strm[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ZWRAP_setPledgedSrcSize(strm,pledgedSrcSize);
          printf("%d\n", benchRet); 
          free(strm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
