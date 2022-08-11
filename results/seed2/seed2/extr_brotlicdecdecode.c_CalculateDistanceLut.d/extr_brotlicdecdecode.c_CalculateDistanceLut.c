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
typedef  scalar_t__ uint8_t ;
typedef  unsigned int uint32_t ;
struct TYPE_7__ {unsigned int alphabet_size_limit; } ;
struct TYPE_8__ {unsigned int* dist_offset; scalar_t__* dist_extra_bits; } ;
struct TYPE_6__ {TYPE_3__ body; } ;
struct TYPE_9__ {unsigned int distance_postfix_bits; unsigned int num_direct_distance_codes; TYPE_2__ distance_hgroup; TYPE_1__ arena; } ;
typedef  TYPE_3__ BrotliMetablockBodyArena ;
typedef  TYPE_4__ BrotliDecoderState ;

/* Variables and functions */
 unsigned int BROTLI_NUM_DISTANCE_SHORT_CODES ; 

__attribute__((used)) static void CalculateDistanceLut(BrotliDecoderState* s) {
  BrotliMetablockBodyArena* b = &s->arena.body;
  uint32_t npostfix = s->distance_postfix_bits;
  uint32_t ndirect = s->num_direct_distance_codes;
  uint32_t alphabet_size_limit = s->distance_hgroup.alphabet_size_limit;
  uint32_t postfix = 1u << npostfix;
  uint32_t j;
  uint32_t bits = 1;
  uint32_t half = 0;

  /* Skip short codes. */
  uint32_t i = BROTLI_NUM_DISTANCE_SHORT_CODES;

  /* Fill direct codes. */
  for (j = 0; j < ndirect; ++j) {
    b->dist_extra_bits[i] = 0;
    b->dist_offset[i] = j + 1;
    ++i;
  }

  /* Fill regular distance codes. */
  while (i < alphabet_size_limit) {
    uint32_t base = ndirect + ((((2 + half) << bits) - 4) << npostfix) + 1;
    /* Always fill the complete group. */
    for (j = 0; j < postfix; ++j) {
      b->dist_extra_bits[i] = (uint8_t)bits;
      b->dist_offset[i] = base + j;
      ++i;
    }
    bits = bits + half;
    half = half ^ 1;
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
          int _len_s0 = 1;
          struct TYPE_9__ * s = (struct TYPE_9__ *) malloc(_len_s0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].distance_postfix_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].num_direct_distance_codes = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].distance_hgroup.alphabet_size_limit = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__arena_body_dist_offset0 = 1;
          s[_i0].arena.body.dist_offset = (unsigned int *) malloc(_len_s__i0__arena_body_dist_offset0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_s__i0__arena_body_dist_offset0; _j0++) {
            s[_i0].arena.body.dist_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__arena_body_dist_extra_bits0 = 1;
          s[_i0].arena.body.dist_extra_bits = (long *) malloc(_len_s__i0__arena_body_dist_extra_bits0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__arena_body_dist_extra_bits0; _j0++) {
            s[_i0].arena.body.dist_extra_bits[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          CalculateDistanceLut(s);
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_9__ * s = (struct TYPE_9__ *) malloc(_len_s0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].distance_postfix_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].num_direct_distance_codes = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].distance_hgroup.alphabet_size_limit = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__arena_body_dist_offset0 = 1;
          s[_i0].arena.body.dist_offset = (unsigned int *) malloc(_len_s__i0__arena_body_dist_offset0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_s__i0__arena_body_dist_offset0; _j0++) {
            s[_i0].arena.body.dist_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__arena_body_dist_extra_bits0 = 1;
          s[_i0].arena.body.dist_extra_bits = (long *) malloc(_len_s__i0__arena_body_dist_extra_bits0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__arena_body_dist_extra_bits0; _j0++) {
            s[_i0].arena.body.dist_extra_bits[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          CalculateDistanceLut(s);
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_9__ * s = (struct TYPE_9__ *) malloc(_len_s0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].distance_postfix_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].num_direct_distance_codes = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].distance_hgroup.alphabet_size_limit = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__arena_body_dist_offset0 = 1;
          s[_i0].arena.body.dist_offset = (unsigned int *) malloc(_len_s__i0__arena_body_dist_offset0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_s__i0__arena_body_dist_offset0; _j0++) {
            s[_i0].arena.body.dist_offset[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__arena_body_dist_extra_bits0 = 1;
          s[_i0].arena.body.dist_extra_bits = (long *) malloc(_len_s__i0__arena_body_dist_extra_bits0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__arena_body_dist_extra_bits0; _j0++) {
            s[_i0].arena.body.dist_extra_bits[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          CalculateDistanceLut(s);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
