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
struct TYPE_3__ {int* state; scalar_t__ count; } ;
typedef  TYPE_1__ CSha256 ;

/* Variables and functions */

void Sha256_Init(CSha256 *p)
{
  p->state[0] = 0x6a09e667;
  p->state[1] = 0xbb67ae85;
  p->state[2] = 0x3c6ef372;
  p->state[3] = 0xa54ff53a;
  p->state[4] = 0x510e527f;
  p->state[5] = 0x9b05688c;
  p->state[6] = 0x1f83d9ab;
  p->state[7] = 0x5be0cd19;
  p->count = 0;
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
              int _len_p__i0__state0 = 1;
          p[_i0].state = (int *) malloc(_len_p__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__state0; _j0++) {
            p[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Sha256_Init(p);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].state);
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
              int _len_p__i0__state0 = 1;
          p[_i0].state = (int *) malloc(_len_p__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__state0; _j0++) {
            p[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Sha256_Init(p);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].state);
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
              int _len_p__i0__state0 = 1;
          p[_i0].state = (int *) malloc(_len_p__i0__state0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_p__i0__state0; _j0++) {
            p[_i0].state[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          Sha256_Init(p);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].state);
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
