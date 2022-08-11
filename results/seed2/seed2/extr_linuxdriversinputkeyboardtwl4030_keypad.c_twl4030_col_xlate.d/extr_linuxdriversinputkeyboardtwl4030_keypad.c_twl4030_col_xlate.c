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
typedef  int u16 ;
struct twl4030_keypad {int n_cols; } ;

/* Variables and functions */

__attribute__((used)) static inline u16 twl4030_col_xlate(struct twl4030_keypad *kp, u8 col)
{
	/*
	 * If all bits in a row are active for all columns then
	 * we have that row line connected to gnd. Mark this
	 * key on as if it was on matrix position n_cols (i.e.
	 * one higher than the size of the matrix).
	 */
	if (col == 0xFF)
		return 1 << kp->n_cols;
	else
		return col & ((1 << kp->n_cols) - 1);
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
          int col = 100;
          int _len_kp0 = 1;
          struct twl4030_keypad * kp = (struct twl4030_keypad *) malloc(_len_kp0*sizeof(struct twl4030_keypad));
          for(int _i0 = 0; _i0 < _len_kp0; _i0++) {
            kp[_i0].n_cols = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = twl4030_col_xlate(kp,col);
          printf("%d\n", benchRet); 
          free(kp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int col = 255;
          int _len_kp0 = 65025;
          struct twl4030_keypad * kp = (struct twl4030_keypad *) malloc(_len_kp0*sizeof(struct twl4030_keypad));
          for(int _i0 = 0; _i0 < _len_kp0; _i0++) {
            kp[_i0].n_cols = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = twl4030_col_xlate(kp,col);
          printf("%d\n", benchRet); 
          free(kp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int col = 10;
          int _len_kp0 = 100;
          struct twl4030_keypad * kp = (struct twl4030_keypad *) malloc(_len_kp0*sizeof(struct twl4030_keypad));
          for(int _i0 = 0; _i0 < _len_kp0; _i0++) {
            kp[_i0].n_cols = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = twl4030_col_xlate(kp,col);
          printf("%d\n", benchRet); 
          free(kp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
