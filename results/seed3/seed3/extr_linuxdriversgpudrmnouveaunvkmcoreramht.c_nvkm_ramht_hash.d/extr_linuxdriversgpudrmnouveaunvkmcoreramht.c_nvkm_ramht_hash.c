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
typedef  int u32 ;
struct nvkm_ramht {int bits; } ;

/* Variables and functions */

__attribute__((used)) static u32
nvkm_ramht_hash(struct nvkm_ramht *ramht, int chid, u32 handle)
{
	u32 hash = 0;

	while (handle) {
		hash ^= (handle & ((1 << ramht->bits) - 1));
		handle >>= ramht->bits;
	}

	hash ^= chid << (ramht->bits - 4);
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
          int chid = 100;
          int handle = 100;
          int _len_ramht0 = 1;
          struct nvkm_ramht * ramht = (struct nvkm_ramht *) malloc(_len_ramht0*sizeof(struct nvkm_ramht));
          for(int _i0 = 0; _i0 < _len_ramht0; _i0++) {
            ramht[_i0].bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nvkm_ramht_hash(ramht,chid,handle);
          printf("%d\n", benchRet); 
          free(ramht);
        
        break;
    }
    // big-arr
    case 1:
    {
          int chid = 255;
          int handle = 255;
          int _len_ramht0 = 65025;
          struct nvkm_ramht * ramht = (struct nvkm_ramht *) malloc(_len_ramht0*sizeof(struct nvkm_ramht));
          for(int _i0 = 0; _i0 < _len_ramht0; _i0++) {
            ramht[_i0].bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nvkm_ramht_hash(ramht,chid,handle);
          printf("%d\n", benchRet); 
          free(ramht);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int chid = 10;
          int handle = 10;
          int _len_ramht0 = 100;
          struct nvkm_ramht * ramht = (struct nvkm_ramht *) malloc(_len_ramht0*sizeof(struct nvkm_ramht));
          for(int _i0 = 0; _i0 < _len_ramht0; _i0++) {
            ramht[_i0].bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nvkm_ramht_hash(ramht,chid,handle);
          printf("%d\n", benchRet); 
          free(ramht);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
