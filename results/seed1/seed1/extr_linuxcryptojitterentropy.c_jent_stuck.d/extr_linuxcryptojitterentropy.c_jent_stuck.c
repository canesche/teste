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
struct rand_data {void* last_delta; int stuck; void* last_delta2; } ;
typedef  void* __u64 ;
typedef  void* __s64 ;

/* Variables and functions */

__attribute__((used)) static void jent_stuck(struct rand_data *ec, __u64 current_delta)
{
	__s64 delta2 = ec->last_delta - current_delta;
	__s64 delta3 = delta2 - ec->last_delta2;

	ec->last_delta = current_delta;
	ec->last_delta2 = delta2;

	if (!current_delta || !delta2 || !delta3)
		ec->stuck = 1;
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
          int _len_ec0 = 1;
          struct rand_data * ec = (struct rand_data *) malloc(_len_ec0*sizeof(struct rand_data));
          for(int _i0 = 0; _i0 < _len_ec0; _i0++) {
            ec[_i0].stuck = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * current_delta;
          jent_stuck(ec,current_delta);
          free(ec);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ec0 = 65025;
          struct rand_data * ec = (struct rand_data *) malloc(_len_ec0*sizeof(struct rand_data));
          for(int _i0 = 0; _i0 < _len_ec0; _i0++) {
            ec[_i0].stuck = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * current_delta;
          jent_stuck(ec,current_delta);
          free(ec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ec0 = 100;
          struct rand_data * ec = (struct rand_data *) malloc(_len_ec0*sizeof(struct rand_data));
          for(int _i0 = 0; _i0 < _len_ec0; _i0++) {
            ec[_i0].stuck = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * current_delta;
          jent_stuck(ec,current_delta);
          free(ec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
