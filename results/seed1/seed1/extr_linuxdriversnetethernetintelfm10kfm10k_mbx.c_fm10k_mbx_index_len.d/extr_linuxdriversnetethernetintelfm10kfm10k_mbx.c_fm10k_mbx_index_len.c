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
typedef  int u16 ;
struct fm10k_mbx_info {int mbmem_len; } ;

/* Variables and functions */

__attribute__((used)) static u16 fm10k_mbx_index_len(struct fm10k_mbx_info *mbx, u16 head, u16 tail)
{
	u16 len = tail - head;

	/* we wrapped so subtract 2, one for index 0, one for all 1s index */
	if (len > tail)
		len -= 2;

	return len & ((mbx->mbmem_len << 1) - 1);
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
          int head = 100;
          int tail = 100;
          int _len_mbx0 = 1;
          struct fm10k_mbx_info * mbx = (struct fm10k_mbx_info *) malloc(_len_mbx0*sizeof(struct fm10k_mbx_info));
          for(int _i0 = 0; _i0 < _len_mbx0; _i0++) {
            mbx[_i0].mbmem_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fm10k_mbx_index_len(mbx,head,tail);
          printf("%d\n", benchRet); 
          free(mbx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int head = 255;
          int tail = 255;
          int _len_mbx0 = 65025;
          struct fm10k_mbx_info * mbx = (struct fm10k_mbx_info *) malloc(_len_mbx0*sizeof(struct fm10k_mbx_info));
          for(int _i0 = 0; _i0 < _len_mbx0; _i0++) {
            mbx[_i0].mbmem_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fm10k_mbx_index_len(mbx,head,tail);
          printf("%d\n", benchRet); 
          free(mbx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int head = 10;
          int tail = 10;
          int _len_mbx0 = 100;
          struct fm10k_mbx_info * mbx = (struct fm10k_mbx_info *) malloc(_len_mbx0*sizeof(struct fm10k_mbx_info));
          for(int _i0 = 0; _i0 < _len_mbx0; _i0++) {
            mbx[_i0].mbmem_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fm10k_mbx_index_len(mbx,head,tail);
          printf("%d\n", benchRet); 
          free(mbx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
