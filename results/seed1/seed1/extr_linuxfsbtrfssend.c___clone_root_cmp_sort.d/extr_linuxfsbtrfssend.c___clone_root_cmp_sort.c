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
struct clone_root {TYPE_1__* root; } ;
struct TYPE_2__ {scalar_t__ objectid; } ;

/* Variables and functions */

__attribute__((used)) static int __clone_root_cmp_sort(const void *e1, const void *e2)
{
	struct clone_root *cr1 = (struct clone_root *)e1;
	struct clone_root *cr2 = (struct clone_root *)e2;

	if (cr1->root->objectid < cr2->root->objectid)
		return -1;
	if (cr1->root->objectid > cr2->root->objectid)
		return 1;
	return 0;
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
          int _len_e10 = 1;
          const void * e1 = (const void *) malloc(_len_e10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_e10; _i0++) {
            e1[_i0] = 0;
          }
          int _len_e20 = 1;
          const void * e2 = (const void *) malloc(_len_e20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_e20; _i0++) {
            e2[_i0] = 0;
          }
          int benchRet = __clone_root_cmp_sort(e1,e2);
          printf("%d\n", benchRet); 
          free(e1);
          free(e2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_e10 = 65025;
          const void * e1 = (const void *) malloc(_len_e10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_e10; _i0++) {
            e1[_i0] = 0;
          }
          int _len_e20 = 65025;
          const void * e2 = (const void *) malloc(_len_e20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_e20; _i0++) {
            e2[_i0] = 0;
          }
          int benchRet = __clone_root_cmp_sort(e1,e2);
          printf("%d\n", benchRet); 
          free(e1);
          free(e2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_e10 = 100;
          const void * e1 = (const void *) malloc(_len_e10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_e10; _i0++) {
            e1[_i0] = 0;
          }
          int _len_e20 = 100;
          const void * e2 = (const void *) malloc(_len_e20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_e20; _i0++) {
            e2[_i0] = 0;
          }
          int benchRet = __clone_root_cmp_sort(e1,e2);
          printf("%d\n", benchRet); 
          free(e1);
          free(e2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
