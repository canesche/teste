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
struct TYPE_2__ {int nvecs; int /*<<< orphan*/ * handler; } ;
struct bfa_s {TYPE_1__ msix; } ;

/* Variables and functions */
 int BFI_MSIX_CPE_QMAX_CB ; 
 int BFI_MSIX_CPE_QMIN_CB ; 
 int BFI_MSIX_RME_QMAX_CB ; 
 int BFI_MSIX_RME_QMIN_CB ; 
 int /*<<< orphan*/  bfa_msix_all ; 
 int /*<<< orphan*/  bfa_msix_reqq ; 
 int /*<<< orphan*/  bfa_msix_rspq ; 

void
bfa_hwcb_msix_queue_install(struct bfa_s *bfa)
{
	int i;

	if (bfa->msix.nvecs == 0)
		return;

	if (bfa->msix.nvecs == 1) {
		for (i = BFI_MSIX_CPE_QMIN_CB; i <= BFI_MSIX_RME_QMAX_CB; i++)
			bfa->msix.handler[i] = bfa_msix_all;
		return;
	}

	for (i = BFI_MSIX_CPE_QMIN_CB; i <= BFI_MSIX_CPE_QMAX_CB; i++)
		bfa->msix.handler[i] = bfa_msix_reqq;

	for (i = BFI_MSIX_RME_QMIN_CB; i <= BFI_MSIX_RME_QMAX_CB; i++)
		bfa->msix.handler[i] = bfa_msix_rspq;
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
          int _len_bfa0 = 1;
          struct bfa_s * bfa = (struct bfa_s *) malloc(_len_bfa0*sizeof(struct bfa_s));
          for(int _i0 = 0; _i0 < _len_bfa0; _i0++) {
            bfa[_i0].msix.nvecs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bfa__i0__msix_handler0 = 1;
          bfa[_i0].msix.handler = (int *) malloc(_len_bfa__i0__msix_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bfa__i0__msix_handler0; _j0++) {
            bfa[_i0].msix.handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bfa_hwcb_msix_queue_install(bfa);
          free(bfa);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bfa0 = 65025;
          struct bfa_s * bfa = (struct bfa_s *) malloc(_len_bfa0*sizeof(struct bfa_s));
          for(int _i0 = 0; _i0 < _len_bfa0; _i0++) {
            bfa[_i0].msix.nvecs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bfa__i0__msix_handler0 = 1;
          bfa[_i0].msix.handler = (int *) malloc(_len_bfa__i0__msix_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bfa__i0__msix_handler0; _j0++) {
            bfa[_i0].msix.handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bfa_hwcb_msix_queue_install(bfa);
          free(bfa);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bfa0 = 100;
          struct bfa_s * bfa = (struct bfa_s *) malloc(_len_bfa0*sizeof(struct bfa_s));
          for(int _i0 = 0; _i0 < _len_bfa0; _i0++) {
            bfa[_i0].msix.nvecs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bfa__i0__msix_handler0 = 1;
          bfa[_i0].msix.handler = (int *) malloc(_len_bfa__i0__msix_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bfa__i0__msix_handler0; _j0++) {
            bfa[_i0].msix.handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bfa_hwcb_msix_queue_install(bfa);
          free(bfa);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
