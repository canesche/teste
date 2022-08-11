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
struct mlx4_slave_event_eq {int cons; struct mlx4_eqe* event_eqe; } ;
struct mlx4_eqe {int owner; } ;

/* Variables and functions */
 int SLAVE_EVENT_EQ_SIZE ; 

__attribute__((used)) static struct mlx4_eqe *next_slave_event_eqe(struct mlx4_slave_event_eq *slave_eq)
{
	struct mlx4_eqe *eqe =
		&slave_eq->event_eqe[slave_eq->cons & (SLAVE_EVENT_EQ_SIZE - 1)];
	return (!!(eqe->owner & 0x80) ^
		!!(slave_eq->cons & SLAVE_EVENT_EQ_SIZE)) ?
		eqe : NULL;
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
          int _len_slave_eq0 = 1;
          struct mlx4_slave_event_eq * slave_eq = (struct mlx4_slave_event_eq *) malloc(_len_slave_eq0*sizeof(struct mlx4_slave_event_eq));
          for(int _i0 = 0; _i0 < _len_slave_eq0; _i0++) {
            slave_eq[_i0].cons = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_slave_eq__i0__event_eqe0 = 1;
          slave_eq[_i0].event_eqe = (struct mlx4_eqe *) malloc(_len_slave_eq__i0__event_eqe0*sizeof(struct mlx4_eqe));
          for(int _j0 = 0; _j0 < _len_slave_eq__i0__event_eqe0; _j0++) {
            slave_eq[_i0].event_eqe->owner = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mlx4_eqe * benchRet = next_slave_event_eqe(slave_eq);
          printf("%d\n", (*benchRet).owner);
          for(int _aux = 0; _aux < _len_slave_eq0; _aux++) {
          free(slave_eq[_aux].event_eqe);
          }
          free(slave_eq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_slave_eq0 = 65025;
          struct mlx4_slave_event_eq * slave_eq = (struct mlx4_slave_event_eq *) malloc(_len_slave_eq0*sizeof(struct mlx4_slave_event_eq));
          for(int _i0 = 0; _i0 < _len_slave_eq0; _i0++) {
            slave_eq[_i0].cons = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_slave_eq__i0__event_eqe0 = 1;
          slave_eq[_i0].event_eqe = (struct mlx4_eqe *) malloc(_len_slave_eq__i0__event_eqe0*sizeof(struct mlx4_eqe));
          for(int _j0 = 0; _j0 < _len_slave_eq__i0__event_eqe0; _j0++) {
            slave_eq[_i0].event_eqe->owner = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mlx4_eqe * benchRet = next_slave_event_eqe(slave_eq);
          printf("%d\n", (*benchRet).owner);
          for(int _aux = 0; _aux < _len_slave_eq0; _aux++) {
          free(slave_eq[_aux].event_eqe);
          }
          free(slave_eq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_slave_eq0 = 100;
          struct mlx4_slave_event_eq * slave_eq = (struct mlx4_slave_event_eq *) malloc(_len_slave_eq0*sizeof(struct mlx4_slave_event_eq));
          for(int _i0 = 0; _i0 < _len_slave_eq0; _i0++) {
            slave_eq[_i0].cons = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_slave_eq__i0__event_eqe0 = 1;
          slave_eq[_i0].event_eqe = (struct mlx4_eqe *) malloc(_len_slave_eq__i0__event_eqe0*sizeof(struct mlx4_eqe));
          for(int _j0 = 0; _j0 < _len_slave_eq__i0__event_eqe0; _j0++) {
            slave_eq[_i0].event_eqe->owner = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct mlx4_eqe * benchRet = next_slave_event_eqe(slave_eq);
          printf("%d\n", (*benchRet).owner);
          for(int _aux = 0; _aux < _len_slave_eq0; _aux++) {
          free(slave_eq[_aux].event_eqe);
          }
          free(slave_eq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
