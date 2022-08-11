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
typedef  int /*<<< orphan*/  u16 ;
struct stub_chip {int bank_sel; scalar_t__ bank_start; scalar_t__ bank_end; scalar_t__ bank_words; int bank_size; int /*<<< orphan*/ * words; } ;

/* Variables and functions */

__attribute__((used)) static u16 *stub_get_wordp(struct stub_chip *chip, u8 offset)
{
	if (chip->bank_sel &&
	    offset >= chip->bank_start && offset <= chip->bank_end)
		return chip->bank_words +
		       (chip->bank_sel - 1) * chip->bank_size +
		       offset - chip->bank_start;
	else
		return chip->words + offset;
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
          long offset = 100;
          int _len_chip0 = 1;
          struct stub_chip * chip = (struct stub_chip *) malloc(_len_chip0*sizeof(struct stub_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].bank_sel = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].bank_start = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].bank_end = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].bank_words = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].bank_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__words0 = 1;
          chip[_i0].words = (int *) malloc(_len_chip__i0__words0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__words0; _j0++) {
            chip[_i0].words[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = stub_get_wordp(chip,offset);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].words);
          }
          free(chip);
        
        break;
    }
    // big-arr
    case 1:
    {
          long offset = 255;
          int _len_chip0 = 65025;
          struct stub_chip * chip = (struct stub_chip *) malloc(_len_chip0*sizeof(struct stub_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].bank_sel = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].bank_start = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].bank_end = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].bank_words = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].bank_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__words0 = 1;
          chip[_i0].words = (int *) malloc(_len_chip__i0__words0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__words0; _j0++) {
            chip[_i0].words[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = stub_get_wordp(chip,offset);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].words);
          }
          free(chip);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long offset = 10;
          int _len_chip0 = 100;
          struct stub_chip * chip = (struct stub_chip *) malloc(_len_chip0*sizeof(struct stub_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].bank_sel = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].bank_start = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].bank_end = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].bank_words = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].bank_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__words0 = 1;
          chip[_i0].words = (int *) malloc(_len_chip__i0__words0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__words0; _j0++) {
            chip[_i0].words[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int * benchRet = stub_get_wordp(chip,offset);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].words);
          }
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
