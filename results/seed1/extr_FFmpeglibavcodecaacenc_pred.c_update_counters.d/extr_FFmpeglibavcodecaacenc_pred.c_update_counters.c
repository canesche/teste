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
struct TYPE_3__ {scalar_t__* predictor_reset_count; } ;
typedef  TYPE_1__ IndividualChannelStream ;

/* Variables and functions */
 scalar_t__ PRED_RESET_FRAME_MIN ; 

__attribute__((used)) static inline int update_counters(IndividualChannelStream *ics, int inc)
{
    int i;
    for (i = 1; i < 31; i++) {
        ics->predictor_reset_count[i] += inc;
        if (ics->predictor_reset_count[i] > PRED_RESET_FRAME_MIN)
            return i; /* Reset this immediately */
    }
    return 0;
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
          int inc = 100;
          int _len_ics0 = 1;
          struct TYPE_3__ * ics = (struct TYPE_3__ *) malloc(_len_ics0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ics0; _i0++) {
              int _len_ics__i0__predictor_reset_count0 = 1;
          ics[_i0].predictor_reset_count = (long *) malloc(_len_ics__i0__predictor_reset_count0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ics__i0__predictor_reset_count0; _j0++) {
            ics[_i0].predictor_reset_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = update_counters(ics,inc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ics0; _aux++) {
          free(ics[_aux].predictor_reset_count);
          }
          free(ics);
        
        break;
    }
    // big-arr
    case 1:
    {
          int inc = 255;
          int _len_ics0 = 65025;
          struct TYPE_3__ * ics = (struct TYPE_3__ *) malloc(_len_ics0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ics0; _i0++) {
              int _len_ics__i0__predictor_reset_count0 = 1;
          ics[_i0].predictor_reset_count = (long *) malloc(_len_ics__i0__predictor_reset_count0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ics__i0__predictor_reset_count0; _j0++) {
            ics[_i0].predictor_reset_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = update_counters(ics,inc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ics0; _aux++) {
          free(ics[_aux].predictor_reset_count);
          }
          free(ics);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int inc = 10;
          int _len_ics0 = 100;
          struct TYPE_3__ * ics = (struct TYPE_3__ *) malloc(_len_ics0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ics0; _i0++) {
              int _len_ics__i0__predictor_reset_count0 = 1;
          ics[_i0].predictor_reset_count = (long *) malloc(_len_ics__i0__predictor_reset_count0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ics__i0__predictor_reset_count0; _j0++) {
            ics[_i0].predictor_reset_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = update_counters(ics,inc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ics0; _aux++) {
          free(ics[_aux].predictor_reset_count);
          }
          free(ics);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
