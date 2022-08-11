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
struct ocfs2_per_slot_free_list {int /*<<< orphan*/  f_first; } ;
struct ocfs2_extent_tree {TYPE_1__* et_dealloc; } ;
struct TYPE_2__ {struct ocfs2_per_slot_free_list* c_first_suballocator; } ;

/* Variables and functions */

__attribute__((used)) static int ocfs2_is_dealloc_empty(struct ocfs2_extent_tree *et)
{
	struct ocfs2_per_slot_free_list *fl = NULL;

	if (!et->et_dealloc)
		return 1;

	fl = et->et_dealloc->c_first_suballocator;
	if (!fl)
		return 1;

	if (!fl->f_first)
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
          int _len_et0 = 1;
          struct ocfs2_extent_tree * et = (struct ocfs2_extent_tree *) malloc(_len_et0*sizeof(struct ocfs2_extent_tree));
          for(int _i0 = 0; _i0 < _len_et0; _i0++) {
              int _len_et__i0__et_dealloc0 = 1;
          et[_i0].et_dealloc = (struct TYPE_2__ *) malloc(_len_et__i0__et_dealloc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_et__i0__et_dealloc0; _j0++) {
              int _len_et__i0__et_dealloc_c_first_suballocator0 = 1;
          et[_i0].et_dealloc->c_first_suballocator = (struct ocfs2_per_slot_free_list *) malloc(_len_et__i0__et_dealloc_c_first_suballocator0*sizeof(struct ocfs2_per_slot_free_list));
          for(int _j0 = 0; _j0 < _len_et__i0__et_dealloc_c_first_suballocator0; _j0++) {
            et[_i0].et_dealloc->c_first_suballocator->f_first = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ocfs2_is_dealloc_empty(et);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_et0; _aux++) {
          free(et[_aux].et_dealloc);
          }
          free(et);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_et0 = 65025;
          struct ocfs2_extent_tree * et = (struct ocfs2_extent_tree *) malloc(_len_et0*sizeof(struct ocfs2_extent_tree));
          for(int _i0 = 0; _i0 < _len_et0; _i0++) {
              int _len_et__i0__et_dealloc0 = 1;
          et[_i0].et_dealloc = (struct TYPE_2__ *) malloc(_len_et__i0__et_dealloc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_et__i0__et_dealloc0; _j0++) {
              int _len_et__i0__et_dealloc_c_first_suballocator0 = 1;
          et[_i0].et_dealloc->c_first_suballocator = (struct ocfs2_per_slot_free_list *) malloc(_len_et__i0__et_dealloc_c_first_suballocator0*sizeof(struct ocfs2_per_slot_free_list));
          for(int _j0 = 0; _j0 < _len_et__i0__et_dealloc_c_first_suballocator0; _j0++) {
            et[_i0].et_dealloc->c_first_suballocator->f_first = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ocfs2_is_dealloc_empty(et);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_et0; _aux++) {
          free(et[_aux].et_dealloc);
          }
          free(et);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_et0 = 100;
          struct ocfs2_extent_tree * et = (struct ocfs2_extent_tree *) malloc(_len_et0*sizeof(struct ocfs2_extent_tree));
          for(int _i0 = 0; _i0 < _len_et0; _i0++) {
              int _len_et__i0__et_dealloc0 = 1;
          et[_i0].et_dealloc = (struct TYPE_2__ *) malloc(_len_et__i0__et_dealloc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_et__i0__et_dealloc0; _j0++) {
              int _len_et__i0__et_dealloc_c_first_suballocator0 = 1;
          et[_i0].et_dealloc->c_first_suballocator = (struct ocfs2_per_slot_free_list *) malloc(_len_et__i0__et_dealloc_c_first_suballocator0*sizeof(struct ocfs2_per_slot_free_list));
          for(int _j0 = 0; _j0 < _len_et__i0__et_dealloc_c_first_suballocator0; _j0++) {
            et[_i0].et_dealloc->c_first_suballocator->f_first = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = ocfs2_is_dealloc_empty(et);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_et0; _aux++) {
          free(et[_aux].et_dealloc);
          }
          free(et);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
