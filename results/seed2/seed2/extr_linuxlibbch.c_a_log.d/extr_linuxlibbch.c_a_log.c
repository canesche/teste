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
struct bch_control {int* a_log_tab; } ;

/* Variables and functions */

__attribute__((used)) static inline int a_log(struct bch_control *bch, unsigned int x)
{
	return bch->a_log_tab[x];
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
          unsigned int x = 100;
          int _len_bch0 = 1;
          struct bch_control * bch = (struct bch_control *) malloc(_len_bch0*sizeof(struct bch_control));
          for(int _i0 = 0; _i0 < _len_bch0; _i0++) {
              int _len_bch__i0__a_log_tab0 = 1;
          bch[_i0].a_log_tab = (int *) malloc(_len_bch__i0__a_log_tab0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bch__i0__a_log_tab0; _j0++) {
            bch[_i0].a_log_tab[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = a_log(bch,x);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bch0; _aux++) {
          free(bch[_aux].a_log_tab);
          }
          free(bch);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int x = 255;
          int _len_bch0 = 65025;
          struct bch_control * bch = (struct bch_control *) malloc(_len_bch0*sizeof(struct bch_control));
          for(int _i0 = 0; _i0 < _len_bch0; _i0++) {
              int _len_bch__i0__a_log_tab0 = 1;
          bch[_i0].a_log_tab = (int *) malloc(_len_bch__i0__a_log_tab0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bch__i0__a_log_tab0; _j0++) {
            bch[_i0].a_log_tab[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = a_log(bch,x);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bch0; _aux++) {
          free(bch[_aux].a_log_tab);
          }
          free(bch);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int x = 10;
          int _len_bch0 = 100;
          struct bch_control * bch = (struct bch_control *) malloc(_len_bch0*sizeof(struct bch_control));
          for(int _i0 = 0; _i0 < _len_bch0; _i0++) {
              int _len_bch__i0__a_log_tab0 = 1;
          bch[_i0].a_log_tab = (int *) malloc(_len_bch__i0__a_log_tab0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bch__i0__a_log_tab0; _j0++) {
            bch[_i0].a_log_tab[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = a_log(bch,x);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bch0; _aux++) {
          free(bch[_aux].a_log_tab);
          }
          free(bch);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
