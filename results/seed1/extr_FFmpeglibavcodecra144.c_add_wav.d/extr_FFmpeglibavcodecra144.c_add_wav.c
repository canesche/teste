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
typedef  int int8_t ;
typedef  unsigned int int16_t ;

/* Variables and functions */
 int BLOCKSIZE ; 
 unsigned int* ff_gain_exp_tab ; 
 unsigned int** ff_gain_val_tab ; 

__attribute__((used)) static void add_wav(int16_t *dest, int n, int skip_first, int *m,
                    const int16_t *s1, const int8_t *s2, const int8_t *s3)
{
    int i;
    int v[3];

    v[0] = 0;
    for (i=!skip_first; i<3; i++)
        v[i] = (ff_gain_val_tab[n][i] * (unsigned)m[i]) >> ff_gain_exp_tab[n];

    if (v[0]) {
        for (i=0; i < BLOCKSIZE; i++)
            dest[i] = (int)((s1[i]*(unsigned)v[0]) + s2[i]*v[1] + s3[i]*v[2]) >> 12;
    } else {
        for (i=0; i < BLOCKSIZE; i++)
            dest[i] = (             s2[i]*v[1] + s3[i]*v[2]) >> 12;
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
          int n = 100;
          int skip_first = 100;
          int _len_dest0 = 1;
          unsigned int * dest = (unsigned int *) malloc(_len_dest0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m0 = 1;
          int * m = (int *) malloc(_len_m0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s10 = 1;
          const unsigned int * s1 = (const unsigned int *) malloc(_len_s10*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s20 = 1;
          const int * s2 = (const int *) malloc(_len_s20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s30 = 1;
          const int * s3 = (const int *) malloc(_len_s30*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_s30; _i0++) {
            s3[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_wav(dest,n,skip_first,m,s1,s2,s3);
          free(dest);
          free(m);
          free(s1);
          free(s2);
          free(s3);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int skip_first = 255;
          int _len_dest0 = 65025;
          unsigned int * dest = (unsigned int *) malloc(_len_dest0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m0 = 65025;
          int * m = (int *) malloc(_len_m0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s10 = 65025;
          const unsigned int * s1 = (const unsigned int *) malloc(_len_s10*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s20 = 65025;
          const int * s2 = (const int *) malloc(_len_s20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s30 = 65025;
          const int * s3 = (const int *) malloc(_len_s30*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_s30; _i0++) {
            s3[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_wav(dest,n,skip_first,m,s1,s2,s3);
          free(dest);
          free(m);
          free(s1);
          free(s2);
          free(s3);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int skip_first = 10;
          int _len_dest0 = 100;
          unsigned int * dest = (unsigned int *) malloc(_len_dest0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m0 = 100;
          int * m = (int *) malloc(_len_m0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s10 = 100;
          const unsigned int * s1 = (const unsigned int *) malloc(_len_s10*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s20 = 100;
          const int * s2 = (const int *) malloc(_len_s20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s30 = 100;
          const int * s3 = (const int *) malloc(_len_s30*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_s30; _i0++) {
            s3[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_wav(dest,n,skip_first,m,s1,s2,s3);
          free(dest);
          free(m);
          free(s1);
          free(s2);
          free(s3);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
