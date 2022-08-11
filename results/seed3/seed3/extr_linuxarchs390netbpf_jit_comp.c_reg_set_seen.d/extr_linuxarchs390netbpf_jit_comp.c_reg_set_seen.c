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
typedef  size_t u32 ;
struct bpf_jit {int* seen_reg; } ;

/* Variables and functions */
 size_t* reg2hex ; 

__attribute__((used)) static inline void reg_set_seen(struct bpf_jit *jit, u32 b1)
{
	u32 r1 = reg2hex[b1];

	if (!jit->seen_reg[r1] && r1 >= 6 && r1 <= 15)
		jit->seen_reg[r1] = 1;
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
          unsigned long b1 = 100;
          int _len_jit0 = 1;
          struct bpf_jit * jit = (struct bpf_jit *) malloc(_len_jit0*sizeof(struct bpf_jit));
          for(int _i0 = 0; _i0 < _len_jit0; _i0++) {
              int _len_jit__i0__seen_reg0 = 1;
          jit[_i0].seen_reg = (int *) malloc(_len_jit__i0__seen_reg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_jit__i0__seen_reg0; _j0++) {
            jit[_i0].seen_reg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          reg_set_seen(jit,b1);
          for(int _aux = 0; _aux < _len_jit0; _aux++) {
          free(jit[_aux].seen_reg);
          }
          free(jit);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long b1 = 255;
          int _len_jit0 = 65025;
          struct bpf_jit * jit = (struct bpf_jit *) malloc(_len_jit0*sizeof(struct bpf_jit));
          for(int _i0 = 0; _i0 < _len_jit0; _i0++) {
              int _len_jit__i0__seen_reg0 = 1;
          jit[_i0].seen_reg = (int *) malloc(_len_jit__i0__seen_reg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_jit__i0__seen_reg0; _j0++) {
            jit[_i0].seen_reg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          reg_set_seen(jit,b1);
          for(int _aux = 0; _aux < _len_jit0; _aux++) {
          free(jit[_aux].seen_reg);
          }
          free(jit);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long b1 = 10;
          int _len_jit0 = 100;
          struct bpf_jit * jit = (struct bpf_jit *) malloc(_len_jit0*sizeof(struct bpf_jit));
          for(int _i0 = 0; _i0 < _len_jit0; _i0++) {
              int _len_jit__i0__seen_reg0 = 1;
          jit[_i0].seen_reg = (int *) malloc(_len_jit__i0__seen_reg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_jit__i0__seen_reg0; _j0++) {
            jit[_i0].seen_reg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          reg_set_seen(jit,b1);
          for(int _aux = 0; _aux < _len_jit0; _aux++) {
          free(jit[_aux].seen_reg);
          }
          free(jit);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
