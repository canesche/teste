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
typedef  size_t u8 ;

/* Variables and functions */
 size_t BATADV_TQ_GLOBAL_WINDOW_SIZE ; 

__attribute__((used)) static void batadv_ring_buffer_set(u8 lq_recv[], u8 *lq_index, u8 value)
{
	lq_recv[*lq_index] = value;
	*lq_index = (*lq_index + 1) % BATADV_TQ_GLOBAL_WINDOW_SIZE;
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
          unsigned long value = 100;
          int _len_lq_recv0 = 1;
          unsigned long * lq_recv = (unsigned long *) malloc(_len_lq_recv0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_lq_recv0; _i0++) {
            lq_recv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lq_index0 = 1;
          unsigned long * lq_index = (unsigned long *) malloc(_len_lq_index0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_lq_index0; _i0++) {
            lq_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          batadv_ring_buffer_set(lq_recv,lq_index,value);
          free(lq_recv);
          free(lq_index);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long value = 255;
          int _len_lq_recv0 = 65025;
          unsigned long * lq_recv = (unsigned long *) malloc(_len_lq_recv0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_lq_recv0; _i0++) {
            lq_recv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lq_index0 = 65025;
          unsigned long * lq_index = (unsigned long *) malloc(_len_lq_index0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_lq_index0; _i0++) {
            lq_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          batadv_ring_buffer_set(lq_recv,lq_index,value);
          free(lq_recv);
          free(lq_index);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long value = 10;
          int _len_lq_recv0 = 100;
          unsigned long * lq_recv = (unsigned long *) malloc(_len_lq_recv0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_lq_recv0; _i0++) {
            lq_recv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lq_index0 = 100;
          unsigned long * lq_index = (unsigned long *) malloc(_len_lq_index0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_lq_index0; _i0++) {
            lq_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          batadv_ring_buffer_set(lq_recv,lq_index,value);
          free(lq_recv);
          free(lq_index);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
