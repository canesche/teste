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
struct TYPE_3__ {unsigned long cBuffers; int /*<<< orphan*/ * pBuffers; int /*<<< orphan*/  ulVersion; } ;
typedef  TYPE_1__ SecBufferDesc ;
typedef  int /*<<< orphan*/  SecBuffer ;

/* Variables and functions */
 int /*<<< orphan*/  SECBUFFER_VERSION ; 

__attribute__((used)) static void init_sec_buffer_desc(SecBufferDesc *desc, SecBuffer *buffers,
                                 unsigned long buffer_count)
{
    desc->ulVersion = SECBUFFER_VERSION;
    desc->pBuffers = buffers;
    desc->cBuffers = buffer_count;
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
          unsigned long buffer_count = 100;
          int _len_desc0 = 1;
          struct TYPE_3__ * desc = (struct TYPE_3__ *) malloc(_len_desc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].cBuffers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_desc__i0__pBuffers0 = 1;
          desc[_i0].pBuffers = (int *) malloc(_len_desc__i0__pBuffers0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__pBuffers0; _j0++) {
            desc[_i0].pBuffers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        desc[_i0].ulVersion = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffers0 = 1;
          int * buffers = (int *) malloc(_len_buffers0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buffers0; _i0++) {
            buffers[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_sec_buffer_desc(desc,buffers,buffer_count);
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].pBuffers);
          }
          free(desc);
          free(buffers);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long buffer_count = 255;
          int _len_desc0 = 65025;
          struct TYPE_3__ * desc = (struct TYPE_3__ *) malloc(_len_desc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].cBuffers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_desc__i0__pBuffers0 = 1;
          desc[_i0].pBuffers = (int *) malloc(_len_desc__i0__pBuffers0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__pBuffers0; _j0++) {
            desc[_i0].pBuffers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        desc[_i0].ulVersion = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffers0 = 65025;
          int * buffers = (int *) malloc(_len_buffers0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buffers0; _i0++) {
            buffers[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_sec_buffer_desc(desc,buffers,buffer_count);
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].pBuffers);
          }
          free(desc);
          free(buffers);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long buffer_count = 10;
          int _len_desc0 = 100;
          struct TYPE_3__ * desc = (struct TYPE_3__ *) malloc(_len_desc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].cBuffers = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_desc__i0__pBuffers0 = 1;
          desc[_i0].pBuffers = (int *) malloc(_len_desc__i0__pBuffers0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_desc__i0__pBuffers0; _j0++) {
            desc[_i0].pBuffers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        desc[_i0].ulVersion = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffers0 = 100;
          int * buffers = (int *) malloc(_len_buffers0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buffers0; _i0++) {
            buffers[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_sec_buffer_desc(desc,buffers,buffer_count);
          for(int _aux = 0; _aux < _len_desc0; _aux++) {
          free(desc[_aux].pBuffers);
          }
          free(desc);
          free(buffers);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
