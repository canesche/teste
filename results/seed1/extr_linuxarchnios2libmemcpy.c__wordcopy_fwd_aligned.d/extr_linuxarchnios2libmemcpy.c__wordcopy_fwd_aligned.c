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
typedef  int /*<<< orphan*/  op_t ;

/* Variables and functions */
 int OPSIZ ; 

__attribute__((used)) static void _wordcopy_fwd_aligned(long int dstp, long int srcp, size_t len)
{
	while (len > 7) {
		register op_t a0, a1, a2, a3, a4, a5, a6, a7;

		a0 = ((op_t *) srcp)[0];
		a1 = ((op_t *) srcp)[1];
		a2 = ((op_t *) srcp)[2];
		a3 = ((op_t *) srcp)[3];
		a4 = ((op_t *) srcp)[4];
		a5 = ((op_t *) srcp)[5];
		a6 = ((op_t *) srcp)[6];
		a7 = ((op_t *) srcp)[7];
		((op_t *) dstp)[0] = a0;
		((op_t *) dstp)[1] = a1;
		((op_t *) dstp)[2] = a2;
		((op_t *) dstp)[3] = a3;
		((op_t *) dstp)[4] = a4;
		((op_t *) dstp)[5] = a5;
		((op_t *) dstp)[6] = a6;
		((op_t *) dstp)[7] = a7;

		srcp += 8 * OPSIZ;
		dstp += 8 * OPSIZ;
		len -= 8;
	}
	while (len > 0) {
		*(op_t *)dstp = *(op_t *)srcp;

		srcp += OPSIZ;
		dstp += OPSIZ;
		len -= 1;
	}
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
          long dstp = 100;
          long srcp = 100;
          unsigned long len = 100;
          _wordcopy_fwd_aligned(dstp,srcp,len);
        
        break;
    }
    // big-arr
    case 1:
    {
          long dstp = 255;
          long srcp = 255;
          unsigned long len = 255;
          _wordcopy_fwd_aligned(dstp,srcp,len);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long dstp = 10;
          long srcp = 10;
          unsigned long len = 10;
          _wordcopy_fwd_aligned(dstp,srcp,len);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
