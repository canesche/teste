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
struct rhashtable_compare_arg {struct mfc_cache_cmp_arg* key; } ;
struct mfc_cache_cmp_arg {scalar_t__ mfc_mcastgrp; scalar_t__ mfc_origin; } ;
struct mfc_cache {scalar_t__ mfc_mcastgrp; scalar_t__ mfc_origin; } ;

/* Variables and functions */

__attribute__((used)) static inline int ipmr_hash_cmp(struct rhashtable_compare_arg *arg,
				const void *ptr)
{
	const struct mfc_cache_cmp_arg *cmparg = arg->key;
	struct mfc_cache *c = (struct mfc_cache *)ptr;

	return cmparg->mfc_mcastgrp != c->mfc_mcastgrp ||
	       cmparg->mfc_origin != c->mfc_origin;
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
          int _len_arg0 = 1;
          struct rhashtable_compare_arg * arg = (struct rhashtable_compare_arg *) malloc(_len_arg0*sizeof(struct rhashtable_compare_arg));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
              int _len_arg__i0__key0 = 1;
          arg[_i0].key = (struct mfc_cache_cmp_arg *) malloc(_len_arg__i0__key0*sizeof(struct mfc_cache_cmp_arg));
          for(int _j0 = 0; _j0 < _len_arg__i0__key0; _j0++) {
            arg[_i0].key->mfc_mcastgrp = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].key->mfc_origin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ptr0 = 1;
          const void * ptr = (const void *) malloc(_len_ptr0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = 0;
          }
          int benchRet = ipmr_hash_cmp(arg,ptr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_arg0; _aux++) {
          free(arg[_aux].key);
          }
          free(arg);
          free(ptr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_arg0 = 65025;
          struct rhashtable_compare_arg * arg = (struct rhashtable_compare_arg *) malloc(_len_arg0*sizeof(struct rhashtable_compare_arg));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
              int _len_arg__i0__key0 = 1;
          arg[_i0].key = (struct mfc_cache_cmp_arg *) malloc(_len_arg__i0__key0*sizeof(struct mfc_cache_cmp_arg));
          for(int _j0 = 0; _j0 < _len_arg__i0__key0; _j0++) {
            arg[_i0].key->mfc_mcastgrp = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].key->mfc_origin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ptr0 = 65025;
          const void * ptr = (const void *) malloc(_len_ptr0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = 0;
          }
          int benchRet = ipmr_hash_cmp(arg,ptr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_arg0; _aux++) {
          free(arg[_aux].key);
          }
          free(arg);
          free(ptr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_arg0 = 100;
          struct rhashtable_compare_arg * arg = (struct rhashtable_compare_arg *) malloc(_len_arg0*sizeof(struct rhashtable_compare_arg));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
              int _len_arg__i0__key0 = 1;
          arg[_i0].key = (struct mfc_cache_cmp_arg *) malloc(_len_arg__i0__key0*sizeof(struct mfc_cache_cmp_arg));
          for(int _j0 = 0; _j0 < _len_arg__i0__key0; _j0++) {
            arg[_i0].key->mfc_mcastgrp = ((-2 * (next_i()%2)) + 1) * next_i();
        arg[_i0].key->mfc_origin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ptr0 = 100;
          const void * ptr = (const void *) malloc(_len_ptr0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_ptr0; _i0++) {
            ptr[_i0] = 0;
          }
          int benchRet = ipmr_hash_cmp(arg,ptr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_arg0; _aux++) {
          free(arg[_aux].key);
          }
          free(arg);
          free(ptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
