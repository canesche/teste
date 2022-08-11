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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct cache_uri {long long size; } ;
struct TYPE_2__ {long long default_file_size; } ;

/* Variables and functions */
 TYPE_1__ simulation_params ; 

inline long long cache_get_uri_size (struct cache_uri *U, int required) {
  if (U->size < 0) {
    if (required) {
      U->size = -2LL;
    }
    return simulation_params.default_file_size;
  }
  return U->size;
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
          int required = 100;
          int _len_U0 = 1;
          struct cache_uri * U = (struct cache_uri *) malloc(_len_U0*sizeof(struct cache_uri));
          for(int _i0 = 0; _i0 < _len_U0; _i0++) {
            U[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long long benchRet = cache_get_uri_size(U,required);
          printf("%lld\n", benchRet); 
          free(U);
        
        break;
    }
    // big-arr
    case 1:
    {
          int required = 255;
          int _len_U0 = 65025;
          struct cache_uri * U = (struct cache_uri *) malloc(_len_U0*sizeof(struct cache_uri));
          for(int _i0 = 0; _i0 < _len_U0; _i0++) {
            U[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long long benchRet = cache_get_uri_size(U,required);
          printf("%lld\n", benchRet); 
          free(U);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int required = 10;
          int _len_U0 = 100;
          struct cache_uri * U = (struct cache_uri *) malloc(_len_U0*sizeof(struct cache_uri));
          for(int _i0 = 0; _i0 < _len_U0; _i0++) {
            U[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long long benchRet = cache_get_uri_size(U,required);
          printf("%lld\n", benchRet); 
          free(U);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
