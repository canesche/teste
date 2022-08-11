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

/* Type definitions */
typedef  unsigned int transition_t ;

/* Variables and functions */

__attribute__((used)) static size_t
inner_match_shift7(    const unsigned char *px, 
            size_t length,
            const unsigned char *char_to_symbol,
            const transition_t *table, 
            unsigned *state, 
            unsigned match_limit) 
{
    const unsigned char *px_start = px;
    const unsigned char *px_end = px + length;
    unsigned row = *state;
    
    for ( ; px<px_end; px++) {
        unsigned char column;
        column = char_to_symbol[*px];
        row = *(table + (row<<7) + column);
        if (row >= match_limit)
            break;
    }
    
    *state = row;
    return px - px_start;
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
          unsigned long length = 100;
          unsigned int match_limit = 100;
          int _len_px0 = 1;
          const unsigned char * px = (const unsigned char *) malloc(_len_px0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_px0; _i0++) {
            px[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_char_to_symbol0 = 1;
          const unsigned char * char_to_symbol = (const unsigned char *) malloc(_len_char_to_symbol0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_char_to_symbol0; _i0++) {
            char_to_symbol[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table0 = 1;
          const unsigned int * table = (const unsigned int *) malloc(_len_table0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 1;
          unsigned int * state = (unsigned int *) malloc(_len_state0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = inner_match_shift7(px,length,char_to_symbol,table,state,match_limit);
          printf("%lu\n", benchRet); 
          free(px);
          free(char_to_symbol);
          free(table);
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long length = 255;
          unsigned int match_limit = 255;
          int _len_px0 = 65025;
          const unsigned char * px = (const unsigned char *) malloc(_len_px0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_px0; _i0++) {
            px[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_char_to_symbol0 = 65025;
          const unsigned char * char_to_symbol = (const unsigned char *) malloc(_len_char_to_symbol0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_char_to_symbol0; _i0++) {
            char_to_symbol[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table0 = 65025;
          const unsigned int * table = (const unsigned int *) malloc(_len_table0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 65025;
          unsigned int * state = (unsigned int *) malloc(_len_state0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = inner_match_shift7(px,length,char_to_symbol,table,state,match_limit);
          printf("%lu\n", benchRet); 
          free(px);
          free(char_to_symbol);
          free(table);
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long length = 10;
          unsigned int match_limit = 10;
          int _len_px0 = 100;
          const unsigned char * px = (const unsigned char *) malloc(_len_px0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_px0; _i0++) {
            px[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_char_to_symbol0 = 100;
          const unsigned char * char_to_symbol = (const unsigned char *) malloc(_len_char_to_symbol0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_char_to_symbol0; _i0++) {
            char_to_symbol[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table0 = 100;
          const unsigned int * table = (const unsigned int *) malloc(_len_table0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 100;
          unsigned int * state = (unsigned int *) malloc(_len_state0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = inner_match_shift7(px,length,char_to_symbol,table,state,match_limit);
          printf("%lu\n", benchRet); 
          free(px);
          free(char_to_symbol);
          free(table);
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
