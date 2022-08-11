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
struct TYPE_2__ {unsigned int count; unsigned int* list; } ;
struct sigmadsp {TYPE_1__ rate_constraints; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int sigmadsp_rate_to_index(struct sigmadsp *sigmadsp, unsigned int rate)
{
	unsigned int i;

	for (i = 0; i < sigmadsp->rate_constraints.count; i++) {
		if (sigmadsp->rate_constraints.list[i] == rate)
			return i;
	}

	return -EINVAL;
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
          unsigned int rate = 100;
          int _len_sigmadsp0 = 1;
          struct sigmadsp * sigmadsp = (struct sigmadsp *) malloc(_len_sigmadsp0*sizeof(struct sigmadsp));
          for(int _i0 = 0; _i0 < _len_sigmadsp0; _i0++) {
            sigmadsp[_i0].rate_constraints.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sigmadsp__i0__rate_constraints_list0 = 1;
          sigmadsp[_i0].rate_constraints.list = (unsigned int *) malloc(_len_sigmadsp__i0__rate_constraints_list0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_sigmadsp__i0__rate_constraints_list0; _j0++) {
            sigmadsp[_i0].rate_constraints.list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sigmadsp_rate_to_index(sigmadsp,rate);
          printf("%d\n", benchRet); 
          free(sigmadsp);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int rate = 255;
          int _len_sigmadsp0 = 65025;
          struct sigmadsp * sigmadsp = (struct sigmadsp *) malloc(_len_sigmadsp0*sizeof(struct sigmadsp));
          for(int _i0 = 0; _i0 < _len_sigmadsp0; _i0++) {
            sigmadsp[_i0].rate_constraints.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sigmadsp__i0__rate_constraints_list0 = 1;
          sigmadsp[_i0].rate_constraints.list = (unsigned int *) malloc(_len_sigmadsp__i0__rate_constraints_list0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_sigmadsp__i0__rate_constraints_list0; _j0++) {
            sigmadsp[_i0].rate_constraints.list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sigmadsp_rate_to_index(sigmadsp,rate);
          printf("%d\n", benchRet); 
          free(sigmadsp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int rate = 10;
          int _len_sigmadsp0 = 100;
          struct sigmadsp * sigmadsp = (struct sigmadsp *) malloc(_len_sigmadsp0*sizeof(struct sigmadsp));
          for(int _i0 = 0; _i0 < _len_sigmadsp0; _i0++) {
            sigmadsp[_i0].rate_constraints.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sigmadsp__i0__rate_constraints_list0 = 1;
          sigmadsp[_i0].rate_constraints.list = (unsigned int *) malloc(_len_sigmadsp__i0__rate_constraints_list0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_sigmadsp__i0__rate_constraints_list0; _j0++) {
            sigmadsp[_i0].rate_constraints.list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sigmadsp_rate_to_index(sigmadsp,rate);
          printf("%d\n", benchRet); 
          free(sigmadsp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
