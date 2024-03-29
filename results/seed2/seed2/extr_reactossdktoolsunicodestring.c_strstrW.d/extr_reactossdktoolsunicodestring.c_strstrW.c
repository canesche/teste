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
typedef  scalar_t__ WCHAR ;

/* Variables and functions */

WCHAR *strstrW( const WCHAR *str, const WCHAR *sub )
{
    while (*str)
    {
        const WCHAR *p1 = str, *p2 = sub;
        while (*p1 && *p2 && *p1 == *p2) { p1++; p2++; }
        if (!*p2) return (WCHAR *)str;
        str++;
    }
    return NULL;
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
          int _len_str0 = 1;
          const long * str = (const long *) malloc(_len_str0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sub0 = 1;
          const long * sub = (const long *) malloc(_len_sub0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_sub0; _i0++) {
            sub[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long * benchRet = strstrW(str,sub);
          printf("%ld\n", (*benchRet)); 
          free(str);
          free(sub);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_str0 = 65025;
          const long * str = (const long *) malloc(_len_str0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sub0 = 65025;
          const long * sub = (const long *) malloc(_len_sub0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_sub0; _i0++) {
            sub[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long * benchRet = strstrW(str,sub);
          printf("%ld\n", (*benchRet)); 
          free(str);
          free(sub);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_str0 = 100;
          const long * str = (const long *) malloc(_len_str0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sub0 = 100;
          const long * sub = (const long *) malloc(_len_sub0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_sub0; _i0++) {
            sub[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long * benchRet = strstrW(str,sub);
          printf("%ld\n", (*benchRet)); 
          free(str);
          free(sub);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
