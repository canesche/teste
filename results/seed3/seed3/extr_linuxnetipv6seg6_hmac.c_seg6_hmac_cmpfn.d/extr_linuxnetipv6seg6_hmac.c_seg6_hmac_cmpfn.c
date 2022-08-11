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
struct seg6_hmac_info {scalar_t__ hmackeyid; } ;
struct rhashtable_compare_arg {scalar_t__ key; } ;
typedef  scalar_t__ __u32 ;

/* Variables and functions */

__attribute__((used)) static int seg6_hmac_cmpfn(struct rhashtable_compare_arg *arg, const void *obj)
{
	const struct seg6_hmac_info *hinfo = obj;

	return (hinfo->hmackeyid != *(__u32 *)arg->key);
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
            arg[_i0].key = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_obj0 = 1;
          const void * obj = (const void *) malloc(_len_obj0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0] = 0;
          }
          int benchRet = seg6_hmac_cmpfn(arg,obj);
          printf("%d\n", benchRet); 
          free(arg);
          free(obj);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_arg0 = 65025;
          struct rhashtable_compare_arg * arg = (struct rhashtable_compare_arg *) malloc(_len_arg0*sizeof(struct rhashtable_compare_arg));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0].key = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_obj0 = 65025;
          const void * obj = (const void *) malloc(_len_obj0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0] = 0;
          }
          int benchRet = seg6_hmac_cmpfn(arg,obj);
          printf("%d\n", benchRet); 
          free(arg);
          free(obj);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_arg0 = 100;
          struct rhashtable_compare_arg * arg = (struct rhashtable_compare_arg *) malloc(_len_arg0*sizeof(struct rhashtable_compare_arg));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0].key = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_obj0 = 100;
          const void * obj = (const void *) malloc(_len_obj0*sizeof(const void));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj[_i0] = 0;
          }
          int benchRet = seg6_hmac_cmpfn(arg,obj);
          printf("%d\n", benchRet); 
          free(arg);
          free(obj);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
