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
struct TYPE_3__ {unsigned char* start; int lenmax; scalar_t__ ct; scalar_t__ c; scalar_t__ len; } ;
typedef  TYPE_1__ opj_raw_t ;

/* Variables and functions */

void raw_init_dec(opj_raw_t *raw, unsigned char *bp, int len) {
	raw->start = bp;
	raw->lenmax = len;
	raw->len = 0;
	raw->c = 0;
	raw->ct = 0;
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
          int len = 100;
          int _len_raw0 = 1;
          struct TYPE_3__ * raw = (struct TYPE_3__ *) malloc(_len_raw0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_raw0; _i0++) {
              int _len_raw__i0__start0 = 1;
          raw[_i0].start = (unsigned char *) malloc(_len_raw__i0__start0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_raw__i0__start0; _j0++) {
            raw[_i0].start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        raw[_i0].lenmax = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].ct = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].c = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp0 = 1;
          unsigned char * bp = (unsigned char *) malloc(_len_bp0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          raw_init_dec(raw,bp,len);
          for(int _aux = 0; _aux < _len_raw0; _aux++) {
          free(raw[_aux].start);
          }
          free(raw);
          free(bp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int _len_raw0 = 65025;
          struct TYPE_3__ * raw = (struct TYPE_3__ *) malloc(_len_raw0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_raw0; _i0++) {
              int _len_raw__i0__start0 = 1;
          raw[_i0].start = (unsigned char *) malloc(_len_raw__i0__start0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_raw__i0__start0; _j0++) {
            raw[_i0].start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        raw[_i0].lenmax = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].ct = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].c = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp0 = 65025;
          unsigned char * bp = (unsigned char *) malloc(_len_bp0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          raw_init_dec(raw,bp,len);
          for(int _aux = 0; _aux < _len_raw0; _aux++) {
          free(raw[_aux].start);
          }
          free(raw);
          free(bp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int _len_raw0 = 100;
          struct TYPE_3__ * raw = (struct TYPE_3__ *) malloc(_len_raw0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_raw0; _i0++) {
              int _len_raw__i0__start0 = 1;
          raw[_i0].start = (unsigned char *) malloc(_len_raw__i0__start0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_raw__i0__start0; _j0++) {
            raw[_i0].start[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        raw[_i0].lenmax = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].ct = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].c = ((-2 * (next_i()%2)) + 1) * next_i();
        raw[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp0 = 100;
          unsigned char * bp = (unsigned char *) malloc(_len_bp0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          raw_init_dec(raw,bp,len);
          for(int _aux = 0; _aux < _len_raw0; _aux++) {
          free(raw[_aux].start);
          }
          free(raw);
          free(bp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
