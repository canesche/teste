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

__attribute__((used)) static inline int skip_prefix(const char *str, const char *prefix,
			      const char **out)
{
	do {
		if (!*prefix) {
			*out = str;
			return 1;
		}
	} while (*str++ == *prefix++);
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
          int _len_str0 = 1;
          const char * str = (const char *) malloc(_len_str0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prefix0 = 1;
          const char * prefix = (const char *) malloc(_len_prefix0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_prefix0; _i0++) {
            prefix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 1;
          const char ** out = (const char **) malloc(_len_out0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 1;
            out[_i0] = (const char *) malloc(_len_out1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = skip_prefix(str,prefix,out);
          printf("%d\n", benchRet); 
          free(str);
          free(prefix);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 1;
              free(out[i1]);
          }
          free(out);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_str0 = 65025;
          const char * str = (const char *) malloc(_len_str0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prefix0 = 65025;
          const char * prefix = (const char *) malloc(_len_prefix0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_prefix0; _i0++) {
            prefix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 65025;
          const char ** out = (const char **) malloc(_len_out0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 1;
            out[_i0] = (const char *) malloc(_len_out1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = skip_prefix(str,prefix,out);
          printf("%d\n", benchRet); 
          free(str);
          free(prefix);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 1;
              free(out[i1]);
          }
          free(out);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_str0 = 100;
          const char * str = (const char *) malloc(_len_str0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prefix0 = 100;
          const char * prefix = (const char *) malloc(_len_prefix0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_prefix0; _i0++) {
            prefix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 100;
          const char ** out = (const char **) malloc(_len_out0*sizeof(const char *));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 1;
            out[_i0] = (const char *) malloc(_len_out1*sizeof(const char));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = skip_prefix(str,prefix,out);
          printf("%d\n", benchRet); 
          free(str);
          free(prefix);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 1;
              free(out[i1]);
          }
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
