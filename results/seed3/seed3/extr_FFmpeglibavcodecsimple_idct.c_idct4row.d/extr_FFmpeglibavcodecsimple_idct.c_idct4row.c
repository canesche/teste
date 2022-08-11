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
typedef  int int16_t ;

/* Variables and functions */
 int R1 ; 
 int R2 ; 
 int R3 ; 
 int R_SHIFT ; 

__attribute__((used)) static inline void idct4row(int16_t *row)
{
    int c0, c1, c2, c3, a0, a1, a2, a3;

    a0 = row[0];
    a1 = row[1];
    a2 = row[2];
    a3 = row[3];
    c0 = (a0 + a2)*R3 + (1 << (R_SHIFT - 1));
    c2 = (a0 - a2)*R3 + (1 << (R_SHIFT - 1));
    c1 = a1 * R1 + a3 * R2;
    c3 = a1 * R2 - a3 * R1;
    row[0]= (c0 + c1) >> R_SHIFT;
    row[1]= (c2 + c3) >> R_SHIFT;
    row[2]= (c2 - c3) >> R_SHIFT;
    row[3]= (c0 - c1) >> R_SHIFT;
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
          int _len_row0 = 1;
          int * row = (int *) malloc(_len_row0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_row0; _i0++) {
            row[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          idct4row(row);
          free(row);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_row0 = 65025;
          int * row = (int *) malloc(_len_row0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_row0; _i0++) {
            row[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          idct4row(row);
          free(row);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_row0 = 100;
          int * row = (int *) malloc(_len_row0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_row0; _i0++) {
            row[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          idct4row(row);
          free(row);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
