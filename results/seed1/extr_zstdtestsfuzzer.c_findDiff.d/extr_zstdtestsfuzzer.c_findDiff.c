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
typedef  scalar_t__ BYTE ;

/* Variables and functions */

__attribute__((used)) static size_t findDiff(const void* buf1, const void* buf2, size_t max)
{
    const BYTE* b1 = (const BYTE*)buf1;
    const BYTE* b2 = (const BYTE*)buf2;
    size_t u;
    for (u=0; u<max; u++) {
        if (b1[u] != b2[u]) break;
    }
    return u;
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
          unsigned long max = 100;
          int _len_buf10 = 1;
          const void * buf1 = (const void *) malloc(_len_buf10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_buf10; _i0++) {
            buf1[_i0] = 0;
          }
          int _len_buf20 = 1;
          const void * buf2 = (const void *) malloc(_len_buf20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_buf20; _i0++) {
            buf2[_i0] = 0;
          }
          unsigned long benchRet = findDiff(buf1,buf2,max);
          printf("%lu\n", benchRet); 
          free(buf1);
          free(buf2);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long max = 255;
          int _len_buf10 = 65025;
          const void * buf1 = (const void *) malloc(_len_buf10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_buf10; _i0++) {
            buf1[_i0] = 0;
          }
          int _len_buf20 = 65025;
          const void * buf2 = (const void *) malloc(_len_buf20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_buf20; _i0++) {
            buf2[_i0] = 0;
          }
          unsigned long benchRet = findDiff(buf1,buf2,max);
          printf("%lu\n", benchRet); 
          free(buf1);
          free(buf2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long max = 10;
          int _len_buf10 = 100;
          const void * buf1 = (const void *) malloc(_len_buf10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_buf10; _i0++) {
            buf1[_i0] = 0;
          }
          int _len_buf20 = 100;
          const void * buf2 = (const void *) malloc(_len_buf20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_buf20; _i0++) {
            buf2[_i0] = 0;
          }
          unsigned long benchRet = findDiff(buf1,buf2,max);
          printf("%lu\n", benchRet); 
          free(buf1);
          free(buf2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
