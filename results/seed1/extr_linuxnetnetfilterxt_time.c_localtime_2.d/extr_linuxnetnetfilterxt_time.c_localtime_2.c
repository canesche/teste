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
typedef  int time_t ;
struct xtm {int dse; int weekday; } ;

/* Variables and functions */

__attribute__((used)) static inline void localtime_2(struct xtm *r, time_t time)
{
	/*
	 * Here comes the rest (weekday, monthday). First, divide the SSTE
	 * by seconds-per-day to get the number of _days_ since the epoch.
	 */
	r->dse = time / 86400;

	/*
	 * 1970-01-01 (w=0) was a Thursday (4).
	 * -1 and +1 map Sunday properly onto 7.
	 */
	r->weekday = (4 + r->dse - 1) % 7 + 1;
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
          int time = 100;
          int _len_r0 = 1;
          struct xtm * r = (struct xtm *) malloc(_len_r0*sizeof(struct xtm));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].dse = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].weekday = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          localtime_2(r,time);
          free(r);
        
        break;
    }
    // big-arr
    case 1:
    {
          int time = 255;
          int _len_r0 = 65025;
          struct xtm * r = (struct xtm *) malloc(_len_r0*sizeof(struct xtm));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].dse = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].weekday = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          localtime_2(r,time);
          free(r);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int time = 10;
          int _len_r0 = 100;
          struct xtm * r = (struct xtm *) malloc(_len_r0*sizeof(struct xtm));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].dse = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].weekday = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          localtime_2(r,time);
          free(r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
