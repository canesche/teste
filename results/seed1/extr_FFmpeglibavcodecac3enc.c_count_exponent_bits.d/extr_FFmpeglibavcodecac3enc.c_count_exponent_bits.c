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
struct TYPE_5__ {int* end_freq; int /*<<< orphan*/  cpl_in_use; } ;
struct TYPE_4__ {int num_blocks; int channels; int** exp_strategy; int* start_freq; TYPE_2__* blocks; } ;
typedef  TYPE_1__ AC3EncodeContext ;
typedef  TYPE_2__ AC3Block ;

/* Variables and functions */
 int CPL_CH ; 
 int EXP_REUSE ; 
 int*** exponent_group_tab ; 

__attribute__((used)) static int count_exponent_bits(AC3EncodeContext *s)
{
    int blk, ch;
    int nb_groups, bit_count;

    bit_count = 0;
    for (blk = 0; blk < s->num_blocks; blk++) {
        AC3Block *block = &s->blocks[blk];
        for (ch = !block->cpl_in_use; ch <= s->channels; ch++) {
            int exp_strategy = s->exp_strategy[ch][blk];
            int cpl          = (ch == CPL_CH);
            int nb_coefs     = block->end_freq[ch] - s->start_freq[ch];

            if (exp_strategy == EXP_REUSE)
                continue;

            nb_groups = exponent_group_tab[cpl][exp_strategy-1][nb_coefs];
            bit_count += 4 + (nb_groups * 7);
        }
    }

    return bit_count;
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
          struct TYPE_4__ * s = (struct TYPE_4__ *) malloc(_len_s0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].num_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__exp_strategy0 = 1;
          s[_i0].exp_strategy = (int **) malloc(_len_s__i0__exp_strategy0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__exp_strategy0; _j0++) {
            int _len_s__i0__exp_strategy1 = 1;
            s[_i0].exp_strategy[_j0] = (int *) malloc(_len_s__i0__exp_strategy1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__exp_strategy1; _j1++) {
              s[_i0].exp_strategy[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__start_freq0 = 1;
          s[_i0].start_freq = (int *) malloc(_len_s__i0__start_freq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__start_freq0; _j0++) {
            s[_i0].start_freq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__blocks0 = 1;
          s[_i0].blocks = (struct TYPE_5__ *) malloc(_len_s__i0__blocks0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_s__i0__blocks0; _j0++) {
              int _len_s__i0__blocks_end_freq0 = 1;
          s[_i0].blocks->end_freq = (int *) malloc(_len_s__i0__blocks_end_freq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__blocks_end_freq0; _j0++) {
            s[_i0].blocks->end_freq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].blocks->cpl_in_use = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = count_exponent_bits(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].exp_strategy));
        free(s[_aux].exp_strategy);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].start_freq);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].blocks);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_4__ * s = (struct TYPE_4__ *) malloc(_len_s0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].num_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__exp_strategy0 = 1;
          s[_i0].exp_strategy = (int **) malloc(_len_s__i0__exp_strategy0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__exp_strategy0; _j0++) {
            int _len_s__i0__exp_strategy1 = 1;
            s[_i0].exp_strategy[_j0] = (int *) malloc(_len_s__i0__exp_strategy1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__exp_strategy1; _j1++) {
              s[_i0].exp_strategy[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__start_freq0 = 1;
          s[_i0].start_freq = (int *) malloc(_len_s__i0__start_freq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__start_freq0; _j0++) {
            s[_i0].start_freq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__blocks0 = 1;
          s[_i0].blocks = (struct TYPE_5__ *) malloc(_len_s__i0__blocks0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_s__i0__blocks0; _j0++) {
              int _len_s__i0__blocks_end_freq0 = 1;
          s[_i0].blocks->end_freq = (int *) malloc(_len_s__i0__blocks_end_freq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__blocks_end_freq0; _j0++) {
            s[_i0].blocks->end_freq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].blocks->cpl_in_use = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = count_exponent_bits(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].exp_strategy));
        free(s[_aux].exp_strategy);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].start_freq);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].blocks);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_4__ * s = (struct TYPE_4__ *) malloc(_len_s0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].num_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__exp_strategy0 = 1;
          s[_i0].exp_strategy = (int **) malloc(_len_s__i0__exp_strategy0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__exp_strategy0; _j0++) {
            int _len_s__i0__exp_strategy1 = 1;
            s[_i0].exp_strategy[_j0] = (int *) malloc(_len_s__i0__exp_strategy1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__exp_strategy1; _j1++) {
              s[_i0].exp_strategy[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__start_freq0 = 1;
          s[_i0].start_freq = (int *) malloc(_len_s__i0__start_freq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__start_freq0; _j0++) {
            s[_i0].start_freq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__blocks0 = 1;
          s[_i0].blocks = (struct TYPE_5__ *) malloc(_len_s__i0__blocks0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_s__i0__blocks0; _j0++) {
              int _len_s__i0__blocks_end_freq0 = 1;
          s[_i0].blocks->end_freq = (int *) malloc(_len_s__i0__blocks_end_freq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__blocks_end_freq0; _j0++) {
            s[_i0].blocks->end_freq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].blocks->cpl_in_use = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = count_exponent_bits(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].exp_strategy));
        free(s[_aux].exp_strategy);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].start_freq);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].blocks);
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
