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
struct union_iterator {long cnt; TYPE_1__** H; } ;
typedef  TYPE_1__* iterator_t ;
struct TYPE_4__ {int pos; int /*<<< orphan*/  jump_to; } ;

/* Variables and functions */
 int /*<<< orphan*/  multiple_union_jump_to ; 

iterator_t build_multiple_union_iterator (iterator_t I) {
  struct union_iterator *IU = (struct union_iterator *) I;
  long N = IU->cnt, k;

  //  fprintf (stderr, "building heap for multiple union iterator of size %ld\n", N);

  I->jump_to = multiple_union_jump_to;
  for (k = N >> 1; k >= 1; k--) {
    iterator_t A = IU->H[k];
    int x = A->pos;
    long i = k;
    while (1) {
      long j = i << 1;
      if (j > N) {
	break;
      }
      if (j < N && IU->H[j]->pos > IU->H[j + 1]->pos) {
	++j;
      }
      if (x <= IU->H[j]->pos) {
	break;
      }
      IU->H[i] = IU->H[j];
      i = j;
    }
    IU->H[i] = A;
  }
  I->pos = IU->H[1]->pos;
  return I;
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
          int _len_I0 = 1;
          struct TYPE_4__ * I = (struct TYPE_4__ *) malloc(_len_I0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_I0; _i0++) {
            I[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        I[_i0].jump_to = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ * benchRet = build_multiple_union_iterator(I);
          printf("%d\n", (*benchRet).pos);
          printf("%d\n", (*benchRet).jump_to);
          free(I);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_I0 = 65025;
          struct TYPE_4__ * I = (struct TYPE_4__ *) malloc(_len_I0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_I0; _i0++) {
            I[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        I[_i0].jump_to = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ * benchRet = build_multiple_union_iterator(I);
          printf("%d\n", (*benchRet).pos);
          printf("%d\n", (*benchRet).jump_to);
          free(I);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_I0 = 100;
          struct TYPE_4__ * I = (struct TYPE_4__ *) malloc(_len_I0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_I0; _i0++) {
            I[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        I[_i0].jump_to = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ * benchRet = build_multiple_union_iterator(I);
          printf("%d\n", (*benchRet).pos);
          printf("%d\n", (*benchRet).jump_to);
          free(I);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
