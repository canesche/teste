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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int integer ;
struct TYPE_3__ {int r; int i; } ;
typedef  TYPE_1__ doublecomplex ;

/* Variables and functions */

integer ilazlc_(integer *m, integer *n, doublecomplex *a, integer *lda)
{
    /* System generated locals */
    integer a_dim1, a_offset, ret_val, i__1, i__2;

    /* Local variables */
    static integer i__;


/*
    -- LAPACK auxiliary routine (version 3.2.2)                        --

    -- June 2010                                                       --

    -- LAPACK is a software package provided by Univ. of Tennessee,    --
    -- Univ. of California Berkeley, Univ. of Colorado Denver and NAG Ltd..--


    Purpose
    =======

    ILAZLC scans A for its last non-zero column.

    Arguments
    =========

    M       (input) INTEGER
            The number of rows of the matrix A.

    N       (input) INTEGER
            The number of columns of the matrix A.

    A       (input) COMPLEX*16 array, dimension (LDA,N)
            The m by n matrix A.

    LDA     (input) INTEGER
            The leading dimension of the array A. LDA >= max(1,M).

    =====================================================================


       Quick test for the common case where one corner is non-zero.
*/
    /* Parameter adjustments */
    a_dim1 = *lda;
    a_offset = 1 + a_dim1;
    a -= a_offset;

    /* Function Body */
    if (*n == 0) {
	ret_val = *n;
    } else /* if(complicated condition) */ {
	i__1 = *n * a_dim1 + 1;
	i__2 = *m + *n * a_dim1;
	if (a[i__1].r != 0. || a[i__1].i != 0. || (a[i__2].r != 0. || a[i__2]
		.i != 0.)) {
	    ret_val = *n;
	} else {
/*     Now scan each column from the end, returning with the first non-zero. */
	    for (ret_val = *n; ret_val >= 1; --ret_val) {
		i__1 = *m;
		for (i__ = 1; i__ <= i__1; ++i__) {
		    i__2 = i__ + ret_val * a_dim1;
		    if (a[i__2].r != 0. || a[i__2].i != 0.) {
			return ret_val;
		    }
		}
	    }
	}
    }
    return ret_val;
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
          int _len_m0 = 1;
          int * m = (int *) malloc(_len_m0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_n0 = 1;
          int * n = (int *) malloc(_len_n0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a0 = 1;
          struct TYPE_3__ * a = (struct TYPE_3__ *) malloc(_len_a0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lda0 = 1;
          int * lda = (int *) malloc(_len_lda0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lda0; _i0++) {
            lda[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ilazlc_(m,n,a,lda);
          printf("%d\n", benchRet); 
          free(m);
          free(n);
          free(a);
          free(lda);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_m0 = 65025;
          int * m = (int *) malloc(_len_m0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_n0 = 65025;
          int * n = (int *) malloc(_len_n0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a0 = 65025;
          struct TYPE_3__ * a = (struct TYPE_3__ *) malloc(_len_a0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lda0 = 65025;
          int * lda = (int *) malloc(_len_lda0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lda0; _i0++) {
            lda[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ilazlc_(m,n,a,lda);
          printf("%d\n", benchRet); 
          free(m);
          free(n);
          free(a);
          free(lda);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_m0 = 100;
          int * m = (int *) malloc(_len_m0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_n0 = 100;
          int * n = (int *) malloc(_len_n0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a0 = 100;
          struct TYPE_3__ * a = (struct TYPE_3__ *) malloc(_len_a0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lda0 = 100;
          int * lda = (int *) malloc(_len_lda0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lda0; _i0++) {
            lda[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ilazlc_(m,n,a,lda);
          printf("%d\n", benchRet); 
          free(m);
          free(n);
          free(a);
          free(lda);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
