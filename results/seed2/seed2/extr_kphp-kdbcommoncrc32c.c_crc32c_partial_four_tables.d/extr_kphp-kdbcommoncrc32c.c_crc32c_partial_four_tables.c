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

/* Variables and functions */
 unsigned int* crc32c_table ; 
 unsigned int* crc32c_table0 ; 
 unsigned int* crc32c_table1 ; 
 unsigned int* crc32c_table2 ; 

__attribute__((used)) static unsigned crc32c_partial_four_tables (const void *data, int len, unsigned crc) {
  const int *p = (const int *) data;
  int x;
#define DO_ONE(v) crc ^= v; crc = crc32c_table0[crc & 0xff] ^ crc32c_table1[(crc & 0xff00) >> 8] ^ crc32c_table2[(crc & 0xff0000) >> 16] ^ crc32c_table[crc >> 24];
#define DO_FOUR(p) DO_ONE((p)[0]); DO_ONE((p)[1]); DO_ONE((p)[2]); DO_ONE((p)[3]);

  for (x = (len >> 5); x > 0; x--) {
    DO_FOUR (p);
    DO_FOUR (p + 4);
    p += 8;
  }
  if (len & 16) {
    DO_FOUR (p);
    p += 4;
  }
  if (len & 8) {
    DO_ONE (p[0]);
    DO_ONE (p[1]);
    p += 2;
  }
  if (len & 4) {
    DO_ONE (*p++);
  }
#undef DO_ONE
#undef DO_FOUR
  const char *q = (const char *) p;
  if (len & 2) {
    crc = crc32c_table[(crc ^ q[0]) & 0xff] ^ (crc >> 8);
    crc = crc32c_table[(crc ^ q[1]) & 0xff] ^ (crc >> 8);
    q += 2;
  }
  if (len & 1) {
    crc = crc32c_table[(crc ^ *q++) & 0xff] ^ (crc >> 8);
  }
  return crc;
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
          int len = 100;
          unsigned int crc = 100;
          int _len_data0 = 1;
          const void * data = (const void *) malloc(_len_data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = 0;
          }
          unsigned int benchRet = crc32c_partial_four_tables(data,len,crc);
          printf("%u\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          unsigned int crc = 255;
          int _len_data0 = 65025;
          const void * data = (const void *) malloc(_len_data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = 0;
          }
          unsigned int benchRet = crc32c_partial_four_tables(data,len,crc);
          printf("%u\n", benchRet); 
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          unsigned int crc = 10;
          int _len_data0 = 100;
          const void * data = (const void *) malloc(_len_data0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = 0;
          }
          unsigned int benchRet = crc32c_partial_four_tables(data,len,crc);
          printf("%u\n", benchRet); 
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
