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
typedef  scalar_t__ xmlChar ;
typedef  int uint32_t ;

/* Variables and functions */

__attribute__((used)) static unsigned long
xmlDictComputeBigQKey(const xmlChar *prefix, int plen,
                      const xmlChar *name, int len, int seed)
{
    uint32_t hash;
    int i;

    hash = seed;

    for (i = 0;i < plen; i++) {
        hash += prefix[i];
	hash += (hash << 10);
	hash ^= (hash >> 6);
    }
    hash += ':';
    hash += (hash << 10);
    hash ^= (hash >> 6);

    for (i = 0;i < len; i++) {
        hash += name[i];
	hash += (hash << 10);
	hash ^= (hash >> 6);
    }
    hash += (hash << 3);
    hash ^= (hash >> 11);
    hash += (hash << 15);

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
          int plen = 100;
          int len = 100;
          int seed = 100;
          int _len_prefix0 = 1;
          const long * prefix = (const long *) malloc(_len_prefix0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_prefix0; _i0++) {
            prefix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 1;
          const long * name = (const long *) malloc(_len_name0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = xmlDictComputeBigQKey(prefix,plen,name,len,seed);
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
          const long * prefix = (const long *) malloc(_len_prefix0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_prefix0; _i0++) {
            prefix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 65025;
          const long * name = (const long *) malloc(_len_name0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = xmlDictComputeBigQKey(prefix,plen,name,len,seed);
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
          const long * prefix = (const long *) malloc(_len_prefix0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_prefix0; _i0++) {
            prefix[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_name0 = 100;
          const long * name = (const long *) malloc(_len_name0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_name0; _i0++) {
            name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = xmlDictComputeBigQKey(prefix,plen,name,len,seed);
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
