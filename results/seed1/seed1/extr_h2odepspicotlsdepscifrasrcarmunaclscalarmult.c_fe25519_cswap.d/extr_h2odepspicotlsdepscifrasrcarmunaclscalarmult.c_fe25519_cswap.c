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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int uint32 ;
typedef  int int32 ;
struct TYPE_4__ {int* as_uint32; } ;
typedef  TYPE_1__ fe25519 ;

/* Variables and functions */

__attribute__((used)) static void
fe25519_cswap(
    fe25519* in1,
    fe25519* in2,
    int      condition
)
{
    int32 mask = condition;
    uint32 ctr;

    mask = -mask;

    for (ctr = 0; ctr < 8; ctr++)
    {
    	uint32 val1 = in1->as_uint32[ctr];
    	uint32 val2 = in2->as_uint32[ctr];
    	uint32 temp = val1;

    	val1 ^= mask & (val2 ^ val1);
    	val2 ^= mask & (val2 ^ temp);


    	in1->as_uint32[ctr] = val1;
    	in2->as_uint32[ctr] = val2;
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
          int condition = 100;
          int _len_in10 = 1;
          struct TYPE_4__ * in1 = (struct TYPE_4__ *) malloc(_len_in10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_in10; _i0++) {
              int _len_in1__i0__as_uint320 = 1;
          in1[_i0].as_uint32 = (int *) malloc(_len_in1__i0__as_uint320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_in1__i0__as_uint320; _j0++) {
            in1[_i0].as_uint32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_in20 = 1;
          struct TYPE_4__ * in2 = (struct TYPE_4__ *) malloc(_len_in20*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_in20; _i0++) {
              int _len_in2__i0__as_uint320 = 1;
          in2[_i0].as_uint32 = (int *) malloc(_len_in2__i0__as_uint320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_in2__i0__as_uint320; _j0++) {
            in2[_i0].as_uint32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fe25519_cswap(in1,in2,condition);
          for(int _aux = 0; _aux < _len_in10; _aux++) {
          free(in1[_aux].as_uint32);
          }
          free(in1);
          for(int _aux = 0; _aux < _len_in20; _aux++) {
          free(in2[_aux].as_uint32);
          }
          free(in2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int condition = 255;
          int _len_in10 = 65025;
          struct TYPE_4__ * in1 = (struct TYPE_4__ *) malloc(_len_in10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_in10; _i0++) {
              int _len_in1__i0__as_uint320 = 1;
          in1[_i0].as_uint32 = (int *) malloc(_len_in1__i0__as_uint320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_in1__i0__as_uint320; _j0++) {
            in1[_i0].as_uint32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_in20 = 65025;
          struct TYPE_4__ * in2 = (struct TYPE_4__ *) malloc(_len_in20*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_in20; _i0++) {
              int _len_in2__i0__as_uint320 = 1;
          in2[_i0].as_uint32 = (int *) malloc(_len_in2__i0__as_uint320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_in2__i0__as_uint320; _j0++) {
            in2[_i0].as_uint32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fe25519_cswap(in1,in2,condition);
          for(int _aux = 0; _aux < _len_in10; _aux++) {
          free(in1[_aux].as_uint32);
          }
          free(in1);
          for(int _aux = 0; _aux < _len_in20; _aux++) {
          free(in2[_aux].as_uint32);
          }
          free(in2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int condition = 10;
          int _len_in10 = 100;
          struct TYPE_4__ * in1 = (struct TYPE_4__ *) malloc(_len_in10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_in10; _i0++) {
              int _len_in1__i0__as_uint320 = 1;
          in1[_i0].as_uint32 = (int *) malloc(_len_in1__i0__as_uint320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_in1__i0__as_uint320; _j0++) {
            in1[_i0].as_uint32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_in20 = 100;
          struct TYPE_4__ * in2 = (struct TYPE_4__ *) malloc(_len_in20*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_in20; _i0++) {
              int _len_in2__i0__as_uint320 = 1;
          in2[_i0].as_uint32 = (int *) malloc(_len_in2__i0__as_uint320*sizeof(int));
          for(int _j0 = 0; _j0 < _len_in2__i0__as_uint320; _j0++) {
            in2[_i0].as_uint32[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fe25519_cswap(in1,in2,condition);
          for(int _aux = 0; _aux < _len_in10; _aux++) {
          free(in1[_aux].as_uint32);
          }
          free(in1);
          for(int _aux = 0; _aux < _len_in20; _aux++) {
          free(in2[_aux].as_uint32);
          }
          free(in2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
