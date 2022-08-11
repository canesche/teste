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
struct sk_buff {unsigned char* data; } ;
struct b43_dmaring {int frameoffset; } ;

/* Variables and functions */

__attribute__((used)) static bool b43_rx_buffer_is_poisoned(struct b43_dmaring *ring, struct sk_buff *skb)
{
	unsigned char *f = skb->data + ring->frameoffset;

	return ((f[0] & f[1] & f[2] & f[3] & f[4] & f[5] & f[6] & f[7]) == 0xFF);
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
          int _len_ring0 = 1;
          struct b43_dmaring * ring = (struct b43_dmaring *) malloc(_len_ring0*sizeof(struct b43_dmaring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].frameoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
              int _len_skb__i0__data0 = 1;
          skb[_i0].data = (unsigned char *) malloc(_len_skb__i0__data0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_skb__i0__data0; _j0++) {
            skb[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = b43_rx_buffer_is_poisoned(ring,skb);
          printf("%d\n", benchRet); 
          free(ring);
          for(int _aux = 0; _aux < _len_skb0; _aux++) {
          free(skb[_aux].data);
          }
          free(skb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ring0 = 65025;
          struct b43_dmaring * ring = (struct b43_dmaring *) malloc(_len_ring0*sizeof(struct b43_dmaring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].frameoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_skb0 = 65025;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
              int _len_skb__i0__data0 = 1;
          skb[_i0].data = (unsigned char *) malloc(_len_skb__i0__data0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_skb__i0__data0; _j0++) {
            skb[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = b43_rx_buffer_is_poisoned(ring,skb);
          printf("%d\n", benchRet); 
          free(ring);
          for(int _aux = 0; _aux < _len_skb0; _aux++) {
          free(skb[_aux].data);
          }
          free(skb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ring0 = 100;
          struct b43_dmaring * ring = (struct b43_dmaring *) malloc(_len_ring0*sizeof(struct b43_dmaring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].frameoffset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_skb0 = 100;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
              int _len_skb__i0__data0 = 1;
          skb[_i0].data = (unsigned char *) malloc(_len_skb__i0__data0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_skb__i0__data0; _j0++) {
            skb[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = b43_rx_buffer_is_poisoned(ring,skb);
          printf("%d\n", benchRet); 
          free(ring);
          for(int _aux = 0; _aux < _len_skb0; _aux++) {
          free(skb[_aux].data);
          }
          free(skb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
