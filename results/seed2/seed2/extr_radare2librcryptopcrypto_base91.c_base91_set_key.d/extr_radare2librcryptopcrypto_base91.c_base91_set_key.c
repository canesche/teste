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
typedef  int /*<<< orphan*/  ut8 ;
struct TYPE_3__ {int dir; } ;
typedef  TYPE_1__ RCrypto ;

/* Variables and functions */

__attribute__((used)) static bool base91_set_key(RCrypto *cry, const ut8 *key, int keylen, int mode, int direction) {
	cry->dir = direction;
	return true;
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
          int keylen = 100;
          int mode = 100;
          int direction = 100;
          int _len_cry0 = 1;
          struct TYPE_3__ * cry = (struct TYPE_3__ *) malloc(_len_cry0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cry0; _i0++) {
            cry[_i0].dir = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 1;
          const int * key = (const int *) malloc(_len_key0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = base91_set_key(cry,key,keylen,mode,direction);
          printf("%d\n", benchRet); 
          free(cry);
          free(key);
        
        break;
    }
    // big-arr
    case 1:
    {
          int keylen = 255;
          int mode = 255;
          int direction = 255;
          int _len_cry0 = 65025;
          struct TYPE_3__ * cry = (struct TYPE_3__ *) malloc(_len_cry0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cry0; _i0++) {
            cry[_i0].dir = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 65025;
          const int * key = (const int *) malloc(_len_key0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = base91_set_key(cry,key,keylen,mode,direction);
          printf("%d\n", benchRet); 
          free(cry);
          free(key);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int keylen = 10;
          int mode = 10;
          int direction = 10;
          int _len_cry0 = 100;
          struct TYPE_3__ * cry = (struct TYPE_3__ *) malloc(_len_cry0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_cry0; _i0++) {
            cry[_i0].dir = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_key0 = 100;
          const int * key = (const int *) malloc(_len_key0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = base91_set_key(cry,key,keylen,mode,direction);
          printf("%d\n", benchRet); 
          free(cry);
          free(key);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
