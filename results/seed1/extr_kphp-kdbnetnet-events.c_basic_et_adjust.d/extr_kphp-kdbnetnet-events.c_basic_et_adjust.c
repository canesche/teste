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
struct TYPE_4__ {scalar_t__ wakeup_time; int h_idx; } ;
typedef  TYPE_1__ event_timer_t ;

/* Variables and functions */
 TYPE_1__** et_heap ; 
 int et_heap_size ; 

__attribute__((used)) static inline int basic_et_adjust (event_timer_t *et, int i) {
  int j;
  while (i > 1) {
    j = (i >> 1);
    if (et_heap[j]->wakeup_time <= et->wakeup_time) {
      break;
    }
    et_heap[i] = et_heap[j];
    et_heap[i]->h_idx = i;
    i = j;
  }
  j = 2*i;
  while (j <= et_heap_size) {
    if (j < et_heap_size && et_heap[j]->wakeup_time > et_heap[j+1]->wakeup_time) {
      j++;
    }
    if (et->wakeup_time <= et_heap[j]->wakeup_time) {
      break;
    }
    et_heap[i] = et_heap[j];
    et_heap[i]->h_idx = i;
    i = j;
    j <<= 1;
  }
  et_heap[i] = et;
  et->h_idx = i;
  return i;
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
          int i = 100;
          int _len_et0 = 1;
          struct TYPE_4__ * et = (struct TYPE_4__ *) malloc(_len_et0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_et0; _i0++) {
            et[_i0].wakeup_time = ((-2 * (next_i()%2)) + 1) * next_i();
        et[_i0].h_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = basic_et_adjust(et,i);
          printf("%d\n", benchRet); 
          free(et);
        
        break;
    }
    // big-arr
    case 1:
    {
          int i = 255;
          int _len_et0 = 65025;
          struct TYPE_4__ * et = (struct TYPE_4__ *) malloc(_len_et0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_et0; _i0++) {
            et[_i0].wakeup_time = ((-2 * (next_i()%2)) + 1) * next_i();
        et[_i0].h_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = basic_et_adjust(et,i);
          printf("%d\n", benchRet); 
          free(et);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int i = 10;
          int _len_et0 = 100;
          struct TYPE_4__ * et = (struct TYPE_4__ *) malloc(_len_et0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_et0; _i0++) {
            et[_i0].wakeup_time = ((-2 * (next_i()%2)) + 1) * next_i();
        et[_i0].h_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = basic_et_adjust(et,i);
          printf("%d\n", benchRet); 
          free(et);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
