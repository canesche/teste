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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct sys_reg_desc {int dummy; } ;
struct TYPE_4__ {size_t num; struct sys_reg_desc const* table; } ;
struct TYPE_3__ {size_t num; struct sys_reg_desc const* table; } ;
struct kvm_sys_reg_target_table {TYPE_2__ table32; TYPE_1__ table64; } ;

/* Variables and functions */
 struct kvm_sys_reg_target_table** target_tables ; 

__attribute__((used)) static const struct sys_reg_desc *get_target_table(unsigned target,
						   bool mode_is_64,
						   size_t *num)
{
	struct kvm_sys_reg_target_table *table;

	table = target_tables[target];
	if (mode_is_64) {
		*num = table->table64.num;
		return table->table64.table;
	} else {
		*num = table->table32.num;
		return table->table32.table;
	}
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
          int mode_is_64 = 100;
          int _len_num0 = 1;
          unsigned long * num = (unsigned long *) malloc(_len_num0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_num0; _i0++) {
            num[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct sys_reg_desc * benchRet = get_target_table(target,mode_is_64,num);
          free(num);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int target = 255;
          int mode_is_64 = 255;
          int _len_num0 = 65025;
          unsigned long * num = (unsigned long *) malloc(_len_num0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_num0; _i0++) {
            num[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct sys_reg_desc * benchRet = get_target_table(target,mode_is_64,num);
          free(num);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int target = 10;
          int mode_is_64 = 10;
          int _len_num0 = 100;
          unsigned long * num = (unsigned long *) malloc(_len_num0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_num0; _i0++) {
            num[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const struct sys_reg_desc * benchRet = get_target_table(target,mode_is_64,num);
          free(num);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
