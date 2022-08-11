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
typedef  int /*<<< orphan*/ * picoVec3_t ;

/* Variables and functions */
 unsigned int HASHTABLE_SIZE ; 

unsigned int PicoVertexCoordGenerateHash( picoVec3_t xyz ){
	unsigned int hash = 0;

#ifndef HASH_USE_EPSILON
	hash += ~( *( (unsigned int*) &xyz[ 0 ] ) << 15 );
	hash ^= ( *( (unsigned int*) &xyz[ 0 ] ) >> 10 );
	hash += ( *( (unsigned int*) &xyz[ 1 ] ) << 3 );
	hash ^= ( *( (unsigned int*) &xyz[ 1 ] ) >> 6 );
	hash += ~( *( (unsigned int*) &xyz[ 2 ] ) << 11 );
	hash ^= ( *( (unsigned int*) &xyz[ 2 ] ) >> 16 );
#else
	picoVec3_t xyz_epsilonspace;

	_pico_scale_vec( xyz, HASH_XYZ_EPSILONSPACE_MULTIPLIER, xyz_epsilonspace );
	xyz_epsilonspace[ 0 ] = (float)floor( xyz_epsilonspace[ 0 ] );
	xyz_epsilonspace[ 1 ] = (float)floor( xyz_epsilonspace[ 1 ] );
	xyz_epsilonspace[ 2 ] = (float)floor( xyz_epsilonspace[ 2 ] );

	hash += ~( *( (unsigned int*) &xyz_epsilonspace[ 0 ] ) << 15 );
	hash ^= ( *( (unsigned int*) &xyz_epsilonspace[ 0 ] ) >> 10 );
	hash += ( *( (unsigned int*) &xyz_epsilonspace[ 1 ] ) << 3 );
	hash ^= ( *( (unsigned int*) &xyz_epsilonspace[ 1 ] ) >> 6 );
	hash += ~( *( (unsigned int*) &xyz_epsilonspace[ 2 ] ) << 11 );
	hash ^= ( *( (unsigned int*) &xyz_epsilonspace[ 2 ] ) >> 16 );
#endif

	//hash = hash & (HASHTABLE_SIZE-1);
	hash = hash % ( HASHTABLE_SIZE );
	return hash;
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
          int _len_xyz0 = 1;
          int * xyz = (int *) malloc(_len_xyz0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_xyz0; _i0++) {
            xyz[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = PicoVertexCoordGenerateHash(xyz);
          printf("%u\n", benchRet); 
          free(xyz);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_xyz0 = 65025;
          int * xyz = (int *) malloc(_len_xyz0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_xyz0; _i0++) {
            xyz[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = PicoVertexCoordGenerateHash(xyz);
          printf("%u\n", benchRet); 
          free(xyz);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_xyz0 = 100;
          int * xyz = (int *) malloc(_len_xyz0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_xyz0; _i0++) {
            xyz[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = PicoVertexCoordGenerateHash(xyz);
          printf("%u\n", benchRet); 
          free(xyz);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
