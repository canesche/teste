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
struct maven_data {scalar_t__ primary_head; } ;
struct TYPE_2__ {int control; } ;

/* Variables and functions */
 TYPE_1__* maven_controls ; 

__attribute__((used)) static int* get_ctrl_ptr(struct maven_data* md, int idx) {
	return (int*)((char*)(md->primary_head) + maven_controls[idx].control);
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
          int idx = 100;
          int _len_md0 = 1;
          struct maven_data * md = (struct maven_data *) malloc(_len_md0*sizeof(struct maven_data));
          for(int _i0 = 0; _i0 < _len_md0; _i0++) {
            md[_i0].primary_head = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = get_ctrl_ptr(md,idx);
          printf("%d\n", (*benchRet)); 
          free(md);
        
        break;
    }
    // big-arr
    case 1:
    {
          int idx = 255;
          int _len_md0 = 65025;
          struct maven_data * md = (struct maven_data *) malloc(_len_md0*sizeof(struct maven_data));
          for(int _i0 = 0; _i0 < _len_md0; _i0++) {
            md[_i0].primary_head = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = get_ctrl_ptr(md,idx);
          printf("%d\n", (*benchRet)); 
          free(md);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int idx = 10;
          int _len_md0 = 100;
          struct maven_data * md = (struct maven_data *) malloc(_len_md0*sizeof(struct maven_data));
          for(int _i0 = 0; _i0 < _len_md0; _i0++) {
            md[_i0].primary_head = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = get_ctrl_ptr(md,idx);
          printf("%d\n", (*benchRet)); 
          free(md);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
