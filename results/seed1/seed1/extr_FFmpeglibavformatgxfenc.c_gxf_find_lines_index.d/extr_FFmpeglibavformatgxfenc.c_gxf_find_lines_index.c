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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {scalar_t__ height; int /*<<< orphan*/  index; } ;
struct TYPE_8__ {TYPE_1__* codecpar; TYPE_2__* priv_data; } ;
struct TYPE_7__ {int /*<<< orphan*/  lines_index; } ;
struct TYPE_6__ {scalar_t__ height; } ;
typedef  TYPE_2__ GXFStreamContext ;
typedef  TYPE_3__ AVStream ;

/* Variables and functions */
 TYPE_4__* gxf_lines_tab ; 

__attribute__((used)) static int gxf_find_lines_index(AVStream *st)
{
    GXFStreamContext *sc = st->priv_data;
    int i;

    for (i = 0; i < 6; ++i) {
        if (st->codecpar->height == gxf_lines_tab[i].height) {
            sc->lines_index = gxf_lines_tab[i].index;
            return 0;
        }
    }
    return -1;
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
          int _len_st0 = 1;
          struct TYPE_8__ * st = (struct TYPE_8__ *) malloc(_len_st0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
              int _len_st__i0__codecpar0 = 1;
          st[_i0].codecpar = (struct TYPE_6__ *) malloc(_len_st__i0__codecpar0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_st__i0__codecpar0; _j0++) {
            st[_i0].codecpar->height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_st__i0__priv_data0 = 1;
          st[_i0].priv_data = (struct TYPE_7__ *) malloc(_len_st__i0__priv_data0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_st__i0__priv_data0; _j0++) {
            st[_i0].priv_data->lines_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = gxf_find_lines_index(st);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_st0; _aux++) {
          free(st[_aux].codecpar);
          }
          for(int _aux = 0; _aux < _len_st0; _aux++) {
          free(st[_aux].priv_data);
          }
          free(st);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_st0 = 65025;
          struct TYPE_8__ * st = (struct TYPE_8__ *) malloc(_len_st0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
              int _len_st__i0__codecpar0 = 1;
          st[_i0].codecpar = (struct TYPE_6__ *) malloc(_len_st__i0__codecpar0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_st__i0__codecpar0; _j0++) {
            st[_i0].codecpar->height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_st__i0__priv_data0 = 1;
          st[_i0].priv_data = (struct TYPE_7__ *) malloc(_len_st__i0__priv_data0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_st__i0__priv_data0; _j0++) {
            st[_i0].priv_data->lines_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = gxf_find_lines_index(st);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_st0; _aux++) {
          free(st[_aux].codecpar);
          }
          for(int _aux = 0; _aux < _len_st0; _aux++) {
          free(st[_aux].priv_data);
          }
          free(st);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_st0 = 100;
          struct TYPE_8__ * st = (struct TYPE_8__ *) malloc(_len_st0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
              int _len_st__i0__codecpar0 = 1;
          st[_i0].codecpar = (struct TYPE_6__ *) malloc(_len_st__i0__codecpar0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_st__i0__codecpar0; _j0++) {
            st[_i0].codecpar->height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_st__i0__priv_data0 = 1;
          st[_i0].priv_data = (struct TYPE_7__ *) malloc(_len_st__i0__priv_data0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_st__i0__priv_data0; _j0++) {
            st[_i0].priv_data->lines_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = gxf_find_lines_index(st);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_st0; _aux++) {
          free(st[_aux].codecpar);
          }
          for(int _aux = 0; _aux < _len_st0; _aux++) {
          free(st[_aux].priv_data);
          }
          free(st);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
