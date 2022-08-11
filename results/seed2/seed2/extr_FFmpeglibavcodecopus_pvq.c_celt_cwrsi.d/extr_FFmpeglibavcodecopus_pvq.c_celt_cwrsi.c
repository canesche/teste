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
typedef  int uint64_t ;
typedef  int uint32_t ;

/* Variables and functions */
 int** ff_celt_pvq_u_row ; 

__attribute__((used)) static inline uint64_t celt_cwrsi(uint32_t N, uint32_t K, uint32_t i, int *y)
{
    uint64_t norm = 0;
    uint32_t q, p;
    int s, val;
    int k0;

    while (N > 2) {
        /*Lots of pulses case:*/
        if (K >= N) {
            const uint32_t *row = ff_celt_pvq_u_row[N];

            /* Are the pulses in this dimension negative? */
            p  = row[K + 1];
            s  = -(i >= p);
            i -= p & s;

            /*Count how many pulses were placed in this dimension.*/
            k0 = K;
            q = row[N];
            if (q > i) {
                K = N;
                do {
                    p = ff_celt_pvq_u_row[--K][N];
                } while (p > i);
            } else
                for (p = row[K]; p > i; p = row[K])
                    K--;

            i    -= p;
            val   = (k0 - K + s) ^ s;
            norm += val * val;
            *y++  = val;
        } else { /*Lots of dimensions case:*/
            /*Are there any pulses in this dimension at all?*/
            p = ff_celt_pvq_u_row[K    ][N];
            q = ff_celt_pvq_u_row[K + 1][N];

            if (p <= i && i < q) {
                i -= p;
                *y++ = 0;
            } else {
                /*Are the pulses in this dimension negative?*/
                s  = -(i >= q);
                i -= q & s;

                /*Count how many pulses were placed in this dimension.*/
                k0 = K;
                do p = ff_celt_pvq_u_row[--K][N];
                while (p > i);

                i    -= p;
                val   = (k0 - K + s) ^ s;
                norm += val * val;
                *y++  = val;
            }
        }
        N--;
    }

    /* N == 2 */
    p  = 2 * K + 1;
    s  = -(i >= p);
    i -= p & s;
    k0 = K;
    K  = (i + 1) / 2;

    if (K)
        i -= 2 * K - 1;

    val   = (k0 - K + s) ^ s;
    norm += val * val;
    *y++  = val;

    /* N==1 */
    s     = -i;
    val   = (K + s) ^ s;
    norm += val * val;
    *y    = val;

    return norm;
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
          int N = 100;
          int K = 100;
          int i = 100;
          int _len_y0 = 1;
          int * y = (int *) malloc(_len_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = celt_cwrsi(N,K,i,y);
          printf("%d\n", benchRet); 
          free(y);
        
        break;
    }
    // big-arr
    case 1:
    {
          int N = 255;
          int K = 255;
          int i = 255;
          int _len_y0 = 65025;
          int * y = (int *) malloc(_len_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = celt_cwrsi(N,K,i,y);
          printf("%d\n", benchRet); 
          free(y);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int N = 10;
          int K = 10;
          int i = 10;
          int _len_y0 = 100;
          int * y = (int *) malloc(_len_y0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = celt_cwrsi(N,K,i,y);
          printf("%d\n", benchRet); 
          free(y);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
