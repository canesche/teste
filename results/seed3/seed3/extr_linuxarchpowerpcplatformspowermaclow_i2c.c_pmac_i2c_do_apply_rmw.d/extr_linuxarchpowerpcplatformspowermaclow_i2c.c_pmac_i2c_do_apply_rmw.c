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
typedef  int u8 ;
typedef  int u32 ;
struct pmac_i2c_pf_inst {int quirks; int* scratch; int const* buffer; } ;

/* Variables and functions */
 int pmac_i2c_quirk_invmask ; 

__attribute__((used)) static void pmac_i2c_do_apply_rmw(struct pmac_i2c_pf_inst *inst,
				  u32 len, const u8 *mask, const u8 *val)
{
	int i;

	if (inst->quirks & pmac_i2c_quirk_invmask) {
		for (i = 0; i < len; i ++)
			inst->scratch[i] = (inst->buffer[i] & mask[i]) | val[i];
	} else {
		for (i = 0; i < len; i ++)
			inst->scratch[i] = (inst->buffer[i] & ~mask[i])
				| (val[i] & mask[i]);
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
          int len = 100;
          int _len_inst0 = 1;
          struct pmac_i2c_pf_inst * inst = (struct pmac_i2c_pf_inst *) malloc(_len_inst0*sizeof(struct pmac_i2c_pf_inst));
          for(int _i0 = 0; _i0 < _len_inst0; _i0++) {
            inst[_i0].quirks = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inst__i0__scratch0 = 1;
          inst[_i0].scratch = (int *) malloc(_len_inst__i0__scratch0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inst__i0__scratch0; _j0++) {
            inst[_i0].scratch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inst__i0__buffer0 = 1;
          inst[_i0].buffer = (const int *) malloc(_len_inst__i0__buffer0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_inst__i0__buffer0; _j0++) {
            inst[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mask0 = 1;
          const int * mask = (const int *) malloc(_len_mask0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 1;
          const int * val = (const int *) malloc(_len_val0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pmac_i2c_do_apply_rmw(inst,len,mask,val);
          for(int _aux = 0; _aux < _len_inst0; _aux++) {
          free(inst[_aux].scratch);
          }
          for(int _aux = 0; _aux < _len_inst0; _aux++) {
          free(inst[_aux].buffer);
          }
          free(inst);
          free(mask);
          free(val);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int _len_inst0 = 65025;
          struct pmac_i2c_pf_inst * inst = (struct pmac_i2c_pf_inst *) malloc(_len_inst0*sizeof(struct pmac_i2c_pf_inst));
          for(int _i0 = 0; _i0 < _len_inst0; _i0++) {
            inst[_i0].quirks = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inst__i0__scratch0 = 1;
          inst[_i0].scratch = (int *) malloc(_len_inst__i0__scratch0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inst__i0__scratch0; _j0++) {
            inst[_i0].scratch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inst__i0__buffer0 = 1;
          inst[_i0].buffer = (const int *) malloc(_len_inst__i0__buffer0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_inst__i0__buffer0; _j0++) {
            inst[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mask0 = 65025;
          const int * mask = (const int *) malloc(_len_mask0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 65025;
          const int * val = (const int *) malloc(_len_val0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pmac_i2c_do_apply_rmw(inst,len,mask,val);
          for(int _aux = 0; _aux < _len_inst0; _aux++) {
          free(inst[_aux].scratch);
          }
          for(int _aux = 0; _aux < _len_inst0; _aux++) {
          free(inst[_aux].buffer);
          }
          free(inst);
          free(mask);
          free(val);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int _len_inst0 = 100;
          struct pmac_i2c_pf_inst * inst = (struct pmac_i2c_pf_inst *) malloc(_len_inst0*sizeof(struct pmac_i2c_pf_inst));
          for(int _i0 = 0; _i0 < _len_inst0; _i0++) {
            inst[_i0].quirks = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inst__i0__scratch0 = 1;
          inst[_i0].scratch = (int *) malloc(_len_inst__i0__scratch0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_inst__i0__scratch0; _j0++) {
            inst[_i0].scratch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inst__i0__buffer0 = 1;
          inst[_i0].buffer = (const int *) malloc(_len_inst__i0__buffer0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_inst__i0__buffer0; _j0++) {
            inst[_i0].buffer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mask0 = 100;
          const int * mask = (const int *) malloc(_len_mask0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val0 = 100;
          const int * val = (const int *) malloc(_len_val0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pmac_i2c_do_apply_rmw(inst,len,mask,val);
          for(int _aux = 0; _aux < _len_inst0; _aux++) {
          free(inst[_aux].scratch);
          }
          for(int _aux = 0; _aux < _len_inst0; _aux++) {
          free(inst[_aux].buffer);
          }
          free(inst);
          free(mask);
          free(val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
