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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {long date; } ;
typedef  TYPE_1__ entry_t ;

/* Variables and functions */
 int /*<<< orphan*/  date_adj ; 

__attribute__((used)) static inline void fix_date (long a, entry_t *B, entry_t *C) {
  long min = a, max = C->date;
  if (min > max) { min = max; max = a; }
  if (B->date < min) { B->date = min; date_adj++; }
  else if (B->date > max) { B->date = max; date_adj++; }
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
          long a = 100;
          int _len_B0 = 1;
          struct TYPE_4__ * B = (struct TYPE_4__ *) malloc(_len_B0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
            B[_i0].date = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_C0 = 1;
          struct TYPE_4__ * C = (struct TYPE_4__ *) malloc(_len_C0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_C0; _i0++) {
            C[_i0].date = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fix_date(a,B,C);
          free(B);
          free(C);
        
        break;
    }
    // big-arr
    case 1:
    {
          long a = 255;
          int _len_B0 = 65025;
          struct TYPE_4__ * B = (struct TYPE_4__ *) malloc(_len_B0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
            B[_i0].date = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_C0 = 65025;
          struct TYPE_4__ * C = (struct TYPE_4__ *) malloc(_len_C0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_C0; _i0++) {
            C[_i0].date = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fix_date(a,B,C);
          free(B);
          free(C);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long a = 10;
          int _len_B0 = 100;
          struct TYPE_4__ * B = (struct TYPE_4__ *) malloc(_len_B0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
            B[_i0].date = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_C0 = 100;
          struct TYPE_4__ * C = (struct TYPE_4__ *) malloc(_len_C0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_C0; _i0++) {
            C[_i0].date = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fix_date(a,B,C);
          free(B);
          free(C);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
