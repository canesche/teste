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
typedef  int xmlChar ;

/* Variables and functions */

__attribute__((used)) static unsigned long
xmlDictComputeFastQKey(const xmlChar *prefix, int plen,
                       const xmlChar *name, int len, int seed)
{
    unsigned long value = (unsigned long) seed;

    if (plen == 0)
	value += 30 * (unsigned long) ':';
    else
	value += 30 * (*prefix);

    if (len > 10) {
        int offset = len - (plen + 1 + 1);
	if (offset < 0)
	    offset = len - (10 + 1);
	value += name[offset];
        len = 10;
	if (plen > 10)
	    plen = 10;
    }
    switch (plen) {
        case 10: value += prefix[9];
        /* Falls through. */
        case 9: value += prefix[8];
        /* Falls through. */
        case 8: value += prefix[7];
        /* Falls through. */
        case 7: value += prefix[6];
        /* Falls through. */
        case 6: value += prefix[5];
        /* Falls through. */
        case 5: value += prefix[4];
        /* Falls through. */
        case 4: value += prefix[3];
        /* Falls through. */
        case 3: value += prefix[2];
        /* Falls through. */
        case 2: value += prefix[1];
        /* Falls through. */
        case 1: value += prefix[0];
        /* Falls through. */
        default: break;
    }
    len -= plen;
    if (len > 0) {
        value += (unsigned long) ':';
	len--;
    }
    switch (len) {
        case 10: value += name[9];
        /* Falls through. */
        case 9: value += name[8];
        /* Falls through. */
        case 8: value += name[7];
        /* Falls through. */
        case 7: value += name[6];
        /* Falls through. */
        case 6: value += name[5];
        /* Falls through. */
        case 5: value += name[4];
        /* Falls through. */
        case 4: value += name[3];
        /* Falls through. */
        case 3: value += name[2];
        /* Falls through. */
        case 2: value += name[1];
        /* Falls through. */
        case 1: value += name[0];
        /* Falls through. */
        default: break;
    }
    return(value);
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
          int plen = 100;
          int len = 100;
          int seed = 100;
          int _len_prefix0 = 1;
          const int * prefix = (const int *) malloc(_len_prefix0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_prefix0; _i0++) {
            prefix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 1;
          const int * name = (const int *) malloc(_len_name0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = xmlDictComputeFastQKey(prefix,plen,name,len,seed);
          printf("%lu\n", benchRet); 
          free(prefix);
          free(name);
        
        break;
    }
    // big-arr
    case 1:
    {
          int plen = 255;
          int len = 255;
          int seed = 255;
          int _len_prefix0 = 65025;
          const int * prefix = (const int *) malloc(_len_prefix0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_prefix0; _i0++) {
            prefix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 65025;
          const int * name = (const int *) malloc(_len_name0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = xmlDictComputeFastQKey(prefix,plen,name,len,seed);
          printf("%lu\n", benchRet); 
          free(prefix);
          free(name);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int plen = 10;
          int len = 10;
          int seed = 10;
          int _len_prefix0 = 100;
          const int * prefix = (const int *) malloc(_len_prefix0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_prefix0; _i0++) {
            prefix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 100;
          const int * name = (const int *) malloc(_len_name0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = xmlDictComputeFastQKey(prefix,plen,name,len,seed);
          printf("%lu\n", benchRet); 
          free(prefix);
          free(name);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
