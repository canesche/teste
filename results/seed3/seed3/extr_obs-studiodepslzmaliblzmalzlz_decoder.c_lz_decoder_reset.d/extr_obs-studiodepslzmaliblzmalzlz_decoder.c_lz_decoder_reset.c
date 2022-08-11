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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {char* buf; int size; int need_reset; scalar_t__ full; scalar_t__ pos; } ;
struct TYPE_5__ {TYPE_1__ dict; } ;
typedef  TYPE_2__ lzma_coder ;

/* Variables and functions */

__attribute__((used)) static void
lz_decoder_reset(lzma_coder *coder)
{
	coder->dict.pos = 0;
	coder->dict.full = 0;
	coder->dict.buf[coder->dict.size - 1] = '\0';
	coder->dict.need_reset = false;
	return;
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
          int _len_coder0 = 1;
          struct TYPE_5__ * coder = (struct TYPE_5__ *) malloc(_len_coder0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_coder0; _i0++) {
              int _len_coder__i0__dict_buf0 = 1;
          coder[_i0].dict.buf = (char *) malloc(_len_coder__i0__dict_buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_coder__i0__dict_buf0; _j0++) {
            coder[_i0].dict.buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        coder[_i0].dict.size = ((-2 * (next_i()%2)) + 1) * next_i();
        coder[_i0].dict.need_reset = ((-2 * (next_i()%2)) + 1) * next_i();
        coder[_i0].dict.full = ((-2 * (next_i()%2)) + 1) * next_i();
        coder[_i0].dict.pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lz_decoder_reset(coder);
          free(coder);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_coder0 = 65025;
          struct TYPE_5__ * coder = (struct TYPE_5__ *) malloc(_len_coder0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_coder0; _i0++) {
              int _len_coder__i0__dict_buf0 = 1;
          coder[_i0].dict.buf = (char *) malloc(_len_coder__i0__dict_buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_coder__i0__dict_buf0; _j0++) {
            coder[_i0].dict.buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        coder[_i0].dict.size = ((-2 * (next_i()%2)) + 1) * next_i();
        coder[_i0].dict.need_reset = ((-2 * (next_i()%2)) + 1) * next_i();
        coder[_i0].dict.full = ((-2 * (next_i()%2)) + 1) * next_i();
        coder[_i0].dict.pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lz_decoder_reset(coder);
          free(coder);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_coder0 = 100;
          struct TYPE_5__ * coder = (struct TYPE_5__ *) malloc(_len_coder0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_coder0; _i0++) {
              int _len_coder__i0__dict_buf0 = 1;
          coder[_i0].dict.buf = (char *) malloc(_len_coder__i0__dict_buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_coder__i0__dict_buf0; _j0++) {
            coder[_i0].dict.buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        coder[_i0].dict.size = ((-2 * (next_i()%2)) + 1) * next_i();
        coder[_i0].dict.need_reset = ((-2 * (next_i()%2)) + 1) * next_i();
        coder[_i0].dict.full = ((-2 * (next_i()%2)) + 1) * next_i();
        coder[_i0].dict.pos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lz_decoder_reset(coder);
          free(coder);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
