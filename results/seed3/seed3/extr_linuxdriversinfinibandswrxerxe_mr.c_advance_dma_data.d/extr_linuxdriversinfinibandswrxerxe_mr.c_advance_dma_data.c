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
struct rxe_sge {int length; } ;
struct rxe_dma_info {size_t cur_sge; int sge_offset; int resid; size_t num_sge; struct rxe_sge* sge; } ;

/* Variables and functions */
 int ENOSPC ; 

int advance_dma_data(struct rxe_dma_info *dma, unsigned int length)
{
	struct rxe_sge		*sge	= &dma->sge[dma->cur_sge];
	int			offset	= dma->sge_offset;
	int			resid	= dma->resid;

	while (length) {
		unsigned int bytes;

		if (offset >= sge->length) {
			sge++;
			dma->cur_sge++;
			offset = 0;
			if (dma->cur_sge >= dma->num_sge)
				return -ENOSPC;
		}

		bytes = length;

		if (bytes > sge->length - offset)
			bytes = sge->length - offset;

		offset	+= bytes;
		resid	-= bytes;
		length	-= bytes;
	}

	dma->sge_offset = offset;
	dma->resid	= resid;

	return 0;
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
          unsigned int length = 100;
          int _len_dma0 = 1;
          struct rxe_dma_info * dma = (struct rxe_dma_info *) malloc(_len_dma0*sizeof(struct rxe_dma_info));
          for(int _i0 = 0; _i0 < _len_dma0; _i0++) {
            dma[_i0].cur_sge = ((-2 * (next_i()%2)) + 1) * next_i();
        dma[_i0].sge_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dma[_i0].resid = ((-2 * (next_i()%2)) + 1) * next_i();
        dma[_i0].num_sge = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dma__i0__sge0 = 1;
          dma[_i0].sge = (struct rxe_sge *) malloc(_len_dma__i0__sge0*sizeof(struct rxe_sge));
          for(int _j0 = 0; _j0 < _len_dma__i0__sge0; _j0++) {
            dma[_i0].sge->length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = advance_dma_data(dma,length);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dma0; _aux++) {
          free(dma[_aux].sge);
          }
          free(dma);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int length = 255;
          int _len_dma0 = 65025;
          struct rxe_dma_info * dma = (struct rxe_dma_info *) malloc(_len_dma0*sizeof(struct rxe_dma_info));
          for(int _i0 = 0; _i0 < _len_dma0; _i0++) {
            dma[_i0].cur_sge = ((-2 * (next_i()%2)) + 1) * next_i();
        dma[_i0].sge_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dma[_i0].resid = ((-2 * (next_i()%2)) + 1) * next_i();
        dma[_i0].num_sge = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dma__i0__sge0 = 1;
          dma[_i0].sge = (struct rxe_sge *) malloc(_len_dma__i0__sge0*sizeof(struct rxe_sge));
          for(int _j0 = 0; _j0 < _len_dma__i0__sge0; _j0++) {
            dma[_i0].sge->length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = advance_dma_data(dma,length);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dma0; _aux++) {
          free(dma[_aux].sge);
          }
          free(dma);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int length = 10;
          int _len_dma0 = 100;
          struct rxe_dma_info * dma = (struct rxe_dma_info *) malloc(_len_dma0*sizeof(struct rxe_dma_info));
          for(int _i0 = 0; _i0 < _len_dma0; _i0++) {
            dma[_i0].cur_sge = ((-2 * (next_i()%2)) + 1) * next_i();
        dma[_i0].sge_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dma[_i0].resid = ((-2 * (next_i()%2)) + 1) * next_i();
        dma[_i0].num_sge = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dma__i0__sge0 = 1;
          dma[_i0].sge = (struct rxe_sge *) malloc(_len_dma__i0__sge0*sizeof(struct rxe_sge));
          for(int _j0 = 0; _j0 < _len_dma__i0__sge0; _j0++) {
            dma[_i0].sge->length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = advance_dma_data(dma,length);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dma0; _aux++) {
          free(dma[_aux].sge);
          }
          free(dma);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
