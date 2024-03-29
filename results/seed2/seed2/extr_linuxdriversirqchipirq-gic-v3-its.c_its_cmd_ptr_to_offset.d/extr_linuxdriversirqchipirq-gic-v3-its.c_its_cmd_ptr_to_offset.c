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
typedef  int u64 ;
struct its_node {struct its_cmd_block* cmd_base; } ;
struct its_cmd_block {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static u64 its_cmd_ptr_to_offset(struct its_node *its,
				 struct its_cmd_block *ptr)
{
	return (ptr - its->cmd_base) * sizeof(*ptr);
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
          int _len_its0 = 1;
          struct its_node * its = (struct its_node *) malloc(_len_its0*sizeof(struct its_node));
          for(int _i0 = 0; _i0 < _len_its0; _i0++) {
              int _len_its__i0__cmd_base0 = 1;
          its[_i0].cmd_base = (struct its_cmd_block *) malloc(_len_its__i0__cmd_base0*sizeof(struct its_cmd_block));
          for(int _j0 = 0; _j0 < _len_its__i0__cmd_base0; _j0++) {
            its[_i0].cmd_base->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ptr0 = 1;
          struct its_cmd_block * ptr = (struct its_cmd_block *) malloc(_len_ptr0*sizeof(struct its_cmd_block));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = its_cmd_ptr_to_offset(its,ptr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_its0; _aux++) {
          free(its[_aux].cmd_base);
          }
          free(its);
          free(ptr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_its0 = 65025;
          struct its_node * its = (struct its_node *) malloc(_len_its0*sizeof(struct its_node));
          for(int _i0 = 0; _i0 < _len_its0; _i0++) {
              int _len_its__i0__cmd_base0 = 1;
          its[_i0].cmd_base = (struct its_cmd_block *) malloc(_len_its__i0__cmd_base0*sizeof(struct its_cmd_block));
          for(int _j0 = 0; _j0 < _len_its__i0__cmd_base0; _j0++) {
            its[_i0].cmd_base->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ptr0 = 65025;
          struct its_cmd_block * ptr = (struct its_cmd_block *) malloc(_len_ptr0*sizeof(struct its_cmd_block));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = its_cmd_ptr_to_offset(its,ptr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_its0; _aux++) {
          free(its[_aux].cmd_base);
          }
          free(its);
          free(ptr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_its0 = 100;
          struct its_node * its = (struct its_node *) malloc(_len_its0*sizeof(struct its_node));
          for(int _i0 = 0; _i0 < _len_its0; _i0++) {
              int _len_its__i0__cmd_base0 = 1;
          its[_i0].cmd_base = (struct its_cmd_block *) malloc(_len_its__i0__cmd_base0*sizeof(struct its_cmd_block));
          for(int _j0 = 0; _j0 < _len_its__i0__cmd_base0; _j0++) {
            its[_i0].cmd_base->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ptr0 = 100;
          struct its_cmd_block * ptr = (struct its_cmd_block *) malloc(_len_ptr0*sizeof(struct its_cmd_block));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = its_cmd_ptr_to_offset(its,ptr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_its0; _aux++) {
          free(its[_aux].cmd_base);
          }
          free(its);
          free(ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
