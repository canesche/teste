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
struct TYPE_2__ {char* buf; } ;
struct mlxsw_pci_queue {TYPE_1__ mem_item; } ;

/* Variables and functions */

__attribute__((used)) static char *__mlxsw_pci_queue_elem_get(struct mlxsw_pci_queue *q,
					size_t elem_size, int elem_index)
{
	return q->mem_item.buf + (elem_size * elem_index);
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
          unsigned long elem_size = 100;
          int elem_index = 100;
          int _len_q0 = 1;
          struct mlxsw_pci_queue * q = (struct mlxsw_pci_queue *) malloc(_len_q0*sizeof(struct mlxsw_pci_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__mem_item_buf0 = 1;
          q[_i0].mem_item.buf = (char *) malloc(_len_q__i0__mem_item_buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_q__i0__mem_item_buf0; _j0++) {
            q[_i0].mem_item.buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          char * benchRet = __mlxsw_pci_queue_elem_get(q,elem_size,elem_index);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(q);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long elem_size = 255;
          int elem_index = 255;
          int _len_q0 = 65025;
          struct mlxsw_pci_queue * q = (struct mlxsw_pci_queue *) malloc(_len_q0*sizeof(struct mlxsw_pci_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__mem_item_buf0 = 1;
          q[_i0].mem_item.buf = (char *) malloc(_len_q__i0__mem_item_buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_q__i0__mem_item_buf0; _j0++) {
            q[_i0].mem_item.buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          char * benchRet = __mlxsw_pci_queue_elem_get(q,elem_size,elem_index);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(q);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long elem_size = 10;
          int elem_index = 10;
          int _len_q0 = 100;
          struct mlxsw_pci_queue * q = (struct mlxsw_pci_queue *) malloc(_len_q0*sizeof(struct mlxsw_pci_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__mem_item_buf0 = 1;
          q[_i0].mem_item.buf = (char *) malloc(_len_q__i0__mem_item_buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_q__i0__mem_item_buf0; _j0++) {
            q[_i0].mem_item.buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          char * benchRet = __mlxsw_pci_queue_elem_get(q,elem_size,elem_index);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
