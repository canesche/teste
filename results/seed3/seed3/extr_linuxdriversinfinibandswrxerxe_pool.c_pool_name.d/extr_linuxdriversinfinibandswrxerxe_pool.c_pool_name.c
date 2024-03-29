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
struct rxe_pool {size_t type; } ;
struct TYPE_2__ {char const* name; } ;

/* Variables and functions */
 TYPE_1__* rxe_type_info ; 

__attribute__((used)) static inline const char *pool_name(struct rxe_pool *pool)
{
	return rxe_type_info[pool->type].name;
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
          int _len_pool0 = 1;
          struct rxe_pool * pool = (struct rxe_pool *) malloc(_len_pool0*sizeof(struct rxe_pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = pool_name(pool);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(pool);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pool0 = 65025;
          struct rxe_pool * pool = (struct rxe_pool *) malloc(_len_pool0*sizeof(struct rxe_pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = pool_name(pool);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(pool);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pool0 = 100;
          struct rxe_pool * pool = (struct rxe_pool *) malloc(_len_pool0*sizeof(struct rxe_pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          const char * benchRet = pool_name(pool);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(pool);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
