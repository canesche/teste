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
typedef  int uint8_t ;
typedef  int uint64_t ;

/* Variables and functions */

uint64_t ssd_plane( const uint8_t *pix1, const uint8_t *pix2, int size )
{
    uint64_t ssd = 0;
    int i;
    for( i=0; i<size; i++ )
    {
        int d = pix1[i] - pix2[i];
        ssd += d*d;
    }
    return ssd;
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
          int size = 100;
          int _len_pix10 = 1;
          const int * pix1 = (const int *) malloc(_len_pix10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pix10; _i0++) {
            pix1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pix20 = 1;
          const int * pix2 = (const int *) malloc(_len_pix20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pix20; _i0++) {
            pix2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ssd_plane(pix1,pix2,size);
          printf("%d\n", benchRet); 
          free(pix1);
          free(pix2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int size = 255;
          int _len_pix10 = 65025;
          const int * pix1 = (const int *) malloc(_len_pix10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pix10; _i0++) {
            pix1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pix20 = 65025;
          const int * pix2 = (const int *) malloc(_len_pix20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pix20; _i0++) {
            pix2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ssd_plane(pix1,pix2,size);
          printf("%d\n", benchRet); 
          free(pix1);
          free(pix2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int size = 10;
          int _len_pix10 = 100;
          const int * pix1 = (const int *) malloc(_len_pix10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pix10; _i0++) {
            pix1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pix20 = 100;
          const int * pix2 = (const int *) malloc(_len_pix20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pix20; _i0++) {
            pix2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ssd_plane(pix1,pix2,size);
          printf("%d\n", benchRet); 
          free(pix1);
          free(pix2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
