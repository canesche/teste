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
typedef  int /*<<< orphan*/  uint8_t ;

/* Variables and functions */

__attribute__((used)) static inline void put16(uint8_t **q_ptr, int val)
{
    uint8_t *q;
    q      = *q_ptr;
    *q++   = val >> 8;
    *q++   = val;
    *q_ptr = q;
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
          int val = 100;
          int _len_q_ptr0 = 1;
          int ** q_ptr = (int **) malloc(_len_q_ptr0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_q_ptr0; _i0++) {
            int _len_q_ptr1 = 1;
            q_ptr[_i0] = (int *) malloc(_len_q_ptr1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_q_ptr1; _i1++) {
              q_ptr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          put16(q_ptr,val);
          for(int i1 = 0; i1 < _len_q_ptr0; i1++) {
            int _len_q_ptr1 = 1;
              free(q_ptr[i1]);
          }
          free(q_ptr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int val = 255;
          int _len_q_ptr0 = 65025;
          int ** q_ptr = (int **) malloc(_len_q_ptr0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_q_ptr0; _i0++) {
            int _len_q_ptr1 = 1;
            q_ptr[_i0] = (int *) malloc(_len_q_ptr1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_q_ptr1; _i1++) {
              q_ptr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          put16(q_ptr,val);
          for(int i1 = 0; i1 < _len_q_ptr0; i1++) {
            int _len_q_ptr1 = 1;
              free(q_ptr[i1]);
          }
          free(q_ptr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int val = 10;
          int _len_q_ptr0 = 100;
          int ** q_ptr = (int **) malloc(_len_q_ptr0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_q_ptr0; _i0++) {
            int _len_q_ptr1 = 1;
            q_ptr[_i0] = (int *) malloc(_len_q_ptr1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_q_ptr1; _i1++) {
              q_ptr[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          put16(q_ptr,val);
          for(int i1 = 0; i1 < _len_q_ptr0; i1++) {
            int _len_q_ptr1 = 1;
              free(q_ptr[i1]);
          }
          free(q_ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
