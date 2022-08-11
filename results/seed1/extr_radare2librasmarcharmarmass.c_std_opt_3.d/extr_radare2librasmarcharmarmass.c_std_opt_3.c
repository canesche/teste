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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/ * a; } ;
typedef  TYPE_1__ ArmOpcode ;

/* Variables and functions */

__attribute__((used)) static void std_opt_3(ArmOpcode *ao) {
	ao->a[3] = ao->a[2];
	ao->a[2] = ao->a[1];
	ao->a[1] = ao->a[0];
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
          int _len_ao0 = 1;
          struct TYPE_3__ * ao = (struct TYPE_3__ *) malloc(_len_ao0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ao0; _i0++) {
              int _len_ao__i0__a0 = 1;
          ao[_i0].a = (int *) malloc(_len_ao__i0__a0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ao__i0__a0; _j0++) {
            ao[_i0].a[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          std_opt_3(ao);
          for(int _aux = 0; _aux < _len_ao0; _aux++) {
          free(ao[_aux].a);
          }
          free(ao);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ao0 = 65025;
          struct TYPE_3__ * ao = (struct TYPE_3__ *) malloc(_len_ao0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ao0; _i0++) {
              int _len_ao__i0__a0 = 1;
          ao[_i0].a = (int *) malloc(_len_ao__i0__a0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ao__i0__a0; _j0++) {
            ao[_i0].a[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          std_opt_3(ao);
          for(int _aux = 0; _aux < _len_ao0; _aux++) {
          free(ao[_aux].a);
          }
          free(ao);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ao0 = 100;
          struct TYPE_3__ * ao = (struct TYPE_3__ *) malloc(_len_ao0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ao0; _i0++) {
              int _len_ao__i0__a0 = 1;
          ao[_i0].a = (int *) malloc(_len_ao__i0__a0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ao__i0__a0; _j0++) {
            ao[_i0].a[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          std_opt_3(ao);
          for(int _aux = 0; _aux < _len_ao0; _aux++) {
          free(ao[_aux].a);
          }
          free(ao);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
