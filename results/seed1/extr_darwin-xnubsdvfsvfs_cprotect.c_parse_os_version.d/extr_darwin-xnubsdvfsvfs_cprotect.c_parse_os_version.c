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
typedef  int cp_key_os_version_t ;

/* Variables and functions */

__attribute__((used)) static cp_key_os_version_t
parse_os_version(const char *vers)
{
	const char *p = vers;

	int a = 0;
	while (*p >= '0' && *p <= '9') {
		a = a * 10 + *p - '0';
		++p;
	}

	if (!a)
		return 0;

	int b = *p++;
	if (!b)
		return 0;

	int c = 0;
	while (*p >= '0' && *p <= '9') {
		c = c * 10 + *p - '0';
		++p;
	}

	if (!c)
		return 0;

	return (a & 0xff) << 24 | b << 16 | (c & 0xffff);
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
          int _len_vers0 = 1;
          const char * vers = (const char *) malloc(_len_vers0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_vers0; _i0++) {
            vers[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_os_version(vers);
          printf("%d\n", benchRet); 
          free(vers);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vers0 = 65025;
          const char * vers = (const char *) malloc(_len_vers0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_vers0; _i0++) {
            vers[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_os_version(vers);
          printf("%d\n", benchRet); 
          free(vers);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vers0 = 100;
          const char * vers = (const char *) malloc(_len_vers0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_vers0; _i0++) {
            vers[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = parse_os_version(vers);
          printf("%d\n", benchRet); 
          free(vers);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
