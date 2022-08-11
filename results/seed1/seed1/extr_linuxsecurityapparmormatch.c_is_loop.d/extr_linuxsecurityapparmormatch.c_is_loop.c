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
struct match_workbuf {unsigned int pos; unsigned int* history; unsigned int len; unsigned int size; } ;

/* Variables and functions */

__attribute__((used)) static bool is_loop(struct match_workbuf *wb, unsigned int state,
		    unsigned int *adjust)
{
	unsigned int pos = wb->pos;
	unsigned int i;

	if (wb->history[pos] < state)
		return false;

	for (i = 0; i <= wb->len; i++) {
		if (wb->history[pos] == state) {
			*adjust = i;
			return true;
		}
		if (pos == 0)
			pos = wb->size;
		pos--;
	}

	*adjust = i;
	return true;
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
          unsigned int state = 100;
          int _len_wb0 = 1;
          struct match_workbuf * wb = (struct match_workbuf *) malloc(_len_wb0*sizeof(struct match_workbuf));
          for(int _i0 = 0; _i0 < _len_wb0; _i0++) {
            wb[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wb__i0__history0 = 1;
          wb[_i0].history = (unsigned int *) malloc(_len_wb__i0__history0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_wb__i0__history0; _j0++) {
            wb[_i0].history[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        wb[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        wb[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adjust0 = 1;
          unsigned int * adjust = (unsigned int *) malloc(_len_adjust0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_adjust0; _i0++) {
            adjust[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_loop(wb,state,adjust);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_wb0; _aux++) {
          free(wb[_aux].history);
          }
          free(wb);
          free(adjust);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int state = 255;
          int _len_wb0 = 65025;
          struct match_workbuf * wb = (struct match_workbuf *) malloc(_len_wb0*sizeof(struct match_workbuf));
          for(int _i0 = 0; _i0 < _len_wb0; _i0++) {
            wb[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wb__i0__history0 = 1;
          wb[_i0].history = (unsigned int *) malloc(_len_wb__i0__history0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_wb__i0__history0; _j0++) {
            wb[_i0].history[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        wb[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        wb[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adjust0 = 65025;
          unsigned int * adjust = (unsigned int *) malloc(_len_adjust0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_adjust0; _i0++) {
            adjust[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_loop(wb,state,adjust);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_wb0; _aux++) {
          free(wb[_aux].history);
          }
          free(wb);
          free(adjust);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int state = 10;
          int _len_wb0 = 100;
          struct match_workbuf * wb = (struct match_workbuf *) malloc(_len_wb0*sizeof(struct match_workbuf));
          for(int _i0 = 0; _i0 < _len_wb0; _i0++) {
            wb[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wb__i0__history0 = 1;
          wb[_i0].history = (unsigned int *) malloc(_len_wb__i0__history0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_wb__i0__history0; _j0++) {
            wb[_i0].history[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        wb[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        wb[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adjust0 = 100;
          unsigned int * adjust = (unsigned int *) malloc(_len_adjust0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_adjust0; _i0++) {
            adjust[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_loop(wb,state,adjust);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_wb0; _aux++) {
          free(wb[_aux].history);
          }
          free(wb);
          free(adjust);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
