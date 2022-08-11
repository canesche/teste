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
typedef  int /*<<< orphan*/  uint32_t ;
typedef  int /*<<< orphan*/  probability ;
struct TYPE_3__ {size_t count; int /*<<< orphan*/ ** probs; int /*<<< orphan*/ * symbols; } ;
typedef  TYPE_1__ lzma_range_encoder ;

/* Variables and functions */

__attribute__((used)) static inline void
rc_bit(lzma_range_encoder *rc, probability *prob, uint32_t bit)
{
	rc->symbols[rc->count] = bit;
	rc->probs[rc->count] = prob;
	++rc->count;
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
          int bit = 100;
          int _len_rc0 = 1;
          struct TYPE_3__ * rc = (struct TYPE_3__ *) malloc(_len_rc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rc0; _i0++) {
            rc[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rc__i0__probs0 = 1;
          rc[_i0].probs = (int **) malloc(_len_rc__i0__probs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rc__i0__probs0; _j0++) {
            int _len_rc__i0__probs1 = 1;
            rc[_i0].probs[_j0] = (int *) malloc(_len_rc__i0__probs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rc__i0__probs1; _j1++) {
              rc[_i0].probs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rc__i0__symbols0 = 1;
          rc[_i0].symbols = (int *) malloc(_len_rc__i0__symbols0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rc__i0__symbols0; _j0++) {
            rc[_i0].symbols[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_prob0 = 1;
          int * prob = (int *) malloc(_len_prob0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_prob0; _i0++) {
            prob[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rc_bit(rc,prob,bit);
          for(int _aux = 0; _aux < _len_rc0; _aux++) {
          free(*(rc[_aux].probs));
        free(rc[_aux].probs);
          }
          for(int _aux = 0; _aux < _len_rc0; _aux++) {
          free(rc[_aux].symbols);
          }
          free(rc);
          free(prob);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bit = 255;
          int _len_rc0 = 65025;
          struct TYPE_3__ * rc = (struct TYPE_3__ *) malloc(_len_rc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rc0; _i0++) {
            rc[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rc__i0__probs0 = 1;
          rc[_i0].probs = (int **) malloc(_len_rc__i0__probs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rc__i0__probs0; _j0++) {
            int _len_rc__i0__probs1 = 1;
            rc[_i0].probs[_j0] = (int *) malloc(_len_rc__i0__probs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rc__i0__probs1; _j1++) {
              rc[_i0].probs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rc__i0__symbols0 = 1;
          rc[_i0].symbols = (int *) malloc(_len_rc__i0__symbols0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rc__i0__symbols0; _j0++) {
            rc[_i0].symbols[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_prob0 = 65025;
          int * prob = (int *) malloc(_len_prob0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_prob0; _i0++) {
            prob[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rc_bit(rc,prob,bit);
          for(int _aux = 0; _aux < _len_rc0; _aux++) {
          free(*(rc[_aux].probs));
        free(rc[_aux].probs);
          }
          for(int _aux = 0; _aux < _len_rc0; _aux++) {
          free(rc[_aux].symbols);
          }
          free(rc);
          free(prob);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bit = 10;
          int _len_rc0 = 100;
          struct TYPE_3__ * rc = (struct TYPE_3__ *) malloc(_len_rc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_rc0; _i0++) {
            rc[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rc__i0__probs0 = 1;
          rc[_i0].probs = (int **) malloc(_len_rc__i0__probs0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_rc__i0__probs0; _j0++) {
            int _len_rc__i0__probs1 = 1;
            rc[_i0].probs[_j0] = (int *) malloc(_len_rc__i0__probs1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_rc__i0__probs1; _j1++) {
              rc[_i0].probs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rc__i0__symbols0 = 1;
          rc[_i0].symbols = (int *) malloc(_len_rc__i0__symbols0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rc__i0__symbols0; _j0++) {
            rc[_i0].symbols[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_prob0 = 100;
          int * prob = (int *) malloc(_len_prob0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_prob0; _i0++) {
            prob[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rc_bit(rc,prob,bit);
          for(int _aux = 0; _aux < _len_rc0; _aux++) {
          free(*(rc[_aux].probs));
        free(rc[_aux].probs);
          }
          for(int _aux = 0; _aux < _len_rc0; _aux++) {
          free(rc[_aux].symbols);
          }
          free(rc);
          free(prob);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
