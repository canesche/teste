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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {TYPE_1__* dec; } ;
struct TYPE_7__ {TYPE_2__ dec_subseq; int /*<<< orphan*/  adv_ilist_subseq; } ;
typedef  TYPE_3__ ilist_decoder_t ;
struct TYPE_5__ {scalar_t__ tp; } ;

/* Variables and functions */
 int /*<<< orphan*/  adv_ilist_subseq_fast ; 
 int /*<<< orphan*/  adv_ilist_subseq_slow ; 
 scalar_t__ le_interpolative_ext ; 

__attribute__((used)) static void init_adv_ilist_subseq (ilist_decoder_t *D) {
  D->adv_ilist_subseq = (D->dec_subseq.dec->tp == le_interpolative_ext) ? adv_ilist_subseq_fast : adv_ilist_subseq_slow;
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
          int _len_D0 = 1;
          struct TYPE_7__ * D = (struct TYPE_7__ *) malloc(_len_D0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_D0; _i0++) {
              int _len_D__i0__dec_subseq_dec0 = 1;
          D[_i0].dec_subseq.dec = (struct TYPE_5__ *) malloc(_len_D__i0__dec_subseq_dec0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_D__i0__dec_subseq_dec0; _j0++) {
            D[_i0].dec_subseq.dec->tp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        D[_i0].adv_ilist_subseq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_adv_ilist_subseq(D);
          free(D);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_D0 = 65025;
          struct TYPE_7__ * D = (struct TYPE_7__ *) malloc(_len_D0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_D0; _i0++) {
              int _len_D__i0__dec_subseq_dec0 = 1;
          D[_i0].dec_subseq.dec = (struct TYPE_5__ *) malloc(_len_D__i0__dec_subseq_dec0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_D__i0__dec_subseq_dec0; _j0++) {
            D[_i0].dec_subseq.dec->tp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        D[_i0].adv_ilist_subseq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_adv_ilist_subseq(D);
          free(D);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_D0 = 100;
          struct TYPE_7__ * D = (struct TYPE_7__ *) malloc(_len_D0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_D0; _i0++) {
              int _len_D__i0__dec_subseq_dec0 = 1;
          D[_i0].dec_subseq.dec = (struct TYPE_5__ *) malloc(_len_D__i0__dec_subseq_dec0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_D__i0__dec_subseq_dec0; _j0++) {
            D[_i0].dec_subseq.dec->tp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        D[_i0].adv_ilist_subseq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_adv_ilist_subseq(D);
          free(D);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
