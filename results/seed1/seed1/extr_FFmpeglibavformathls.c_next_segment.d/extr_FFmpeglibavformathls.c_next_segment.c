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
struct segment {int dummy; } ;
struct playlist {int cur_seq_no; int start_seq_no; int n_segments; struct segment** segments; } ;

/* Variables and functions */

__attribute__((used)) static struct segment *next_segment(struct playlist *pls)
{
    int n = pls->cur_seq_no - pls->start_seq_no + 1;
    if (n >= pls->n_segments)
        return NULL;
    return pls->segments[n];
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
          int _len_pls0 = 1;
          struct playlist * pls = (struct playlist *) malloc(_len_pls0*sizeof(struct playlist));
          for(int _i0 = 0; _i0 < _len_pls0; _i0++) {
            pls[_i0].cur_seq_no = ((-2 * (next_i()%2)) + 1) * next_i();
        pls[_i0].start_seq_no = ((-2 * (next_i()%2)) + 1) * next_i();
        pls[_i0].n_segments = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pls__i0__segments0 = 1;
          pls[_i0].segments = (struct segment **) malloc(_len_pls__i0__segments0*sizeof(struct segment *));
          for(int _j0 = 0; _j0 < _len_pls__i0__segments0; _j0++) {
            int _len_pls__i0__segments1 = 1;
            pls[_i0].segments[_j0] = (struct segment *) malloc(_len_pls__i0__segments1*sizeof(struct segment));
            for(int _j1 = 0; _j1 < _len_pls__i0__segments1; _j1++) {
              pls[_i0].segments[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct segment * benchRet = next_segment(pls);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_pls0; _aux++) {
          free(*(pls[_aux].segments));
        free(pls[_aux].segments);
          }
          free(pls);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pls0 = 65025;
          struct playlist * pls = (struct playlist *) malloc(_len_pls0*sizeof(struct playlist));
          for(int _i0 = 0; _i0 < _len_pls0; _i0++) {
            pls[_i0].cur_seq_no = ((-2 * (next_i()%2)) + 1) * next_i();
        pls[_i0].start_seq_no = ((-2 * (next_i()%2)) + 1) * next_i();
        pls[_i0].n_segments = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pls__i0__segments0 = 1;
          pls[_i0].segments = (struct segment **) malloc(_len_pls__i0__segments0*sizeof(struct segment *));
          for(int _j0 = 0; _j0 < _len_pls__i0__segments0; _j0++) {
            int _len_pls__i0__segments1 = 1;
            pls[_i0].segments[_j0] = (struct segment *) malloc(_len_pls__i0__segments1*sizeof(struct segment));
            for(int _j1 = 0; _j1 < _len_pls__i0__segments1; _j1++) {
              pls[_i0].segments[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct segment * benchRet = next_segment(pls);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_pls0; _aux++) {
          free(*(pls[_aux].segments));
        free(pls[_aux].segments);
          }
          free(pls);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pls0 = 100;
          struct playlist * pls = (struct playlist *) malloc(_len_pls0*sizeof(struct playlist));
          for(int _i0 = 0; _i0 < _len_pls0; _i0++) {
            pls[_i0].cur_seq_no = ((-2 * (next_i()%2)) + 1) * next_i();
        pls[_i0].start_seq_no = ((-2 * (next_i()%2)) + 1) * next_i();
        pls[_i0].n_segments = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pls__i0__segments0 = 1;
          pls[_i0].segments = (struct segment **) malloc(_len_pls__i0__segments0*sizeof(struct segment *));
          for(int _j0 = 0; _j0 < _len_pls__i0__segments0; _j0++) {
            int _len_pls__i0__segments1 = 1;
            pls[_i0].segments[_j0] = (struct segment *) malloc(_len_pls__i0__segments1*sizeof(struct segment));
            for(int _j1 = 0; _j1 < _len_pls__i0__segments1; _j1++) {
              pls[_i0].segments[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct segment * benchRet = next_segment(pls);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_pls0; _aux++) {
          free(*(pls[_aux].segments));
        free(pls[_aux].segments);
          }
          free(pls);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
