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
struct TYPE_2__ {int /*<<< orphan*/  pid; } ;
struct mm_id {TYPE_1__ u; } ;

/* Variables and functions */
 int /*<<< orphan*/ * userspace_pid ; 

void __switch_mm(struct mm_id *mm_idp)
{
	userspace_pid[0] = mm_idp->u.pid;
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
          int _len_mm_idp0 = 1;
          struct mm_id * mm_idp = (struct mm_id *) malloc(_len_mm_idp0*sizeof(struct mm_id));
          for(int _i0 = 0; _i0 < _len_mm_idp0; _i0++) {
            mm_idp[_i0].u.pid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __switch_mm(mm_idp);
          free(mm_idp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mm_idp0 = 65025;
          struct mm_id * mm_idp = (struct mm_id *) malloc(_len_mm_idp0*sizeof(struct mm_id));
          for(int _i0 = 0; _i0 < _len_mm_idp0; _i0++) {
            mm_idp[_i0].u.pid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __switch_mm(mm_idp);
          free(mm_idp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mm_idp0 = 100;
          struct mm_id * mm_idp = (struct mm_id *) malloc(_len_mm_idp0*sizeof(struct mm_id));
          for(int _i0 = 0; _i0 < _len_mm_idp0; _i0++) {
            mm_idp[_i0].u.pid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __switch_mm(mm_idp);
          free(mm_idp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
