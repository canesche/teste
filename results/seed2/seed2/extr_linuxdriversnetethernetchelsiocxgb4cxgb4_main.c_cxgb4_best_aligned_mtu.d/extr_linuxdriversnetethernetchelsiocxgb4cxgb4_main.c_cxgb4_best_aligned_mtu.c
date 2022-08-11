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

/* Variables and functions */
 int NMTUS ; 

unsigned int cxgb4_best_aligned_mtu(const unsigned short *mtus,
				    unsigned short header_size,
				    unsigned short data_size_max,
				    unsigned short data_size_align,
				    unsigned int *mtu_idxp)
{
	unsigned short max_mtu = header_size + data_size_max;
	unsigned short data_size_align_mask = data_size_align - 1;
	int mtu_idx, aligned_mtu_idx;

	/* Scan the MTU Table till we find an MTU which is larger than our
	 * Maximum MTU or we reach the end of the table.  Along the way,
	 * record the last MTU found, if any, which will result in a Data
	 * Segment Length matching the requested alignment.
	 */
	for (mtu_idx = 0, aligned_mtu_idx = -1; mtu_idx < NMTUS; mtu_idx++) {
		unsigned short data_size = mtus[mtu_idx] - header_size;

		/* If this MTU minus the Header Size would result in a
		 * Data Segment Size of the desired alignment, remember it.
		 */
		if ((data_size & data_size_align_mask) == 0)
			aligned_mtu_idx = mtu_idx;

		/* If we're not at the end of the Hardware MTU Table and the
		 * next element is larger than our Maximum MTU, drop out of
		 * the loop.
		 */
		if (mtu_idx+1 < NMTUS && mtus[mtu_idx+1] > max_mtu)
			break;
	}

	/* If we fell out of the loop because we ran to the end of the table,
	 * then we just have to use the last [largest] entry.
	 */
	if (mtu_idx == NMTUS)
		mtu_idx--;

	/* If we found an MTU which resulted in the requested Data Segment
	 * Length alignment and that's "not far" from the largest MTU which is
	 * less than or equal to the maximum MTU, then use that.
	 */
	if (aligned_mtu_idx >= 0 &&
	    mtu_idx - aligned_mtu_idx <= 1)
		mtu_idx = aligned_mtu_idx;

	/* If the caller has passed in an MTU Index pointer, pass the
	 * MTU Index back.  Return the MTU value.
	 */
	if (mtu_idxp)
		*mtu_idxp = mtu_idx;
	return mtus[mtu_idx];
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
          unsigned short header_size = 100;
          unsigned short data_size_max = 100;
          unsigned short data_size_align = 100;
          int _len_mtus0 = 1;
          const unsigned short * mtus = (const unsigned short *) malloc(_len_mtus0*sizeof(const unsigned short));
          for(int _i0 = 0; _i0 < _len_mtus0; _i0++) {
            mtus[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mtu_idxp0 = 1;
          unsigned int * mtu_idxp = (unsigned int *) malloc(_len_mtu_idxp0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_mtu_idxp0; _i0++) {
            mtu_idxp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = cxgb4_best_aligned_mtu(mtus,header_size,data_size_max,data_size_align,mtu_idxp);
          printf("%u\n", benchRet); 
          free(mtus);
          free(mtu_idxp);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned short header_size = 255;
          unsigned short data_size_max = 255;
          unsigned short data_size_align = 255;
          int _len_mtus0 = 65025;
          const unsigned short * mtus = (const unsigned short *) malloc(_len_mtus0*sizeof(const unsigned short));
          for(int _i0 = 0; _i0 < _len_mtus0; _i0++) {
            mtus[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mtu_idxp0 = 65025;
          unsigned int * mtu_idxp = (unsigned int *) malloc(_len_mtu_idxp0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_mtu_idxp0; _i0++) {
            mtu_idxp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = cxgb4_best_aligned_mtu(mtus,header_size,data_size_max,data_size_align,mtu_idxp);
          printf("%u\n", benchRet); 
          free(mtus);
          free(mtu_idxp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned short header_size = 10;
          unsigned short data_size_max = 10;
          unsigned short data_size_align = 10;
          int _len_mtus0 = 100;
          const unsigned short * mtus = (const unsigned short *) malloc(_len_mtus0*sizeof(const unsigned short));
          for(int _i0 = 0; _i0 < _len_mtus0; _i0++) {
            mtus[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mtu_idxp0 = 100;
          unsigned int * mtu_idxp = (unsigned int *) malloc(_len_mtu_idxp0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_mtu_idxp0; _i0++) {
            mtu_idxp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = cxgb4_best_aligned_mtu(mtus,header_size,data_size_max,data_size_align,mtu_idxp);
          printf("%u\n", benchRet); 
          free(mtus);
          free(mtu_idxp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
