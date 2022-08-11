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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int type_mask; int /*<<< orphan*/ * ce; } ;
struct TYPE_5__ {TYPE_2__ type; } ;
struct TYPE_7__ {TYPE_1__ constraint; scalar_t__ has_range_constraint; } ;
typedef  TYPE_3__ zend_ssa_phi ;
typedef  int uint32_t ;

/* Variables and functions */
 int MAY_BE_NULL ; 
 int MAY_BE_RC1 ; 
 int MAY_BE_RCN ; 
 int MAY_BE_REF ; 
 int MAY_BE_UNDEF ; 

__attribute__((used)) static void pi_type_mask(zend_ssa_phi *phi, uint32_t type_mask) {
	phi->has_range_constraint = 0;
	phi->constraint.type.ce = NULL;
	phi->constraint.type.type_mask = MAY_BE_REF|MAY_BE_RC1|MAY_BE_RCN;
	phi->constraint.type.type_mask |= type_mask;
	if (type_mask & MAY_BE_NULL) {
		phi->constraint.type.type_mask |= MAY_BE_UNDEF;
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
          int type_mask = 100;
          int _len_phi0 = 1;
          struct TYPE_7__ * phi = (struct TYPE_7__ *) malloc(_len_phi0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_phi0; _i0++) {
            phi[_i0].constraint.type.type_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phi__i0__constraint_type_ce0 = 1;
          phi[_i0].constraint.type.ce = (int *) malloc(_len_phi__i0__constraint_type_ce0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_phi__i0__constraint_type_ce0; _j0++) {
            phi[_i0].constraint.type.ce[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phi[_i0].has_range_constraint = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pi_type_mask(phi,type_mask);
          free(phi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int type_mask = 255;
          int _len_phi0 = 65025;
          struct TYPE_7__ * phi = (struct TYPE_7__ *) malloc(_len_phi0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_phi0; _i0++) {
            phi[_i0].constraint.type.type_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phi__i0__constraint_type_ce0 = 1;
          phi[_i0].constraint.type.ce = (int *) malloc(_len_phi__i0__constraint_type_ce0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_phi__i0__constraint_type_ce0; _j0++) {
            phi[_i0].constraint.type.ce[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phi[_i0].has_range_constraint = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pi_type_mask(phi,type_mask);
          free(phi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type_mask = 10;
          int _len_phi0 = 100;
          struct TYPE_7__ * phi = (struct TYPE_7__ *) malloc(_len_phi0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_phi0; _i0++) {
            phi[_i0].constraint.type.type_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phi__i0__constraint_type_ce0 = 1;
          phi[_i0].constraint.type.ce = (int *) malloc(_len_phi__i0__constraint_type_ce0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_phi__i0__constraint_type_ce0; _j0++) {
            phi[_i0].constraint.type.ce[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phi[_i0].has_range_constraint = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pi_type_mask(phi,type_mask);
          free(phi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
