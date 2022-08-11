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
struct iterator {int x; } ;

/* Variables and functions */

__attribute__((used)) static inline void it_heap_insert (struct iterator **H, int HN, struct iterator *cur) {
  int i = ++HN, j, x = cur->x;
  while (i > 1) {
    j = (i >> 1);
    if (H[j]->x >= x) {
      break;
    }
    H[i] = H[j];
    i = j;
  }
  H[i] = cur;
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
          int HN = 100;
          int _len_H0 = 1;
          struct iterator ** H = (struct iterator **) malloc(_len_H0*sizeof(struct iterator *));
          for(int _i0 = 0; _i0 < _len_H0; _i0++) {
            int _len_H1 = 1;
            H[_i0] = (struct iterator *) malloc(_len_H1*sizeof(struct iterator));
            for(int _i1 = 0; _i1 < _len_H1; _i1++) {
              H[_i0][_i1].x = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_cur0 = 1;
          struct iterator * cur = (struct iterator *) malloc(_len_cur0*sizeof(struct iterator));
          for(int _i0 = 0; _i0 < _len_cur0; _i0++) {
            cur[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          it_heap_insert(H,HN,cur);
          for(int i1 = 0; i1 < _len_H0; i1++) {
            int _len_H1 = 1;
              free(H[i1]);
          }
          free(H);
          free(cur);
        
        break;
    }
    // big-arr
    case 1:
    {
          int HN = 255;
          int _len_H0 = 65025;
          struct iterator ** H = (struct iterator **) malloc(_len_H0*sizeof(struct iterator *));
          for(int _i0 = 0; _i0 < _len_H0; _i0++) {
            int _len_H1 = 1;
            H[_i0] = (struct iterator *) malloc(_len_H1*sizeof(struct iterator));
            for(int _i1 = 0; _i1 < _len_H1; _i1++) {
              H[_i0][_i1].x = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_cur0 = 65025;
          struct iterator * cur = (struct iterator *) malloc(_len_cur0*sizeof(struct iterator));
          for(int _i0 = 0; _i0 < _len_cur0; _i0++) {
            cur[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          it_heap_insert(H,HN,cur);
          for(int i1 = 0; i1 < _len_H0; i1++) {
            int _len_H1 = 1;
              free(H[i1]);
          }
          free(H);
          free(cur);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int HN = 10;
          int _len_H0 = 100;
          struct iterator ** H = (struct iterator **) malloc(_len_H0*sizeof(struct iterator *));
          for(int _i0 = 0; _i0 < _len_H0; _i0++) {
            int _len_H1 = 1;
            H[_i0] = (struct iterator *) malloc(_len_H1*sizeof(struct iterator));
            for(int _i1 = 0; _i1 < _len_H1; _i1++) {
              H[_i0][_i1].x = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_cur0 = 100;
          struct iterator * cur = (struct iterator *) malloc(_len_cur0*sizeof(struct iterator));
          for(int _i0 = 0; _i0 < _len_cur0; _i0++) {
            cur[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          it_heap_insert(H,HN,cur);
          for(int i1 = 0; i1 < _len_H0; i1++) {
            int _len_H1 = 1;
              free(H[i1]);
          }
          free(H);
          free(cur);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
