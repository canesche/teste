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
typedef  int u8 ;

/* Variables and functions */

__attribute__((used)) static inline void gcmp_pn2hdr(u8 *hdr, const u8 *pn, int key_id)
{
	hdr[0] = pn[5];
	hdr[1] = pn[4];
	hdr[2] = 0;
	hdr[3] = 0x20 | (key_id << 6);
	hdr[4] = pn[3];
	hdr[5] = pn[2];
	hdr[6] = pn[1];
	hdr[7] = pn[0];
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
          int key_id = 100;
          int _len_hdr0 = 1;
          int * hdr = (int *) malloc(_len_hdr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pn0 = 1;
          const int * pn = (const int *) malloc(_len_pn0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pn0; _i0++) {
            pn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gcmp_pn2hdr(hdr,pn,key_id);
          free(hdr);
          free(pn);
        
        break;
    }
    // big-arr
    case 1:
    {
          int key_id = 255;
          int _len_hdr0 = 65025;
          int * hdr = (int *) malloc(_len_hdr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pn0 = 65025;
          const int * pn = (const int *) malloc(_len_pn0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pn0; _i0++) {
            pn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gcmp_pn2hdr(hdr,pn,key_id);
          free(hdr);
          free(pn);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int key_id = 10;
          int _len_hdr0 = 100;
          int * hdr = (int *) malloc(_len_hdr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pn0 = 100;
          const int * pn = (const int *) malloc(_len_pn0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pn0; _i0++) {
            pn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gcmp_pn2hdr(hdr,pn,key_id);
          free(hdr);
          free(pn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
