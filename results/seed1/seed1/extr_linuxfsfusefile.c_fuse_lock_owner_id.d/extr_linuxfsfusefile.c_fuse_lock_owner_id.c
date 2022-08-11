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
typedef  int u64 ;
typedef  int u32 ;
struct fuse_conn {int* scramble_key; } ;
typedef  scalar_t__ fl_owner_t ;

/* Variables and functions */

u64 fuse_lock_owner_id(struct fuse_conn *fc, fl_owner_t id)
{
	u32 *k = fc->scramble_key;
	u64 v = (unsigned long) id;
	u32 v0 = v;
	u32 v1 = v >> 32;
	u32 sum = 0;
	int i;

	for (i = 0; i < 32; i++) {
		v0 += ((v1 << 4 ^ v1 >> 5) + v1) ^ (sum + k[sum & 3]);
		sum += 0x9E3779B9;
		v1 += ((v0 << 4 ^ v0 >> 5) + v0) ^ (sum + k[sum>>11 & 3]);
	}

	return (u64) v0 + ((u64) v1 << 32);
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
          long id = 100;
          int _len_fc0 = 1;
          struct fuse_conn * fc = (struct fuse_conn *) malloc(_len_fc0*sizeof(struct fuse_conn));
          for(int _i0 = 0; _i0 < _len_fc0; _i0++) {
              int _len_fc__i0__scramble_key0 = 1;
          fc[_i0].scramble_key = (int *) malloc(_len_fc__i0__scramble_key0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fc__i0__scramble_key0; _j0++) {
            fc[_i0].scramble_key[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = fuse_lock_owner_id(fc,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fc0; _aux++) {
          free(fc[_aux].scramble_key);
          }
          free(fc);
        
        break;
    }
    // big-arr
    case 1:
    {
          long id = 255;
          int _len_fc0 = 65025;
          struct fuse_conn * fc = (struct fuse_conn *) malloc(_len_fc0*sizeof(struct fuse_conn));
          for(int _i0 = 0; _i0 < _len_fc0; _i0++) {
              int _len_fc__i0__scramble_key0 = 1;
          fc[_i0].scramble_key = (int *) malloc(_len_fc__i0__scramble_key0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fc__i0__scramble_key0; _j0++) {
            fc[_i0].scramble_key[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = fuse_lock_owner_id(fc,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fc0; _aux++) {
          free(fc[_aux].scramble_key);
          }
          free(fc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long id = 10;
          int _len_fc0 = 100;
          struct fuse_conn * fc = (struct fuse_conn *) malloc(_len_fc0*sizeof(struct fuse_conn));
          for(int _i0 = 0; _i0 < _len_fc0; _i0++) {
              int _len_fc__i0__scramble_key0 = 1;
          fc[_i0].scramble_key = (int *) malloc(_len_fc__i0__scramble_key0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fc__i0__scramble_key0; _j0++) {
            fc[_i0].scramble_key[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = fuse_lock_owner_id(fc,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fc0; _aux++) {
          free(fc[_aux].scramble_key);
          }
          free(fc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
