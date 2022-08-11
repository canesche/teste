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
struct TYPE_3__ {int /*<<< orphan*/  i; int /*<<< orphan*/  r; } ;
typedef  TYPE_1__ doublecomplex ;

/* Variables and functions */

int zlaswp_(integer *n, doublecomplex *a, integer *lda,
	integer *k1, integer *k2, integer *ipiv, integer *incx)
{
    /* System generated locals */
    integer a_dim1, a_offset, i__1, i__2, i__3, i__4, i__5, i__6;

    /* Local variables */
    static integer i__, j, k, i1, i2, n32, ip, ix, ix0, inc;
    static doublecomplex temp;


/*
    -- LAPACK auxiliary routine (version 3.2) --
    -- LAPACK is a software package provided by Univ. of Tennessee,    --
    -- Univ. of California Berkeley, Univ. of Colorado Denver and NAG Ltd..--
       November 2006


    Purpose
    =======

    ZLASWP performs a series of row interchanges on the matrix A.
    One row interchange is initiated for each of rows K1 through K2 of A.

    Arguments
    =========

    N       (input) INTEGER
            The number of columns of the matrix A.

    A       (input/output) COMPLEX*16 array, dimension (LDA,N)
            On entry, the matrix of column dimension N to which the row
            interchanges will be applied.
            On exit, the permuted matrix.

    LDA     (input) INTEGER
            The leading dimension of the array A.

    K1      (input) INTEGER
            The first element of IPIV for which a row interchange will
            be done.

    K2      (input) INTEGER
            The last element of IPIV for which a row interchange will
            be done.

    IPIV    (input) INTEGER array, dimension (K2*abs(INCX))
            The vector of pivot indices.  Only the elements in positions
            K1 through K2 of IPIV are accessed.
            IPIV(K) = L implies rows K and L are to be interchanged.

    INCX    (input) INTEGER
            The increment between successive values of IPIV.  If IPIV
            is negative, the pivots are applied in reverse order.

    Further Details
    ===============

    Modified by
     R. C. Whaley, Computer Science Dept., Univ. of Tenn., Knoxville, USA

   =====================================================================


       Interchange row I with row IPIV(I) for each of rows K1 through K2.
*/

    /* Parameter adjustments */
    a_dim1 = *lda;
    a_offset = 1 + a_dim1;
    a -= a_offset;
    --ipiv;

    /* Function Body */
    if (*incx > 0) {
	ix0 = *k1;
	i1 = *k1;
	i2 = *k2;
	inc = 1;
    } else if (*incx < 0) {
	ix0 = (1 - *k2) * *incx + 1;
	i1 = *k2;
	i2 = *k1;
	inc = -1;
    } else {
	return 0;
    }

    n32 = *n / 32 << 5;
    if (n32 != 0) {
	i__1 = n32;
	for (j = 1; j <= i__1; j += 32) {
	    ix = ix0;
	    i__2 = i2;
	    i__3 = inc;
	    for (i__ = i1; i__3 < 0 ? i__ >= i__2 : i__ <= i__2; i__ += i__3)
		    {
		ip = ipiv[ix];
		if (ip != i__) {
		    i__4 = j + 31;
		    for (k = j; k <= i__4; ++k) {
			i__5 = i__ + k * a_dim1;
			temp.r = a[i__5].r, temp.i = a[i__5].i;
			i__5 = i__ + k * a_dim1;
			i__6 = ip + k * a_dim1;
			a[i__5].r = a[i__6].r, a[i__5].i = a[i__6].i;
			i__5 = ip + k * a_dim1;
			a[i__5].r = temp.r, a[i__5].i = temp.i;
/* L10: */
		    }
		}
		ix += *incx;
/* L20: */
	    }
/* L30: */
	}
    }
    if (n32 != *n) {
	++n32;
	ix = ix0;
	i__1 = i2;
	i__3 = inc;
	for (i__ = i1; i__3 < 0 ? i__ >= i__1 : i__ <= i__1; i__ += i__3) {
	    ip = ipiv[ix];
	    if (ip != i__) {
		i__2 = *n;
		for (k = n32; k <= i__2; ++k) {
		    i__4 = i__ + k * a_dim1;
		    temp.r = a[i__4].r, temp.i = a[i__4].i;
		    i__4 = i__ + k * a_dim1;
		    i__5 = ip + k * a_dim1;
		    a[i__4].r = a[i__5].r, a[i__4].i = a[i__5].i;
		    i__4 = ip + k * a_dim1;
		    a[i__4].r = temp.r, a[i__4].i = temp.i;
/* L40: */
		}
	    }
	    ix += *incx;
/* L50: */
	}
    }

    return 0;

/*     End of ZLASWP */

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
          int _len_n0 = 1;
          int * n = (int *) malloc(_len_n0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a0 = 1;
          struct TYPE_3__ * a = (struct TYPE_3__ *) malloc(_len_a0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lda0 = 1;
          int * lda = (int *) malloc(_len_lda0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lda0; _i0++) {
            lda[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k10 = 1;
          int * k1 = (int *) malloc(_len_k10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_k10; _i0++) {
            k1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k20 = 1;
          int * k2 = (int *) malloc(_len_k20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_k20; _i0++) {
            k2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ipiv0 = 1;
          int * ipiv = (int *) malloc(_len_ipiv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ipiv0; _i0++) {
            ipiv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_incx0 = 1;
          int * incx = (int *) malloc(_len_incx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incx0; _i0++) {
            incx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = zlaswp_(n,a,lda,k1,k2,ipiv,incx);
          printf("%d\n", benchRet); 
          free(n);
          free(a);
          free(lda);
          free(k1);
          free(k2);
          free(ipiv);
          free(incx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_n0 = 65025;
          int * n = (int *) malloc(_len_n0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a0 = 65025;
          struct TYPE_3__ * a = (struct TYPE_3__ *) malloc(_len_a0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lda0 = 65025;
          int * lda = (int *) malloc(_len_lda0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lda0; _i0++) {
            lda[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k10 = 65025;
          int * k1 = (int *) malloc(_len_k10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_k10; _i0++) {
            k1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k20 = 65025;
          int * k2 = (int *) malloc(_len_k20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_k20; _i0++) {
            k2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ipiv0 = 65025;
          int * ipiv = (int *) malloc(_len_ipiv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ipiv0; _i0++) {
            ipiv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_incx0 = 65025;
          int * incx = (int *) malloc(_len_incx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incx0; _i0++) {
            incx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = zlaswp_(n,a,lda,k1,k2,ipiv,incx);
          printf("%d\n", benchRet); 
          free(n);
          free(a);
          free(lda);
          free(k1);
          free(k2);
          free(ipiv);
          free(incx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_n0 = 100;
          int * n = (int *) malloc(_len_n0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a0 = 100;
          struct TYPE_3__ * a = (struct TYPE_3__ *) malloc(_len_a0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lda0 = 100;
          int * lda = (int *) malloc(_len_lda0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lda0; _i0++) {
            lda[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k10 = 100;
          int * k1 = (int *) malloc(_len_k10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_k10; _i0++) {
            k1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k20 = 100;
          int * k2 = (int *) malloc(_len_k20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_k20; _i0++) {
            k2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ipiv0 = 100;
          int * ipiv = (int *) malloc(_len_ipiv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ipiv0; _i0++) {
            ipiv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_incx0 = 100;
          int * incx = (int *) malloc(_len_incx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incx0; _i0++) {
            incx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = zlaswp_(n,a,lda,k1,k2,ipiv,incx);
          printf("%d\n", benchRet); 
          free(n);
          free(a);
          free(lda);
          free(k1);
          free(k2);
          free(ipiv);
          free(incx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
