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
struct TYPE_3__ {int /*<<< orphan*/  created_at; scalar_t__ status; int /*<<< orphan*/  transaction_id; } ;
typedef  TYPE_1__ transaction_t ;

/* Variables and functions */
 scalar_t__ trs_deleting ; 

__attribute__((used)) static inline void store_transaction_short (long long **RR, transaction_t *T, int flags) {
  *((*RR)++) = T->transaction_id;
  if (flags & 1) {
    *((*RR)++) = trs_deleting - T->status;
  }
  if (flags & 2) {
    *((*RR)++) = T->created_at;
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
          int flags = 100;
          int _len_RR0 = 1;
          long long ** RR = (long long **) malloc(_len_RR0*sizeof(long long *));
          for(int _i0 = 0; _i0 < _len_RR0; _i0++) {
            int _len_RR1 = 1;
            RR[_i0] = (long long *) malloc(_len_RR1*sizeof(long long));
            for(int _i1 = 0; _i1 < _len_RR1; _i1++) {
              RR[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_T0 = 1;
          struct TYPE_3__ * T = (struct TYPE_3__ *) malloc(_len_T0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_T0; _i0++) {
            T[_i0].created_at = ((-2 * (next_i()%2)) + 1) * next_i();
        T[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        T[_i0].transaction_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          store_transaction_short(RR,T,flags);
          for(int i1 = 0; i1 < _len_RR0; i1++) {
            int _len_RR1 = 1;
              free(RR[i1]);
          }
          free(RR);
          free(T);
        
        break;
    }
    // big-arr
    case 1:
    {
          int flags = 255;
          int _len_RR0 = 65025;
          long long ** RR = (long long **) malloc(_len_RR0*sizeof(long long *));
          for(int _i0 = 0; _i0 < _len_RR0; _i0++) {
            int _len_RR1 = 1;
            RR[_i0] = (long long *) malloc(_len_RR1*sizeof(long long));
            for(int _i1 = 0; _i1 < _len_RR1; _i1++) {
              RR[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_T0 = 65025;
          struct TYPE_3__ * T = (struct TYPE_3__ *) malloc(_len_T0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_T0; _i0++) {
            T[_i0].created_at = ((-2 * (next_i()%2)) + 1) * next_i();
        T[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        T[_i0].transaction_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          store_transaction_short(RR,T,flags);
          for(int i1 = 0; i1 < _len_RR0; i1++) {
            int _len_RR1 = 1;
              free(RR[i1]);
          }
          free(RR);
          free(T);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int flags = 10;
          int _len_RR0 = 100;
          long long ** RR = (long long **) malloc(_len_RR0*sizeof(long long *));
          for(int _i0 = 0; _i0 < _len_RR0; _i0++) {
            int _len_RR1 = 1;
            RR[_i0] = (long long *) malloc(_len_RR1*sizeof(long long));
            for(int _i1 = 0; _i1 < _len_RR1; _i1++) {
              RR[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_T0 = 100;
          struct TYPE_3__ * T = (struct TYPE_3__ *) malloc(_len_T0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_T0; _i0++) {
            T[_i0].created_at = ((-2 * (next_i()%2)) + 1) * next_i();
        T[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        T[_i0].transaction_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          store_transaction_short(RR,T,flags);
          for(int i1 = 0; i1 < _len_RR0; i1++) {
            int _len_RR1 = 1;
              free(RR[i1]);
          }
          free(RR);
          free(T);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
