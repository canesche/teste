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
typedef  unsigned long t_key ;
struct key_vector {unsigned long key; scalar_t__ pos; } ;

/* Variables and functions */
 scalar_t__ BITS_PER_LONG ; 
 scalar_t__ KEYLENGTH ; 

__attribute__((used)) static inline unsigned long get_index(t_key key, struct key_vector *kv)
{
	unsigned long index = key ^ kv->key;

	if ((BITS_PER_LONG <= KEYLENGTH) && (KEYLENGTH == kv->pos))
		return 0;

	return index >> kv->pos;
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
          unsigned long key = 100;
          int _len_kv0 = 1;
          struct key_vector * kv = (struct key_vector *) malloc(_len_kv0*sizeof(struct key_vector));
          for(int _i0 = 0; _i0 < _len_kv0; _i0++) {
            kv[_i0].key = ((-2 * (next_i()%2)) + 1) * next_i();
        kv[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = get_index(key,kv);
          printf("%lu\n", benchRet); 
          free(kv);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long key = 255;
          int _len_kv0 = 65025;
          struct key_vector * kv = (struct key_vector *) malloc(_len_kv0*sizeof(struct key_vector));
          for(int _i0 = 0; _i0 < _len_kv0; _i0++) {
            kv[_i0].key = ((-2 * (next_i()%2)) + 1) * next_i();
        kv[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = get_index(key,kv);
          printf("%lu\n", benchRet); 
          free(kv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long key = 10;
          int _len_kv0 = 100;
          struct key_vector * kv = (struct key_vector *) malloc(_len_kv0*sizeof(struct key_vector));
          for(int _i0 = 0; _i0 < _len_kv0; _i0++) {
            kv[_i0].key = ((-2 * (next_i()%2)) + 1) * next_i();
        kv[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = get_index(key,kv);
          printf("%lu\n", benchRet); 
          free(kv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
