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
typedef  scalar_t__ const wchar_t ;

/* Variables and functions */

__attribute__((used)) static inline wchar_t *
UniStrchr(const wchar_t *ucs, wchar_t uc)
{
	while ((*ucs != uc) && *ucs)
		ucs++;

	if (*ucs == uc)
		return (wchar_t *) ucs;
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
          const long uc = 100;
          int _len_ucs0 = 1;
          const long * ucs = (const long *) malloc(_len_ucs0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_ucs0; _i0++) {
            ucs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const long * benchRet = UniStrchr(ucs,uc);
          printf("%ld\n", (*benchRet)); 
          free(ucs);
        
        break;
    }
    // big-arr
    case 1:
    {
          const long uc = 255;
          int _len_ucs0 = 65025;
          const long * ucs = (const long *) malloc(_len_ucs0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_ucs0; _i0++) {
            ucs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const long * benchRet = UniStrchr(ucs,uc);
          printf("%ld\n", (*benchRet)); 
          free(ucs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const long uc = 10;
          int _len_ucs0 = 100;
          const long * ucs = (const long *) malloc(_len_ucs0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_ucs0; _i0++) {
            ucs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const long * benchRet = UniStrchr(ucs,uc);
          printf("%ld\n", (*benchRet)); 
          free(ucs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
