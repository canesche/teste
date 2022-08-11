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
typedef  size_t u64 ;
struct annotation {scalar_t__* offsets; } ;

/* Variables and functions */

__attribute__((used)) static unsigned annotation__count_insn(struct annotation *notes, u64 start, u64 end)
{
	unsigned n_insn = 0;
	u64 offset;

	for (offset = start; offset <= end; offset++) {
		if (notes->offsets[offset])
			n_insn++;
	}
	return n_insn;
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
          unsigned long start = 100;
          unsigned long end = 100;
          int _len_notes0 = 1;
          struct annotation * notes = (struct annotation *) malloc(_len_notes0*sizeof(struct annotation));
          for(int _i0 = 0; _i0 < _len_notes0; _i0++) {
              int _len_notes__i0__offsets0 = 1;
          notes[_i0].offsets = (long *) malloc(_len_notes__i0__offsets0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_notes__i0__offsets0; _j0++) {
            notes[_i0].offsets[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = annotation__count_insn(notes,start,end);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_notes0; _aux++) {
          free(notes[_aux].offsets);
          }
          free(notes);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long start = 255;
          unsigned long end = 255;
          int _len_notes0 = 65025;
          struct annotation * notes = (struct annotation *) malloc(_len_notes0*sizeof(struct annotation));
          for(int _i0 = 0; _i0 < _len_notes0; _i0++) {
              int _len_notes__i0__offsets0 = 1;
          notes[_i0].offsets = (long *) malloc(_len_notes__i0__offsets0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_notes__i0__offsets0; _j0++) {
            notes[_i0].offsets[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = annotation__count_insn(notes,start,end);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_notes0; _aux++) {
          free(notes[_aux].offsets);
          }
          free(notes);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long start = 10;
          unsigned long end = 10;
          int _len_notes0 = 100;
          struct annotation * notes = (struct annotation *) malloc(_len_notes0*sizeof(struct annotation));
          for(int _i0 = 0; _i0 < _len_notes0; _i0++) {
              int _len_notes__i0__offsets0 = 1;
          notes[_i0].offsets = (long *) malloc(_len_notes__i0__offsets0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_notes__i0__offsets0; _j0++) {
            notes[_i0].offsets[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = annotation__count_insn(notes,start,end);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_notes0; _aux++) {
          free(notes[_aux].offsets);
          }
          free(notes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
