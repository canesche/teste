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
typedef  int usec_t ;
typedef  int time_t ;
typedef  int suseconds_t ;
struct TYPE_4__ {int tv_sec; int tv_usec; } ;
struct TYPE_5__ {int usec_since_last_update; TYPE_1__ last_collected_time; } ;
typedef  TYPE_2__ RRDSET ;

/* Variables and functions */
 int USEC_PER_SEC ; 

__attribute__((used)) static inline usec_t rrdset_update_last_collected_time(RRDSET *st) {
    usec_t last_collect_ut = st->last_collected_time.tv_sec * USEC_PER_SEC + st->last_collected_time.tv_usec;
    usec_t ut = last_collect_ut + st->usec_since_last_update;
    st->last_collected_time.tv_sec = (time_t) (ut / USEC_PER_SEC);
    st->last_collected_time.tv_usec = (suseconds_t) (ut % USEC_PER_SEC);

    #ifdef NETDATA_INTERNAL_CHECKS
    rrdset_debug(st, "updated last collected time to %0.3" LONG_DOUBLE_MODIFIER, (LONG_DOUBLE)last_collect_ut / USEC_PER_SEC);
    #endif

    return last_collect_ut;
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
          int _len_st0 = 1;
          struct TYPE_5__ * st = (struct TYPE_5__ *) malloc(_len_st0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].usec_since_last_update = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].last_collected_time.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].last_collected_time.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rrdset_update_last_collected_time(st);
          printf("%d\n", benchRet); 
          free(st);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_st0 = 65025;
          struct TYPE_5__ * st = (struct TYPE_5__ *) malloc(_len_st0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].usec_since_last_update = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].last_collected_time.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].last_collected_time.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rrdset_update_last_collected_time(st);
          printf("%d\n", benchRet); 
          free(st);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_st0 = 100;
          struct TYPE_5__ * st = (struct TYPE_5__ *) malloc(_len_st0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].usec_since_last_update = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].last_collected_time.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].last_collected_time.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rrdset_update_last_collected_time(st);
          printf("%d\n", benchRet); 
          free(st);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
