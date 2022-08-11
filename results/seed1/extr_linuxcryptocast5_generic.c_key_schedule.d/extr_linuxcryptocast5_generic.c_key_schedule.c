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
typedef  int u32 ;

/* Variables and functions */
 int* s5 ; 
 int* s6 ; 
 int* s7 ; 
 int* sb8 ; 

__attribute__((used)) static void key_schedule(u32 *x, u32 *z, u32 *k)
{

#define xi(i)   ((x[(i)/4] >> (8*(3-((i)%4)))) & 0xff)
#define zi(i)   ((z[(i)/4] >> (8*(3-((i)%4)))) & 0xff)

	z[0] = x[0] ^ s5[xi(13)] ^ s6[xi(15)] ^ s7[xi(12)] ^ sb8[xi(14)] ^
	    s7[xi(8)];
	z[1] = x[2] ^ s5[zi(0)] ^ s6[zi(2)] ^ s7[zi(1)] ^ sb8[zi(3)] ^
	    sb8[xi(10)];
	z[2] = x[3] ^ s5[zi(7)] ^ s6[zi(6)] ^ s7[zi(5)] ^ sb8[zi(4)] ^
	    s5[xi(9)];
	z[3] = x[1] ^ s5[zi(10)] ^ s6[zi(9)] ^ s7[zi(11)] ^ sb8[zi(8)] ^
	    s6[xi(11)];
	k[0] = s5[zi(8)] ^ s6[zi(9)] ^ s7[zi(7)] ^ sb8[zi(6)] ^ s5[zi(2)];
	k[1] = s5[zi(10)] ^ s6[zi(11)] ^ s7[zi(5)] ^ sb8[zi(4)] ^
	    s6[zi(6)];
	k[2] = s5[zi(12)] ^ s6[zi(13)] ^ s7[zi(3)] ^ sb8[zi(2)] ^
	    s7[zi(9)];
	k[3] = s5[zi(14)] ^ s6[zi(15)] ^ s7[zi(1)] ^ sb8[zi(0)] ^
	    sb8[zi(12)];

	x[0] = z[2] ^ s5[zi(5)] ^ s6[zi(7)] ^ s7[zi(4)] ^ sb8[zi(6)] ^
	    s7[zi(0)];
	x[1] = z[0] ^ s5[xi(0)] ^ s6[xi(2)] ^ s7[xi(1)] ^ sb8[xi(3)] ^
	    sb8[zi(2)];
	x[2] = z[1] ^ s5[xi(7)] ^ s6[xi(6)] ^ s7[xi(5)] ^ sb8[xi(4)] ^
	    s5[zi(1)];
	x[3] = z[3] ^ s5[xi(10)] ^ s6[xi(9)] ^ s7[xi(11)] ^ sb8[xi(8)] ^
	    s6[zi(3)];
	k[4] = s5[xi(3)] ^ s6[xi(2)] ^ s7[xi(12)] ^ sb8[xi(13)] ^
	    s5[xi(8)];
	k[5] = s5[xi(1)] ^ s6[xi(0)] ^ s7[xi(14)] ^ sb8[xi(15)] ^
	    s6[xi(13)];
	k[6] = s5[xi(7)] ^ s6[xi(6)] ^ s7[xi(8)] ^ sb8[xi(9)] ^ s7[xi(3)];
	k[7] = s5[xi(5)] ^ s6[xi(4)] ^ s7[xi(10)] ^ sb8[xi(11)] ^
	    sb8[xi(7)];

	z[0] = x[0] ^ s5[xi(13)] ^ s6[xi(15)] ^ s7[xi(12)] ^ sb8[xi(14)] ^
	    s7[xi(8)];
	z[1] = x[2] ^ s5[zi(0)] ^ s6[zi(2)] ^ s7[zi(1)] ^ sb8[zi(3)] ^
	    sb8[xi(10)];
	z[2] = x[3] ^ s5[zi(7)] ^ s6[zi(6)] ^ s7[zi(5)] ^ sb8[zi(4)] ^
	    s5[xi(9)];
	z[3] = x[1] ^ s5[zi(10)] ^ s6[zi(9)] ^ s7[zi(11)] ^ sb8[zi(8)] ^
	    s6[xi(11)];
	k[8] = s5[zi(3)] ^ s6[zi(2)] ^ s7[zi(12)] ^ sb8[zi(13)] ^
	    s5[zi(9)];
	k[9] = s5[zi(1)] ^ s6[zi(0)] ^ s7[zi(14)] ^ sb8[zi(15)] ^
	    s6[zi(12)];
	k[10] = s5[zi(7)] ^ s6[zi(6)] ^ s7[zi(8)] ^ sb8[zi(9)] ^ s7[zi(2)];
	k[11] = s5[zi(5)] ^ s6[zi(4)] ^ s7[zi(10)] ^ sb8[zi(11)] ^
	    sb8[zi(6)];

	x[0] = z[2] ^ s5[zi(5)] ^ s6[zi(7)] ^ s7[zi(4)] ^ sb8[zi(6)] ^
	    s7[zi(0)];
	x[1] = z[0] ^ s5[xi(0)] ^ s6[xi(2)] ^ s7[xi(1)] ^ sb8[xi(3)] ^
	    sb8[zi(2)];
	x[2] = z[1] ^ s5[xi(7)] ^ s6[xi(6)] ^ s7[xi(5)] ^ sb8[xi(4)] ^
	    s5[zi(1)];
	x[3] = z[3] ^ s5[xi(10)] ^ s6[xi(9)] ^ s7[xi(11)] ^ sb8[xi(8)] ^
	    s6[zi(3)];
	k[12] = s5[xi(8)] ^ s6[xi(9)] ^ s7[xi(7)] ^ sb8[xi(6)] ^ s5[xi(3)];
	k[13] = s5[xi(10)] ^ s6[xi(11)] ^ s7[xi(5)] ^ sb8[xi(4)] ^
	    s6[xi(7)];
	k[14] = s5[xi(12)] ^ s6[xi(13)] ^ s7[xi(3)] ^ sb8[xi(2)] ^
	    s7[xi(8)];
	k[15] = s5[xi(14)] ^ s6[xi(15)] ^ s7[xi(1)] ^ sb8[xi(0)] ^
	    sb8[xi(13)];

#undef xi
#undef zi
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
          int _len_x0 = 1;
          int * x = (int *) malloc(_len_x0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_z0 = 1;
          int * z = (int *) malloc(_len_z0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_z0; _i0++) {
            z[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k0 = 1;
          int * k = (int *) malloc(_len_k0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_k0; _i0++) {
            k[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          key_schedule(x,z,k);
          free(x);
          free(z);
          free(k);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_x0 = 65025;
          int * x = (int *) malloc(_len_x0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_z0 = 65025;
          int * z = (int *) malloc(_len_z0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_z0; _i0++) {
            z[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k0 = 65025;
          int * k = (int *) malloc(_len_k0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_k0; _i0++) {
            k[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          key_schedule(x,z,k);
          free(x);
          free(z);
          free(k);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_x0 = 100;
          int * x = (int *) malloc(_len_x0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_z0 = 100;
          int * z = (int *) malloc(_len_z0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_z0; _i0++) {
            z[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_k0 = 100;
          int * k = (int *) malloc(_len_k0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_k0; _i0++) {
            k[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          key_schedule(x,z,k);
          free(x);
          free(z);
          free(k);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
