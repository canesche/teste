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
typedef  int uint32_t ;

/* Variables and functions */
 unsigned int A32_BASE ; 
 unsigned int A32_NMAX ; 

uint32_t uzlib_adler32(const void *data, unsigned int length, uint32_t prev_sum /* 1 */)
{
   const unsigned char *buf = (const unsigned char *)data;

   unsigned int s1 = prev_sum & 0xffff;
   unsigned int s2 = prev_sum >> 16;

   while (length > 0)
   {
      int k = length < A32_NMAX ? length : A32_NMAX;
      int i;

      for (i = k / 16; i; --i, buf += 16)
      {
         s1 += buf[0];  s2 += s1; s1 += buf[1];  s2 += s1;
         s1 += buf[2];  s2 += s1; s1 += buf[3];  s2 += s1;
         s1 += buf[4];  s2 += s1; s1 += buf[5];  s2 += s1;
         s1 += buf[6];  s2 += s1; s1 += buf[7];  s2 += s1;

         s1 += buf[8];  s2 += s1; s1 += buf[9];  s2 += s1;
         s1 += buf[10]; s2 += s1; s1 += buf[11]; s2 += s1;
         s1 += buf[12]; s2 += s1; s1 += buf[13]; s2 += s1;
         s1 += buf[14]; s2 += s1; s1 += buf[15]; s2 += s1;
      }

      for (i = k % 16; i; --i) { s1 += *buf++; s2 += s1; }

      s1 %= A32_BASE;
      s2 %= A32_BASE;

      length -= k;
   }

   return (s2 << 16) | s1;
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
          unsigned int length = 100;
          int prev_sum = 100;
          int _len_data0 = 1;
          const void * data = (const void *) malloc(_len_data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = 0;
          }
          int benchRet = uzlib_adler32(data,length,prev_sum);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int length = 255;
          int prev_sum = 255;
          int _len_data0 = 65025;
          const void * data = (const void *) malloc(_len_data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = 0;
          }
          int benchRet = uzlib_adler32(data,length,prev_sum);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int length = 10;
          int prev_sum = 10;
          int _len_data0 = 100;
          const void * data = (const void *) malloc(_len_data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = 0;
          }
          int benchRet = uzlib_adler32(data,length,prev_sum);
          printf("%d\n", benchRet); 
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
