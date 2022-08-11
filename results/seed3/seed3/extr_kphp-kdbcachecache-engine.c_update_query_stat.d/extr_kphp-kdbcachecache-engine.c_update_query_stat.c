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
struct query_stat {double max_time; double sum_time; int /*<<< orphan*/  t; } ;

/* Variables and functions */

inline void update_query_stat (struct query_stat *S, double query_time) {
  S->t++;
  if (S->max_time < query_time) {
    S->max_time = query_time;
  }
  S->sum_time += query_time;
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
          double query_time = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_S0 = 1;
          struct query_stat * S = (struct query_stat *) malloc(_len_S0*sizeof(struct query_stat));
          for(int _i0 = 0; _i0 < _len_S0; _i0++) {
            S[_i0].max_time = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        S[_i0].sum_time = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        S[_i0].t = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_query_stat(S,query_time);
          free(S);
        
        break;
    }
    // big-arr
    case 1:
    {
          double query_time = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_S0 = 65025;
          struct query_stat * S = (struct query_stat *) malloc(_len_S0*sizeof(struct query_stat));
          for(int _i0 = 0; _i0 < _len_S0; _i0++) {
            S[_i0].max_time = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        S[_i0].sum_time = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        S[_i0].t = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_query_stat(S,query_time);
          free(S);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          double query_time = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_S0 = 100;
          struct query_stat * S = (struct query_stat *) malloc(_len_S0*sizeof(struct query_stat));
          for(int _i0 = 0; _i0 < _len_S0; _i0++) {
            S[_i0].max_time = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        S[_i0].sum_time = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        S[_i0].t = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_query_stat(S,query_time);
          free(S);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
