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

__attribute__((used)) static const char *str_from_array(const char *const strs[], unsigned int count,
				  unsigned int i)
{
	if (i < count)
		return strs[i];

	return "(unknown)";
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
          unsigned int count = 100;
          unsigned int i = 100;
          int _len_strs0 = 1;
          const char *const* strs = (const char *const*) malloc(_len_strs0*sizeof(const char const*));
          for(int _i0 = 0; _i0 < _len_strs0; _i0++) {
            int _len_strs1 = 1;
            strs[_i0] = (const char const*) malloc(_len_strs1*sizeof(const char const));
            for(int _i1 = 0; _i1 < _len_strs1; _i1++) {
              strs[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          const char * benchRet = str_from_array(strs,count,i);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int i1 = 0; i1 < _len_strs0; i1++) {
            int _len_strs1 = 1;
              free(strs[i1]);
          }
          free(strs);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int count = 255;
          unsigned int i = 255;
          int _len_strs0 = 65025;
          const char *const* strs = (const char *const*) malloc(_len_strs0*sizeof(const char const*));
          for(int _i0 = 0; _i0 < _len_strs0; _i0++) {
            int _len_strs1 = 1;
            strs[_i0] = (const char const*) malloc(_len_strs1*sizeof(const char const));
            for(int _i1 = 0; _i1 < _len_strs1; _i1++) {
              strs[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          const char * benchRet = str_from_array(strs,count,i);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int i1 = 0; i1 < _len_strs0; i1++) {
            int _len_strs1 = 1;
              free(strs[i1]);
          }
          free(strs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int count = 10;
          unsigned int i = 10;
          int _len_strs0 = 100;
          const char *const* strs = (const char *const*) malloc(_len_strs0*sizeof(const char const*));
          for(int _i0 = 0; _i0 < _len_strs0; _i0++) {
            int _len_strs1 = 1;
            strs[_i0] = (const char const*) malloc(_len_strs1*sizeof(const char const));
            for(int _i1 = 0; _i1 < _len_strs1; _i1++) {
              strs[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          const char * benchRet = str_from_array(strs,count,i);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int i1 = 0; i1 < _len_strs0; i1++) {
            int _len_strs1 = 1;
              free(strs[i1]);
          }
          free(strs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
