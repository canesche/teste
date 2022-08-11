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
struct TYPE_5__ {unsigned int cBuffers; TYPE_1__* pBuffers; } ;
struct TYPE_4__ {int /*<<< orphan*/ * pvBuffer; scalar_t__ cbBuffer; int /*<<< orphan*/  BufferType; } ;
typedef  TYPE_2__ SecBufferDesc ;

/* Variables and functions */
 int /*<<< orphan*/  SECBUFFER_EMPTY ; 

__attribute__((used)) static void reset_buffers(SecBufferDesc *desc)
{
    unsigned i;

    for (i = 0; i < desc->cBuffers; ++i)
    {
        desc->pBuffers[i].BufferType = SECBUFFER_EMPTY;
        if (i > 0)
        {
            desc->pBuffers[i].cbBuffer = 0;
            desc->pBuffers[i].pvBuffer = NULL;
        }
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
          int _len_desc0 = 1;
          struct TYPE_5__ * desc = (struct TYPE_5__ *) malloc(_len_desc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].cBuffers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_desc__i0__pBuffers0 = 1;
          desc[_i0].pBuffers = (struct TYPE_4__ *) malloc(_len_desc__i0__pBuffers0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_desc__i0__pBuffers0; _j0++) {
              int _len_desc__i0__pBuffers_pvBuffer0 = 1;
          desc[_i0].pBuffers->pvBuffer = (int *) malloc(_len_desc__i0__pBuffers_pvBuffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__pBuffers_pvBuffer0; _j0++) {
            desc[_i0].pBuffers->pvBuffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        desc[_i0].pBuffers->cbBuffer = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].pBuffers->BufferType = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          reset_buffers(desc);
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].pBuffers);
          }
          free(desc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_desc0 = 65025;
          struct TYPE_5__ * desc = (struct TYPE_5__ *) malloc(_len_desc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].cBuffers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_desc__i0__pBuffers0 = 1;
          desc[_i0].pBuffers = (struct TYPE_4__ *) malloc(_len_desc__i0__pBuffers0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_desc__i0__pBuffers0; _j0++) {
              int _len_desc__i0__pBuffers_pvBuffer0 = 1;
          desc[_i0].pBuffers->pvBuffer = (int *) malloc(_len_desc__i0__pBuffers_pvBuffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__pBuffers_pvBuffer0; _j0++) {
            desc[_i0].pBuffers->pvBuffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        desc[_i0].pBuffers->cbBuffer = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].pBuffers->BufferType = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          reset_buffers(desc);
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].pBuffers);
          }
          free(desc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_desc0 = 100;
          struct TYPE_5__ * desc = (struct TYPE_5__ *) malloc(_len_desc0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].cBuffers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_desc__i0__pBuffers0 = 1;
          desc[_i0].pBuffers = (struct TYPE_4__ *) malloc(_len_desc__i0__pBuffers0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_desc__i0__pBuffers0; _j0++) {
              int _len_desc__i0__pBuffers_pvBuffer0 = 1;
          desc[_i0].pBuffers->pvBuffer = (int *) malloc(_len_desc__i0__pBuffers_pvBuffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__pBuffers_pvBuffer0; _j0++) {
            desc[_i0].pBuffers->pvBuffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        desc[_i0].pBuffers->cbBuffer = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].pBuffers->BufferType = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          reset_buffers(desc);
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].pBuffers);
          }
          free(desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
