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
struct be_eq_obj {size_t msix_idx; } ;
struct be_adapter {TYPE_1__* msix_entries; } ;
struct TYPE_2__ {int vector; } ;

/* Variables and functions */

__attribute__((used)) static inline int be_msix_vec_get(struct be_adapter *adapter,
				  struct be_eq_obj *eqo)
{
	return adapter->msix_entries[eqo->msix_idx].vector;
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
          int _len_adapter0 = 1;
          struct be_adapter * adapter = (struct be_adapter *) malloc(_len_adapter0*sizeof(struct be_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__msix_entries0 = 1;
          adapter[_i0].msix_entries = (struct TYPE_2__ *) malloc(_len_adapter__i0__msix_entries0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__msix_entries0; _j0++) {
            adapter[_i0].msix_entries->vector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_eqo0 = 1;
          struct be_eq_obj * eqo = (struct be_eq_obj *) malloc(_len_eqo0*sizeof(struct be_eq_obj));
          for(int _i0 = 0; _i0 < _len_eqo0; _i0++) {
            eqo[_i0].msix_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = be_msix_vec_get(adapter,eqo);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].msix_entries);
          }
          free(adapter);
          free(eqo);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_adapter0 = 65025;
          struct be_adapter * adapter = (struct be_adapter *) malloc(_len_adapter0*sizeof(struct be_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__msix_entries0 = 1;
          adapter[_i0].msix_entries = (struct TYPE_2__ *) malloc(_len_adapter__i0__msix_entries0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__msix_entries0; _j0++) {
            adapter[_i0].msix_entries->vector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_eqo0 = 65025;
          struct be_eq_obj * eqo = (struct be_eq_obj *) malloc(_len_eqo0*sizeof(struct be_eq_obj));
          for(int _i0 = 0; _i0 < _len_eqo0; _i0++) {
            eqo[_i0].msix_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = be_msix_vec_get(adapter,eqo);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].msix_entries);
          }
          free(adapter);
          free(eqo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_adapter0 = 100;
          struct be_adapter * adapter = (struct be_adapter *) malloc(_len_adapter0*sizeof(struct be_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__msix_entries0 = 1;
          adapter[_i0].msix_entries = (struct TYPE_2__ *) malloc(_len_adapter__i0__msix_entries0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__msix_entries0; _j0++) {
            adapter[_i0].msix_entries->vector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_eqo0 = 100;
          struct be_eq_obj * eqo = (struct be_eq_obj *) malloc(_len_eqo0*sizeof(struct be_eq_obj));
          for(int _i0 = 0; _i0 < _len_eqo0; _i0++) {
            eqo[_i0].msix_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = be_msix_vec_get(adapter,eqo);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].msix_entries);
          }
          free(adapter);
          free(eqo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
