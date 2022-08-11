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
struct sbp2_target {int guid; } ;

/* Variables and functions */

__attribute__((used)) static void sbp2_get_unit_unique_id(struct sbp2_target *tgt,
				    const u32 *leaf)
{
	if ((leaf[0] & 0xffff0000) == 0x00020000)
		tgt->guid = (u64)leaf[1] << 32 | leaf[2];
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
          int _len_tgt0 = 1;
          struct sbp2_target * tgt = (struct sbp2_target *) malloc(_len_tgt0*sizeof(struct sbp2_target));
          for(int _i0 = 0; _i0 < _len_tgt0; _i0++) {
            tgt[_i0].guid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_leaf0 = 1;
          const int * leaf = (const int *) malloc(_len_leaf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_leaf0; _i0++) {
            leaf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sbp2_get_unit_unique_id(tgt,leaf);
          free(tgt);
          free(leaf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tgt0 = 65025;
          struct sbp2_target * tgt = (struct sbp2_target *) malloc(_len_tgt0*sizeof(struct sbp2_target));
          for(int _i0 = 0; _i0 < _len_tgt0; _i0++) {
            tgt[_i0].guid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_leaf0 = 65025;
          const int * leaf = (const int *) malloc(_len_leaf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_leaf0; _i0++) {
            leaf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sbp2_get_unit_unique_id(tgt,leaf);
          free(tgt);
          free(leaf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tgt0 = 100;
          struct sbp2_target * tgt = (struct sbp2_target *) malloc(_len_tgt0*sizeof(struct sbp2_target));
          for(int _i0 = 0; _i0 < _len_tgt0; _i0++) {
            tgt[_i0].guid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_leaf0 = 100;
          const int * leaf = (const int *) malloc(_len_leaf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_leaf0; _i0++) {
            leaf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sbp2_get_unit_unique_id(tgt,leaf);
          free(tgt);
          free(leaf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
