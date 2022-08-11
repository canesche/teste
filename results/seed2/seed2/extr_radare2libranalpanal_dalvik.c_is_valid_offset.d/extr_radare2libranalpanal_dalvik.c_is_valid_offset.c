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
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ ut64 ;
struct TYPE_11__ {TYPE_3__* bin; } ;
struct TYPE_13__ {TYPE_4__ binb; } ;
struct TYPE_12__ {scalar_t__ code_from; scalar_t__ code_to; } ;
struct TYPE_10__ {TYPE_2__* cur; } ;
struct TYPE_9__ {TYPE_1__* o; } ;
struct TYPE_8__ {scalar_t__ bin_obj; } ;
typedef  TYPE_5__ RBinDexObj ;
typedef  TYPE_6__ RAnal ;

/* Variables and functions */

__attribute__((used)) static bool is_valid_offset(RAnal *anal, ut64 addr, int hasperm) {
	RBinDexObj *bin_dex = (RBinDexObj*) anal->binb.bin->cur->o->bin_obj;
	if (!bin_dex) {
		return false;
	}
	return addr >= bin_dex->code_from && addr <= bin_dex->code_to;
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
          long addr = 100;
          int hasperm = 100;
          int _len_anal0 = 1;
          struct TYPE_13__ * anal = (struct TYPE_13__ *) malloc(_len_anal0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_anal0; _i0++) {
              int _len_anal__i0__binb_bin0 = 1;
          anal[_i0].binb.bin = (struct TYPE_10__ *) malloc(_len_anal__i0__binb_bin0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_anal__i0__binb_bin0; _j0++) {
              int _len_anal__i0__binb_bin_cur0 = 1;
          anal[_i0].binb.bin->cur = (struct TYPE_9__ *) malloc(_len_anal__i0__binb_bin_cur0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_anal__i0__binb_bin_cur0; _j0++) {
              int _len_anal__i0__binb_bin_cur_o0 = 1;
          anal[_i0].binb.bin->cur->o = (struct TYPE_8__ *) malloc(_len_anal__i0__binb_bin_cur_o0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_anal__i0__binb_bin_cur_o0; _j0++) {
            anal[_i0].binb.bin->cur->o->bin_obj = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = is_valid_offset(anal,addr,hasperm);
          printf("%d\n", benchRet); 
          free(anal);
        
        break;
    }
    // big-arr
    case 1:
    {
          long addr = 255;
          int hasperm = 255;
          int _len_anal0 = 65025;
          struct TYPE_13__ * anal = (struct TYPE_13__ *) malloc(_len_anal0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_anal0; _i0++) {
              int _len_anal__i0__binb_bin0 = 1;
          anal[_i0].binb.bin = (struct TYPE_10__ *) malloc(_len_anal__i0__binb_bin0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_anal__i0__binb_bin0; _j0++) {
              int _len_anal__i0__binb_bin_cur0 = 1;
          anal[_i0].binb.bin->cur = (struct TYPE_9__ *) malloc(_len_anal__i0__binb_bin_cur0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_anal__i0__binb_bin_cur0; _j0++) {
              int _len_anal__i0__binb_bin_cur_o0 = 1;
          anal[_i0].binb.bin->cur->o = (struct TYPE_8__ *) malloc(_len_anal__i0__binb_bin_cur_o0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_anal__i0__binb_bin_cur_o0; _j0++) {
            anal[_i0].binb.bin->cur->o->bin_obj = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = is_valid_offset(anal,addr,hasperm);
          printf("%d\n", benchRet); 
          free(anal);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long addr = 10;
          int hasperm = 10;
          int _len_anal0 = 100;
          struct TYPE_13__ * anal = (struct TYPE_13__ *) malloc(_len_anal0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_anal0; _i0++) {
              int _len_anal__i0__binb_bin0 = 1;
          anal[_i0].binb.bin = (struct TYPE_10__ *) malloc(_len_anal__i0__binb_bin0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_anal__i0__binb_bin0; _j0++) {
              int _len_anal__i0__binb_bin_cur0 = 1;
          anal[_i0].binb.bin->cur = (struct TYPE_9__ *) malloc(_len_anal__i0__binb_bin_cur0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_anal__i0__binb_bin_cur0; _j0++) {
              int _len_anal__i0__binb_bin_cur_o0 = 1;
          anal[_i0].binb.bin->cur->o = (struct TYPE_8__ *) malloc(_len_anal__i0__binb_bin_cur_o0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_anal__i0__binb_bin_cur_o0; _j0++) {
            anal[_i0].binb.bin->cur->o->bin_obj = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = is_valid_offset(anal,addr,hasperm);
          printf("%d\n", benchRet); 
          free(anal);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
