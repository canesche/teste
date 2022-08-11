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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int uint64_t ;

/* Variables and functions */

uint64_t MurmurHash64A (const void * key, int len, unsigned int seed) {
    const uint64_t m = 0xc6a4a7935bd1e995;
    const int r = 47;
    uint64_t h = seed ^ (len * m);
    const uint8_t *data = (const uint8_t *)key;
    const uint8_t *end = data + (len-(len&7));

    while(data != end) {
        uint64_t k;

#if (BYTE_ORDER == LITTLE_ENDIAN)
    #ifdef USE_ALIGNED_ACCESS
        memcpy(&k,data,sizeof(uint64_t));
    #else
        k = *((uint64_t*)data);
    #endif
#else
        k = (uint64_t) data[0];
        k |= (uint64_t) data[1] << 8;
        k |= (uint64_t) data[2] << 16;
        k |= (uint64_t) data[3] << 24;
        k |= (uint64_t) data[4] << 32;
        k |= (uint64_t) data[5] << 40;
        k |= (uint64_t) data[6] << 48;
        k |= (uint64_t) data[7] << 56;
#endif

        k *= m;
        k ^= k >> r;
        k *= m;
        h ^= k;
        h *= m;
        data += 8;
    }

    switch(len & 7) {
    case 7: h ^= (uint64_t)data[6] << 48; /* fall-thru */
    case 6: h ^= (uint64_t)data[5] << 40; /* fall-thru */
    case 5: h ^= (uint64_t)data[4] << 32; /* fall-thru */
    case 4: h ^= (uint64_t)data[3] << 24; /* fall-thru */
    case 3: h ^= (uint64_t)data[2] << 16; /* fall-thru */
    case 2: h ^= (uint64_t)data[1] << 8; /* fall-thru */
    case 1: h ^= (uint64_t)data[0];
            h *= m; /* fall-thru */
    };

    h ^= h >> r;
    h *= m;
    h ^= h >> r;
    return h;
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
          unsigned int seed = 100;
          int _len_key0 = 1;
          const void * key = (const void *) malloc(_len_key0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = 0;
          }
          int benchRet = MurmurHash64A(key,len,seed);
          printf("%d\n", benchRet); 
          free(key);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          unsigned int seed = 255;
          int _len_key0 = 65025;
          const void * key = (const void *) malloc(_len_key0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = 0;
          }
          int benchRet = MurmurHash64A(key,len,seed);
          printf("%d\n", benchRet); 
          free(key);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          unsigned int seed = 10;
          int _len_key0 = 100;
          const void * key = (const void *) malloc(_len_key0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = 0;
          }
          int benchRet = MurmurHash64A(key,len,seed);
          printf("%d\n", benchRet); 
          free(key);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
