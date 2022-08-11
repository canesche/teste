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

/* Type definitions */
typedef  int /*<<< orphan*/  loader_block ;

/* Variables and functions */

__attribute__((used)) static inline void dump_loader_block (volatile loader_block * lb) {
#ifdef DEBUG_AMBASSADOR
  unsigned int i;
  PRINTDB (DBG_LOAD, "lb @ %p; res: %d, cmd: %d, pay:",
	   lb, be32_to_cpu (lb->result), be32_to_cpu (lb->command));
  for (i = 0; i < MAX_COMMAND_DATA; ++i)
    PRINTDM (DBG_LOAD, " %08x", be32_to_cpu (lb->payload.data[i]));
  PRINTDE (DBG_LOAD, ", vld: %08x", be32_to_cpu (lb->valid));
#else
  (void) lb;
#endif
  return;
}


// ------------------------------------------------------------------------- //




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
          int _len_lb0 = 1;
          volatile int * lb = (volatile int *) malloc(_len_lb0*sizeof(volatile int));
          for(int _i0 = 0; _i0 < _len_lb0; _i0++) {
            lb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dump_loader_block(lb);
          free(lb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_lb0 = 65025;
          volatile int * lb = (volatile int *) malloc(_len_lb0*sizeof(volatile int));
          for(int _i0 = 0; _i0 < _len_lb0; _i0++) {
            lb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dump_loader_block(lb);
          free(lb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_lb0 = 100;
          volatile int * lb = (volatile int *) malloc(_len_lb0*sizeof(volatile int));
          for(int _i0 = 0; _i0 < _len_lb0; _i0++) {
            lb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dump_loader_block(lb);
          free(lb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
