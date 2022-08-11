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
typedef  int bfd_uint64_t ;
typedef  int bfd_byte ;
typedef  scalar_t__ bfd_boolean ;

/* Variables and functions */

__attribute__((used)) static inline bfd_uint64_t
bfd_get_bits (const void *p, int bits, bfd_boolean big_p)
{
  const bfd_byte *addr = (const bfd_byte *) p;
  bfd_uint64_t data;
  int i;
  int bytes;

  if (bits % 8 != 0)
    return 0;

  data = 0;
  bytes = bits / 8;
  for (i = 0; i < bytes; i++)
    {
      int addr_index = big_p ? i : bytes - i - 1;

      data = (data << 8) | addr[addr_index];
    }

  return data;
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
          int bits = 100;
          long big_p = 100;
          int _len_p0 = 1;
          const void * p = (const void *) malloc(_len_p0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = 0;
          }
          int benchRet = bfd_get_bits(p,bits,big_p);
          printf("%d\n", benchRet); 
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bits = 255;
          long big_p = 255;
          int _len_p0 = 65025;
          const void * p = (const void *) malloc(_len_p0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = 0;
          }
          int benchRet = bfd_get_bits(p,bits,big_p);
          printf("%d\n", benchRet); 
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bits = 10;
          long big_p = 10;
          int _len_p0 = 100;
          const void * p = (const void *) malloc(_len_p0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = 0;
          }
          int benchRet = bfd_get_bits(p,bits,big_p);
          printf("%d\n", benchRet); 
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
