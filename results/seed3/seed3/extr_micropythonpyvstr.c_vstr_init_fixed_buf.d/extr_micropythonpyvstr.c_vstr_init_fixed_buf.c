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
struct TYPE_3__ {size_t alloc; char* buf; int fixed_buf; scalar_t__ len; } ;
typedef  TYPE_1__ vstr_t ;

/* Variables and functions */

void vstr_init_fixed_buf(vstr_t *vstr, size_t alloc, char *buf) {
    vstr->alloc = alloc;
    vstr->len = 0;
    vstr->buf = buf;
    vstr->fixed_buf = true;
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
          unsigned long alloc = 100;
          int _len_vstr0 = 1;
          struct TYPE_3__ * vstr = (struct TYPE_3__ *) malloc(_len_vstr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_vstr0; _i0++) {
            vstr[_i0].alloc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vstr__i0__buf0 = 1;
          vstr[_i0].buf = (char *) malloc(_len_vstr__i0__buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_vstr__i0__buf0; _j0++) {
            vstr[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vstr[_i0].fixed_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        vstr[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vstr_init_fixed_buf(vstr,alloc,buf);
          for(int _aux = 0; _aux < _len_vstr0; _aux++) {
          free(vstr[_aux].buf);
          }
          free(vstr);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long alloc = 255;
          int _len_vstr0 = 65025;
          struct TYPE_3__ * vstr = (struct TYPE_3__ *) malloc(_len_vstr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_vstr0; _i0++) {
            vstr[_i0].alloc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vstr__i0__buf0 = 1;
          vstr[_i0].buf = (char *) malloc(_len_vstr__i0__buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_vstr__i0__buf0; _j0++) {
            vstr[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vstr[_i0].fixed_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        vstr[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 65025;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vstr_init_fixed_buf(vstr,alloc,buf);
          for(int _aux = 0; _aux < _len_vstr0; _aux++) {
          free(vstr[_aux].buf);
          }
          free(vstr);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long alloc = 10;
          int _len_vstr0 = 100;
          struct TYPE_3__ * vstr = (struct TYPE_3__ *) malloc(_len_vstr0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_vstr0; _i0++) {
            vstr[_i0].alloc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vstr__i0__buf0 = 1;
          vstr[_i0].buf = (char *) malloc(_len_vstr__i0__buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_vstr__i0__buf0; _j0++) {
            vstr[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vstr[_i0].fixed_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        vstr[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 100;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vstr_init_fixed_buf(vstr,alloc,buf);
          for(int _aux = 0; _aux < _len_vstr0; _aux++) {
          free(vstr[_aux].buf);
          }
          free(vstr);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
