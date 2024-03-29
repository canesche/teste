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
 scalar_t__* wstrblank ; 

int wstrcmp_n(const wchar_t *str1, const wchar_t *str2, size_t n)
{
	if (!n)
		return 0;
	if (!str1)
		str1 = wstrblank;
	if (!str2)
		str2 = wstrblank;

	do {
		wchar_t ch1 = *str1;
		wchar_t ch2 = *str2;

		if (ch1 < ch2)
			return -1;
		else if (ch1 > ch2)
			return 1;
	} while (*str1++ && *str2++ && --n);

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
          unsigned long n = 100;
          int _len_str10 = 1;
          const long * str1 = (const long *) malloc(_len_str10*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_str10; _i0++) {
            str1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_str20 = 1;
          const long * str2 = (const long *) malloc(_len_str20*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_str20; _i0++) {
            str2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wstrcmp_n(str1,str2,n);
          printf("%d\n", benchRet); 
          free(str1);
          free(str2);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long n = 255;
          int _len_str10 = 65025;
          const long * str1 = (const long *) malloc(_len_str10*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_str10; _i0++) {
            str1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_str20 = 65025;
          const long * str2 = (const long *) malloc(_len_str20*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_str20; _i0++) {
            str2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wstrcmp_n(str1,str2,n);
          printf("%d\n", benchRet); 
          free(str1);
          free(str2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long n = 10;
          int _len_str10 = 100;
          const long * str1 = (const long *) malloc(_len_str10*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_str10; _i0++) {
            str1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_str20 = 100;
          const long * str2 = (const long *) malloc(_len_str20*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_str20; _i0++) {
            str2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wstrcmp_n(str1,str2,n);
          printf("%d\n", benchRet); 
          free(str1);
          free(str2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
