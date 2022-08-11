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
typedef  unsigned int const u64 ;

/* Variables and functions */
 int MAX_ALT ; 

__attribute__((used)) static int find_alternative(u64 event, const unsigned int ev_alt[][MAX_ALT], int size)
{
	int i, j;

	for (i = 0; i < size; ++i) {
		if (event < ev_alt[i][0])
			break;

		for (j = 0; j < MAX_ALT && ev_alt[i][j]; ++j)
			if (event == ev_alt[i][j])
				return i;
	}

	return -1;
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
          const unsigned int event = 100;
          int size = 100;
          int _len_ev_alt0 = 1;
          unsigned int const** ev_alt = (unsigned int const**) malloc(_len_ev_alt0*sizeof(unsigned int const*));
          for(int _i0 = 0; _i0 < _len_ev_alt0; _i0++) {
            int _len_ev_alt1 = MAX_ALT;
            ev_alt[_i0] = (unsigned int const*) malloc(_len_ev_alt1*sizeof(unsigned int const));
            for(int _i1 = 0; _i1 < _len_ev_alt1; _i1++) {
              ev_alt[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = find_alternative(event,ev_alt,size);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_ev_alt0; i1++) {
            int _len_ev_alt1 = MAX_ALT;
              free(ev_alt[i1]);
          }
          free(ev_alt);
        
        break;
    }
    // big-arr
    case 1:
    {
          const unsigned int event = 255;
          int size = 255;
          int _len_ev_alt0 = 65025;
          unsigned int const** ev_alt = (unsigned int const**) malloc(_len_ev_alt0*sizeof(unsigned int const*));
          for(int _i0 = 0; _i0 < _len_ev_alt0; _i0++) {
            int _len_ev_alt1 = MAX_ALT;
            ev_alt[_i0] = (unsigned int const*) malloc(_len_ev_alt1*sizeof(unsigned int const));
            for(int _i1 = 0; _i1 < _len_ev_alt1; _i1++) {
              ev_alt[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = find_alternative(event,ev_alt,size);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_ev_alt0; i1++) {
            int _len_ev_alt1 = MAX_ALT;
              free(ev_alt[i1]);
          }
          free(ev_alt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const unsigned int event = 10;
          int size = 10;
          int _len_ev_alt0 = 100;
          unsigned int const** ev_alt = (unsigned int const**) malloc(_len_ev_alt0*sizeof(unsigned int const*));
          for(int _i0 = 0; _i0 < _len_ev_alt0; _i0++) {
            int _len_ev_alt1 = MAX_ALT;
            ev_alt[_i0] = (unsigned int const*) malloc(_len_ev_alt1*sizeof(unsigned int const));
            for(int _i1 = 0; _i1 < _len_ev_alt1; _i1++) {
              ev_alt[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = find_alternative(event,ev_alt,size);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_ev_alt0; i1++) {
            int _len_ev_alt1 = MAX_ALT;
              free(ev_alt[i1]);
          }
          free(ev_alt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
