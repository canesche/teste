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
struct entry {scalar_t__ line2; } ;

/* Variables and functions */

__attribute__((used)) static int binary_search(struct entry **sequence, int longest,
		struct entry *entry)
{
	int left = -1, right = longest;

	while (left + 1 < right) {
		int middle = left + (right - left) / 2;
		/* by construction, no two entries can be equal */
		if (sequence[middle]->line2 > entry->line2)
			right = middle;
		else
			left = middle;
	}
	/* return the index in "sequence", _not_ the sequence length */
	return left;
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
          int longest = 100;
          int _len_sequence0 = 1;
          struct entry ** sequence = (struct entry **) malloc(_len_sequence0*sizeof(struct entry *));
          for(int _i0 = 0; _i0 < _len_sequence0; _i0++) {
            int _len_sequence1 = 1;
            sequence[_i0] = (struct entry *) malloc(_len_sequence1*sizeof(struct entry));
            for(int _i1 = 0; _i1 < _len_sequence1; _i1++) {
              sequence[_i0][_i1].line2 = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_entry0 = 1;
          struct entry * entry = (struct entry *) malloc(_len_entry0*sizeof(struct entry));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0].line2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = binary_search(sequence,longest,entry);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_sequence0; i1++) {
            int _len_sequence1 = 1;
              free(sequence[i1]);
          }
          free(sequence);
          free(entry);
        
        break;
    }
    // big-arr
    case 1:
    {
          int longest = 255;
          int _len_sequence0 = 65025;
          struct entry ** sequence = (struct entry **) malloc(_len_sequence0*sizeof(struct entry *));
          for(int _i0 = 0; _i0 < _len_sequence0; _i0++) {
            int _len_sequence1 = 1;
            sequence[_i0] = (struct entry *) malloc(_len_sequence1*sizeof(struct entry));
            for(int _i1 = 0; _i1 < _len_sequence1; _i1++) {
              sequence[_i0][_i1].line2 = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_entry0 = 65025;
          struct entry * entry = (struct entry *) malloc(_len_entry0*sizeof(struct entry));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0].line2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = binary_search(sequence,longest,entry);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_sequence0; i1++) {
            int _len_sequence1 = 1;
              free(sequence[i1]);
          }
          free(sequence);
          free(entry);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int longest = 10;
          int _len_sequence0 = 100;
          struct entry ** sequence = (struct entry **) malloc(_len_sequence0*sizeof(struct entry *));
          for(int _i0 = 0; _i0 < _len_sequence0; _i0++) {
            int _len_sequence1 = 1;
            sequence[_i0] = (struct entry *) malloc(_len_sequence1*sizeof(struct entry));
            for(int _i1 = 0; _i1 < _len_sequence1; _i1++) {
              sequence[_i0][_i1].line2 = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_entry0 = 100;
          struct entry * entry = (struct entry *) malloc(_len_entry0*sizeof(struct entry));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0].line2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = binary_search(sequence,longest,entry);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_sequence0; i1++) {
            int _len_sequence1 = 1;
              free(sequence[i1]);
          }
          free(sequence);
          free(entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
