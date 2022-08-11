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
struct atm_vcc {int /*<<< orphan*/  send; int /*<<< orphan*/ * push_oam; int /*<<< orphan*/  pop; int /*<<< orphan*/  push; } ;

/* Variables and functions */
 int /*<<< orphan*/  atm_pop_raw ; 
 int /*<<< orphan*/  atm_push_raw ; 
 int /*<<< orphan*/  atm_send_aal0 ; 

int atm_init_aal0(struct atm_vcc *vcc)
{
	vcc->push = atm_push_raw;
	vcc->pop = atm_pop_raw;
	vcc->push_oam = NULL;
	vcc->send = atm_send_aal0;
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
          int _len_vcc0 = 1;
          struct atm_vcc * vcc = (struct atm_vcc *) malloc(_len_vcc0*sizeof(struct atm_vcc));
          for(int _i0 = 0; _i0 < _len_vcc0; _i0++) {
            vcc[_i0].send = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vcc__i0__push_oam0 = 1;
          vcc[_i0].push_oam = (int *) malloc(_len_vcc__i0__push_oam0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vcc__i0__push_oam0; _j0++) {
            vcc[_i0].push_oam[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vcc[_i0].pop = ((-2 * (next_i()%2)) + 1) * next_i();
        vcc[_i0].push = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = atm_init_aal0(vcc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vcc0; _aux++) {
          free(vcc[_aux].push_oam);
          }
          free(vcc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vcc0 = 65025;
          struct atm_vcc * vcc = (struct atm_vcc *) malloc(_len_vcc0*sizeof(struct atm_vcc));
          for(int _i0 = 0; _i0 < _len_vcc0; _i0++) {
            vcc[_i0].send = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vcc__i0__push_oam0 = 1;
          vcc[_i0].push_oam = (int *) malloc(_len_vcc__i0__push_oam0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vcc__i0__push_oam0; _j0++) {
            vcc[_i0].push_oam[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vcc[_i0].pop = ((-2 * (next_i()%2)) + 1) * next_i();
        vcc[_i0].push = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = atm_init_aal0(vcc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vcc0; _aux++) {
          free(vcc[_aux].push_oam);
          }
          free(vcc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vcc0 = 100;
          struct atm_vcc * vcc = (struct atm_vcc *) malloc(_len_vcc0*sizeof(struct atm_vcc));
          for(int _i0 = 0; _i0 < _len_vcc0; _i0++) {
            vcc[_i0].send = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vcc__i0__push_oam0 = 1;
          vcc[_i0].push_oam = (int *) malloc(_len_vcc__i0__push_oam0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vcc__i0__push_oam0; _j0++) {
            vcc[_i0].push_oam[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vcc[_i0].pop = ((-2 * (next_i()%2)) + 1) * next_i();
        vcc[_i0].push = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = atm_init_aal0(vcc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vcc0; _aux++) {
          free(vcc[_aux].push_oam);
          }
          free(vcc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
