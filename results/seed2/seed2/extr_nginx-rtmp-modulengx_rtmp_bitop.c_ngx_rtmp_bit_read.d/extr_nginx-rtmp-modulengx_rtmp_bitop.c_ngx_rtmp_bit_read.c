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
typedef  int uint64_t ;
typedef  int u_char ;
typedef  int ngx_uint_t ;
struct TYPE_3__ {int* pos; int* last; int err; int offs; } ;
typedef  TYPE_1__ ngx_rtmp_bit_reader_t ;

/* Variables and functions */

uint64_t
ngx_rtmp_bit_read(ngx_rtmp_bit_reader_t *br, ngx_uint_t n)
{
    uint64_t    v;
    ngx_uint_t  d;

    v = 0;

    while (n) {

        if (br->pos >= br->last) {
            br->err = 1;
            return 0;
        }

        d = (br->offs + n > 8 ? (ngx_uint_t) (8 - br->offs) : n);

        v <<= d;
        v += (*br->pos >> (8 - br->offs - d)) & ((u_char) 0xff >> (8 - d));

        br->offs += d;
        n -= d;

        if (br->offs == 8) {
            br->pos++;
            br->offs = 0;
        }
    }

    return v;
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
          int n = 100;
          int _len_br0 = 1;
          struct TYPE_3__ * br = (struct TYPE_3__ *) malloc(_len_br0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_br0; _i0++) {
              int _len_br__i0__pos0 = 1;
          br[_i0].pos = (int *) malloc(_len_br__i0__pos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_br__i0__pos0; _j0++) {
            br[_i0].pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_br__i0__last0 = 1;
          br[_i0].last = (int *) malloc(_len_br__i0__last0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_br__i0__last0; _j0++) {
            br[_i0].last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        br[_i0].err = ((-2 * (next_i()%2)) + 1) * next_i();
        br[_i0].offs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_rtmp_bit_read(br,n);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_br0; _aux++) {
          free(br[_aux].pos);
          }
          for(int _aux = 0; _aux < _len_br0; _aux++) {
          free(br[_aux].last);
          }
          free(br);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int _len_br0 = 65025;
          struct TYPE_3__ * br = (struct TYPE_3__ *) malloc(_len_br0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_br0; _i0++) {
              int _len_br__i0__pos0 = 1;
          br[_i0].pos = (int *) malloc(_len_br__i0__pos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_br__i0__pos0; _j0++) {
            br[_i0].pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_br__i0__last0 = 1;
          br[_i0].last = (int *) malloc(_len_br__i0__last0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_br__i0__last0; _j0++) {
            br[_i0].last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        br[_i0].err = ((-2 * (next_i()%2)) + 1) * next_i();
        br[_i0].offs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_rtmp_bit_read(br,n);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_br0; _aux++) {
          free(br[_aux].pos);
          }
          for(int _aux = 0; _aux < _len_br0; _aux++) {
          free(br[_aux].last);
          }
          free(br);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int _len_br0 = 100;
          struct TYPE_3__ * br = (struct TYPE_3__ *) malloc(_len_br0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_br0; _i0++) {
              int _len_br__i0__pos0 = 1;
          br[_i0].pos = (int *) malloc(_len_br__i0__pos0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_br__i0__pos0; _j0++) {
            br[_i0].pos[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_br__i0__last0 = 1;
          br[_i0].last = (int *) malloc(_len_br__i0__last0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_br__i0__last0; _j0++) {
            br[_i0].last[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        br[_i0].err = ((-2 * (next_i()%2)) + 1) * next_i();
        br[_i0].offs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_rtmp_bit_read(br,n);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_br0; _aux++) {
          free(br[_aux].pos);
          }
          for(int _aux = 0; _aux < _len_br0; _aux++) {
          free(br[_aux].last);
          }
          free(br);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
