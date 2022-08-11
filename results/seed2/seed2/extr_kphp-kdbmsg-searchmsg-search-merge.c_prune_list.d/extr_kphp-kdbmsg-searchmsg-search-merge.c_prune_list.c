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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int pos_to; int neg_to; int* delmsg_list; int delmsg_cnt; } ;

/* Variables and functions */
 int* D ; 
 int /*<<< orphan*/  Dc ; 
 TYPE_1__* UserMod ; 
 int /*<<< orphan*/  dropped_pairs ; 

__attribute__((used)) static void prune_list (int *start, int *stop, int pos_thr, int neg_thr) {
  int *A, *B;
  int pos_to, neg_to, msg_id;

  if (UserMod) {
    pos_to = UserMod->pos_to;
    neg_to = UserMod->neg_to;
    A = UserMod->delmsg_list;
    if (A) {
      B = A + UserMod->delmsg_cnt - 1;
    } else {
      B = 0;
      A = B + 1;
    }
  } else {
    pos_to = neg_to = 0;
    B = 0;
    A = B + 1;
  }

  while (start < stop) {
    msg_id = *start++;
    if (msg_id > 0) {
      while (A <= B && *B > msg_id) { B--; }
      if ((A <= B && msg_id == *B) || msg_id <= pos_to || msg_id >= pos_thr) {
	dropped_pairs++;
      } else {
	D[Dc++] = msg_id;
      }
    } else {
      while (A <= B && *A < msg_id) { A++; }
      if ((A <= B && msg_id == *A) || msg_id >= neg_to || msg_id <= neg_thr) {
	dropped_pairs++;
      } else {
	D[Dc++] = msg_id;
      }
    }
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
          int pos_thr = 100;
          int neg_thr = 100;
          int _len_start0 = 1;
          int * start = (int *) malloc(_len_start0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_start0; _i0++) {
            start[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stop0 = 1;
          int * stop = (int *) malloc(_len_stop0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_stop0; _i0++) {
            stop[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          prune_list(start,stop,pos_thr,neg_thr);
          free(start);
          free(stop);
        
        break;
    }
    // big-arr
    case 1:
    {
          int pos_thr = 255;
          int neg_thr = 255;
          int _len_start0 = 65025;
          int * start = (int *) malloc(_len_start0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_start0; _i0++) {
            start[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stop0 = 65025;
          int * stop = (int *) malloc(_len_stop0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_stop0; _i0++) {
            stop[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          prune_list(start,stop,pos_thr,neg_thr);
          free(start);
          free(stop);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pos_thr = 10;
          int neg_thr = 10;
          int _len_start0 = 100;
          int * start = (int *) malloc(_len_start0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_start0; _i0++) {
            start[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stop0 = 100;
          int * stop = (int *) malloc(_len_stop0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_stop0; _i0++) {
            stop[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          prune_list(start,stop,pos_thr,neg_thr);
          free(start);
          free(stop);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
