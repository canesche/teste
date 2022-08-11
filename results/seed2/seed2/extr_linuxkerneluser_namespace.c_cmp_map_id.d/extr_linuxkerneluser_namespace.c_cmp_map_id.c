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
typedef  scalar_t__ u32 ;
struct uid_gid_extent {scalar_t__ lower_first; scalar_t__ first; scalar_t__ count; } ;
struct idmap_key {scalar_t__ id; scalar_t__ count; scalar_t__ map_up; } ;

/* Variables and functions */

__attribute__((used)) static int cmp_map_id(const void *k, const void *e)
{
	u32 first, last, id2;
	const struct idmap_key *key = k;
	const struct uid_gid_extent *el = e;

	id2 = key->id + key->count - 1;

	/* handle map_id_{down,up}() */
	if (key->map_up)
		first = el->lower_first;
	else
		first = el->first;

	last = first + el->count - 1;

	if (key->id >= first && key->id <= last &&
	    (id2 >= first && id2 <= last))
		return 0;

	if (key->id < first || id2 < first)
		return -1;

	return 1;
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
          int _len_k0 = 1;
          const void * k = (const void *) malloc(_len_k0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_k0; _i0++) {
            k[_i0] = 0;
          }
          int _len_e0 = 1;
          const void * e = (const void *) malloc(_len_e0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0] = 0;
          }
          int benchRet = cmp_map_id(k,e);
          printf("%d\n", benchRet); 
          free(k);
          free(e);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_k0 = 65025;
          const void * k = (const void *) malloc(_len_k0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_k0; _i0++) {
            k[_i0] = 0;
          }
          int _len_e0 = 65025;
          const void * e = (const void *) malloc(_len_e0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0] = 0;
          }
          int benchRet = cmp_map_id(k,e);
          printf("%d\n", benchRet); 
          free(k);
          free(e);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_k0 = 100;
          const void * k = (const void *) malloc(_len_k0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_k0; _i0++) {
            k[_i0] = 0;
          }
          int _len_e0 = 100;
          const void * e = (const void *) malloc(_len_e0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0] = 0;
          }
          int benchRet = cmp_map_id(k,e);
          printf("%d\n", benchRet); 
          free(k);
          free(e);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
