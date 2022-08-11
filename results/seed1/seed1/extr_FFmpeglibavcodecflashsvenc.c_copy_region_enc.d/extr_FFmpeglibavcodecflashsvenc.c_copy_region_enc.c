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

/* Variables and functions */

__attribute__((used)) static int copy_region_enc(uint8_t *sptr, uint8_t *dptr, int dx, int dy,
                           int h, int w, int stride, uint8_t *pfptr)
{
    int i, j;
    uint8_t *nsptr;
    uint8_t *npfptr;
    int diff = 0;

    for (i = dx + h; i > dx; i--) {
        nsptr  = sptr  + i * stride + dy * 3;
        npfptr = pfptr + i * stride + dy * 3;
        for (j = 0; j < w * 3; j++) {
            diff    |= npfptr[j] ^ nsptr[j];
            dptr[j]  = nsptr[j];
        }
        dptr += w * 3;
    }
    if (diff)
        return 1;
    return 0;
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
          int dx = 100;
          int dy = 100;
          int h = 100;
          int w = 100;
          int stride = 100;
          int _len_sptr0 = 1;
          int * sptr = (int *) malloc(_len_sptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sptr0; _i0++) {
            sptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dptr0 = 1;
          int * dptr = (int *) malloc(_len_dptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dptr0; _i0++) {
            dptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pfptr0 = 1;
          int * pfptr = (int *) malloc(_len_pfptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pfptr0; _i0++) {
            pfptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = copy_region_enc(sptr,dptr,dx,dy,h,w,stride,pfptr);
          printf("%d\n", benchRet); 
          free(sptr);
          free(dptr);
          free(pfptr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dx = 255;
          int dy = 255;
          int h = 255;
          int w = 255;
          int stride = 255;
          int _len_sptr0 = 65025;
          int * sptr = (int *) malloc(_len_sptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sptr0; _i0++) {
            sptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dptr0 = 65025;
          int * dptr = (int *) malloc(_len_dptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dptr0; _i0++) {
            dptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pfptr0 = 65025;
          int * pfptr = (int *) malloc(_len_pfptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pfptr0; _i0++) {
            pfptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = copy_region_enc(sptr,dptr,dx,dy,h,w,stride,pfptr);
          printf("%d\n", benchRet); 
          free(sptr);
          free(dptr);
          free(pfptr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dx = 10;
          int dy = 10;
          int h = 10;
          int w = 10;
          int stride = 10;
          int _len_sptr0 = 100;
          int * sptr = (int *) malloc(_len_sptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sptr0; _i0++) {
            sptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dptr0 = 100;
          int * dptr = (int *) malloc(_len_dptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dptr0; _i0++) {
            dptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pfptr0 = 100;
          int * pfptr = (int *) malloc(_len_pfptr0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pfptr0; _i0++) {
            pfptr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = copy_region_enc(sptr,dptr,dx,dy,h,w,stride,pfptr);
          printf("%d\n", benchRet); 
          free(sptr);
          free(dptr);
          free(pfptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
