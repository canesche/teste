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
typedef  float** tcMod_t ;

/* Variables and functions */

void TCMod( tcMod_t mod, float st[ 2 ] ){
	float old[ 2 ];


	old[ 0 ] = st[ 0 ];
	old[ 1 ] = st[ 1 ];
	st[ 0 ] = ( mod[ 0 ][ 0 ] * old[ 0 ] ) + ( mod[ 0 ][ 1 ] * old[ 1 ] ) + mod[ 0 ][ 2 ];
	st[ 1 ] = ( mod[ 1 ][ 0 ] * old[ 0 ] ) + ( mod[ 1 ][ 1 ] * old[ 1 ] ) + mod[ 1 ][ 2 ];
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
          int _len_mod0 = 1;
          float ** mod = (float **) malloc(_len_mod0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_mod0; _i0++) {
            int _len_mod1 = 1;
            mod[_i0] = (float *) malloc(_len_mod1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_mod1; _i1++) {
              mod[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_st0 = 2;
          float * st = (float *) malloc(_len_st0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          TCMod(mod,st);
          for(int i1 = 0; i1 < _len_mod0; i1++) {
            int _len_mod1 = 1;
              free(mod[i1]);
          }
          free(mod);
          free(st);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mod0 = 65025;
          float ** mod = (float **) malloc(_len_mod0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_mod0; _i0++) {
            int _len_mod1 = 1;
            mod[_i0] = (float *) malloc(_len_mod1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_mod1; _i1++) {
              mod[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_st0 = 65025;
          float * st = (float *) malloc(_len_st0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          TCMod(mod,st);
          for(int i1 = 0; i1 < _len_mod0; i1++) {
            int _len_mod1 = 1;
              free(mod[i1]);
          }
          free(mod);
          free(st);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mod0 = 100;
          float ** mod = (float **) malloc(_len_mod0*sizeof(float *));
          for(int _i0 = 0; _i0 < _len_mod0; _i0++) {
            int _len_mod1 = 1;
            mod[_i0] = (float *) malloc(_len_mod1*sizeof(float));
            for(int _i1 = 0; _i1 < _len_mod1; _i1++) {
              mod[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          int _len_st0 = 100;
          float * st = (float *) malloc(_len_st0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          TCMod(mod,st);
          for(int i1 = 0; i1 < _len_mod0; i1++) {
            int _len_mod1 = 1;
              free(mod[i1]);
          }
          free(mod);
          free(st);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
