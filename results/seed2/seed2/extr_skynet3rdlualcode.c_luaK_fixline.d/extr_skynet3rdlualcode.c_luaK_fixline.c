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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int pc; TYPE_2__* f; } ;
struct TYPE_6__ {TYPE_1__* sp; } ;
struct TYPE_5__ {int* lineinfo; } ;
typedef  TYPE_3__ FuncState ;

/* Variables and functions */

void luaK_fixline (FuncState *fs, int line) {
  fs->f->sp->lineinfo[fs->pc - 1] = line;
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
          int line = 100;
          int _len_fs0 = 1;
          struct TYPE_7__ * fs = (struct TYPE_7__ *) malloc(_len_fs0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
            fs[_i0].pc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fs__i0__f0 = 1;
          fs[_i0].f = (struct TYPE_6__ *) malloc(_len_fs__i0__f0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_fs__i0__f0; _j0++) {
              int _len_fs__i0__f_sp0 = 1;
          fs[_i0].f->sp = (struct TYPE_5__ *) malloc(_len_fs__i0__f_sp0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_fs__i0__f_sp0; _j0++) {
              int _len_fs__i0__f_sp_lineinfo0 = 1;
          fs[_i0].f->sp->lineinfo = (int *) malloc(_len_fs__i0__f_sp_lineinfo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fs__i0__f_sp_lineinfo0; _j0++) {
            fs[_i0].f->sp->lineinfo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          luaK_fixline(fs,line);
          for(int _aux = 0; _aux < _len_fs0; _aux++) {
          free(fs[_aux].f);
          }
          free(fs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int line = 255;
          int _len_fs0 = 65025;
          struct TYPE_7__ * fs = (struct TYPE_7__ *) malloc(_len_fs0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
            fs[_i0].pc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fs__i0__f0 = 1;
          fs[_i0].f = (struct TYPE_6__ *) malloc(_len_fs__i0__f0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_fs__i0__f0; _j0++) {
              int _len_fs__i0__f_sp0 = 1;
          fs[_i0].f->sp = (struct TYPE_5__ *) malloc(_len_fs__i0__f_sp0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_fs__i0__f_sp0; _j0++) {
              int _len_fs__i0__f_sp_lineinfo0 = 1;
          fs[_i0].f->sp->lineinfo = (int *) malloc(_len_fs__i0__f_sp_lineinfo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fs__i0__f_sp_lineinfo0; _j0++) {
            fs[_i0].f->sp->lineinfo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          luaK_fixline(fs,line);
          for(int _aux = 0; _aux < _len_fs0; _aux++) {
          free(fs[_aux].f);
          }
          free(fs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int line = 10;
          int _len_fs0 = 100;
          struct TYPE_7__ * fs = (struct TYPE_7__ *) malloc(_len_fs0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
            fs[_i0].pc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fs__i0__f0 = 1;
          fs[_i0].f = (struct TYPE_6__ *) malloc(_len_fs__i0__f0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_fs__i0__f0; _j0++) {
              int _len_fs__i0__f_sp0 = 1;
          fs[_i0].f->sp = (struct TYPE_5__ *) malloc(_len_fs__i0__f_sp0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_fs__i0__f_sp0; _j0++) {
              int _len_fs__i0__f_sp_lineinfo0 = 1;
          fs[_i0].f->sp->lineinfo = (int *) malloc(_len_fs__i0__f_sp_lineinfo0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fs__i0__f_sp_lineinfo0; _j0++) {
            fs[_i0].f->sp->lineinfo[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          luaK_fixline(fs,line);
          for(int _aux = 0; _aux < _len_fs0; _aux++) {
          free(fs[_aux].f);
          }
          free(fs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
