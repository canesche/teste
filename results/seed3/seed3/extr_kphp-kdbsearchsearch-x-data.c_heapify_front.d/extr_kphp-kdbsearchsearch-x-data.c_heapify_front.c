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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct item_with_rating {scalar_t__ V; int /*<<< orphan*/  I; } ;
struct TYPE_4__ {TYPE_1__* h; } ;
struct TYPE_3__ {int value; } ;

/* Variables and functions */
 int /*<<< orphan*/ * R ; 
 scalar_t__* RR ; 
 size_t* RS ; 
 int R_cnt ; 
 TYPE_2__ hm ; 

__attribute__((used)) static void heapify_front (struct item_with_rating *E, int i, int slot) {
  while (1) {
    int j = i << 1;
    if (j > R_cnt) { break; }
    if (j < R_cnt && RR[j] < RR[j+1]) { j++; }
    if (E->V >= RR[j]) { break; }
    R[i] = R[j];
    RR[i] = RR[j];
    hm.h[RS[i] = RS[j]].value = i;
    i = j;
  }
  R[i] = E->I;
  RR[i] = E->V;
  hm.h[RS[i] = slot].value = i;
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
          int slot = 100;
          int _len_E0 = 1;
          struct item_with_rating * E = (struct item_with_rating *) malloc(_len_E0*sizeof(struct item_with_rating));
          for(int _i0 = 0; _i0 < _len_E0; _i0++) {
            E[_i0].V = ((-2 * (next_i()%2)) + 1) * next_i();
        E[_i0].I = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          heapify_front(E,i,slot);
          free(E);
        
        break;
    }
    // big-arr
    case 1:
    {
          int i = 255;
          int slot = 255;
          int _len_E0 = 65025;
          struct item_with_rating * E = (struct item_with_rating *) malloc(_len_E0*sizeof(struct item_with_rating));
          for(int _i0 = 0; _i0 < _len_E0; _i0++) {
            E[_i0].V = ((-2 * (next_i()%2)) + 1) * next_i();
        E[_i0].I = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          heapify_front(E,i,slot);
          free(E);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int i = 10;
          int slot = 10;
          int _len_E0 = 100;
          struct item_with_rating * E = (struct item_with_rating *) malloc(_len_E0*sizeof(struct item_with_rating));
          for(int _i0 = 0; _i0 < _len_E0; _i0++) {
            E[_i0].V = ((-2 * (next_i()%2)) + 1) * next_i();
        E[_i0].I = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          heapify_front(E,i,slot);
          free(E);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
