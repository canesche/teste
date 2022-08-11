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
typedef  int u32 ;
struct TYPE_4__ {TYPE_1__* vector_list; } ;
struct lan743x_adapter {TYPE_2__ intr; } ;
struct TYPE_3__ {int int_mask; int flags; } ;

/* Variables and functions */
 int LAN743X_MAX_VECTOR_COUNT ; 

__attribute__((used)) static u32 lan743x_intr_get_vector_flags(struct lan743x_adapter *adapter,
					 u32 int_mask)
{
	int index;

	for (index = 0; index < LAN743X_MAX_VECTOR_COUNT; index++) {
		if (adapter->intr.vector_list[index].int_mask & int_mask)
			return adapter->intr.vector_list[index].flags;
	}
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
          int int_mask = 100;
          int _len_adapter0 = 1;
          struct lan743x_adapter * adapter = (struct lan743x_adapter *) malloc(_len_adapter0*sizeof(struct lan743x_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__intr_vector_list0 = 1;
          adapter[_i0].intr.vector_list = (struct TYPE_3__ *) malloc(_len_adapter__i0__intr_vector_list0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__intr_vector_list0; _j0++) {
            adapter[_i0].intr.vector_list->int_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].intr.vector_list->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = lan743x_intr_get_vector_flags(adapter,int_mask);
          printf("%d\n", benchRet); 
          free(adapter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int int_mask = 255;
          int _len_adapter0 = 65025;
          struct lan743x_adapter * adapter = (struct lan743x_adapter *) malloc(_len_adapter0*sizeof(struct lan743x_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__intr_vector_list0 = 1;
          adapter[_i0].intr.vector_list = (struct TYPE_3__ *) malloc(_len_adapter__i0__intr_vector_list0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__intr_vector_list0; _j0++) {
            adapter[_i0].intr.vector_list->int_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].intr.vector_list->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = lan743x_intr_get_vector_flags(adapter,int_mask);
          printf("%d\n", benchRet); 
          free(adapter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int int_mask = 10;
          int _len_adapter0 = 100;
          struct lan743x_adapter * adapter = (struct lan743x_adapter *) malloc(_len_adapter0*sizeof(struct lan743x_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__intr_vector_list0 = 1;
          adapter[_i0].intr.vector_list = (struct TYPE_3__ *) malloc(_len_adapter__i0__intr_vector_list0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__intr_vector_list0; _j0++) {
            adapter[_i0].intr.vector_list->int_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].intr.vector_list->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = lan743x_intr_get_vector_flags(adapter,int_mask);
          printf("%d\n", benchRet); 
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
