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
typedef  int /*<<< orphan*/  uint8_t ;
struct TYPE_3__ {int ref_bap_set; int channels; int num_blocks; int** exp_ref_block; int /*<<< orphan*/ *** ref_bap; int /*<<< orphan*/ * bap_buffer; } ;
typedef  TYPE_1__ AC3EncodeContext ;

/* Variables and functions */
 int AC3_MAX_COEFS ; 

__attribute__((used)) static void reset_block_bap(AC3EncodeContext *s)
{
    int blk, ch;
    uint8_t *ref_bap;

    if (s->ref_bap[0][0] == s->bap_buffer && s->ref_bap_set)
        return;

    ref_bap = s->bap_buffer;
    for (ch = 0; ch <= s->channels; ch++) {
        for (blk = 0; blk < s->num_blocks; blk++)
            s->ref_bap[ch][blk] = ref_bap + AC3_MAX_COEFS * s->exp_ref_block[ch][blk];
        ref_bap += AC3_MAX_COEFS * s->num_blocks;
    }
    s->ref_bap_set = 1;
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
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].ref_bap_set = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].num_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__exp_ref_block0 = 1;
          s[_i0].exp_ref_block = (int **) malloc(_len_s__i0__exp_ref_block0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__exp_ref_block0; _j0++) {
            int _len_s__i0__exp_ref_block1 = 1;
            s[_i0].exp_ref_block[_j0] = (int *) malloc(_len_s__i0__exp_ref_block1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__exp_ref_block1; _j1++) {
              s[_i0].exp_ref_block[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__ref_bap0 = 1;
          s[_i0].ref_bap = (int ***) malloc(_len_s__i0__ref_bap0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__ref_bap0; _j0++) {
            int _len_s__i0__ref_bap1 = 1;
            s[_i0].ref_bap[_j0] = (int **) malloc(_len_s__i0__ref_bap1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__ref_bap1; _j1++) {
              int _len_s__i0__ref_bap2 = 1;
              s[_i0].ref_bap[_j0][_j1] = (int *) malloc(_len_s__i0__ref_bap2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__ref_bap2; _j2++) {
                s[_i0].ref_bap[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_s__i0__bap_buffer0 = 1;
          s[_i0].bap_buffer = (int *) malloc(_len_s__i0__bap_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__bap_buffer0; _j0++) {
            s[_i0].bap_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          reset_block_bap(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].exp_ref_block));
        free(s[_aux].exp_ref_block);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].bap_buffer);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].ref_bap_set = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].num_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__exp_ref_block0 = 1;
          s[_i0].exp_ref_block = (int **) malloc(_len_s__i0__exp_ref_block0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__exp_ref_block0; _j0++) {
            int _len_s__i0__exp_ref_block1 = 1;
            s[_i0].exp_ref_block[_j0] = (int *) malloc(_len_s__i0__exp_ref_block1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__exp_ref_block1; _j1++) {
              s[_i0].exp_ref_block[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__ref_bap0 = 1;
          s[_i0].ref_bap = (int ***) malloc(_len_s__i0__ref_bap0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__ref_bap0; _j0++) {
            int _len_s__i0__ref_bap1 = 1;
            s[_i0].ref_bap[_j0] = (int **) malloc(_len_s__i0__ref_bap1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__ref_bap1; _j1++) {
              int _len_s__i0__ref_bap2 = 1;
              s[_i0].ref_bap[_j0][_j1] = (int *) malloc(_len_s__i0__ref_bap2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__ref_bap2; _j2++) {
                s[_i0].ref_bap[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_s__i0__bap_buffer0 = 1;
          s[_i0].bap_buffer = (int *) malloc(_len_s__i0__bap_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__bap_buffer0; _j0++) {
            s[_i0].bap_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          reset_block_bap(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].exp_ref_block));
        free(s[_aux].exp_ref_block);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].bap_buffer);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].ref_bap_set = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].num_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__exp_ref_block0 = 1;
          s[_i0].exp_ref_block = (int **) malloc(_len_s__i0__exp_ref_block0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__exp_ref_block0; _j0++) {
            int _len_s__i0__exp_ref_block1 = 1;
            s[_i0].exp_ref_block[_j0] = (int *) malloc(_len_s__i0__exp_ref_block1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__exp_ref_block1; _j1++) {
              s[_i0].exp_ref_block[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__ref_bap0 = 1;
          s[_i0].ref_bap = (int ***) malloc(_len_s__i0__ref_bap0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_s__i0__ref_bap0; _j0++) {
            int _len_s__i0__ref_bap1 = 1;
            s[_i0].ref_bap[_j0] = (int **) malloc(_len_s__i0__ref_bap1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_s__i0__ref_bap1; _j1++) {
              int _len_s__i0__ref_bap2 = 1;
              s[_i0].ref_bap[_j0][_j1] = (int *) malloc(_len_s__i0__ref_bap2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_s__i0__ref_bap2; _j2++) {
                s[_i0].ref_bap[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          int _len_s__i0__bap_buffer0 = 1;
          s[_i0].bap_buffer = (int *) malloc(_len_s__i0__bap_buffer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__bap_buffer0; _j0++) {
            s[_i0].bap_buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          reset_block_bap(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].exp_ref_block));
        free(s[_aux].exp_ref_block);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].bap_buffer);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
