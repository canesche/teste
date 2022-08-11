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
struct sg_page_iter {unsigned int __nents; unsigned long sg_pgoffset; struct scatterlist* sg; scalar_t__ __pg_advance; } ;
struct scatterlist {int dummy; } ;

/* Variables and functions */

void __sg_page_iter_start(struct sg_page_iter *piter,
			  struct scatterlist *sglist, unsigned int nents,
			  unsigned long pgoffset)
{
	piter->__pg_advance = 0;
	piter->__nents = nents;

	piter->sg = sglist;
	piter->sg_pgoffset = pgoffset;
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
          unsigned int nents = 100;
          unsigned long pgoffset = 100;
          int _len_piter0 = 1;
          struct sg_page_iter * piter = (struct sg_page_iter *) malloc(_len_piter0*sizeof(struct sg_page_iter));
          for(int _i0 = 0; _i0 < _len_piter0; _i0++) {
            piter[_i0].__nents = ((-2 * (next_i()%2)) + 1) * next_i();
        piter[_i0].sg_pgoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_piter__i0__sg0 = 1;
          piter[_i0].sg = (struct scatterlist *) malloc(_len_piter__i0__sg0*sizeof(struct scatterlist));
          for(int _j0 = 0; _j0 < _len_piter__i0__sg0; _j0++) {
            piter[_i0].sg->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        piter[_i0].__pg_advance = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sglist0 = 1;
          struct scatterlist * sglist = (struct scatterlist *) malloc(_len_sglist0*sizeof(struct scatterlist));
          for(int _i0 = 0; _i0 < _len_sglist0; _i0++) {
            sglist[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __sg_page_iter_start(piter,sglist,nents,pgoffset);
          for(int _aux = 0; _aux < _len_piter0; _aux++) {
          free(piter[_aux].sg);
          }
          free(piter);
          free(sglist);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int nents = 255;
          unsigned long pgoffset = 255;
          int _len_piter0 = 65025;
          struct sg_page_iter * piter = (struct sg_page_iter *) malloc(_len_piter0*sizeof(struct sg_page_iter));
          for(int _i0 = 0; _i0 < _len_piter0; _i0++) {
            piter[_i0].__nents = ((-2 * (next_i()%2)) + 1) * next_i();
        piter[_i0].sg_pgoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_piter__i0__sg0 = 1;
          piter[_i0].sg = (struct scatterlist *) malloc(_len_piter__i0__sg0*sizeof(struct scatterlist));
          for(int _j0 = 0; _j0 < _len_piter__i0__sg0; _j0++) {
            piter[_i0].sg->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        piter[_i0].__pg_advance = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sglist0 = 65025;
          struct scatterlist * sglist = (struct scatterlist *) malloc(_len_sglist0*sizeof(struct scatterlist));
          for(int _i0 = 0; _i0 < _len_sglist0; _i0++) {
            sglist[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __sg_page_iter_start(piter,sglist,nents,pgoffset);
          for(int _aux = 0; _aux < _len_piter0; _aux++) {
          free(piter[_aux].sg);
          }
          free(piter);
          free(sglist);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int nents = 10;
          unsigned long pgoffset = 10;
          int _len_piter0 = 100;
          struct sg_page_iter * piter = (struct sg_page_iter *) malloc(_len_piter0*sizeof(struct sg_page_iter));
          for(int _i0 = 0; _i0 < _len_piter0; _i0++) {
            piter[_i0].__nents = ((-2 * (next_i()%2)) + 1) * next_i();
        piter[_i0].sg_pgoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_piter__i0__sg0 = 1;
          piter[_i0].sg = (struct scatterlist *) malloc(_len_piter__i0__sg0*sizeof(struct scatterlist));
          for(int _j0 = 0; _j0 < _len_piter__i0__sg0; _j0++) {
            piter[_i0].sg->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        piter[_i0].__pg_advance = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sglist0 = 100;
          struct scatterlist * sglist = (struct scatterlist *) malloc(_len_sglist0*sizeof(struct scatterlist));
          for(int _i0 = 0; _i0 < _len_sglist0; _i0++) {
            sglist[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __sg_page_iter_start(piter,sglist,nents,pgoffset);
          for(int _aux = 0; _aux < _len_piter0; _aux++) {
          free(piter[_aux].sg);
          }
          free(piter);
          free(sglist);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
