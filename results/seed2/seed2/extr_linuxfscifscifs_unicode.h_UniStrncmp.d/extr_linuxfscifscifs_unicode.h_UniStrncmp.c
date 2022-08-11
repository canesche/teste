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
typedef  scalar_t__ wchar_t ;

/* Variables and functions */

__attribute__((used)) static inline int
UniStrncmp(const wchar_t *ucs1, const wchar_t *ucs2, size_t n)
{
	if (!n)
		return 0;	/* Null strings are equal */
	while ((*ucs1 == *ucs2) && *ucs1 && --n) {
		ucs1++;
		ucs2++;
	}
	return (int) *ucs1 - (int) *ucs2;
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
          unsigned long n = 100;
          int _len_ucs10 = 1;
          const long * ucs1 = (const long *) malloc(_len_ucs10*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_ucs10; _i0++) {
            ucs1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ucs20 = 1;
          const long * ucs2 = (const long *) malloc(_len_ucs20*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_ucs20; _i0++) {
            ucs2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = UniStrncmp(ucs1,ucs2,n);
          printf("%d\n", benchRet); 
          free(ucs1);
          free(ucs2);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long n = 255;
          int _len_ucs10 = 65025;
          const long * ucs1 = (const long *) malloc(_len_ucs10*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_ucs10; _i0++) {
            ucs1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ucs20 = 65025;
          const long * ucs2 = (const long *) malloc(_len_ucs20*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_ucs20; _i0++) {
            ucs2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = UniStrncmp(ucs1,ucs2,n);
          printf("%d\n", benchRet); 
          free(ucs1);
          free(ucs2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long n = 10;
          int _len_ucs10 = 100;
          const long * ucs1 = (const long *) malloc(_len_ucs10*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_ucs10; _i0++) {
            ucs1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ucs20 = 100;
          const long * ucs2 = (const long *) malloc(_len_ucs20*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_ucs20; _i0++) {
            ucs2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = UniStrncmp(ucs1,ucs2,n);
          printf("%d\n", benchRet); 
          free(ucs1);
          free(ucs2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
