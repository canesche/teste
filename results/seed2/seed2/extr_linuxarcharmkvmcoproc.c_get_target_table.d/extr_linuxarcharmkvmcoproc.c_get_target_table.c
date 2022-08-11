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
struct kvm_coproc_target_table {size_t num; struct coproc_reg const* table; } ;
struct coproc_reg {int dummy; } ;

/* Variables and functions */
 struct kvm_coproc_target_table** target_tables ; 

__attribute__((used)) static const struct coproc_reg *get_target_table(unsigned target, size_t *num)
{
	struct kvm_coproc_target_table *table;

	table = target_tables[target];
	*num = table->num;
	return table->table;
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
          unsigned int target = 100;
          int _len_num0 = 1;
          unsigned long * num = (unsigned long *) malloc(_len_num0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_num0; _i0++) {
            num[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct coproc_reg * benchRet = get_target_table(target,num);
          free(num);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int target = 255;
          int _len_num0 = 65025;
          unsigned long * num = (unsigned long *) malloc(_len_num0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_num0; _i0++) {
            num[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct coproc_reg * benchRet = get_target_table(target,num);
          free(num);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int target = 10;
          int _len_num0 = 100;
          unsigned long * num = (unsigned long *) malloc(_len_num0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_num0; _i0++) {
            num[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct coproc_reg * benchRet = get_target_table(target,num);
          free(num);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
