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
typedef  int /*<<< orphan*/  grub_size_t ;

/* Variables and functions */

int
grub_memcmp (const void *s1, const void *s2, grub_size_t n)
{
  const char *t1 = s1;
  const char *t2 = s2;

  while (n--)
    {
      if (*t1 != *t2)
	return (int) *t1 - (int) *t2;

      t1++;
      t2++;
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
          int n = 100;
          int _len_s10 = 1;
          const void * s1 = (const void *) malloc(_len_s10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0] = 0;
          }
          int _len_s20 = 1;
          const void * s2 = (const void *) malloc(_len_s20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0] = 0;
          }
          int benchRet = grub_memcmp(s1,s2,n);
          printf("%d\n", benchRet); 
          free(s1);
          free(s2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int _len_s10 = 65025;
          const void * s1 = (const void *) malloc(_len_s10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0] = 0;
          }
          int _len_s20 = 65025;
          const void * s2 = (const void *) malloc(_len_s20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0] = 0;
          }
          int benchRet = grub_memcmp(s1,s2,n);
          printf("%d\n", benchRet); 
          free(s1);
          free(s2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int _len_s10 = 100;
          const void * s1 = (const void *) malloc(_len_s10*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0] = 0;
          }
          int _len_s20 = 100;
          const void * s2 = (const void *) malloc(_len_s20*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0] = 0;
          }
          int benchRet = grub_memcmp(s1,s2,n);
          printf("%d\n", benchRet); 
          free(s1);
          free(s2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
