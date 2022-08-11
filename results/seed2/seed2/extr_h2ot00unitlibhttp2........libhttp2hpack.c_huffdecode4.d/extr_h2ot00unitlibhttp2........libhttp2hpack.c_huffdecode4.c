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
typedef  size_t uint8_t ;
struct TYPE_3__ {int flags; size_t state; int /*<<< orphan*/  sym; } ;
typedef  TYPE_1__ nghttp2_huff_decode ;

/* Variables and functions */
 int NGHTTP2_HUFF_ACCEPTED ; 
 int NGHTTP2_HUFF_FAIL ; 
 size_t NGHTTP2_HUFF_INVALID_CHARS ; 
 int NGHTTP2_HUFF_SYM ; 
 TYPE_1__** huff_decode_table ; 

__attribute__((used)) static char *huffdecode4(char *dst, uint8_t in, uint8_t *state, int *maybe_eos, uint8_t *seen_char_types)
{
    const nghttp2_huff_decode *entry = huff_decode_table[*state] + in;

    if ((entry->flags & NGHTTP2_HUFF_FAIL) != 0)
        return NULL;
    if ((entry->flags & NGHTTP2_HUFF_SYM) != 0) {
        *dst++ = entry->sym;
        *seen_char_types |= (entry->flags & NGHTTP2_HUFF_INVALID_CHARS);
    }
    *state = entry->state;
    *maybe_eos = (entry->flags & NGHTTP2_HUFF_ACCEPTED) != 0;

    return dst;
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
          unsigned long in = 100;
          int _len_dst0 = 1;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 1;
          unsigned long * state = (unsigned long *) malloc(_len_state0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_maybe_eos0 = 1;
          int * maybe_eos = (int *) malloc(_len_maybe_eos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_maybe_eos0; _i0++) {
            maybe_eos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_seen_char_types0 = 1;
          unsigned long * seen_char_types = (unsigned long *) malloc(_len_seen_char_types0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_seen_char_types0; _i0++) {
            seen_char_types[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = huffdecode4(dst,in,state,maybe_eos,seen_char_types);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(dst);
          free(state);
          free(maybe_eos);
          free(seen_char_types);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long in = 255;
          int _len_dst0 = 65025;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 65025;
          unsigned long * state = (unsigned long *) malloc(_len_state0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_maybe_eos0 = 65025;
          int * maybe_eos = (int *) malloc(_len_maybe_eos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_maybe_eos0; _i0++) {
            maybe_eos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_seen_char_types0 = 65025;
          unsigned long * seen_char_types = (unsigned long *) malloc(_len_seen_char_types0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_seen_char_types0; _i0++) {
            seen_char_types[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = huffdecode4(dst,in,state,maybe_eos,seen_char_types);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(dst);
          free(state);
          free(maybe_eos);
          free(seen_char_types);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long in = 10;
          int _len_dst0 = 100;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 100;
          unsigned long * state = (unsigned long *) malloc(_len_state0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_maybe_eos0 = 100;
          int * maybe_eos = (int *) malloc(_len_maybe_eos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_maybe_eos0; _i0++) {
            maybe_eos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_seen_char_types0 = 100;
          unsigned long * seen_char_types = (unsigned long *) malloc(_len_seen_char_types0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_seen_char_types0; _i0++) {
            seen_char_types[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = huffdecode4(dst,in,state,maybe_eos,seen_char_types);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(dst);
          free(state);
          free(maybe_eos);
          free(seen_char_types);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
