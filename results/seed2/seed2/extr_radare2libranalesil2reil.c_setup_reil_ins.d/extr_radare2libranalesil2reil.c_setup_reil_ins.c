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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {TYPE_1__* Reil; } ;
struct TYPE_4__ {scalar_t__ seq_num; int /*<<< orphan*/  addr; } ;
typedef  TYPE_2__ RAnalEsil ;

/* Variables and functions */

__attribute__((used)) static int setup_reil_ins(RAnalEsil *esil, const char *op) {
	esil->Reil->addr++;      // Increment the address location.
	esil->Reil->seq_num = 0; // Reset the sequencing.
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
          int _len_esil0 = 1;
          struct TYPE_5__ * esil = (struct TYPE_5__ *) malloc(_len_esil0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_esil0; _i0++) {
              int _len_esil__i0__Reil0 = 1;
          esil[_i0].Reil = (struct TYPE_4__ *) malloc(_len_esil__i0__Reil0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_esil__i0__Reil0; _j0++) {
            esil[_i0].Reil->seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        esil[_i0].Reil->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_op0 = 1;
          const char * op = (const char *) malloc(_len_op0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_op0; _i0++) {
            op[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = setup_reil_ins(esil,op);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_esil0; _aux++) {
          free(esil[_aux].Reil);
          }
          free(esil);
          free(op);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_esil0 = 65025;
          struct TYPE_5__ * esil = (struct TYPE_5__ *) malloc(_len_esil0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_esil0; _i0++) {
              int _len_esil__i0__Reil0 = 1;
          esil[_i0].Reil = (struct TYPE_4__ *) malloc(_len_esil__i0__Reil0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_esil__i0__Reil0; _j0++) {
            esil[_i0].Reil->seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        esil[_i0].Reil->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_op0 = 65025;
          const char * op = (const char *) malloc(_len_op0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_op0; _i0++) {
            op[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = setup_reil_ins(esil,op);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_esil0; _aux++) {
          free(esil[_aux].Reil);
          }
          free(esil);
          free(op);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_esil0 = 100;
          struct TYPE_5__ * esil = (struct TYPE_5__ *) malloc(_len_esil0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_esil0; _i0++) {
              int _len_esil__i0__Reil0 = 1;
          esil[_i0].Reil = (struct TYPE_4__ *) malloc(_len_esil__i0__Reil0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_esil__i0__Reil0; _j0++) {
            esil[_i0].Reil->seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        esil[_i0].Reil->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_op0 = 100;
          const char * op = (const char *) malloc(_len_op0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_op0; _i0++) {
            op[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = setup_reil_ins(esil,op);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_esil0; _aux++) {
          free(esil[_aux].Reil);
          }
          free(esil);
          free(op);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
