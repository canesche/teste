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
struct mlxsw_sp_span_parms {int /*<<< orphan*/ * dest_port; } ;

/* Variables and functions */

__attribute__((used)) static int
mlxsw_sp_span_entry_unoffloadable(struct mlxsw_sp_span_parms *sparmsp)
{
	sparmsp->dest_port = NULL;
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
          int _len_sparmsp0 = 1;
          struct mlxsw_sp_span_parms * sparmsp = (struct mlxsw_sp_span_parms *) malloc(_len_sparmsp0*sizeof(struct mlxsw_sp_span_parms));
          for(int _i0 = 0; _i0 < _len_sparmsp0; _i0++) {
              int _len_sparmsp__i0__dest_port0 = 1;
          sparmsp[_i0].dest_port = (int *) malloc(_len_sparmsp__i0__dest_port0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sparmsp__i0__dest_port0; _j0++) {
            sparmsp[_i0].dest_port[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mlxsw_sp_span_entry_unoffloadable(sparmsp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sparmsp0; _aux++) {
          free(sparmsp[_aux].dest_port);
          }
          free(sparmsp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sparmsp0 = 65025;
          struct mlxsw_sp_span_parms * sparmsp = (struct mlxsw_sp_span_parms *) malloc(_len_sparmsp0*sizeof(struct mlxsw_sp_span_parms));
          for(int _i0 = 0; _i0 < _len_sparmsp0; _i0++) {
              int _len_sparmsp__i0__dest_port0 = 1;
          sparmsp[_i0].dest_port = (int *) malloc(_len_sparmsp__i0__dest_port0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sparmsp__i0__dest_port0; _j0++) {
            sparmsp[_i0].dest_port[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mlxsw_sp_span_entry_unoffloadable(sparmsp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sparmsp0; _aux++) {
          free(sparmsp[_aux].dest_port);
          }
          free(sparmsp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sparmsp0 = 100;
          struct mlxsw_sp_span_parms * sparmsp = (struct mlxsw_sp_span_parms *) malloc(_len_sparmsp0*sizeof(struct mlxsw_sp_span_parms));
          for(int _i0 = 0; _i0 < _len_sparmsp0; _i0++) {
              int _len_sparmsp__i0__dest_port0 = 1;
          sparmsp[_i0].dest_port = (int *) malloc(_len_sparmsp__i0__dest_port0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sparmsp__i0__dest_port0; _j0++) {
            sparmsp[_i0].dest_port[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mlxsw_sp_span_entry_unoffloadable(sparmsp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sparmsp0; _aux++) {
          free(sparmsp[_aux].dest_port);
          }
          free(sparmsp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
