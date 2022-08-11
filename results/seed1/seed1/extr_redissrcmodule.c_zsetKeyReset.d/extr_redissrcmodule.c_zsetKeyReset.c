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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int zer; int /*<<< orphan*/ * zcurrent; int /*<<< orphan*/  ztype; } ;
typedef  TYPE_1__ RedisModuleKey ;

/* Variables and functions */
 int /*<<< orphan*/  REDISMODULE_ZSET_RANGE_NONE ; 

void zsetKeyReset(RedisModuleKey *key) {
    key->ztype = REDISMODULE_ZSET_RANGE_NONE;
    key->zcurrent = NULL;
    key->zer = 1;
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
          int _len_key0 = 1;
          struct TYPE_3__ * key = (struct TYPE_3__ *) malloc(_len_key0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0].zer = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_key__i0__zcurrent0 = 1;
          key[_i0].zcurrent = (int *) malloc(_len_key__i0__zcurrent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_key__i0__zcurrent0; _j0++) {
            key[_i0].zcurrent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        key[_i0].ztype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zsetKeyReset(key);
          for(int _aux = 0; _aux < _len_key0; _aux++) {
          free(key[_aux].zcurrent);
          }
          free(key);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_key0 = 65025;
          struct TYPE_3__ * key = (struct TYPE_3__ *) malloc(_len_key0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0].zer = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_key__i0__zcurrent0 = 1;
          key[_i0].zcurrent = (int *) malloc(_len_key__i0__zcurrent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_key__i0__zcurrent0; _j0++) {
            key[_i0].zcurrent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        key[_i0].ztype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zsetKeyReset(key);
          for(int _aux = 0; _aux < _len_key0; _aux++) {
          free(key[_aux].zcurrent);
          }
          free(key);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_key0 = 100;
          struct TYPE_3__ * key = (struct TYPE_3__ *) malloc(_len_key0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0].zer = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_key__i0__zcurrent0 = 1;
          key[_i0].zcurrent = (int *) malloc(_len_key__i0__zcurrent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_key__i0__zcurrent0; _j0++) {
            key[_i0].zcurrent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        key[_i0].ztype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zsetKeyReset(key);
          for(int _aux = 0; _aux < _len_key0; _aux++) {
          free(key[_aux].zcurrent);
          }
          free(key);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
