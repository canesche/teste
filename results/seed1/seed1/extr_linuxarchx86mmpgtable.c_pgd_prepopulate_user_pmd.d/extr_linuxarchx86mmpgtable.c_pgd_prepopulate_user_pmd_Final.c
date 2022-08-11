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
struct mm_struct {int dummy; } ;
typedef  int /*<<< orphan*/  pmd_t ;
typedef  int /*<<< orphan*/  pgd_t ;

/* Variables and functions */

__attribute__((used)) static void pgd_prepopulate_user_pmd(struct mm_struct *mm,
				     pgd_t *k_pgd, pmd_t *pmds[])
{
}


// ------------------------------------------------------------------------- //




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
          int _len_mm0 = 1;
          struct mm_struct * mm = (struct mm_struct *) malloc(_len_mm0*sizeof(struct mm_struct));
          for(int _i0 = 0; _i0 < _len_mm0; _i0++) {
            mm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k_pgd0 = 1;
          int * k_pgd = (int *) malloc(_len_k_pgd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_k_pgd0; _i0++) {
            k_pgd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pmds0 = 1;
          int ** pmds = (int **) malloc(_len_pmds0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pmds0; _i0++) {
            int _len_pmds1 = 1;
            pmds[_i0] = (int *) malloc(_len_pmds1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pmds1; _i1++) {
              pmds[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          pgd_prepopulate_user_pmd(mm,k_pgd,pmds);
          free(mm);
          free(k_pgd);
          for(int i1 = 0; i1 < _len_pmds0; i1++) {
            int _len_pmds1 = 1;
              free(pmds[i1]);
          }
          free(pmds);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mm0 = 65025;
          struct mm_struct * mm = (struct mm_struct *) malloc(_len_mm0*sizeof(struct mm_struct));
          for(int _i0 = 0; _i0 < _len_mm0; _i0++) {
            mm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k_pgd0 = 65025;
          int * k_pgd = (int *) malloc(_len_k_pgd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_k_pgd0; _i0++) {
            k_pgd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pmds0 = 65025;
          int ** pmds = (int **) malloc(_len_pmds0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pmds0; _i0++) {
            int _len_pmds1 = 1;
            pmds[_i0] = (int *) malloc(_len_pmds1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pmds1; _i1++) {
              pmds[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          pgd_prepopulate_user_pmd(mm,k_pgd,pmds);
          free(mm);
          free(k_pgd);
          for(int i1 = 0; i1 < _len_pmds0; i1++) {
            int _len_pmds1 = 1;
              free(pmds[i1]);
          }
          free(pmds);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mm0 = 100;
          struct mm_struct * mm = (struct mm_struct *) malloc(_len_mm0*sizeof(struct mm_struct));
          for(int _i0 = 0; _i0 < _len_mm0; _i0++) {
            mm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k_pgd0 = 100;
          int * k_pgd = (int *) malloc(_len_k_pgd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_k_pgd0; _i0++) {
            k_pgd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pmds0 = 100;
          int ** pmds = (int **) malloc(_len_pmds0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_pmds0; _i0++) {
            int _len_pmds1 = 1;
            pmds[_i0] = (int *) malloc(_len_pmds1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_pmds1; _i1++) {
              pmds[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          pgd_prepopulate_user_pmd(mm,k_pgd,pmds);
          free(mm);
          free(k_pgd);
          for(int i1 = 0; i1 < _len_pmds0; i1++) {
            int _len_pmds1 = 1;
              free(pmds[i1]);
          }
          free(pmds);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
