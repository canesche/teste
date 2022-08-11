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
struct fw_card {int current_tlabel; unsigned long long tlabel_mask; } ;

/* Variables and functions */
 int EBUSY ; 

__attribute__((used)) static int allocate_tlabel(struct fw_card *card)
{
	int tlabel;

	tlabel = card->current_tlabel;
	while (card->tlabel_mask & (1ULL << tlabel)) {
		tlabel = (tlabel + 1) & 0x3f;
		if (tlabel == card->current_tlabel)
			return -EBUSY;
	}

	card->current_tlabel = (tlabel + 1) & 0x3f;
	card->tlabel_mask |= 1ULL << tlabel;

	return tlabel;
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
          int _len_card0 = 1;
          struct fw_card * card = (struct fw_card *) malloc(_len_card0*sizeof(struct fw_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].current_tlabel = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].tlabel_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = allocate_tlabel(card);
          printf("%d\n", benchRet); 
          free(card);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_card0 = 65025;
          struct fw_card * card = (struct fw_card *) malloc(_len_card0*sizeof(struct fw_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].current_tlabel = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].tlabel_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = allocate_tlabel(card);
          printf("%d\n", benchRet); 
          free(card);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_card0 = 100;
          struct fw_card * card = (struct fw_card *) malloc(_len_card0*sizeof(struct fw_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].current_tlabel = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].tlabel_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = allocate_tlabel(card);
          printf("%d\n", benchRet); 
          free(card);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
