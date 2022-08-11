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
struct uasm_reloc {int lab; int /*<<< orphan*/  type; int /*<<< orphan*/ * addr; } ;

/* Variables and functions */
 int /*<<< orphan*/  R_MIPS_PC16 ; 

void uasm_r_mips_pc16(struct uasm_reloc **rel, u32 *addr, int lid)
{
	(*rel)->addr = addr;
	(*rel)->type = R_MIPS_PC16;
	(*rel)->lab = lid;
	(*rel)++;
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
          int lid = 100;
          int _len_rel0 = 1;
          struct uasm_reloc ** rel = (struct uasm_reloc **) malloc(_len_rel0*sizeof(struct uasm_reloc *));
          for(int _i0 = 0; _i0 < _len_rel0; _i0++) {
            int _len_rel1 = 1;
            rel[_i0] = (struct uasm_reloc *) malloc(_len_rel1*sizeof(struct uasm_reloc));
            for(int _i1 = 0; _i1 < _len_rel1; _i1++) {
              rel[_i0][_i1].lab = ((-2 * (next_i()%2)) + 1) * next_i();
        rel[_i0][_i1].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rel__i0___i1__addr0 = 1;
          rel[_i0][_i1].addr = (int *) malloc(_len_rel__i0___i1__addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rel__i0___i1__addr0; _j0++) {
            rel[_i0][_i1].addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_addr0 = 1;
          int * addr = (int *) malloc(_len_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          uasm_r_mips_pc16(rel,addr,lid);
          for(int i1 = 0; i1 < _len_rel0; i1++) {
            int _len_rel1 = 1;
              for(int _aux = 0; _aux < _len_rel1; _aux++) {
          free(rel[_aux].addr);
          }
          free(rel[i1]);
          }
          free(rel);
          free(addr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int lid = 255;
          int _len_rel0 = 65025;
          struct uasm_reloc ** rel = (struct uasm_reloc **) malloc(_len_rel0*sizeof(struct uasm_reloc *));
          for(int _i0 = 0; _i0 < _len_rel0; _i0++) {
            int _len_rel1 = 1;
            rel[_i0] = (struct uasm_reloc *) malloc(_len_rel1*sizeof(struct uasm_reloc));
            for(int _i1 = 0; _i1 < _len_rel1; _i1++) {
              rel[_i0][_i1].lab = ((-2 * (next_i()%2)) + 1) * next_i();
        rel[_i0][_i1].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rel__i0___i1__addr0 = 1;
          rel[_i0][_i1].addr = (int *) malloc(_len_rel__i0___i1__addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rel__i0___i1__addr0; _j0++) {
            rel[_i0][_i1].addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_addr0 = 65025;
          int * addr = (int *) malloc(_len_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          uasm_r_mips_pc16(rel,addr,lid);
          for(int i1 = 0; i1 < _len_rel0; i1++) {
            int _len_rel1 = 1;
              for(int _aux = 0; _aux < _len_rel1; _aux++) {
          free(rel[_aux].addr);
          }
          free(rel[i1]);
          }
          free(rel);
          free(addr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int lid = 10;
          int _len_rel0 = 100;
          struct uasm_reloc ** rel = (struct uasm_reloc **) malloc(_len_rel0*sizeof(struct uasm_reloc *));
          for(int _i0 = 0; _i0 < _len_rel0; _i0++) {
            int _len_rel1 = 1;
            rel[_i0] = (struct uasm_reloc *) malloc(_len_rel1*sizeof(struct uasm_reloc));
            for(int _i1 = 0; _i1 < _len_rel1; _i1++) {
              rel[_i0][_i1].lab = ((-2 * (next_i()%2)) + 1) * next_i();
        rel[_i0][_i1].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rel__i0___i1__addr0 = 1;
          rel[_i0][_i1].addr = (int *) malloc(_len_rel__i0___i1__addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rel__i0___i1__addr0; _j0++) {
            rel[_i0][_i1].addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          int _len_addr0 = 100;
          int * addr = (int *) malloc(_len_addr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          uasm_r_mips_pc16(rel,addr,lid);
          for(int i1 = 0; i1 < _len_rel0; i1++) {
            int _len_rel1 = 1;
              for(int _aux = 0; _aux < _len_rel1; _aux++) {
          free(rel[_aux].addr);
          }
          free(rel[i1]);
          }
          free(rel);
          free(addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
