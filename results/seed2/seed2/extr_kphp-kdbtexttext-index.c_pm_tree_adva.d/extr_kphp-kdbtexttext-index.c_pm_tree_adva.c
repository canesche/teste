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
struct pm_tree_builder {int* next; long long* freq; int choice; } ;
struct TYPE_5__ {TYPE_1__* w; } ;
typedef  TYPE_2__ pm_cell_t ;
struct TYPE_4__ {long long freq; } ;

/* Variables and functions */
 long long FREQ_INFTY ; 

__attribute__((used)) static void pm_tree_adva (pm_cell_t *A, struct pm_tree_builder *B) {
  if (!B->next[0]) {
    return;
  }
  int n = ++B->next[0];
  if (!n) {
    B->freq[0] = FREQ_INFTY;
    B->choice = (B->next[1] != 0);
    return;
  }
  long long f = A[n].w->freq;
  B->freq[0] = f;
  B->choice = (B->freq[1] < f);
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
          int _len_A0 = 1;
          struct TYPE_5__ * A = (struct TYPE_5__ *) malloc(_len_A0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
              int _len_A__i0__w0 = 1;
          A[_i0].w = (struct TYPE_4__ *) malloc(_len_A__i0__w0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_A__i0__w0; _j0++) {
            A[_i0].w->freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_B0 = 1;
          struct pm_tree_builder * B = (struct pm_tree_builder *) malloc(_len_B0*sizeof(struct pm_tree_builder));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
              int _len_B__i0__next0 = 1;
          B[_i0].next = (int *) malloc(_len_B__i0__next0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_B__i0__next0; _j0++) {
            B[_i0].next[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_B__i0__freq0 = 1;
          B[_i0].freq = (long long *) malloc(_len_B__i0__freq0*sizeof(long long));
          for(int _j0 = 0; _j0 < _len_B__i0__freq0; _j0++) {
            B[_i0].freq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        B[_i0].choice = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pm_tree_adva(A,B);
          for(int _aux = 0; _aux < _len_A0; _aux++) {
          free(A[_aux].w);
          }
          free(A);
          for(int _aux = 0; _aux < _len_B0; _aux++) {
          free(B[_aux].next);
          }
          for(int _aux = 0; _aux < _len_B0; _aux++) {
          free(B[_aux].freq);
          }
          free(B);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_A0 = 65025;
          struct TYPE_5__ * A = (struct TYPE_5__ *) malloc(_len_A0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
              int _len_A__i0__w0 = 1;
          A[_i0].w = (struct TYPE_4__ *) malloc(_len_A__i0__w0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_A__i0__w0; _j0++) {
            A[_i0].w->freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_B0 = 65025;
          struct pm_tree_builder * B = (struct pm_tree_builder *) malloc(_len_B0*sizeof(struct pm_tree_builder));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
              int _len_B__i0__next0 = 1;
          B[_i0].next = (int *) malloc(_len_B__i0__next0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_B__i0__next0; _j0++) {
            B[_i0].next[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_B__i0__freq0 = 1;
          B[_i0].freq = (long long *) malloc(_len_B__i0__freq0*sizeof(long long));
          for(int _j0 = 0; _j0 < _len_B__i0__freq0; _j0++) {
            B[_i0].freq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        B[_i0].choice = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pm_tree_adva(A,B);
          for(int _aux = 0; _aux < _len_A0; _aux++) {
          free(A[_aux].w);
          }
          free(A);
          for(int _aux = 0; _aux < _len_B0; _aux++) {
          free(B[_aux].next);
          }
          for(int _aux = 0; _aux < _len_B0; _aux++) {
          free(B[_aux].freq);
          }
          free(B);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_A0 = 100;
          struct TYPE_5__ * A = (struct TYPE_5__ *) malloc(_len_A0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
              int _len_A__i0__w0 = 1;
          A[_i0].w = (struct TYPE_4__ *) malloc(_len_A__i0__w0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_A__i0__w0; _j0++) {
            A[_i0].w->freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_B0 = 100;
          struct pm_tree_builder * B = (struct pm_tree_builder *) malloc(_len_B0*sizeof(struct pm_tree_builder));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
              int _len_B__i0__next0 = 1;
          B[_i0].next = (int *) malloc(_len_B__i0__next0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_B__i0__next0; _j0++) {
            B[_i0].next[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_B__i0__freq0 = 1;
          B[_i0].freq = (long long *) malloc(_len_B__i0__freq0*sizeof(long long));
          for(int _j0 = 0; _j0 < _len_B__i0__freq0; _j0++) {
            B[_i0].freq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        B[_i0].choice = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pm_tree_adva(A,B);
          for(int _aux = 0; _aux < _len_A0; _aux++) {
          free(A[_aux].w);
          }
          free(A);
          for(int _aux = 0; _aux < _len_B0; _aux++) {
          free(B[_aux].next);
          }
          for(int _aux = 0; _aux < _len_B0; _aux++) {
          free(B[_aux].freq);
          }
          free(B);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
