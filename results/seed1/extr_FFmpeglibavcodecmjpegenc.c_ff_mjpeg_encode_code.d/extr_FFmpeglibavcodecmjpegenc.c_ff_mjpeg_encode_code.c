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
typedef  int /*<<< orphan*/  uint8_t ;
struct TYPE_5__ {int /*<<< orphan*/  huff_ncode; TYPE_1__* huff_buffer; } ;
struct TYPE_4__ {int code; int /*<<< orphan*/  table_id; } ;
typedef  TYPE_1__ MJpegHuffmanCode ;
typedef  TYPE_2__ MJpegContext ;

/* Variables and functions */

__attribute__((used)) static inline void ff_mjpeg_encode_code(MJpegContext *s, uint8_t table_id, int code)
{
    MJpegHuffmanCode *c = &s->huff_buffer[s->huff_ncode++];
    c->table_id = table_id;
    c->code = code;
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
          int table_id = 100;
          int code = 100;
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].huff_ncode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__huff_buffer0 = 1;
          s[_i0].huff_buffer = (struct TYPE_4__ *) malloc(_len_s__i0__huff_buffer0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__huff_buffer0; _j0++) {
            s[_i0].huff_buffer->code = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].huff_buffer->table_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ff_mjpeg_encode_code(s,table_id,code);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].huff_buffer);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int table_id = 255;
          int code = 255;
          int _len_s0 = 65025;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].huff_ncode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__huff_buffer0 = 1;
          s[_i0].huff_buffer = (struct TYPE_4__ *) malloc(_len_s__i0__huff_buffer0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__huff_buffer0; _j0++) {
            s[_i0].huff_buffer->code = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].huff_buffer->table_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ff_mjpeg_encode_code(s,table_id,code);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].huff_buffer);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int table_id = 10;
          int code = 10;
          int _len_s0 = 100;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].huff_ncode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__huff_buffer0 = 1;
          s[_i0].huff_buffer = (struct TYPE_4__ *) malloc(_len_s__i0__huff_buffer0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__huff_buffer0; _j0++) {
            s[_i0].huff_buffer->code = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].huff_buffer->table_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ff_mjpeg_encode_code(s,table_id,code);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].huff_buffer);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
