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
typedef  scalar_t__ uint8_t ;

/* Variables and functions */

int memcmp(const void * ptr1, const void * ptr2, unsigned int num) {
  int i;
  for (i = 0; i < num; i++) {
    if ( ((uint8_t*)ptr1)[i] != ((uint8_t*)ptr2)[i] ) return -1;
  }
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
          unsigned int num = 100;
          int _len_ptr10 = 1;
          const void * ptr1 = (const void *) malloc(_len_ptr10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_ptr10; _i0++) {
            ptr1[_i0] = 0;
          }
          int _len_ptr20 = 1;
          const void * ptr2 = (const void *) malloc(_len_ptr20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_ptr20; _i0++) {
            ptr2[_i0] = 0;
          }
          int benchRet = memcmp(ptr1,ptr2,num);
          printf("%d\n", benchRet); 
          free(ptr1);
          free(ptr2);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int num = 255;
          int _len_ptr10 = 65025;
          const void * ptr1 = (const void *) malloc(_len_ptr10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_ptr10; _i0++) {
            ptr1[_i0] = 0;
          }
          int _len_ptr20 = 65025;
          const void * ptr2 = (const void *) malloc(_len_ptr20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_ptr20; _i0++) {
            ptr2[_i0] = 0;
          }
          int benchRet = memcmp(ptr1,ptr2,num);
          printf("%d\n", benchRet); 
          free(ptr1);
          free(ptr2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int num = 10;
          int _len_ptr10 = 100;
          const void * ptr1 = (const void *) malloc(_len_ptr10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_ptr10; _i0++) {
            ptr1[_i0] = 0;
          }
          int _len_ptr20 = 100;
          const void * ptr2 = (const void *) malloc(_len_ptr20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_ptr20; _i0++) {
            ptr2[_i0] = 0;
          }
          int benchRet = memcmp(ptr1,ptr2,num);
          printf("%d\n", benchRet); 
          free(ptr1);
          free(ptr2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
