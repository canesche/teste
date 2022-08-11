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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ position; scalar_t__ word; } ;
typedef  TYPE_1__ searchy_pair_word_position_t ;
typedef  scalar_t__ hash_t ;

/* Variables and functions */

inline int check_ (searchy_pair_word_position_t *begin, searchy_pair_word_position_t *end, hash_t *needle_begin, hash_t *needle_end) {
  while (begin != end && needle_begin != needle_end) {
    int ok = 0;
    searchy_pair_word_position_t *cur = begin;
    do {
      if (cur->word == needle_begin[0]) {
        ok = 1;
      }
      cur++;
    } while (cur != end && cur->position == begin->position);
    if (!ok) {
      return 0;
    }
    begin = cur;
    needle_begin++;
  }
  return needle_end == needle_begin;
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
          int _len_begin0 = 1;
          struct TYPE_4__ * begin = (struct TYPE_4__ *) malloc(_len_begin0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_begin0; _i0++) {
            begin[_i0].position = ((-2 * (next_i()%2)) + 1) * next_i();
        begin[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 1;
          struct TYPE_4__ * end = (struct TYPE_4__ *) malloc(_len_end0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0].position = ((-2 * (next_i()%2)) + 1) * next_i();
        end[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_needle_begin0 = 1;
          long * needle_begin = (long *) malloc(_len_needle_begin0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_needle_begin0; _i0++) {
            needle_begin[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_needle_end0 = 1;
          long * needle_end = (long *) malloc(_len_needle_end0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_needle_end0; _i0++) {
            needle_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_(begin,end,needle_begin,needle_end);
          printf("%d\n", benchRet); 
          free(begin);
          free(end);
          free(needle_begin);
          free(needle_end);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_begin0 = 65025;
          struct TYPE_4__ * begin = (struct TYPE_4__ *) malloc(_len_begin0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_begin0; _i0++) {
            begin[_i0].position = ((-2 * (next_i()%2)) + 1) * next_i();
        begin[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 65025;
          struct TYPE_4__ * end = (struct TYPE_4__ *) malloc(_len_end0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0].position = ((-2 * (next_i()%2)) + 1) * next_i();
        end[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_needle_begin0 = 65025;
          long * needle_begin = (long *) malloc(_len_needle_begin0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_needle_begin0; _i0++) {
            needle_begin[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_needle_end0 = 65025;
          long * needle_end = (long *) malloc(_len_needle_end0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_needle_end0; _i0++) {
            needle_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_(begin,end,needle_begin,needle_end);
          printf("%d\n", benchRet); 
          free(begin);
          free(end);
          free(needle_begin);
          free(needle_end);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_begin0 = 100;
          struct TYPE_4__ * begin = (struct TYPE_4__ *) malloc(_len_begin0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_begin0; _i0++) {
            begin[_i0].position = ((-2 * (next_i()%2)) + 1) * next_i();
        begin[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_end0 = 100;
          struct TYPE_4__ * end = (struct TYPE_4__ *) malloc(_len_end0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_end0; _i0++) {
            end[_i0].position = ((-2 * (next_i()%2)) + 1) * next_i();
        end[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_needle_begin0 = 100;
          long * needle_begin = (long *) malloc(_len_needle_begin0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_needle_begin0; _i0++) {
            needle_begin[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_needle_end0 = 100;
          long * needle_end = (long *) malloc(_len_needle_end0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_needle_end0; _i0++) {
            needle_end[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_(begin,end,needle_begin,needle_end);
          printf("%d\n", benchRet); 
          free(begin);
          free(end);
          free(needle_begin);
          free(needle_end);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
