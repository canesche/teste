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
typedef  scalar_t__ uint8_t ;
typedef  int uint32_t ;
struct TYPE_4__ {scalar_t__* u8; } ;
struct TYPE_5__ {int last_byte_; size_t last_byte_bits_; int available_out_; scalar_t__* next_out_; TYPE_1__ tiny_buf_; } ;
typedef  TYPE_2__ BrotliEncoderState ;

/* Variables and functions */

__attribute__((used)) static void InjectBytePaddingBlock(BrotliEncoderState* s) {
  uint32_t seal = s->last_byte_;
  size_t seal_bits = s->last_byte_bits_;
  uint8_t* destination;
  s->last_byte_ = 0;
  s->last_byte_bits_ = 0;
  /* is_last = 0, data_nibbles = 11, reserved = 0, meta_nibbles = 00 */
  seal |= 0x6u << seal_bits;
  seal_bits += 6;
  /* If we have already created storage, then append to it.
     Storage is valid until next block is being compressed. */
  if (s->next_out_) {
    destination = s->next_out_ + s->available_out_;
  } else {
    destination = s->tiny_buf_.u8;
    s->next_out_ = destination;
  }
  destination[0] = (uint8_t)seal;
  if (seal_bits > 8) destination[1] = (uint8_t)(seal >> 8);
  s->available_out_ += (seal_bits + 7) >> 3;
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
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].last_byte_ = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].last_byte_bits_ = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].available_out_ = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__next_out_0 = 1;
          s[_i0].next_out_ = (long *) malloc(_len_s__i0__next_out_0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__next_out_0; _j0++) {
            s[_i0].next_out_[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__tiny_buf__u80 = 1;
          s[_i0].tiny_buf_.u8 = (long *) malloc(_len_s__i0__tiny_buf__u80*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__tiny_buf__u80; _j0++) {
            s[_i0].tiny_buf_.u8[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          InjectBytePaddingBlock(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].next_out_);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].last_byte_ = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].last_byte_bits_ = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].available_out_ = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__next_out_0 = 1;
          s[_i0].next_out_ = (long *) malloc(_len_s__i0__next_out_0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__next_out_0; _j0++) {
            s[_i0].next_out_[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__tiny_buf__u80 = 1;
          s[_i0].tiny_buf_.u8 = (long *) malloc(_len_s__i0__tiny_buf__u80*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__tiny_buf__u80; _j0++) {
            s[_i0].tiny_buf_.u8[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          InjectBytePaddingBlock(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].next_out_);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].last_byte_ = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].last_byte_bits_ = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].available_out_ = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__next_out_0 = 1;
          s[_i0].next_out_ = (long *) malloc(_len_s__i0__next_out_0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__next_out_0; _j0++) {
            s[_i0].next_out_[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__tiny_buf__u80 = 1;
          s[_i0].tiny_buf_.u8 = (long *) malloc(_len_s__i0__tiny_buf__u80*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__tiny_buf__u80; _j0++) {
            s[_i0].tiny_buf_.u8[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          InjectBytePaddingBlock(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].next_out_);
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
