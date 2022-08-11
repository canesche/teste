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
typedef  int /*<<< orphan*/  u32 ;
struct uasm_label {scalar_t__ lab; int /*<<< orphan*/ * addr; } ;

/* Variables and functions */
 scalar_t__ UASM_LABEL_INVALID ; 

void uasm_move_labels(struct uasm_label *lab, u32 *first, u32 *end,
			       long off)
{
	for (; lab->lab != UASM_LABEL_INVALID; lab++)
		if (lab->addr >= first && lab->addr < end)
			lab->addr += off;
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
          long off = 100;
          int _len_lab0 = 1;
          struct uasm_label * lab = (struct uasm_label *) malloc(_len_lab0*sizeof(struct uasm_label));
          for(int _i0 = 0; _i0 < _len_lab0; _i0++) {
            lab[_i0].lab = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lab__i0__addr0 = 1;
          lab[_i0].addr = (int *) malloc(_len_lab__i0__addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_lab__i0__addr0; _j0++) {
            lab[_i0].addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_first0 = 1;
          int * first = (int *) malloc(_len_first0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_first0; _i0++) {
            first[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 1;
          int * end = (int *) malloc(_len_end0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          uasm_move_labels(lab,first,end,off);
          for(int _aux = 0; _aux < _len_lab0; _aux++) {
          free(lab[_aux].addr);
          }
          free(lab);
          free(first);
          free(end);
        
        break;
    }
    // big-arr
    case 1:
    {
          long off = 255;
          int _len_lab0 = 65025;
          struct uasm_label * lab = (struct uasm_label *) malloc(_len_lab0*sizeof(struct uasm_label));
          for(int _i0 = 0; _i0 < _len_lab0; _i0++) {
            lab[_i0].lab = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lab__i0__addr0 = 1;
          lab[_i0].addr = (int *) malloc(_len_lab__i0__addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_lab__i0__addr0; _j0++) {
            lab[_i0].addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_first0 = 65025;
          int * first = (int *) malloc(_len_first0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_first0; _i0++) {
            first[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 65025;
          int * end = (int *) malloc(_len_end0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          uasm_move_labels(lab,first,end,off);
          for(int _aux = 0; _aux < _len_lab0; _aux++) {
          free(lab[_aux].addr);
          }
          free(lab);
          free(first);
          free(end);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long off = 10;
          int _len_lab0 = 100;
          struct uasm_label * lab = (struct uasm_label *) malloc(_len_lab0*sizeof(struct uasm_label));
          for(int _i0 = 0; _i0 < _len_lab0; _i0++) {
            lab[_i0].lab = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_lab__i0__addr0 = 1;
          lab[_i0].addr = (int *) malloc(_len_lab__i0__addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_lab__i0__addr0; _j0++) {
            lab[_i0].addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_first0 = 100;
          int * first = (int *) malloc(_len_first0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_first0; _i0++) {
            first[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 100;
          int * end = (int *) malloc(_len_end0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          uasm_move_labels(lab,first,end,off);
          for(int _aux = 0; _aux < _len_lab0; _aux++) {
          free(lab[_aux].addr);
          }
          free(lab);
          free(first);
          free(end);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
