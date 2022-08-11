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
 unsigned int* crc32tab ; 

unsigned int
hash_string(const char *cp, int len)
{
    unsigned hash = 0;

    if (len) {
            while (len--) {
		    hash = crc32tab[((hash >> 24) ^ (unsigned char)*cp++)] ^ hash << 8;
	    }
    } else {
            while (*cp != '\0') {
		    hash = crc32tab[((hash >> 24) ^ (unsigned char)*cp++)] ^ hash << 8;
	    }
    }
    /*
     * the crc generator can legitimately generate
     * a 0... however, 0 for us means that we
     * haven't computed a hash, so use 1 instead
     */
    if (hash == 0)
            hash = 1;
    return hash;
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
          int len = 100;
          int _len_cp0 = 1;
          const char * cp = (const char *) malloc(_len_cp0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_cp0; _i0++) {
            cp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = hash_string(cp,len);
          printf("%u\n", benchRet); 
          free(cp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int _len_cp0 = 65025;
          const char * cp = (const char *) malloc(_len_cp0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_cp0; _i0++) {
            cp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = hash_string(cp,len);
          printf("%u\n", benchRet); 
          free(cp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int _len_cp0 = 100;
          const char * cp = (const char *) malloc(_len_cp0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_cp0; _i0++) {
            cp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = hash_string(cp,len);
          printf("%u\n", benchRet); 
          free(cp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
