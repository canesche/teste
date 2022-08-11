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
typedef  int cab_ULONG ;
typedef  int ULONG ;
typedef  int UINT ;
typedef  int BYTE ;

/* Variables and functions */

__attribute__((used)) static cab_ULONG fci_get_checksum( const void *pv, UINT cb, cab_ULONG seed )
{
  cab_ULONG     csum;
  cab_ULONG     ul;
  int           cUlong;
  const BYTE    *pb;

  csum = seed;
  cUlong = cb / 4;
  pb = pv;

  while (cUlong-- > 0) {
    ul = *pb++;
    ul |= (((cab_ULONG)(*pb++)) <<  8);
    ul |= (((cab_ULONG)(*pb++)) << 16);
    ul |= (((cab_ULONG)(*pb++)) << 24);
    csum ^= ul;
  }

  ul = 0;
  switch (cb % 4) {
    case 3:
      ul |= (((ULONG)(*pb++)) << 16);
      /* fall through */
    case 2:
      ul |= (((ULONG)(*pb++)) <<  8);
      /* fall through */
    case 1:
      ul |= *pb;
      /* fall through */
    default:
      break;
  }
  csum ^= ul;

  return csum;
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
          int cb = 100;
          int seed = 100;
          int _len_pv0 = 1;
          const void * pv = (const void *) malloc(_len_pv0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pv0; _i0++) {
            pv[_i0] = 0;
          }
          int benchRet = fci_get_checksum(pv,cb,seed);
          printf("%d\n", benchRet); 
          free(pv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cb = 255;
          int seed = 255;
          int _len_pv0 = 65025;
          const void * pv = (const void *) malloc(_len_pv0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pv0; _i0++) {
            pv[_i0] = 0;
          }
          int benchRet = fci_get_checksum(pv,cb,seed);
          printf("%d\n", benchRet); 
          free(pv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cb = 10;
          int seed = 10;
          int _len_pv0 = 100;
          const void * pv = (const void *) malloc(_len_pv0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_pv0; _i0++) {
            pv[_i0] = 0;
          }
          int benchRet = fci_get_checksum(pv,cb,seed);
          printf("%d\n", benchRet); 
          free(pv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
