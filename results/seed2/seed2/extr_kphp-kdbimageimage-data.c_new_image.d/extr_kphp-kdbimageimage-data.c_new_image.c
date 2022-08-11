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
struct stack_entry {int /*<<< orphan*/  tp; int /*<<< orphan*/ * a; } ;
typedef  int /*<<< orphan*/  Image ;

/* Variables and functions */
 int /*<<< orphan*/  ft_image ; 

__attribute__((used)) static void new_image (struct stack_entry *E, Image *I) {
  E->a =  I;
  E->tp = ft_image;
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
          int _len_E0 = 1;
          struct stack_entry * E = (struct stack_entry *) malloc(_len_E0*sizeof(struct stack_entry));
          for(int _i0 = 0; _i0 < _len_E0; _i0++) {
            E[_i0].tp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_E__i0__a0 = 1;
          E[_i0].a = (int *) malloc(_len_E__i0__a0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_E__i0__a0; _j0++) {
            E[_i0].a[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_I0 = 1;
          int * I = (int *) malloc(_len_I0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_I0; _i0++) {
            I[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          new_image(E,I);
          for(int _aux = 0; _aux < _len_E0; _aux++) {
          free(E[_aux].a);
          }
          free(E);
          free(I);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_E0 = 65025;
          struct stack_entry * E = (struct stack_entry *) malloc(_len_E0*sizeof(struct stack_entry));
          for(int _i0 = 0; _i0 < _len_E0; _i0++) {
            E[_i0].tp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_E__i0__a0 = 1;
          E[_i0].a = (int *) malloc(_len_E__i0__a0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_E__i0__a0; _j0++) {
            E[_i0].a[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_I0 = 65025;
          int * I = (int *) malloc(_len_I0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_I0; _i0++) {
            I[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          new_image(E,I);
          for(int _aux = 0; _aux < _len_E0; _aux++) {
          free(E[_aux].a);
          }
          free(E);
          free(I);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_E0 = 100;
          struct stack_entry * E = (struct stack_entry *) malloc(_len_E0*sizeof(struct stack_entry));
          for(int _i0 = 0; _i0 < _len_E0; _i0++) {
            E[_i0].tp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_E__i0__a0 = 1;
          E[_i0].a = (int *) malloc(_len_E__i0__a0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_E__i0__a0; _j0++) {
            E[_i0].a[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_I0 = 100;
          int * I = (int *) malloc(_len_I0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_I0; _i0++) {
            I[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          new_image(E,I);
          for(int _aux = 0; _aux < _len_E0; _aux++) {
          free(E[_aux].a);
          }
          free(E);
          free(I);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
