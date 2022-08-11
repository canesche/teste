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
typedef  int /*<<< orphan*/  ut8 ;
typedef  int /*<<< orphan*/  ut64 ;

/* Variables and functions */

__attribute__((used)) static bool check_bytes(const ut8 *bytes, ut64 sz) {
	// XXX pemixed is always loaded because it uses
	// XXX the same signature for fat and non-fat
	// XXX so we need to make that action implicit
	return false;
#if 0
	if (!bytes) {
		return false;
	}
	if (sz <= 0x3d) { //less than size of MS-DOS header which is 64bytes
		return false;
	}
	ut32 idx = (bytes[0x3c] | (bytes[0x3d]<<8));
	if (sz > idx + 0x18 + 2) {
		/* Here PE signature for usual PE files
		 * and PL signature for Phar Lap TNT DOS extender 32bit executables
		 */
		if (!memcmp (bytes, "MZ", 2)) {
			if (!memcmp (bytes+idx, "PE", 2) &&
				!memcmp (bytes+idx+0x18, "\x0b\x01", 2)) {
				return true;
			}
			// TODO: Add one more indicator, to prevent false positives
			if (!memcmp (bytes+idx, "PL", 2)) {
				return true;
			}
		}
	}
	return false;
#endif
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
          int sz = 100;
          int _len_bytes0 = 1;
          const int * bytes = (const int *) malloc(_len_bytes0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_bytes0; _i0++) {
            bytes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_bytes(bytes,sz);
          printf("%d\n", benchRet); 
          free(bytes);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sz = 255;
          int _len_bytes0 = 65025;
          const int * bytes = (const int *) malloc(_len_bytes0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_bytes0; _i0++) {
            bytes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_bytes(bytes,sz);
          printf("%d\n", benchRet); 
          free(bytes);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sz = 10;
          int _len_bytes0 = 100;
          const int * bytes = (const int *) malloc(_len_bytes0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_bytes0; _i0++) {
            bytes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_bytes(bytes,sz);
          printf("%d\n", benchRet); 
          free(bytes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
