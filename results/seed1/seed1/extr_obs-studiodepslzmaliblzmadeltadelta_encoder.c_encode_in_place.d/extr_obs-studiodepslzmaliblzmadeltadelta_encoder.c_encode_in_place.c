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
typedef  scalar_t__ uint8_t ;
struct TYPE_3__ {size_t distance; int pos; scalar_t__* history; } ;
typedef  TYPE_1__ lzma_coder ;

/* Variables and functions */

__attribute__((used)) static void
encode_in_place(lzma_coder *coder, uint8_t *buffer, size_t size)
{
	const size_t distance = coder->distance;

	for (size_t i = 0; i < size; ++i) {
		const uint8_t tmp = coder->history[
				(distance + coder->pos) & 0xFF];
		coder->history[coder->pos-- & 0xFF] = buffer[i];
		buffer[i] -= tmp;
	}
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
          unsigned long size = 100;
          int _len_coder0 = 1;
          struct TYPE_3__ * coder = (struct TYPE_3__ *) malloc(_len_coder0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_coder0; _i0++) {
            coder[_i0].distance = ((-2 * (next_i()%2)) + 1) * next_i();
        coder[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_coder__i0__history0 = 1;
          coder[_i0].history = (long *) malloc(_len_coder__i0__history0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_coder__i0__history0; _j0++) {
            coder[_i0].history[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buffer0 = 1;
          long * buffer = (long *) malloc(_len_buffer0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          encode_in_place(coder,buffer,size);
          for(int _aux = 0; _aux < _len_coder0; _aux++) {
          free(coder[_aux].history);
          }
          free(coder);
          free(buffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long size = 255;
          int _len_coder0 = 65025;
          struct TYPE_3__ * coder = (struct TYPE_3__ *) malloc(_len_coder0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_coder0; _i0++) {
            coder[_i0].distance = ((-2 * (next_i()%2)) + 1) * next_i();
        coder[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_coder__i0__history0 = 1;
          coder[_i0].history = (long *) malloc(_len_coder__i0__history0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_coder__i0__history0; _j0++) {
            coder[_i0].history[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buffer0 = 65025;
          long * buffer = (long *) malloc(_len_buffer0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          encode_in_place(coder,buffer,size);
          for(int _aux = 0; _aux < _len_coder0; _aux++) {
          free(coder[_aux].history);
          }
          free(coder);
          free(buffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long size = 10;
          int _len_coder0 = 100;
          struct TYPE_3__ * coder = (struct TYPE_3__ *) malloc(_len_coder0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_coder0; _i0++) {
            coder[_i0].distance = ((-2 * (next_i()%2)) + 1) * next_i();
        coder[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_coder__i0__history0 = 1;
          coder[_i0].history = (long *) malloc(_len_coder__i0__history0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_coder__i0__history0; _j0++) {
            coder[_i0].history[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_buffer0 = 100;
          long * buffer = (long *) malloc(_len_buffer0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          encode_in_place(coder,buffer,size);
          for(int _aux = 0; _aux < _len_coder0; _aux++) {
          free(coder[_aux].history);
          }
          free(coder);
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
