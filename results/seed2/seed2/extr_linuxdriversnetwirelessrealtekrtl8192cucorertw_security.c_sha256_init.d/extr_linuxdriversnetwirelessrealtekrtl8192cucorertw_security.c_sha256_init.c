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
struct sha256_state {int* state; scalar_t__ length; scalar_t__ curlen; } ;

/* Variables and functions */

__attribute__((used)) static void sha256_init(struct sha256_state *md)
{
	md->curlen = 0;
	md->length = 0;
	md->state[0] = 0x6A09E667UL;
	md->state[1] = 0xBB67AE85UL;
	md->state[2] = 0x3C6EF372UL;
	md->state[3] = 0xA54FF53AUL;
	md->state[4] = 0x510E527FUL;
	md->state[5] = 0x9B05688CUL;
	md->state[6] = 0x1F83D9ABUL;
	md->state[7] = 0x5BE0CD19UL;
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
          int _len_md0 = 1;
          struct sha256_state * md = (struct sha256_state *) malloc(_len_md0*sizeof(struct sha256_state));
          for(int _i0 = 0; _i0 < _len_md0; _i0++) {
              int _len_md__i0__state0 = 1;
          md[_i0].state = (int *) malloc(_len_md__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_md__i0__state0; _j0++) {
            md[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        md[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        md[_i0].curlen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sha256_init(md);
          for(int _aux = 0; _aux < _len_md0; _aux++) {
          free(md[_aux].state);
          }
          free(md);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_md0 = 65025;
          struct sha256_state * md = (struct sha256_state *) malloc(_len_md0*sizeof(struct sha256_state));
          for(int _i0 = 0; _i0 < _len_md0; _i0++) {
              int _len_md__i0__state0 = 1;
          md[_i0].state = (int *) malloc(_len_md__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_md__i0__state0; _j0++) {
            md[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        md[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        md[_i0].curlen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sha256_init(md);
          for(int _aux = 0; _aux < _len_md0; _aux++) {
          free(md[_aux].state);
          }
          free(md);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_md0 = 100;
          struct sha256_state * md = (struct sha256_state *) malloc(_len_md0*sizeof(struct sha256_state));
          for(int _i0 = 0; _i0 < _len_md0; _i0++) {
              int _len_md__i0__state0 = 1;
          md[_i0].state = (int *) malloc(_len_md__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_md__i0__state0; _j0++) {
            md[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        md[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        md[_i0].curlen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sha256_init(md);
          for(int _aux = 0; _aux < _len_md0; _aux++) {
          free(md[_aux].state);
          }
          free(md);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
