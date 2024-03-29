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
struct nfp_prog {int /*<<< orphan*/  insns; } ;
struct TYPE_2__ {int /*<<< orphan*/ * prev; } ;
struct nfp_insn_meta {TYPE_1__ l; } ;

/* Variables and functions */

__attribute__((used)) static bool
nfp_meta_has_prev(struct nfp_prog *nfp_prog, struct nfp_insn_meta *meta)
{
	return meta->l.prev != &nfp_prog->insns;
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
          int _len_nfp_prog0 = 1;
          struct nfp_prog * nfp_prog = (struct nfp_prog *) malloc(_len_nfp_prog0*sizeof(struct nfp_prog));
          for(int _i0 = 0; _i0 < _len_nfp_prog0; _i0++) {
            nfp_prog[_i0].insns = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_meta0 = 1;
          struct nfp_insn_meta * meta = (struct nfp_insn_meta *) malloc(_len_meta0*sizeof(struct nfp_insn_meta));
          for(int _i0 = 0; _i0 < _len_meta0; _i0++) {
              int _len_meta__i0__l_prev0 = 1;
          meta[_i0].l.prev = (int *) malloc(_len_meta__i0__l_prev0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_meta__i0__l_prev0; _j0++) {
            meta[_i0].l.prev[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = nfp_meta_has_prev(nfp_prog,meta);
          printf("%d\n", benchRet); 
          free(nfp_prog);
          free(meta);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_nfp_prog0 = 65025;
          struct nfp_prog * nfp_prog = (struct nfp_prog *) malloc(_len_nfp_prog0*sizeof(struct nfp_prog));
          for(int _i0 = 0; _i0 < _len_nfp_prog0; _i0++) {
            nfp_prog[_i0].insns = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_meta0 = 65025;
          struct nfp_insn_meta * meta = (struct nfp_insn_meta *) malloc(_len_meta0*sizeof(struct nfp_insn_meta));
          for(int _i0 = 0; _i0 < _len_meta0; _i0++) {
              int _len_meta__i0__l_prev0 = 1;
          meta[_i0].l.prev = (int *) malloc(_len_meta__i0__l_prev0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_meta__i0__l_prev0; _j0++) {
            meta[_i0].l.prev[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = nfp_meta_has_prev(nfp_prog,meta);
          printf("%d\n", benchRet); 
          free(nfp_prog);
          free(meta);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_nfp_prog0 = 100;
          struct nfp_prog * nfp_prog = (struct nfp_prog *) malloc(_len_nfp_prog0*sizeof(struct nfp_prog));
          for(int _i0 = 0; _i0 < _len_nfp_prog0; _i0++) {
            nfp_prog[_i0].insns = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_meta0 = 100;
          struct nfp_insn_meta * meta = (struct nfp_insn_meta *) malloc(_len_meta0*sizeof(struct nfp_insn_meta));
          for(int _i0 = 0; _i0 < _len_meta0; _i0++) {
              int _len_meta__i0__l_prev0 = 1;
          meta[_i0].l.prev = (int *) malloc(_len_meta__i0__l_prev0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_meta__i0__l_prev0; _j0++) {
            meta[_i0].l.prev[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = nfp_meta_has_prev(nfp_prog,meta);
          printf("%d\n", benchRet); 
          free(nfp_prog);
          free(meta);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
