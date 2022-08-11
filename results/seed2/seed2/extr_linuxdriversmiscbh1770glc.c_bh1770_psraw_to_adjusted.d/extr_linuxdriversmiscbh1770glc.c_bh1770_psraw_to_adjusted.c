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
typedef  scalar_t__ u8 ;
typedef  int u32 ;
typedef  scalar_t__ u16 ;
struct bh1770_chip {scalar_t__ prox_const; int prox_coef; } ;

/* Variables and functions */
 int BH1770_COEF_SCALER ; 
 scalar_t__ BH1770_PROX_RANGE ; 

__attribute__((used)) static inline u8 bh1770_psraw_to_adjusted(struct bh1770_chip *chip, u8 psraw)
{
	u16 adjusted;
	adjusted = (u16)(((u32)(psraw + chip->prox_const) * chip->prox_coef) /
		BH1770_COEF_SCALER);
	if (adjusted > BH1770_PROX_RANGE)
		adjusted = BH1770_PROX_RANGE;
	return adjusted;
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
          long psraw = 100;
          int _len_chip0 = 1;
          struct bh1770_chip * chip = (struct bh1770_chip *) malloc(_len_chip0*sizeof(struct bh1770_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].prox_const = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].prox_coef = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = bh1770_psraw_to_adjusted(chip,psraw);
          printf("%ld\n", benchRet); 
          free(chip);
        
        break;
    }
    // big-arr
    case 1:
    {
          long psraw = 255;
          int _len_chip0 = 65025;
          struct bh1770_chip * chip = (struct bh1770_chip *) malloc(_len_chip0*sizeof(struct bh1770_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].prox_const = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].prox_coef = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = bh1770_psraw_to_adjusted(chip,psraw);
          printf("%ld\n", benchRet); 
          free(chip);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long psraw = 10;
          int _len_chip0 = 100;
          struct bh1770_chip * chip = (struct bh1770_chip *) malloc(_len_chip0*sizeof(struct bh1770_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].prox_const = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].prox_coef = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = bh1770_psraw_to_adjusted(chip,psraw);
          printf("%ld\n", benchRet); 
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
